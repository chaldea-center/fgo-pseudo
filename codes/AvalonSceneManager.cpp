void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BDBB0D & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    byte_4BDBB0D = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Stack_T__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDBB0C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
    sub_1C21E38(&System_Collections_Generic_Stack_SceneTemp__TypeInfo);
    byte_4BDBB0C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
  this->fields.dicRootComponent = (struct System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dicRootComponent, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Stack_T__o *)sub_1C22084(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v10,
    (const MethodInfo_38A5C50 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scenestack, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.m_listUnloadScenes,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_2F995DC *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct SceneRootComponent_o *targetRoot; // x24
  Il2CppClass *_0_T; // x23
  UnityEngine_Component_o *v13; // x0
  SceneRootComponent_o *v14; // x21
  Il2CppType *_1_T; // x22
  System_Type_o *TypeFromHandle; // x22
  System_Type_o *v17; // x0
  __int64 methodPtr_low; // x10
  __int64 v19; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x19
  System_String_o *SceneName; // x20
  System_String_o *v22; // x19
  AvalonSceneManager_o *v23; // x0
  const MethodInfo_2F99834 *v24; // x1
  System_RuntimeTypeHandle_o v25; // 0:w0.4
  System_RuntimeTypeHandle_o v26; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&BattleRootComponent_var);
    sub_1C21E38(&BattleRootComponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1C73D14(v10);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v13 = (UnityEngine_Component_o *)sub_1C21F74(targetRoot, _0_T);
      if ( !v13 )
      {
        sub_1C22354(targetRoot);
        AvalonSceneManager__UnloadScene_object_(v23, v24);
        return;
      }
      v14 = (SceneRootComponent_o *)v13;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v25.fields.value = (int)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v25, 0LL);
        v26.fields.value = (int)BattleRootComponent_var;
        v17 = System_Type__GetTypeFromHandle(v26, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v17, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
            goto LABEL_26;
          if ( (BattleRootComponent_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleRootComponent_TypeInfo )
            goto LABEL_26;
          v19 = *(_QWORD *)&v14[1].fields.m_CachedPtr;
          if ( !v19 )
            goto LABEL_26;
          gameObject = *(UnityEngine_GameObject_o **)(v19 + 512);
          if ( !gameObject )
            goto LABEL_26;
          BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0LL);
        }
        if ( !forceUnload )
          return;
        dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
        SceneName = SceneRootComponent__getSceneName(v14, 0LL);
        if ( !SceneList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)SceneList__getSceneType(SceneName, 0LL);
        if ( dicRootComponent )
        {
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            dicRootComponent,
            (int32_t)gameObject,
            0LL,
            (const MethodInfo_32E6264 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          v22 = SceneRootComponent__getSceneName(v14, 0LL);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70921760(v22, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_1C22094(gameObject, v9);
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
  if ( (byte_4BDBB0B & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4BDBB0B = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1C22094(this, method);
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
  if ( (byte_4BDBAF7 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4BDBAF7 = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1C22094(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_4BDBAFA & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4BDBAFA = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1C22094(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_2F99A70 *method)
{
  long double v3; // q0
  const MethodInfo_2F99A70_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__46_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v9; // x0
  const MethodInfo_2F99A70_RGCTXs *v10; // x8
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C73D70(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__46_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__46_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__46_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__46_T = sub_1C73D14(v3);
  v9 = (AvalonSceneManager__UnloadSceneAsync_d__46_T__o *)sub_1C22084(_0_AvalonSceneManager__UnloadSceneAsync_d__46_T);
  v10 = method->rgctx_data;
  v11 = v9;
  AvalonSceneManager__UnloadSceneAsync_d__46_object____ctor(
    v9,
    0,
    (const MethodInfo_32C70D8 *)v10->_1_AvalonSceneManager__UnloadSceneAsync_d__46_T___ctor);
  if ( !v11 )
    sub_1C22094(v12, v13);
  v11->fields.__4__this = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.__4__this, (int64_t)this, v14, v15, v16, v17, v18, v19);
  v11->fields.callback = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.callback, (int64_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v11;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_2F99834 *method)
{
  int32_t i; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x22
  long double inited; // q0
  Il2CppClass *_0_T; // x1
  __int64 v11; // x23
  long double v12; // q0
  Il2CppClass *v13; // x22
  UnityEngine_Object_o *v14; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x22
  int32_t *v16; // x0
  System_String_o *name; // x23
  int32_t *v18; // x0
  System_String_o *v19; // x22
  AvalonSceneManager_o *v20; // x0
  System_Action_o *v21; // x1
  const MethodInfo_2F99A70 *v22; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
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
      sub_1C22094(RootGameObjects, v7);
    if ( !RootGameObjects->max_length )
      sub_1C2209C(RootGameObjects, v7);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C73D14(inited);
    v11 = sub_1C21F74(Component_object, _0_T);
    v13 = method->rgctx_data->_0_T;
    if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
      v13 = (Il2CppClass *)sub_1C73D14(v12);
    if ( v11 )
    {
      v14 = (UnityEngine_Object_o *)sub_1C21F74(v11, v13);
      if ( !v14 )
      {
        sub_1C22354(v11);
        AvalonSceneManager__UnloadSceneAsync_object_(v20, v21, v22);
        return;
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v14, 0LL) )
    {
      dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
      v16 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v16, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      RootGameObjects = (UnityEngine_GameObject_array *)SceneList__getSceneType(name, 0LL);
      if ( !dicRootComponent )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        dicRootComponent,
        (int32_t)RootGameObjects,
        0LL,
        (const MethodInfo_32E6264 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
      v18 = &m_Handle;
      v19 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v18, 0LL);
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70921760(v19, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDBB08 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager__changeNextSceneCoroutine_d__40_TypeInfo);
    byte_4BDBB08 = 1;
  }
  v7 = sub_1C22084(AvalonSceneManager__changeNextSceneCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)scenename, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changePrevSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDBB07 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager__changePrevSceneCoroutine_d__39_TypeInfo);
    byte_4BDBB07 = 1;
  }
  v9 = fadeTimeSkip;
  v10 = sub_1C22084(AvalonSceneManager__changePrevSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 44) = changeType;
  *(_QWORD *)(v10 + 48) = scenename;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)scenename, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
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

  if ( (byte_4BDBB03 & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    byte_4BDBB03 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39528628(this, 2, SceneName, fade, data, 0, v10);
}


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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDBB06 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager__changeSceneCoroutine_d__38_TypeInfo);
    byte_4BDBB06 = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1C22084(AvalonSceneManager__changeSceneCoroutine_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 40), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)scenename, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 56), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


bool __fastcall AvalonSceneManager__changeScene_39528628(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v23; // x23
  int32_t SceneType; // w23
  int32_t v25; // w0
  const MethodInfo *v26; // x5
  TerminalSceneComponent_c *v27; // x0
  TerminalSceneComponent_c *v28; // x0
  System_Collections_IEnumerator_o *v29; // x0

  if ( (byte_4BDBB04 & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDBB04 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v15);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sendData, (int64_t)data, v16, v17, v18, v19, v20, v21);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v23 = prevscenetemp->fields.sceneName;
  else
    v23 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v23, 0LL);
  v25 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v25 == 34 )
    {
      v27 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v27 = TerminalSceneComponent_TypeInfo;
      }
      v27->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v25 == 34 )
  {
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    v28->static_fields->isSummonToTerminalTransition = 1;
  }
  v29 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_39529548(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v23; // x23
  int32_t SceneType; // w23
  int32_t v25; // w0
  const MethodInfo *v26; // x5
  TerminalSceneComponent_c *v27; // x0
  TerminalSceneComponent_c *v28; // x0
  System_Collections_IEnumerator_o *v29; // x0

  if ( (byte_4BDBB05 & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDBB05 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v15);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sendData, (int64_t)data, v16, v17, v18, v19, v20, v21);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v23 = prevscenetemp->fields.sceneName;
  else
    v23 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v23, 0LL);
  v25 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v25 == 34 )
    {
      v27 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v27 = TerminalSceneComponent_TypeInfo;
      }
      v27->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v25 == 34 )
  {
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    v28->static_fields->isSummonToTerminalTransition = 1;
  }
  v29 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_39530300(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_39528628(this, 2, scenename, fade, data, 0, v5);
}


bool __fastcall AvalonSceneManager__checkLoadedScene(
        AvalonSceneManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x19
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDBAFD & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4BDBAFD = 1;
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

  if ( (byte_4BDBAFC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_4BDBAFC = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1C22094(0LL, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_38A61D4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v6 )
    LOBYTE(v6) = LODWORD(v6[1].monitor) == type;
  return (char)v6;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDBAF8 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager__checkUnloadScenes_d__17_TypeInfo);
    byte_4BDBAF8 = 1;
  }
  v3 = sub_1C22084(AvalonSceneManager__checkUnloadScenes_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  int32_t v18; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x21
  int32_t *v21; // x0
  System_String_o *v22; // x21
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  int64_t v34; // x1
  Il2CppClass **v35; // x0
  System_Collections_IEnumerator_o *v36; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDBAF9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
    byte_4BDBAF9 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.prevscenetemp, 0LL, v2, v3, v4, v5, v6, v7);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_38A5E24 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetRoot, 0LL, v11, v12, v13, v14, v15, v16);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.dicRootComponent;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)scenestack,
    (const MethodInfo_32E6400 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v18 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v18 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v18, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      scenestack = (System_Collections_Generic_Stack_T__o *)SceneList__getSceneName(0, 0LL);
      if ( !name )
        break;
      if ( !System_String__Contains(name, (System_String_o *)scenestack, 0LL) )
      {
        v21 = &m_Handle;
        v22 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v21, 0LL);
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70921760(v22, 0LL);
        m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
        v24 = &m_Handle;
        scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                                (UnityEngine_SceneManagement_Scene_o)v24,
                                                                0LL);
        if ( !m_listUnloadScenes )
          break;
        items = m_listUnloadScenes->fields._items;
        v32 = Method_System_Collections_Generic_List_string__Add__;
        ++m_listUnloadScenes->fields._version;
        if ( !items )
          break;
        size = m_listUnloadScenes->fields._size;
        v34 = (int64_t)scenestack;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            m_listUnloadScenes,
            (Il2CppObject *)scenestack,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          m_listUnloadScenes->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v34;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), v34, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( --v18 < 0 )
        goto LABEL_22;
    }
LABEL_23:
    sub_1C22094(scenestack, v9);
  }
LABEL_22:
  v36 = AvalonSceneManager__checkUnloadScenes(this, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v36, 0LL);
}


void __fastcall AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_sendData; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *sendData; // t1
  __int64 v12; // x0
  __int64 v13; // x1

  sendData = this->fields.sendData;
  p_sendData = (PartyOrganizationUtility_o *)&this->fields.sendData;
  v9 = sendData;
  p_sendData->klass = 0LL;
  sub_1C21DDC(p_sendData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !comp )
    sub_1C22094(v12, v13);
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
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *result; // x0

  if ( (byte_4BDBAFB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_4BDBAFB = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1C22094(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_38A61D4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  Il2CppObject *Component_object; // x21
  int32_t *v6; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v8; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x20
  unsigned int v11; // w22
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDBAF6 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4BDBAF6 = 1;
  }
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenenName, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  Component_object = 0LL;
  if ( UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) )
  {
    v6 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)v6,
                        0LL);
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
          sub_1C2209C(RootGameObjects, v8);
        RootGameObjects = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return 0LL;
      }
LABEL_19:
      sub_1C22094(RootGameObjects, v8);
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

  return AvalonSceneManager__popScene_39529072(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_39529072(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_39529072(
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

  if ( (byte_4BDBAFF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4BDBAFF = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v10 = *((_DWORD *)scenestack + 6);
  if ( v10 < 1 )
    return v10 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_38A6218 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1C22094(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v12 = 5;
  else
    v12 = 4;
  AvalonSceneManager__changeScene_39528628(this, v12, *((System_String_o **)scenestack + 2), fade, data, 0, v11);
  return v10 > 0;
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
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v15; // x6
  const MethodInfo *v17; // x6

  if ( (byte_4BDBAFE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    byte_4BDBAFE = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
  prevscenetemp = 0LL;
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
        (const MethodInfo_38A6278 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_39528628(this, 3, SceneName, fade, data, 0, v15) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_38A6218 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_39528628(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v17);
      return 0;
    }
LABEL_17:
    sub_1C22094(scenestack, v11);
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

  if ( (byte_4BDBB0A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBB0A = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1C22094(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BDBB09 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager__setupUI_d__41_TypeInfo);
    byte_4BDBB09 = 1;
  }
  v2 = sub_1C22084(AvalonSceneManager__setupUI_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
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

  if ( (byte_4BDBB00 & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    byte_4BDBB00 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39528628(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_4BDBB02 & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    byte_4BDBB02 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39528628(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_39529400(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4BDBB01 & 1) == 0 )
  {
    sub_1C21E38(&SceneList_TypeInfo);
    byte_4BDBB01 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39529548(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_39530276(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_39528628(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        int32_t 1__state,
        const MethodInfo_32C70D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32C7104 *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct AvalonSceneManager_o *_4__this; // x25
  int32_t v7; // w21
  int32_t *p_m_Handle; // x0
  void *RootGameObjects; // x0
  Il2CppObject *Component_object; // x22
  __int64 _1_T; // x1
  __int64 v12; // x23
  __int64 v13; // x22
  UnityEngine_Object_o *v14; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x20
  int32_t *v16; // x0
  System_String_o *name; // x21
  int32_t *v18; // x0
  System_String_o *v19; // x20
  struct UnityEngine_AsyncOperation_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject **p__2__current; // x19
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v34; // x0
  const MethodInfo_32C73C0 *v35; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BE268A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4BE268A = 1;
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
    v7 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
    do
    {
      if ( (v7 & 0x80000000) != 0 )
        goto LABEL_34;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v7, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                          (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                          0LL);
      if ( !RootGameObjects )
        goto LABEL_37;
      if ( !*((_DWORD *)RootGameObjects + 6) )
        sub_1C2209C(RootGameObjects, method);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *((UnityEngine_GameObject_o **)RootGameObjects + 4),
                           (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _1_T = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
        _1_T = sub_1C73D14();
      v12 = sub_1C21F74(Component_object, _1_T);
      v13 = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C73D14();
      if ( v12 )
      {
        v14 = (UnityEngine_Object_o *)sub_1C21F74(v12, v13);
        if ( !v14 )
        {
          sub_1C22354(v12);
          return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                    v34,
                                    v35);
        }
      }
      else
      {
        v14 = 0LL;
      }
      RootGameObjects = (void *)UnityEngine_Object__op_Implicit(v14, 0LL);
      --v7;
    }
    while ( ((unsigned __int8)RootGameObjects & 1) == 0 );
    if ( !_4__this )
      goto LABEL_37;
    dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
    v16 = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v16, 0LL);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    RootGameObjects = (void *)SceneList__getSceneType(name, 0LL);
    if ( !dicRootComponent )
      goto LABEL_37;
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
      dicRootComponent,
      (int32_t)RootGameObjects,
      0LL,
      (const MethodInfo_32E6264 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    v18 = &m_Handle;
    v19 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v18, 0LL);
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    v20 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70921760(v19, 0LL);
    this->fields._asyncOp_5__2 = v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._asyncOp_5__2, (int64_t)v20, v21, v22, v23, v24, v25, v26);
LABEL_32:
    RootGameObjects = this->fields._asyncOp_5__2;
    if ( !RootGameObjects )
LABEL_37:
      sub_1C22094(RootGameObjects, method);
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
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v27, v28, v29, v30, v31, v32);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32C73C0 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32C73C8 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C22084(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1C21F60(v4, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32C73FC *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32C7100 *method)
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v8; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  UnityEngine_Object_o *targetRoot; // x22
  bool v11; // w22
  bool v12; // w0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_IEnumerator_o *v22; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool v30; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v35; // x2
  SceneRootComponent_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_Object_o *v43; // x22
  System_String_o *v44; // x21
  PartyOrganizationUtility_o *v45; // x19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  SceneRootComponent_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  UnityEngine_Object_o *v59; // x22
  System_String_o *v60; // x22
  int32_t *v61; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v63; // x22
  unsigned int v64; // w27
  UnityEngine_GameObject_o *v65; // x23
  int v66; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v67; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c **v69; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v71; // x0
  int v72; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v73; // x23
  unsigned int v74; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c **v75; // x8
  UnityEngine_Component_o *v76; // x24
  UnityEngine_Object_c *v77; // x0
  UnityEngine_Object_o *v78; // x22
  UnityEngine_Object_o *v79; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c *klass; // x8
  void (*v81)(void); // x9
  SceneRootComponent_o *v82; // x22
  SceneTemp_o *v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o **p_targetRoot; // x21
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v98; // x22
  System_String_o *v99; // x23
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  Il2CppObject *v106; // x19
  PartyOrganizationUtility_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v110; // x22
  UnityEngine_Object_o *v111; // x21
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x21
  System_String_o *v119; // x22
  System_String_o *v120; // x20
  PartyOrganizationUtility_o *v121; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4BDBB0E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponents_Component___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C21E38(&SceneTemp_TypeInfo);
    sub_1C21E38(&StringLiteral_3293/*"BattleScriptScene"*/);
    sub_1C21E38(&StringLiteral_3291/*"BattleScene"*/);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBB0E = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields._newTargetRoot_5__2 = 0LL;
      v8->fields.__1__state = -1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_112;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v12 = System_String__op_Equality(v8->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v11 )
        goto LABEL_11;
      if ( v12 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_112;
      v12 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v8->fields.scenename, 0LL);
LABEL_11:
      if ( v12 )
      {
LABEL_12:
        v19 = (int64_t)_4__this->fields.targetRoot;
        v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v19;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2, v19, v13, v14, v15, v16, v17, v18);
      }
      if ( v8->fields.changeType <= 1u
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_3293/*"BattleScriptScene"*/, 0LL) )
      {
        v20 = System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_3291/*"BattleScene"*/, 0LL);
        if ( v20 )
        {
          v22 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v20, v21);
          v8->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v22, v24, v25, v26, v27, v28, v29);
          v30 = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return v30;
        }
      }
LABEL_18:
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v8->fields._newTargetRoot_5__2;
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        goto LABEL_68;
      scenename = v8->fields.scenename;
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
      v36 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v8->fields.scenename, v35);
      v8->fields._newTargetRoot_5__2 = v36;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2,
        (int64_t)v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
LABEL_26:
      v43 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
      {
LABEL_68:
        v78 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_112;
          v79 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_112;
              klass = this->klass;
              if ( v8->fields.changeType == 3 )
                v81 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v81 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v81();
            }
            v110 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v111 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v110, v111, 0LL) )
              goto LABEL_111;
            if ( v8->fields.changeType == 5 )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( this )
              {
                dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
                v119 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !SceneList_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)SceneList__getSceneType(v119, 0LL);
                if ( dicRootComponent )
                {
                  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
                    dicRootComponent,
                    (int32_t)this,
                    0LL,
                    (const MethodInfo_32E6264 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
                  this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
                  if ( this )
                  {
                    v120 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70921760(v120, 0LL);
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
                  v8->fields.__2__current = 0LL;
                  v121 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1C21DDC(v121, 0LL, v112, v113, v114, v115, v116, v117);
                  *(_DWORD *)&v121[-1].fields._IsQuestStartMenuMode_k__BackingField = 3;
                  return 1;
                }
              }
            }
LABEL_112:
            sub_1C22094(this, method);
          }
LABEL_80:
          v82 = v8->fields._newTargetRoot_5__2;
          v83 = (SceneTemp_o *)sub_1C22084(SceneTemp_TypeInfo);
          SceneTemp___ctor_39920892(v83, v82, 0LL);
          if ( !_4__this )
            goto LABEL_112;
          _4__this->fields.prevscenetemp = v83;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields.prevscenetemp,
            (int64_t)v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
          v90 = (int64_t)v8->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v90;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o **)&_4__this->fields.targetRoot;
          sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.targetRoot, v90, v92, v93, v94, v95, v96, v97);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)v8->fields._newTargetRoot_5__2;
          if ( !this )
            goto LABEL_112;
          v98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
          v99 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)SceneList__getSceneType(v99, 0LL);
          if ( !v98 )
            goto LABEL_112;
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            v98,
            (int32_t)this,
            (Il2CppObject *)v8->fields._newTargetRoot_5__2,
            (const MethodInfo_32E6264 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
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
          if ( (v8->fields.changeType & 0xFFFFFFFE) == 4 )
          {
            sendData = _4__this->fields.sendData;
            p_sendData = (PartyOrganizationUtility_o *)&_4__this->fields.sendData;
            v106 = sendData;
            p_sendData->klass = 0LL;
            sub_1C21DDC(p_sendData, 0LL, v100, v101, v102, v103, v104, v105);
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)p_sendData[-1].fields.CachedFriendshipUpItemInfo;
            if ( !this )
              goto LABEL_112;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__40_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v106,
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
      v44 = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v30 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v44, 1, 0LL);
      v8->fields.__2__current = 0LL;
      v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v45, 0LL, v46, v47, v48, v49, v50, v51);
      *(_DWORD *)&v45[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v30;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_112;
      v52 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v8->fields.scenename, v2);
      v8->fields._newTargetRoot_5__2 = v52;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v8->fields._newTargetRoot_5__2;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2,
        (int64_t)v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      v59 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v59, 0LL, 0LL) )
        return 0;
      v60 = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v60, 0LL).fields.m_Handle;
      v61 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v61,
                                                                       0LL);
      if ( !this )
        goto LABEL_112;
      _2__current = (int)this->fields.__2__current;
      v63 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v64 = 0;
      break;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v64 >= _2__current )
LABEL_113:
      sub_1C2209C(this, method);
    v65 = (UnityEngine_GameObject_o *)*((_QWORD *)&v63->fields.__4__this + (int)v64);
    if ( !v65 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                     v65,
                                                                     (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_112;
    v66 = (int)this->fields.__2__current;
    v67 = this;
    if ( v66 >= 1 )
    {
      for ( i = 0; i < v66; ++i )
      {
        if ( i >= (unsigned int)v66 )
          goto LABEL_113;
        v69 = &v67->klass + i;
        gameObject = (UnityEngine_Component_o *)v69[4];
        if ( !gameObject )
          goto LABEL_112;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__GetComponents_object__49967492(
                                                                         (UnityEngine_Component_o *)v69[4],
                                                                         (const MethodInfo_2FA7184 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_112;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v71 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v71);
          }
        }
        else
        {
          v71 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_70869800((UnityEngine_Object_o *)gameObject, 0LL);
        v66 = (int)v67->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                     v65,
                                                                     (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_112;
    v72 = (int)this->fields.__2__current;
    v73 = this;
    if ( v72 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v63->fields.__2__current;
    if ( (int)++v64 >= _2__current )
      goto LABEL_68;
  }
  v74 = 0;
  while ( 1 )
  {
    if ( v74 >= v72 )
      goto LABEL_113;
    v75 = &v73->klass + (int)v74;
    v76 = (UnityEngine_Component_o *)v75[4];
    if ( !v76 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__GetComponents_object__49967492(
                                                                     (UnityEngine_Component_o *)v75[4],
                                                                     (const MethodInfo_2FA7184 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_112;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v76 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v76, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v77 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v77);
      }
    }
    else
    {
      v77 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_70869800((UnityEngine_Object_o *)v76, 0LL);
    v72 = (int)v73->fields.__2__current;
    if ( (int)++v74 >= v72 )
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AvalonSceneManager__changePrevSceneCoroutine_d__39_o *v8; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v11; // x0
  PartyOrganizationUtility_o *v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // w8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w8
  float duration_5__2; // s0
  int32_t v28; // w1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  bool result; // w0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_Object_o *targetRoot; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  const MethodInfo *v49; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__39_o *v50; // x22
  UnityEngine_Object_o *v51; // x21
  int32_t v52; // w21
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *v56; // x22
  System_String_o *scenename; // x19
  unsigned int v58; // w19
  Il2CppObject *value; // x20
  _BOOL8 v60; // x0
  __int64 v61; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+0h] [xbp-70h] BYREF
  int32_t m_Handle; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4BDBB0F & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__SceneRootComponent__get_Value__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)sub_1C21E38(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4BDBB0F = 1;
  }
  m_Handle = 0;
  memset(&v63, 0, sizeof(v63));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      fadeType = _4__this->fields.fadeType;
      if ( !fadeType )
        goto LABEL_33;
      v11 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v11 = AvalonSceneManager_TypeInfo;
        fadeType = _4__this->fields.fadeType;
      }
      LODWORD(v8->fields._duration_5__2) = LODWORD(v11->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(fadeType - 1) > 1 )
        goto LABEL_11;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v8->fields.fadeTimeSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      v8->fields._duration_5__2 = 0.0;
LABEL_21:
      v26 = _4__this->fields.fadeType;
      if ( v26 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v8->fields._duration_5__2;
        v28 = 2;
      }
      else
      {
        if ( v26 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v8->fields._duration_5__2;
        v28 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v28, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v8->fields.__2__current = 0LL;
        v12 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v12, 0LL, v29, v30, v31, v32, v33, v34);
        v19 = 2;
LABEL_32:
        *(_DWORD *)&v12[-1].fields._IsQuestStartMenuMode_k__BackingField = v19;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__InitTurotialArrowMark((CommonUI_o *)this, 0LL);
      if ( v8->fields.changeType > 1u )
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
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.prevscenetemp, 0LL, v43, v44, v45, v46, v47, v48);
LABEL_43:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.scenestack;
      if ( !this )
        goto LABEL_55;
      while ( SLODWORD(this->fields.__2__current) > 0 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)System_Collections_Generic_Stack_object___Pop(
                                                                         (System_Collections_Generic_Stack_T__o *)this,
                                                                         (const MethodInfo_38A6218 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
        if ( !this )
          goto LABEL_55;
        v50 = this;
        v51 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                        (AvalonSceneManager_o *)this,
                                        *(System_String_o **)&this->fields.__1__state,
                                        v49);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_55;
          if ( SceneRootComponent__checkSceneName(
                 (SceneRootComponent_o *)v51,
                 *(System_String_o **)&v50->fields.__1__state,
                 0LL) )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v51,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v51->klass[1]._1.this_arg.bits)(
              v51,
              v51->klass[1]._1.element_class);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v51,
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
      if ( !v8->fields.changeType )
      {
        v8->fields.__2__current = 0LL;
        v12 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v12, 0LL, v36, v37, v38, v39, v40, v41);
        v19 = 3;
        goto LABEL_32;
      }
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v52 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      if ( v52 >= 0 )
      {
        do
        {
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v52, 0LL).fields.m_Handle;
          p_m_Handle = &m_Handle;
          name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                           (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                           0LL);
          v56 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v55);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(
                                                                           v56,
                                                                           0LL,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v56 )
              goto LABEL_55;
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v56,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
        }
        while ( --v52 >= 0 );
      }
LABEL_69:
      scenename = v8->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SceneList__getSceneType(scenename, 0LL);
      if ( !_4__this
        || (v58 = (unsigned int)this,
            (this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.dicRootComponent) == 0LL) )
      {
LABEL_55:
        sub_1C22094(this, method);
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
        &v63,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
        (const MethodInfo_32E66B0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
      while ( System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
                &v63,
                (const MethodInfo_3409C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__) )
      {
        value = v63.fields._current.fields.value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v60 = UnityEngine_Object__op_Equality(0LL, (UnityEngine_Object_o *)value, 0LL);
        if ( !v60 )
        {
          if ( !value )
            sub_1C22094(v60, v61);
          ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))value->klass->vtable[11].method)(
            value,
            v58,
            value->klass->vtable[12].methodPtr);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v63,
        (const MethodInfo_3409D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
      return 0;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_21;
      goto LABEL_55;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_29;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      AvalonSceneManager__destroySceneObject(_4__this, method);
      v8->fields.__2__current = 0LL;
      v12 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v12, 0LL, v20, v21, v22, v23, v24, v25);
      v19 = 4;
      goto LABEL_32;
    case 4:
      v8->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v8->fields.__2__current = 0LL;
      v12 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v12, 0LL, v13, v14, v15, v16, v17, v18);
      v19 = 5;
      goto LABEL_32;
    case 5:
      v8->fields.__1__state = -1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v7; // w22
  struct SceneTemp_o *prevscenetemp; // x8
  AvalonSceneManager__changeSceneCoroutine_d__38_o *v9; // x21
  int32_t v10; // w8
  const MethodInfo *v11; // x4
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v13; // x20
  PartyOrganizationUtility_o *v14; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int v21; // w8
  System_Collections_IEnumerator_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_IEnumerator_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  int32_t ConnectMarkEventId; // w1
  bool v39; // w2
  AvalonSceneManager__changeSceneCoroutine_d__38_o *v40; // x22
  System_Collections_IEnumerator_o *v41; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  v3 = this;
  if ( (byte_4BDBB10 & 1) == 0 )
  {
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDBB10 = 1;
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
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_53;
        }
        goto LABEL_54;
      }
      v7 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_54;
      prevscenetemp = _4__this->fields.prevscenetemp;
      v9 = this;
      if ( !prevscenetemp )
        goto LABEL_42;
      v10 = prevscenetemp->fields.sceneType;
      if ( v7 == 38 && v10 == 10 || (v7 == 10 || v7 == 38) && v10 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
          if ( !v9 )
            goto LABEL_53;
          goto LABEL_52;
        }
LABEL_54:
        sub_1C22094(this, method);
      }
      if ( v10 == 39 )
      {
        if ( v7 <= 0x3D && ((1LL << v7) & 0x3000010000000000LL) != 0 )
        {
          this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_54;
          ConnectMarkEventId = 0;
          v39 = 0;
          goto LABEL_51;
        }
      }
      else if ( v7 == 34 && v10 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        v39 = 1;
        ConnectMarkEventId = 0;
        goto LABEL_51;
      }
LABEL_42:
      if ( this && v7 == 32 && !LOBYTE(this[2].fields.scenename) )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
LABEL_52:
        LOBYTE(v9[2].fields.scenename) = 0;
        goto LABEL_53;
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = this;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v40 )
        goto LABEL_54;
      v39 = 1;
      this = v40;
      ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
LABEL_51:
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v39, 0LL);
      if ( v9 )
        goto LABEL_52;
LABEL_53:
      v41 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v3->fields.changeType,
              v3->fields.scenename,
              v3->fields.fadeTimeSkip,
              v11);
      v3->fields.__2__current = (Il2CppObject *)v41;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v41, v43, v44, v45, v46, v47, v48);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_25;
      v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v13, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64162132(0LL);
      v3->fields.__2__current = (Il2CppObject *)v13;
      v14 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C21DDC(v14, (int64_t)v13, v15, v16, v17, v18, v19, v20);
      v21 = 2;
      goto LABEL_27;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      v22 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v22;
      v14 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C21DDC(v14, (int64_t)v22, v23, v24, v25, v26, v27, v28);
      v21 = 3;
      goto LABEL_27;
    case 3:
      v3->fields.__1__state = -1;
LABEL_25:
      if ( !_4__this )
        goto LABEL_54;
      v29 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v3->fields.changeType, v3->fields.scenename, v2);
      v3->fields.__2__current = (Il2CppObject *)v29;
      v14 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C21DDC(v14, (int64_t)v29, v30, v31, v32, v33, v34, v35);
      v21 = 4;
LABEL_27:
      *(_DWORD *)&v14[-1].fields._IsQuestStartMenuMode_k__BackingField = v21;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AvalonSceneManager__changeSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w9
  struct AvalonSceneManager_o *_4__this; // x8
  _BOOL4 bContinue_5__2; // w9
  Il2CppObject *current; // x20
  int32_t *p_m_Handle; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v17; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BDBB11 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    this = (AvalonSceneManager__checkUnloadScenes_d__17_o *)sub_1C21E38(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4BDBB11 = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
          v17 = m_listUnloadScenes->fields._version + 1;
          m_listUnloadScenes->fields._size = 0;
          m_listUnloadScenes->fields._version = v17;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0LL);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_1C22094(this, method);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v20.fields._current;
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
    &v20,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL, v9, v10, v11, v12, v13, v14);
  LOBYTE(this) = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AvalonSceneManager__checkUnloadScenes_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDBB12 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C21E38(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__0__);
    sub_1C21E38(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__1__);
    sub_1C21E38(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__2__);
    sub_1C21E38(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__3__);
    sub_1C21E38(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__4__);
    sub_1C21E38(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__5__);
    sub_1C21E38(&AvalonSceneManager___c__DisplayClass41_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDBB12 = 1;
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
    v5 = sub_1C22084(AvalonSceneManager___c__DisplayClass41_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !v5 )
      goto LABEL_46;
    *(_BYTE *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 17) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v5 + 16) = 1;
    }
    else
    {
      v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v10, 7, v8, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v5 + 17) = 1;
    }
    else
    {
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v11, 1, v8, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v5 + 18) = 1;
    }
    else
    {
      v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v12, 2, v8, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_1C22094(Instance, v7);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
    {
      *(_BYTE *)(v5 + 19) = 1;
    }
    else
    {
      v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v13, 4, v8, 0LL);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v5 + 20) = 1;
    }
    else
    {
      v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__4__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v14, v8, 0LL);
    }
    v15 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__5__,
      0LL);
    v16 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v16, v15, 0LL);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    v9 = 1;
    result = 1;
  }
  this->fields.__1__state = v9;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AvalonSceneManager__setupUI_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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