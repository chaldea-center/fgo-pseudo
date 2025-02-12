void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC7077 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v1);
    byte_4BC7077 = 1;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_Stack_T__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BC7076 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v8);
    byte_4BC7076 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_32D1F14 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent___ctor__);
  this->fields.dicRootComponent = (struct System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__o *)v9;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dicRootComponent, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Stack_T__o *)sub_1C1AE20(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v16,
    (const MethodInfo_38934A0 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v16;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.scenestack, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v23;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.m_listUnloadScenes,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_2F88C68 *method)
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
  const MethodInfo_2F88EC0 *v29; // x1
  System_RuntimeTypeHandle_o v30; // 0:w0.4
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1C1ABD4(&BattleRootComponent_var, *(_QWORD *)&sceneType);
    sub_1C1ABD4(&BattleRootComponent_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, v9);
    sub_1C1ABD4(&SceneList_TypeInfo, v10);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11);
    sub_1C1ABD4(&System_Type_TypeInfo, v12);
    if ( !method->rgctx_data )
      sub_1C6CB0C(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1C6CAB0(v15);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v18 = (UnityEngine_Component_o *)sub_1C1AD10(targetRoot, _0_T);
      if ( !v18 )
      {
        sub_1C1B0F0(targetRoot);
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
          gameObject = *(UnityEngine_GameObject_o **)(v24 + 504);
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
            (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
          v27 = SceneRootComponent__getSceneName(v19, 0LL);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70846560(v27, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_1C1AE30(gameObject, v14);
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
  if ( (byte_4BC7075 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_4BC7075 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1C1AE30(this, method);
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
  if ( (byte_4BC7061 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4BC7061 = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1C1AE30(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_4BC7064 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_4BC7064 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1C1AE30(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_2F890FC *method)
{
  long double v3; // q0
  const MethodInfo_2F890FC_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__46_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v9; // x0
  const MethodInfo_2F890FC_RGCTXs *v10; // x8
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
    sub_1C6CB0C(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__46_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__46_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__46_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__46_T = sub_1C6CAB0(v3);
  v9 = (AvalonSceneManager__UnloadSceneAsync_d__46_T__o *)sub_1C1AE20(_0_AvalonSceneManager__UnloadSceneAsync_d__46_T);
  v10 = method->rgctx_data;
  v11 = v9;
  AvalonSceneManager__UnloadSceneAsync_d__46_object____ctor(
    v9,
    0,
    (const MethodInfo_32B3194 *)v10->_1_AvalonSceneManager__UnloadSceneAsync_d__46_T___ctor);
  if ( !v11 )
    sub_1C1AE30(v12, v13);
  v11->fields.__4__this = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v11->fields.__4__this, (int64_t)this, v14, v15, v16, v17, v18, v19);
  v11->fields.callback = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v11->fields.callback, (int64_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v11;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_2F88EC0 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t i; // w21
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x22
  long double inited; // q0
  Il2CppClass *_0_T; // x1
  __int64 v15; // x23
  long double v16; // q0
  Il2CppClass *v17; // x22
  UnityEngine_Object_o *v18; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x22
  int32_t *v20; // x0
  System_String_o *name; // x23
  int32_t *v22; // x0
  System_String_o *v23; // x22
  AvalonSceneManager_o *v24; // x0
  System_Action_o *v25; // x1
  const MethodInfo_2F890FC *v26; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, method);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&SceneList_TypeInfo, v6);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    if ( !method->rgctx_data )
      sub_1C6CB0C(method);
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
      sub_1C1AE30(RootGameObjects, v11);
    if ( !RootGameObjects->max_length )
      sub_1C1AE38(RootGameObjects, v11);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C6CAB0(inited);
    v15 = sub_1C1AD10(Component_object, _0_T);
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C6CAB0(v16);
    if ( v15 )
    {
      v18 = (UnityEngine_Object_o *)sub_1C1AD10(v15, v17);
      if ( !v18 )
      {
        sub_1C1B0F0(v15);
        AvalonSceneManager__UnloadSceneAsync_object_(v24, v25, v26);
        return;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v18, 0LL) )
    {
      dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicRootComponent;
      v20 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v20, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      RootGameObjects = (UnityEngine_GameObject_array *)SceneList__getSceneType(name, 0LL);
      if ( !dicRootComponent )
        goto LABEL_30;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        dicRootComponent,
        (int32_t)RootGameObjects,
        0LL,
        (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
      v22 = &m_Handle;
      v23 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v22, 0LL);
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70846560(v23, 0LL);
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

  if ( (byte_4BC7072 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager__changeNextSceneCoroutine_d__40_TypeInfo, *(_QWORD *)&changeType);
    byte_4BC7072 = 1;
  }
  v7 = sub_1C1AE20(AvalonSceneManager__changeNextSceneCoroutine_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)scenename, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BC7071 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager__changePrevSceneCoroutine_d__39_TypeInfo, *(_QWORD *)&changeType);
    byte_4BC7071 = 1;
  }
  v9 = fadeTimeSkip;
  v10 = sub_1C1AE20(AvalonSceneManager__changePrevSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 44) = changeType;
  *(_QWORD *)(v10 + 48) = scenename;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)scenename, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4BC706D & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4BC706D = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39482184(this, 2, SceneName, fade, data, 0, v10);
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

  if ( (byte_4BC7070 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager__changeSceneCoroutine_d__38_TypeInfo, *(_QWORD *)&changeType);
    byte_4BC7070 = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1C1AE20(AvalonSceneManager__changeSceneCoroutine_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 40), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)scenename, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 56), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_39482184(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v25; // x23
  int32_t SceneType; // w23
  int32_t v27; // w0
  const MethodInfo *v28; // x5
  TerminalSceneComponent_c *v29; // x0
  TerminalSceneComponent_c *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0

  if ( (byte_4BC706E & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
    byte_4BC706E = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v17);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.sendData, (int64_t)data, v18, v19, v20, v21, v22, v23);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v25 = prevscenetemp->fields.sceneName;
  else
    v25 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v25, 0LL);
  v27 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v27 == 34 )
    {
      v29 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      v29->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v27 == 34 )
  {
    v30 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v30 = TerminalSceneComponent_TypeInfo;
    }
    v30->static_fields->isSummonToTerminalTransition = 1;
  }
  v31 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_39483104(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v25; // x23
  int32_t SceneType; // w23
  int32_t v27; // w0
  const MethodInfo *v28; // x5
  TerminalSceneComponent_c *v29; // x0
  TerminalSceneComponent_c *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0

  if ( (byte_4BC706F & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
    byte_4BC706F = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v17);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.sendData, (int64_t)data, v18, v19, v20, v21, v22, v23);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v25 = prevscenetemp->fields.sceneName;
  else
    v25 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v25, 0LL);
  v27 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v27 == 34 )
    {
      v29 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      v29->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v27 == 34 )
  {
    v30 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v30 = TerminalSceneComponent_TypeInfo;
    }
    v30->static_fields->isSummonToTerminalTransition = 1;
  }
  v31 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_39483856(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_39482184(this, 2, scenename, fade, data, 0, v5);
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

  if ( (byte_4BC7067 & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_4BC7067 = 1;
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

  if ( (byte_4BC7066 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, *(_QWORD *)&type);
    byte_4BC7066 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1C1AE30(0LL, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_3893A24 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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

  if ( (byte_4BC7062 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager__checkUnloadScenes_d__17_TypeInfo, method);
    byte_4BC7062 = 1;
  }
  v3 = sub_1C1AE20(AvalonSceneManager__checkUnloadScenes_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  int32_t v22; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x21
  int32_t *v25; // x0
  System_String_o *v26; // x21
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int64_t v38; // x1
  Il2CppClass **v39; // x0
  System_Collections_IEnumerator_o *v40; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC7063 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1C1ABD4(&SceneList_TypeInfo, v10);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v12);
    byte_4BC7063 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.prevscenetemp, 0LL, v2, v3, v4, v5, v6, v7);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_3893674 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetRoot, 0LL, v15, v16, v17, v18, v19, v20);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.dicRootComponent;
  if ( !scenestack )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)scenestack,
    (const MethodInfo_32D2A70 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__Clear__);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v22 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v22 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v22, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      scenestack = (System_Collections_Generic_Stack_T__o *)SceneList__getSceneName(0, 0LL);
      if ( !name )
        break;
      if ( !System_String__Contains(name, (System_String_o *)scenestack, 0LL) )
      {
        v25 = &m_Handle;
        v26 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v25, 0LL);
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70846560(v26, 0LL);
        m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
        v28 = &m_Handle;
        scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                                (UnityEngine_SceneManagement_Scene_o)v28,
                                                                0LL);
        if ( !m_listUnloadScenes )
          break;
        items = m_listUnloadScenes->fields._items;
        v36 = Method_System_Collections_Generic_List_string__Add__;
        ++m_listUnloadScenes->fields._version;
        if ( !items )
          break;
        size = m_listUnloadScenes->fields._size;
        v38 = (int64_t)scenestack;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            m_listUnloadScenes,
            (Il2CppObject *)scenestack,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          m_listUnloadScenes->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v38;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 4), v38, v29, v30, v31, v32, v33, v34);
        }
      }
      if ( --v22 < 0 )
        goto LABEL_22;
    }
LABEL_23:
    sub_1C1AE30(scenestack, v13);
  }
LABEL_22:
  v40 = AvalonSceneManager__checkUnloadScenes(this, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
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
  sub_1C1AB78(p_sendData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !comp )
    sub_1C1AE30(v12, v13);
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

  if ( (byte_4BC7065 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method);
    byte_4BC7065 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1C1AE30(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_3893A24 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  int max_length; // w8
  UnityEngine_GameObject_array *v12; // x20
  unsigned int v13; // w22
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC7060 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_4BC7060 = 1;
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
    v12 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1C1AE38(RootGameObjects, v10);
        RootGameObjects = (UnityEngine_GameObject_array *)v12->m_Items[v13];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          return 0LL;
      }
LABEL_19:
      sub_1C1AE30(RootGameObjects, v10);
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

  return AvalonSceneManager__popScene_39482628(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_39482628(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_39482628(
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

  if ( (byte_4BC7069 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade);
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9);
    byte_4BC7069 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v11 = *((_DWORD *)scenestack + 6);
  if ( v11 < 1 )
    return v11 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_3893A68 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1C1AE30(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v13 = 5;
  else
    v13 = 4;
  AvalonSceneManager__changeScene_39482184(this, v13, *((System_String_o **)scenestack + 2), fade, data, 0, v12);
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

  if ( (byte_4BC7068 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1C1ABD4(&SceneList_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v11);
    byte_4BC7068 = 1;
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
        (const MethodInfo_3893AC8 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_39482184(this, 3, SceneName, fade, data, 0, v18) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_3893A68 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_39482184(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v20);
      return 0;
    }
LABEL_17:
    sub_1C1AE30(scenestack, v14);
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

  if ( (byte_4BC7074 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, flag);
    byte_4BC7074 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1C1AE30(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BC7073 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager__setupUI_d__41_TypeInfo, method);
    byte_4BC7073 = 1;
  }
  v2 = sub_1C1AE20(AvalonSceneManager__setupUI_d__41_TypeInfo);
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

  if ( (byte_4BC706A & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4BC706A = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39482184(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_4BC706C & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4BC706C = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39482184(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_39482956(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4BC706B & 1) == 0 )
  {
    sub_1C1ABD4(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4BC706B = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_39483104(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_39483832(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_39482184(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        int32_t 1__state,
        const MethodInfo_32B3194 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32B31C0 *method)
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
  Il2CppObject *Component_object; // x22
  __int64 _1_T; // x1
  __int64 v16; // x23
  __int64 v17; // x22
  UnityEngine_Object_o *v18; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x20
  int32_t *v20; // x0
  System_String_o *name; // x21
  int32_t *v22; // x0
  System_String_o *v23; // x20
  struct UnityEngine_AsyncOperation_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject **p__2__current; // x19
  AvalonSceneManager__UnloadSceneAsync_d__46_T__o *v38; // x0
  const MethodInfo_32B347C *v39; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BCDBB3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, method);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&SceneList_TypeInfo, v6);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    byte_4BCDBB3 = 1;
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
        sub_1C1AE38(RootGameObjects, method);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *((UnityEngine_GameObject_o **)RootGameObjects + 4),
                           (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _1_T = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
        _1_T = sub_1C6CAB0();
      v16 = sub_1C1AD10(Component_object, _1_T);
      v17 = (__int64)method->klass->rgctx_data->_1_T;
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1C6CAB0();
      if ( v16 )
      {
        v18 = (UnityEngine_Object_o *)sub_1C1AD10(v16, v17);
        if ( !v18 )
        {
          sub_1C1B0F0(v16);
          return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                    v38,
                                    v39);
        }
      }
      else
      {
        v18 = 0LL;
      }
      RootGameObjects = (void *)UnityEngine_Object__op_Implicit(v18, 0LL);
      --v11;
    }
    while ( ((unsigned __int8)RootGameObjects & 1) == 0 );
    if ( !_4__this )
      goto LABEL_37;
    dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
    v20 = &m_Handle;
    name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v20, 0LL);
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    RootGameObjects = (void *)SceneList__getSceneType(name, 0LL);
    if ( !dicRootComponent )
      goto LABEL_37;
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
      dicRootComponent,
      (int32_t)RootGameObjects,
      0LL,
      (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
    v22 = &m_Handle;
    v23 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v22, 0LL);
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
    v24 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70846560(v23, 0LL);
    this->fields._asyncOp_5__2 = v24;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields._asyncOp_5__2, (int64_t)v24, v25, v26, v27, v28, v29, v30);
LABEL_32:
    RootGameObjects = this->fields._asyncOp_5__2;
    if ( !RootGameObjects )
LABEL_37:
      sub_1C1AE30(RootGameObjects, method);
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
      sub_1C1AB78((PartyOrganizationUtility_o *)p__2__current, 0LL, v31, v32, v33, v34, v35, v36);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32B347C *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32B3484 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1C1AE20(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1C1ACFC(v4, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32B34B8 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__46_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__46_T__o *this,
        const MethodInfo_32B31BC *method)
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
  struct AvalonSceneManager_o *_4__this; // x20
  UnityEngine_Object_o *targetRoot; // x22
  bool v21; // w22
  bool v22; // w0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x1
  System_Collections_IEnumerator_o *v32; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  bool v40; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v45; // x2
  SceneRootComponent_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Object_o *v53; // x22
  System_String_o *v54; // x21
  PartyOrganizationUtility_o *v55; // x19
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  SceneRootComponent_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  UnityEngine_Object_o *v69; // x22
  System_String_o *v70; // x22
  int32_t *v71; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v73; // x22
  unsigned int v74; // w27
  UnityEngine_GameObject_o *v75; // x23
  int v76; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v77; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c **v79; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v81; // x0
  int v82; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o *v83; // x23
  unsigned int v84; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c **v85; // x8
  UnityEngine_Component_o *v86; // x24
  UnityEngine_Object_c *v87; // x0
  UnityEngine_Object_o *v88; // x22
  UnityEngine_Object_o *v89; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__40_c *klass; // x8
  void (*v91)(void); // x9
  SceneRootComponent_o *v92; // x22
  SceneTemp_o *v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__40_o **p_targetRoot; // x21
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v108; // x22
  System_String_o *v109; // x23
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  Il2CppObject *v116; // x19
  PartyOrganizationUtility_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v120; // x22
  UnityEngine_Object_o *v121; // x21
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicRootComponent; // x21
  System_String_o *v129; // x22
  System_String_o *v130; // x20
  PartyOrganizationUtility_o *v131; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4BC7078 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponents_Component___, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__, v9);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v10);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&SceneList_TypeInfo, v13);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v14);
    sub_1C1ABD4(&SceneTemp_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_3284/*"BattleScriptScene"*/, v16);
    sub_1C1ABD4(&StringLiteral_3282/*"BattleScene"*/, v17);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)sub_1C1ABD4(&StringLiteral_1/*""*/, v18);
    byte_4BC7078 = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields._newTargetRoot_5__2 = 0LL;
      v8->fields.__1__state = -1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_112;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v22 = System_String__op_Equality(v8->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v21 )
        goto LABEL_11;
      if ( v22 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_112;
      v22 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v8->fields.scenename, 0LL);
LABEL_11:
      if ( v22 )
      {
LABEL_12:
        v29 = (int64_t)_4__this->fields.targetRoot;
        v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v29;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2, v29, v23, v24, v25, v26, v27, v28);
      }
      if ( v8->fields.changeType <= 1u
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_3284/*"BattleScriptScene"*/, 0LL) )
      {
        v30 = System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_3282/*"BattleScene"*/, 0LL);
        if ( v30 )
        {
          v32 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v30, v31);
          v8->fields.__2__current = (Il2CppObject *)v32;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C1AB78(p__2__current, (int64_t)v32, v34, v35, v36, v37, v38, v39);
          v40 = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return v40;
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
      v46 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v8->fields.scenename, v45);
      v8->fields._newTargetRoot_5__2 = v46;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2,
        (int64_t)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
LABEL_26:
      v53 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v53, 0LL, 0LL) )
      {
LABEL_68:
        v88 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Object__op_Inequality(v88, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_112;
          v89 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_112;
              klass = this->klass;
              if ( v8->fields.changeType == 3 )
                v91 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v91 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v91();
            }
            v120 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v121 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v120, v121, 0LL) )
              goto LABEL_111;
            if ( v8->fields.changeType == 5 )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
              if ( this )
              {
                dicRootComponent = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
                v129 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !SceneList_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
                this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)SceneList__getSceneType(v129, 0LL);
                if ( dicRootComponent )
                {
                  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
                    dicRootComponent,
                    (int32_t)this,
                    0LL,
                    (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
                  this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)_4__this->fields.targetRoot;
                  if ( this )
                  {
                    v130 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70846560(v130, 0LL);
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
                  v131 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1C1AB78(v131, 0LL, v122, v123, v124, v125, v126, v127);
                  *(_DWORD *)&v131[-1].fields._IsQuestStartMenuMode_k__BackingField = 3;
                  return 1;
                }
              }
            }
LABEL_112:
            sub_1C1AE30(this, method);
          }
LABEL_80:
          v92 = v8->fields._newTargetRoot_5__2;
          v93 = (SceneTemp_o *)sub_1C1AE20(SceneTemp_TypeInfo);
          SceneTemp___ctor_39874468(v93, v92, 0LL);
          if ( !_4__this )
            goto LABEL_112;
          _4__this->fields.prevscenetemp = v93;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&_4__this->fields.prevscenetemp,
            (int64_t)v93,
            v94,
            v95,
            v96,
            v97,
            v98,
            v99);
          v100 = (int64_t)v8->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v100;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o **)&_4__this->fields.targetRoot;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&_4__this->fields.targetRoot,
            v100,
            v102,
            v103,
            v104,
            v105,
            v106,
            v107);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)v8->fields._newTargetRoot_5__2;
          if ( !this )
            goto LABEL_112;
          v108 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dicRootComponent;
          v109 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
          if ( !SceneList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)SceneList__getSceneType(v109, 0LL);
          if ( !v108 )
            goto LABEL_112;
          System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
            v108,
            (int32_t)this,
            (Il2CppObject *)v8->fields._newTargetRoot_5__2,
            (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__set_Item__);
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
            v116 = sendData;
            p_sendData->klass = 0LL;
            sub_1C1AB78(p_sendData, 0LL, v110, v111, v112, v113, v114, v115);
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)p_sendData[-1].fields.CachedFriendshipUpItemInfo;
            if ( !this )
              goto LABEL_112;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__40_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v116,
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
      v54 = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v40 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v54, 1, 0LL);
      v8->fields.__2__current = 0LL;
      v55 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v55, 0LL, v56, v57, v58, v59, v60, v61);
      *(_DWORD *)&v55[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v40;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_112;
      v62 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v8->fields.scenename, v2);
      v8->fields._newTargetRoot_5__2 = v62;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v8->fields._newTargetRoot_5__2;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2,
        (int64_t)v62,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      v69 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v69, 0LL, 0LL) )
        return 0;
      v70 = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v70, 0LL).fields.m_Handle;
      v71 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v71,
                                                                       0LL);
      if ( !this )
        goto LABEL_112;
      _2__current = (int)this->fields.__2__current;
      v73 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v74 = 0;
      break;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v74 >= _2__current )
LABEL_113:
      sub_1C1AE38(this, method);
    v75 = (UnityEngine_GameObject_o *)*((_QWORD *)&v73->fields.__4__this + (int)v74);
    if ( !v75 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50268132(
                                                                     v75,
                                                                     (const MethodInfo_2FF07E4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_112;
    v76 = (int)this->fields.__2__current;
    v77 = this;
    if ( v76 >= 1 )
    {
      for ( i = 0; i < v76; ++i )
      {
        if ( i >= (unsigned int)v76 )
          goto LABEL_113;
        v79 = &v77->klass + i;
        gameObject = (UnityEngine_Component_o *)v79[4];
        if ( !gameObject )
          goto LABEL_112;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__GetComponents_object__49899536(
                                                                         (UnityEngine_Component_o *)v79[4],
                                                                         (const MethodInfo_2F96810 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_112;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v81 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v81);
          }
        }
        else
        {
          v81 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_70794600((UnityEngine_Object_o *)gameObject, 0LL);
        v76 = (int)v77->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50268132(
                                                                     v75,
                                                                     (const MethodInfo_2FF07E4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_112;
    v82 = (int)this->fields.__2__current;
    v83 = this;
    if ( v82 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v73->fields.__2__current;
    if ( (int)++v74 >= _2__current )
      goto LABEL_68;
  }
  v84 = 0;
  while ( 1 )
  {
    if ( v84 >= v82 )
      goto LABEL_113;
    v85 = &v83->klass + (int)v84;
    v86 = (UnityEngine_Component_o *)v85[4];
    if ( !v86 )
      goto LABEL_112;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__40_o *)UnityEngine_Component__GetComponents_object__49899536(
                                                                     (UnityEngine_Component_o *)v85[4],
                                                                     (const MethodInfo_2F96810 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_112;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v86 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v86, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v87 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v87);
      }
    }
    else
    {
      v87 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_70794600((UnityEngine_Object_o *)v86, 0LL);
    v82 = (int)v83->fields.__2__current;
    if ( (int)++v84 >= v82 )
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v24; // x0
  PartyOrganizationUtility_o *v25; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int v32; // w8
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t v39; // w8
  float duration_5__2; // s0
  int32_t v41; // w1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  bool result; // w0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UnityEngine_Object_o *targetRoot; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__39_o *v63; // x22
  UnityEngine_Object_o *v64; // x21
  int32_t v65; // w21
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v68; // x2
  UnityEngine_Object_o *v69; // x22
  System_String_o *scenename; // x19
  unsigned int v71; // w19
  Il2CppObject *value; // x20
  _BOOL8 v73; // x0
  __int64 v74; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v76; // [xsp+0h] [xbp-70h] BYREF
  int32_t m_Handle; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4BC7079 & 1) == 0 )
  {
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, method);
    sub_1C1ABD4(&CommonEffectManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__, v10);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__,
      v11);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__,
      v12);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__get_Current__,
      v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__SceneRootComponent__get_Value__, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&SceneList_TypeInfo, v16);
    sub_1C1ABD4(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v20);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)sub_1C1ABD4(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v21);
    byte_4BC7079 = 1;
  }
  m_Handle = 0;
  memset(&v76, 0, sizeof(v76));
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
      v24 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v24 = AvalonSceneManager_TypeInfo;
        fadeType = _4__this->fields.fadeType;
      }
      LODWORD(v8->fields._duration_5__2) = LODWORD(v24->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(fadeType - 1) > 1 )
        goto LABEL_11;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v8->fields.fadeTimeSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      v8->fields._duration_5__2 = 0.0;
LABEL_21:
      v39 = _4__this->fields.fadeType;
      if ( v39 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v8->fields._duration_5__2;
        v41 = 2;
      }
      else
      {
        if ( v39 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v8->fields._duration_5__2;
        v41 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v41, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v8->fields.__2__current = 0LL;
        v25 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v25, 0LL, v42, v43, v44, v45, v46, v47);
        v32 = 2;
LABEL_32:
        *(_DWORD *)&v25[-1].fields._IsQuestStartMenuMode_k__BackingField = v32;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C1AB78((PartyOrganizationUtility_o *)&_4__this->fields.prevscenetemp, 0LL, v56, v57, v58, v59, v60, v61);
LABEL_43:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.scenestack;
      if ( !this )
        goto LABEL_55;
      while ( SLODWORD(this->fields.__2__current) > 0 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)System_Collections_Generic_Stack_object___Pop(
                                                                         (System_Collections_Generic_Stack_T__o *)this,
                                                                         (const MethodInfo_3893A68 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
        if ( !this )
          goto LABEL_55;
        v63 = this;
        v64 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                        (AvalonSceneManager_o *)this,
                                        *(System_String_o **)&this->fields.__1__state,
                                        v62);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_55;
          if ( SceneRootComponent__checkSceneName(
                 (SceneRootComponent_o *)v64,
                 *(System_String_o **)&v63->fields.__1__state,
                 0LL) )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v64,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v64->klass[1]._1.this_arg.bits)(
              v64,
              v64->klass[1]._1.element_class);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v64,
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
        v25 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v25, 0LL, v49, v50, v51, v52, v53, v54);
        v32 = 3;
        goto LABEL_32;
      }
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v65 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      if ( v65 >= 0 )
      {
        do
        {
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v65, 0LL).fields.m_Handle;
          p_m_Handle = &m_Handle;
          name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                           (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                           0LL);
          v69 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v68);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(
                                                                           v69,
                                                                           0LL,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v69 )
              goto LABEL_55;
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)v69,
                                                                             0LL);
            if ( !this )
              goto LABEL_55;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
        }
        while ( --v65 >= 0 );
      }
LABEL_69:
      scenename = v8->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SceneList__getSceneType(scenename, 0LL);
      if ( !_4__this
        || (v71 = (unsigned int)this,
            (this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)_4__this->fields.dicRootComponent) == 0LL) )
      {
LABEL_55:
        sub_1C1AE30(this, method);
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
        &v76,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
        (const MethodInfo_32D2D20 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__SceneRootComponent__GetEnumerator__);
      while ( System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
                &v76,
                (const MethodInfo_33F6E8C *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__MoveNext__) )
      {
        value = v76.fields._current.fields.value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v73 = UnityEngine_Object__op_Equality(0LL, (UnityEngine_Object_o *)value, 0LL);
        if ( !v73 )
        {
          if ( !value )
            sub_1C1AE30(v73, v74);
          ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppMethodPointer))value->klass->vtable[11].method)(
            value,
            v71,
            value->klass->vtable[12].methodPtr);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v76,
        (const MethodInfo_33F6FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_SceneList_Type__SceneRootComponent__Dispose__);
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
      v25 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v25, 0LL, v33, v34, v35, v36, v37, v38);
      v32 = 4;
      goto LABEL_32;
    case 4:
      v8->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v8->fields.__2__current = 0LL;
      v25 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v25, 0LL, v26, v27, v28, v29, v30, v31);
      v32 = 5;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  PartyOrganizationUtility_o *v20; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int v27; // w8
  System_Collections_IEnumerator_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_IEnumerator_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  int32_t ConnectMarkEventId; // w1
  bool v45; // w2
  AvalonSceneManager__changeSceneCoroutine_d__38_o *v46; // x22
  System_Collections_IEnumerator_o *v47; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  v3 = this;
  if ( (byte_4BC707A & 1) == 0 )
  {
    sub_1C1ABD4(&System_GC_TypeInfo, method);
    sub_1C1ABD4(&SceneList_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)sub_1C1ABD4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    byte_4BC707A = 1;
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
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_53;
        }
        goto LABEL_54;
      }
      v13 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_54;
      prevscenetemp = _4__this->fields.prevscenetemp;
      v15 = this;
      if ( !prevscenetemp )
        goto LABEL_42;
      v16 = prevscenetemp->fields.sceneType;
      if ( v13 == 38 && v16 == 10 || (v13 == 10 || v13 == 38) && v16 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
          if ( !v15 )
            goto LABEL_53;
          goto LABEL_52;
        }
LABEL_54:
        sub_1C1AE30(this, method);
      }
      if ( v16 == 39 )
      {
        if ( v13 <= 0x3D && ((1LL << v13) & 0x3000010000000000LL) != 0 )
        {
          this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_54;
          ConnectMarkEventId = 0;
          v45 = 0;
          goto LABEL_51;
        }
      }
      else if ( v13 == 34 && v16 == 9 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        v45 = 1;
        ConnectMarkEventId = 0;
        goto LABEL_51;
      }
LABEL_42:
      if ( this && v13 == 32 && !LOBYTE(this[2].fields.scenename) )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_54;
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
LABEL_52:
        LOBYTE(v15[2].fields.scenename) = 0;
        goto LABEL_53;
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = this;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v46 )
        goto LABEL_54;
      v45 = 1;
      this = v46;
      ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
LABEL_51:
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v45, 0LL);
      if ( v15 )
        goto LABEL_52;
LABEL_53:
      v47 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v3->fields.changeType,
              v3->fields.scenename,
              v3->fields.fadeTimeSkip,
              v17);
      v3->fields.__2__current = (Il2CppObject *)v47;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C1AB78(p__2__current, (int64_t)v47, v49, v50, v51, v52, v53, v54);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_25;
      v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64086932(0LL);
      v3->fields.__2__current = (Il2CppObject *)v19;
      v20 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C1AB78(v20, (int64_t)v19, v21, v22, v23, v24, v25, v26);
      v27 = 2;
      goto LABEL_27;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_54;
      v28 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v28;
      v20 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C1AB78(v20, (int64_t)v28, v29, v30, v31, v32, v33, v34);
      v27 = 3;
      goto LABEL_27;
    case 3:
      v3->fields.__1__state = -1;
LABEL_25:
      if ( !_4__this )
        goto LABEL_54;
      v35 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v3->fields.changeType, v3->fields.scenename, v2);
      v3->fields.__2__current = (Il2CppObject *)v35;
      v20 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C1AB78(v20, (int64_t)v35, v36, v37, v38, v39, v40, v41);
      v27 = 4;
LABEL_27:
      *(_DWORD *)&v20[-1].fields._IsQuestStartMenuMode_k__BackingField = v27;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_AvalonSceneManager__changeSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v22; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BC707B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    this = (AvalonSceneManager__checkUnloadScenes_d__17_o *)sub_1C1ABD4(
                                                              &UnityEngine_SceneManagement_SceneManager_TypeInfo,
                                                              v7);
    byte_4BC707B = 1;
  }
  memset(&v25, 0, sizeof(v25));
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
          v22 = m_listUnloadScenes->fields._version + 1;
          m_listUnloadScenes->fields._size = 0;
          m_listUnloadScenes->fields._version = v22;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0LL);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_1C1AE30(this, method);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v25.fields._current;
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
    &v25,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C1AB78(p__2__current, 0LL, v14, v15, v16, v17, v18, v19);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_AvalonSceneManager__checkUnloadScenes_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BC707C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v3);
    sub_1C1ABD4(&CommonEffectManager_TypeInfo, v4);
    sub_1C1ABD4(&System_Func_bool__TypeInfo, v5);
    sub_1C1ABD4(&OptionManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v7);
    sub_1C1ABD4(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__0__, v8);
    sub_1C1ABD4(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__1__, v9);
    sub_1C1ABD4(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__2__, v10);
    sub_1C1ABD4(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__3__, v11);
    sub_1C1ABD4(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__4__, v12);
    sub_1C1ABD4(&Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__5__, v13);
    sub_1C1ABD4(&AvalonSceneManager___c__DisplayClass41_0_TypeInfo, v14);
    sub_1C1ABD4(&UnityEngine_WaitUntil_TypeInfo, v15);
    byte_4BC707C = 1;
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
    v18 = sub_1C1AE20(AvalonSceneManager___c__DisplayClass41_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( !v18 )
      goto LABEL_46;
    *(_BYTE *)(v18 + 16) = 0;
    *(_DWORD *)(v18 + 17) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v21 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v18 + 16) = 1;
    }
    else
    {
      v23 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v23, 7, v21, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v18 + 17) = 1;
    }
    else
    {
      v24 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v24, 1, v21, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v18 + 18) = 1;
    }
    else
    {
      v25 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v25, 2, v21, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_46:
      sub_1C1AE30(Instance, v20);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
    {
      *(_BYTE *)(v18 + 19) = 1;
    }
    else
    {
      v26 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
      v27 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__4__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v27, v21, 0LL);
    }
    v28 = (System_Func_bool__o *)sub_1C1AE20(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v28,
      (Il2CppObject *)v18,
      Method_AvalonSceneManager___c__DisplayClass41_0__setupUI_b__5__,
      0LL);
    v29 = (UnityEngine_WaitUntil_o *)sub_1C1AE20(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v29, v28, 0LL);
    this->fields.__2__current = (Il2CppObject *)v29;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v29, v30, v31, v32, v33, v34, v35);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_AvalonSceneManager__setupUI_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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