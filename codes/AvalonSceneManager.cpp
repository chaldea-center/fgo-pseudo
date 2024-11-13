void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B157D2 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v1, v2);
    byte_4B157D2 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Stack_T__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B157D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v11, v12);
    byte_4B157D1 = 1;
  }
  v13 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Stack_SceneTemp__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_Stack_object____ctor(
    v13,
    (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scenestack, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v23;
  sub_1BCA784(
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
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_2EFC554 *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  long double v17; // q0
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Component_o *v21; // x20
  __int64 v22; // x1
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v25; // x0
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  __int64 v28; // x1
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v30; // x0
  const MethodInfo_2EFC72C *v31; // x1
  System_RuntimeTypeHandle_o v32; // 0:w0.4
  System_RuntimeTypeHandle_o v33; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&BattleRootComponent_var, *(_QWORD *)&sceneType, forceUnload);
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Type_TypeInfo, v12, v13);
    if ( !method->rgctx_data )
      sub_1C1C718(method, v14);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1C1C6BC(v17);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v20 = (UnityEngine_Component_o *)sub_1BCA91C(targetRoot, _0_T);
      if ( !v20 )
      {
        sub_1BCACFC(targetRoot);
        AvalonSceneManager__UnloadScene_object_(v30, v31);
        return;
      }
      v21 = v20;
      gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v22);
        v32.fields.value = (int)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v32, 0LL);
        v33.fields.value = (int)BattleRootComponent_var;
        v25 = System_Type__GetTypeFromHandle(v33, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v25, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_18;
        methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BattleRootComponent_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        {
          monitor = v21[3].monitor;
          if ( monitor )
          {
            gameObject = (UnityEngine_GameObject_o *)monitor[62];
            if ( gameObject )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0LL);
LABEL_18:
              if ( forceUnload )
              {
                SceneName = SceneRootComponent__getSceneName((SceneRootComponent_o *)v21, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v28);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70206224(SceneName, 0LL);
              }
              return;
            }
          }
        }
      }
    }
    sub_1BCAA3C(gameObject, v16);
  }
}


SceneRootComponent_o *__fastcall AvalonSceneManager__GetStackedRootComponent(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager_o *v3; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8
  AvalonSceneManager_o *StackSceneName; // x0
  const MethodInfo *v6; // x2

  v3 = this;
  if ( (byte_4B157D0 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                     method,
                                     v2);
    byte_4B157D0 = 1;
  }
  scenestack = v3->fields.scenestack;
  if ( !scenestack )
    sub_1BCAA3C(this, method);
  if ( !scenestack->fields._size )
    return 0LL;
  StackSceneName = (AvalonSceneManager_o *)AvalonSceneManager__getStackSceneName(v3, method);
  return AvalonSceneManager__getTargetRoot(StackSceneName, (System_String_o *)StackSceneName, v6);
}


bool __fastcall AvalonSceneManager__IsNothingUnloadScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager_o *v3; // x19
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8

  v3 = this;
  if ( (byte_4B157BB & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, method, v2);
    byte_4B157BB = 1;
  }
  m_listUnloadScenes = v3->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1BCAA3C(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager_o *v3; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v3 = this;
  if ( (byte_4B157BE & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                     method,
                                     v2);
    byte_4B157BE = 1;
  }
  scenestack = v3->fields.scenestack;
  if ( !scenestack )
    sub_1BCAA3C(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_2EFC8E8 *method)
{
  __int64 v3; // x3
  long double v4; // q0
  const MethodInfo_2EFC8E8_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__45_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v9; // x0
  const MethodInfo_2EFC8E8_RGCTXs *v10; // x8
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method, callback);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = sub_1C1C6BC(v4);
  v9 = (AvalonSceneManager__UnloadSceneAsync_d__45_T__o *)sub_1BCAA2C(
                                                            _0_AvalonSceneManager__UnloadSceneAsync_d__45_T,
                                                            callback,
                                                            method,
                                                            v3);
  v10 = method->rgctx_data;
  v11 = v9;
  AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
    v9,
    0,
    (const MethodInfo_321EBB4 *)v10->_1_AvalonSceneManager__UnloadSceneAsync_d__45_T___ctor);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  v11->fields.callback = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.callback, (int64_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v11;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_2EFC72C *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Component_object; // x21
  long double inited; // q0
  Il2CppClass *_0_T; // x1
  __int64 v17; // x22
  long double v18; // q0
  Il2CppClass *v19; // x21
  UnityEngine_Object_o *v20; // x0
  int32_t *v21; // x0
  __int64 v22; // x1
  System_String_o *name; // x21
  AvalonSceneManager_o *v24; // x0
  System_Action_o *v25; // x1
  const MethodInfo_2EFC8E8 *v26; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v6, v7);
    if ( !method->rgctx_data )
      sub_1C1C718(method, method);
  }
  m_Handle = 0;
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
  for ( i = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1; i >= 0; --i )
  {
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v8);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(i, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                        0LL);
    if ( !RootGameObjects )
      sub_1BCAA3C(0LL, v12);
    if ( !RootGameObjects->max_length )
      sub_1BCAA44(RootGameObjects, v12);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C1C6BC(inited);
    v17 = sub_1BCA91C(Component_object, _0_T);
    v19 = method->rgctx_data->_0_T;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1C1C6BC(v18);
    if ( v17 )
    {
      v20 = (UnityEngine_Object_o *)sub_1BCA91C(v17, v19);
      if ( !v20 )
      {
        sub_1BCACFC(v17);
        AvalonSceneManager__UnloadSceneAsync_object_(v24, v25, v26);
        return;
      }
    }
    else
    {
      v20 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v20, 0LL) )
    {
      v21 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v21, 0LL);
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v22);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70206224(name, 0LL);
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

  if ( (byte_4B157CD & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo, *(_QWORD *)&changeType, scenename);
    byte_4B157CD = 1;
  }
  v7 = sub_1BCAA2C(
         AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo,
         *(_QWORD *)&changeType,
         scenename,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)scenename, v14, v15, v16, v17, v18, v19);
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
  bool v8; // w22
  __int64 v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B157CC & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo, *(_QWORD *)&changeType, scenename);
    byte_4B157CC = 1;
  }
  v8 = fadeTimeSkip;
  v9 = sub_1BCAA2C(
         AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo,
         *(_QWORD *)&changeType,
         scenename,
         fadeTimeSkip);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 44) = changeType;
  *(_BYTE *)(v9 + 40) = v8;
  return (System_Collections_IEnumerator_o *)v9;
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

  if ( (byte_4B157C8 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&fade);
    byte_4B157C8 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38995548(this, 2, SceneName, fade, data, 0, v10);
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

  if ( (byte_4B157CB & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo, *(_QWORD *)&changeType, scenename);
    byte_4B157CB = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1BCAA2C(
          AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo,
          *(_QWORD *)&changeType,
          scenename,
          fadeTimeSkip);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 40), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)scenename, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 56), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_38995548(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v28; // x23
  int32_t SceneType; // w23
  int32_t v30; // w0
  __int64 v31; // x1
  const MethodInfo *v32; // x5
  TerminalSceneComponent_c *v33; // x0
  TerminalSceneComponent_c *v34; // x0
  System_Collections_IEnumerator_o *v35; // x0

  if ( (byte_4B157C9 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&changeType, scenename);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    byte_4B157C9 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v19);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sendData, (int64_t)data, v20, v21, v22, v23, v24, v25);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v28 = prevscenetemp->fields.sceneName;
  else
    v28 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v26);
  SceneType = SceneList__getSceneType(v28, 0LL);
  v30 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v30 == 34 )
    {
      v33 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
        v33 = TerminalSceneComponent_TypeInfo;
      }
      v33->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v30 == 34 )
  {
    v34 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
      v34 = TerminalSceneComponent_TypeInfo;
    }
    v34->static_fields->isSummonToTerminalTransition = 1;
  }
  v35 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_38996468(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v28; // x23
  int32_t SceneType; // w23
  int32_t v30; // w0
  __int64 v31; // x1
  const MethodInfo *v32; // x5
  TerminalSceneComponent_c *v33; // x0
  TerminalSceneComponent_c *v34; // x0
  System_Collections_IEnumerator_o *v35; // x0

  if ( (byte_4B157CA & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&changeType, scenename);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    byte_4B157CA = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v19);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sendData, (int64_t)data, v20, v21, v22, v23, v24, v25);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v28 = prevscenetemp->fields.sceneName;
  else
    v28 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v26);
  SceneType = SceneList__getSceneType(v28, 0LL);
  v30 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v30 == 34 )
    {
      v33 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
        v33 = TerminalSceneComponent_TypeInfo;
      }
      v33->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v30 == 34 )
  {
    v34 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v31);
      v34 = TerminalSceneComponent_TypeInfo;
    }
    v34->static_fields->isSummonToTerminalTransition = 1;
  }
  v35 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_38997220(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_38995548(this, 2, scenename, fade, data, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkLoadedScene(
        AvalonSceneManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *SceneName; // x19
  __int64 v7; // x1
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B157C2 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4, v5);
    byte_4B157C2 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( System_String__IsNullOrEmpty(SceneName, 0LL) )
  {
    return 0;
  }
  else
  {
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(SceneName, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    return UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkNowScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_String_o *SceneName; // x0
  __int64 v6; // x1
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_4B157C0 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, method);
    byte_4B157C0 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_1BCAA3C(SceneName, v6);
  return System_String__op_Equality(SceneName, prevscenetemp->fields.sceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  System_String_o *SceneName; // x0

  if ( (byte_4B157C1 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, v5, v6);
    byte_4B157C1 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  v8 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_37F7C90 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v8 )
  {
    v10 = v8;
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v9);
    SceneName = SceneList__getSceneName(type, 0LL);
    LOBYTE(v8) = System_String__op_Equality(SceneName, (System_String_o *)v10[1].klass, 0LL);
  }
  return (char)v8;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B157BC & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo, method, v2);
    byte_4B157BC = 1;
  }
  v5 = sub_1BCAA2C(AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  int32_t *p_m_Handle; // x0
  __int64 v27; // x1
  System_String_o *name; // x21
  int32_t *v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x21
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0
  System_Collections_IEnumerator_o *v45; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B157BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, method, v2);
    sub_1BCA7E0(&SceneList_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v13, v14);
    byte_4B157BD = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.prevscenetemp, 0LL, v2, v3, v4, v5, v6, v7);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_22;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_37F78E0 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetRoot, 0LL, v17, v18, v19, v20, v21, v22);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v23);
  v25 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v25 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v24);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v25, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v27);
      scenestack = (System_Collections_Generic_Stack_T__o *)SceneList__getSceneName(0, 0LL);
      if ( !name )
        break;
      if ( !System_String__Contains(name, (System_String_o *)scenestack, 0LL) )
      {
        v29 = &m_Handle;
        v31 = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v29, 0LL);
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v30);
        UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70206224(v31, 0LL);
        m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
        v33 = &m_Handle;
        scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                                (UnityEngine_SceneManagement_Scene_o)v33,
                                                                0LL);
        if ( !m_listUnloadScenes )
          break;
        items = m_listUnloadScenes->fields._items;
        v41 = Method_System_Collections_Generic_List_string__Add__;
        ++m_listUnloadScenes->fields._version;
        if ( !items )
          break;
        size = m_listUnloadScenes->fields._size;
        v43 = (int64_t)scenestack;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            m_listUnloadScenes,
            (Il2CppObject *)scenestack,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          m_listUnloadScenes->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), v43, v34, v35, v36, v37, v38, v39);
        }
      }
      if ( --v25 < 0 )
        goto LABEL_21;
    }
LABEL_22:
    sub_1BCAA3C(scenestack, v15);
  }
LABEL_21:
  v45 = AvalonSceneManager__checkUnloadScenes(this, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v45, 0LL);
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
  sub_1BCA784(p_sendData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !comp )
    sub_1BCAA3C(v12, v13);
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
  __int64 v2; // x2
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *result; // x0

  if ( (byte_4B157BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method, v2);
    byte_4B157BF = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1BCAA3C(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_37F7C90 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t *p_m_Handle; // x0
  Il2CppObject *Component_object; // x21
  int32_t *v10; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v12; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v14; // x20
  unsigned int v15; // w22
  __int64 v16; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B157BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v6, v7);
    byte_4B157BA = 1;
  }
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, scenenName);
  m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenenName, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  Component_object = 0LL;
  if ( UnityEngine_SceneManagement_Scene__get_isLoaded((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) )
  {
    v10 = &m_Handle;
    RootGameObjects = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                        (UnityEngine_SceneManagement_Scene_o)v10,
                        0LL);
    if ( !RootGameObjects )
      goto LABEL_19;
    max_length = RootGameObjects->max_length;
    v14 = RootGameObjects;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_1BCAA44(RootGameObjects, v12);
        RootGameObjects = (UnityEngine_GameObject_array *)v14->m_Items[v15];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
        max_length = v14->max_length;
        if ( (int)++v15 >= max_length )
          return 0LL;
      }
LABEL_19:
      sub_1BCAA3C(RootGameObjects, v12);
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

  return AvalonSceneManager__popScene_38995992(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_38995992(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_38995992(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        bool isRefresh,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  void *scenestack; // x0
  int v12; // w23
  const MethodInfo *v13; // x6
  int32_t v14; // w1

  if ( (byte_4B157C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade, data);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9, v10);
    byte_4B157C4 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v12 = *((_DWORD *)scenestack + 6);
  if ( v12 < 1 )
    return v12 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1BCAA3C(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v14 = 5;
  else
    v14 = 4;
  AvalonSceneManager__changeScene_38995548(this, v14, *((System_String_o **)scenestack + 2), fade, data, 0, v13);
  return v12 > 0;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *targetRoot; // x23
  bool v16; // w0
  __int64 v17; // x1
  struct SceneTemp_o *prevscenetemp; // x23
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v21; // x6
  const MethodInfo *v23; // x6

  if ( (byte_4B157C3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&fade);
    sub_1BCA7E0(&SceneList_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v13, v14);
    byte_4B157C3 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  v16 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
  prevscenetemp = 0LL;
  if ( v16 )
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
        (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v17);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_38995548(this, 3, SceneName, fade, data, 0, v21) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_38995548(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v23);
      return 0;
    }
LABEL_17:
    sub_1BCAA3C(scenestack, v17);
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

  if ( (byte_4B157CF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flag, method);
    byte_4B157CF = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1BCAA3C(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x19

  if ( (byte_4B157CE & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager__setupUI_d__40_TypeInfo, method, v2);
    byte_4B157CE = 1;
  }
  v4 = sub_1BCAA2C(AvalonSceneManager__setupUI_d__40_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v4;
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

  if ( (byte_4B157C5 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&fade);
    byte_4B157C5 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38995548(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_4B157C7 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&fade);
    byte_4B157C7 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38995548(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_38996320(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4B157C6 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&type, callback);
    byte_4B157C6 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38996468(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_38997196(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_38995548(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        int32_t 1__state,
        const MethodInfo_321EBB4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_321EBE0 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v11; // x1
  int32_t v12; // w21
  int32_t *p_m_Handle; // x0
  void *asyncOp_5__2; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22
  __int64 _1_T; // x1
  __int64 v18; // x23
  __int64 v19; // x22
  UnityEngine_Object_o *v20; // x0
  int32_t *v21; // x0
  __int64 v22; // x1
  System_String_o *name; // x20
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
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v38; // x0
  const MethodInfo_321EE18 *v39; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1C0D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7, v8);
    byte_4B1C0D6 = 1;
  }
  m_Handle = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_28:
    asyncOp_5__2 = this->fields._asyncOp_5__2;
    if ( !asyncOp_5__2 )
LABEL_33:
      sub_1BCAA3C(asyncOp_5__2, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)asyncOp_5__2, 0LL) )
      goto LABEL_30;
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v31, v32, v33, v34, v35, v36);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
      v12 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v12 & 0x80000000) == 0 )
      {
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v11);
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v12, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        asyncOp_5__2 = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                         (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                         0LL);
        if ( !asyncOp_5__2 )
          goto LABEL_33;
        if ( !*((_DWORD *)asyncOp_5__2 + 6) )
          sub_1BCAA44(asyncOp_5__2, method);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *((UnityEngine_GameObject_o **)asyncOp_5__2 + 4),
                             (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        _1_T = (__int64)method->klass->rgctx_data->_1_T;
        if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
          _1_T = sub_1C1C6BC();
        v18 = sub_1BCA91C(Component_object, _1_T);
        v19 = (__int64)method->klass->rgctx_data->_1_T;
        if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
          v19 = sub_1C1C6BC();
        if ( v18 )
        {
          v20 = (UnityEngine_Object_o *)sub_1BCA91C(v18, v19);
          if ( !v20 )
          {
            sub_1BCACFC(v18);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v38,
                                      v39);
          }
        }
        else
        {
          v20 = 0LL;
        }
        --v12;
        if ( UnityEngine_Object__op_Implicit(v20, 0LL) )
        {
          v21 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v21, 0LL);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v22);
          v24 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70206224(name, 0LL);
          this->fields._asyncOp_5__2 = v24;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields._asyncOp_5__2,
            (int64_t)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          goto LABEL_28;
        }
      }
LABEL_30:
      ActionExtensions__Call(this->fields.callback, 0LL);
      return 0;
    }
  }
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_321EE18 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_321EE20 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_NotSupportedException_o *v7; // x20

  v3 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_1BCA908(v7, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_321EE54 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_321EBDC *method)
{
  ;
}


void __fastcall AvalonSceneManager___c__DisplayClass40_0___ctor(
        AvalonSceneManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AvalonSceneManager___c__DisplayClass40_0___setupUI_b__0(
        AvalonSceneManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalBG = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass40_0___setupUI_b__1(
        AvalonSceneManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndTerminalUI = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass40_0___setupUI_b__2(
        AvalonSceneManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndCommonBG = 1;
}


void __fastcall AvalonSceneManager___c__DisplayClass40_0___setupUI_b__3(
        AvalonSceneManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  this->fields.loadEndEffect = 1;
}


bool __fastcall AvalonSceneManager___c__DisplayClass40_0___setupUI_b__4(
        AvalonSceneManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadEndTerminalUI
      && this->fields.loadEndTerminalBG
      && this->fields.loadEndCommonBG
      && this->fields.loadEndEffect;
}


void __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__39___ctor(
        AvalonSceneManager__changeNextSceneCoroutine_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__39__MoveNext(
        AvalonSceneManager__changeNextSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct AvalonSceneManager_o *_4__this; // x20
  UnityEngine_Object_o *targetRoot; // x22
  bool v27; // w22
  bool v28; // w0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  _BOOL8 v36; // x0
  System_Collections_IEnumerator_o *v37; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  bool v45; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v50; // x2
  SceneRootComponent_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  UnityEngine_Object_o *v58; // x22
  System_String_o *v59; // x21
  PartyOrganizationUtility_o *v60; // x19
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  SceneRootComponent_o *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x1
  UnityEngine_Object_o *v75; // x22
  __int64 v76; // x1
  System_String_o *v77; // x22
  int32_t *v78; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v80; // x22
  unsigned int v81; // w27
  UnityEngine_GameObject_o *v82; // x23
  int v83; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v84; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v86; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v88; // x0
  int v89; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v90; // x23
  unsigned int v91; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v92; // x8
  UnityEngine_Component_o *v93; // x24
  UnityEngine_Object_c *v94; // x0
  UnityEngine_Object_o *v95; // x22
  UnityEngine_Object_o *v96; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c *klass; // x8
  void (*v98)(void); // x9
  SceneRootComponent_o *v99; // x22
  SceneTemp_o *v100; // x21
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o **p_targetRoot; // x21
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  Il2CppObject *v121; // x19
  PartyOrganizationUtility_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v125; // x22
  UnityEngine_Object_o *v126; // x21
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  __int64 v133; // x1
  System_String_o *v134; // x20
  PartyOrganizationUtility_o *v135; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B157D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponents_Component___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&SceneTemp_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3270/*"BattleScriptScene"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3268/*"BattleScene"*/, v21, v22);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    byte_4B157D3 = 1;
  }
  m_Handle = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields._newTargetRoot_5__2 = 0LL;
      v8->fields.__1__state = -1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_103;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      v27 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v28 = System_String__op_Equality(v8->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v27 )
        goto LABEL_11;
      if ( v28 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_103;
      v28 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v8->fields.scenename, 0LL);
LABEL_11:
      if ( v28 )
      {
LABEL_12:
        v35 = (int64_t)_4__this->fields.targetRoot;
        v8->fields._newTargetRoot_5__2 = (struct SceneRootComponent_o *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2, v35, v29, v30, v31, v32, v33, v34);
      }
      if ( v8->fields.changeType <= 1u
        && System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_3270/*"BattleScriptScene"*/, 0LL) )
      {
        v36 = System_String__op_Inequality(v8->fields.scenename, (System_String_o *)StringLiteral_3268/*"BattleScene"*/, 0LL);
        if ( v36 )
        {
          v37 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v36, method);
          v8->fields.__2__current = (Il2CppObject *)v37;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v37, v39, v40, v41, v42, v43, v44);
          v45 = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return v45;
        }
      }
LABEL_18:
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v8->fields._newTargetRoot_5__2;
      newTargetRoot_5__2 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(newTargetRoot_5__2, 0LL, 0LL) )
        goto LABEL_68;
      scenename = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(scenename, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_SceneManagement_Scene__get_isLoaded(
                                                                       (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_26;
      if ( !_4__this )
        goto LABEL_103;
      v51 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v8->fields.scenename, v50);
      v8->fields._newTargetRoot_5__2 = v51;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2,
        (int64_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
LABEL_26:
      v58 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(v58, 0LL, 0LL) )
      {
LABEL_68:
        v95 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v95, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_103;
          v96 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_103;
              klass = this->klass;
              if ( v8->fields.changeType == 3 )
                v98 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v98 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v98();
            }
            v125 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v126 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
            if ( !UnityEngine_Object__op_Inequality(v125, v126, 0LL) )
              goto LABEL_102;
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v8->fields.changeType == 5 )
              {
                v134 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v133);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_70206224(v134, 0LL);
                goto LABEL_102;
              }
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_102:
                v8->fields.__2__current = 0LL;
                v135 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1BCA784(v135, 0LL, v127, v128, v129, v130, v131, v132);
                *(_DWORD *)&v135[-1].fields._IsQuestStartMenuMode_k__BackingField = 3;
                return 1;
              }
            }
LABEL_103:
            sub_1BCAA3C(this, method);
          }
LABEL_80:
          v99 = v8->fields._newTargetRoot_5__2;
          v100 = (SceneTemp_o *)sub_1BCAA2C(SceneTemp_TypeInfo, method, v2, v3);
          SceneTemp___ctor_39383340(v100, v99, 0LL);
          if ( !_4__this )
            goto LABEL_103;
          _4__this->fields.prevscenetemp = v100;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields.prevscenetemp,
            (int64_t)v100,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
          v107 = (int64_t)v8->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = (struct SceneRootComponent_o *)v107;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&_4__this->fields.targetRoot;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields.targetRoot,
            v107,
            v109,
            v110,
            v111,
            v112,
            v113,
            v114);
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
          if ( !this )
            goto LABEL_103;
          this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
          if ( !this )
            goto LABEL_103;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          _4__this->fields.isBusySceneChange = 0;
          if ( (v8->fields.changeType & 0xFFFFFFFE) == 4 )
          {
            sendData = _4__this->fields.sendData;
            p_sendData = (PartyOrganizationUtility_o *)&_4__this->fields.sendData;
            v121 = sendData;
            p_sendData->klass = 0LL;
            sub_1BCA784(p_sendData, 0LL, v115, v116, v117, v118, v119, v120);
            this = *(AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&p_sendData[-1].fields._WaveBattleRestartWave_k__BackingField;
            if ( !this )
              goto LABEL_103;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__39_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v121,
              this->klass[1]._1.name);
          }
          else
          {
            this = *p_targetRoot;
            if ( !*p_targetRoot )
              goto LABEL_103;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__39_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
              this,
              this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          }
        }
        return 0;
      }
      v59 = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
      v45 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v59, 1, 0LL);
      v8->fields.__2__current = 0LL;
      v60 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v60, 0LL, v61, v62, v63, v64, v65, v66);
      *(_DWORD *)&v60[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v45;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_103;
      v67 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v8->fields.scenename, v2);
      v8->fields._newTargetRoot_5__2 = v67;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v8->fields._newTargetRoot_5__2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._newTargetRoot_5__2,
        (int64_t)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v75 = (UnityEngine_Object_o *)v8->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
      if ( UnityEngine_Object__op_Equality(v75, 0LL, 0LL) )
        return 0;
      v77 = v8->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v76);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v77, 0LL).fields.m_Handle;
      v78 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v78,
                                                                       0LL);
      if ( !this )
        goto LABEL_103;
      _2__current = (int)this->fields.__2__current;
      v80 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v81 = 0;
      break;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v81 >= _2__current )
LABEL_104:
      sub_1BCAA44(this, method);
    v82 = (UnityEngine_GameObject_o *)*((_QWORD *)&v80->fields.__4__this + (int)v81);
    if ( !v82 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                     v82,
                                                                     (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_103;
    v83 = (int)this->fields.__2__current;
    v84 = this;
    if ( v83 >= 1 )
    {
      for ( i = 0; i < v83; ++i )
      {
        if ( i >= (unsigned int)v83 )
          goto LABEL_104;
        v86 = &v84->klass + i;
        gameObject = (UnityEngine_Component_o *)v86[4];
        if ( !gameObject )
          goto LABEL_103;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__49324048(
                                                                         (UnityEngine_Component_o *)v86[4],
                                                                         (const MethodInfo_2F0A010 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_103;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v88 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v88, method);
          }
        }
        else
        {
          v88 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_70154432((UnityEngine_Object_o *)gameObject, 0LL);
        v83 = (int)v84->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                     v82,
                                                                     (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_103;
    v89 = (int)this->fields.__2__current;
    v90 = this;
    if ( v89 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v80->fields.__2__current;
    if ( (int)++v81 >= _2__current )
      goto LABEL_68;
  }
  v91 = 0;
  while ( 1 )
  {
    if ( v91 >= v89 )
      goto LABEL_104;
    v92 = &v90->klass + (int)v91;
    v93 = (UnityEngine_Component_o *)v92[4];
    if ( !v93 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__49324048(
                                                                     (UnityEngine_Component_o *)v92[4],
                                                                     (const MethodInfo_2F0A010 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_103;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v93 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v93, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v94 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v94, method);
      }
    }
    else
    {
      v94 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_70154432((UnityEngine_Object_o *)v93, 0LL);
    v89 = (int)v90->fields.__2__current;
    if ( (int)++v91 >= v89 )
      goto LABEL_67;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changeNextSceneCoroutine_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changeNextSceneCoroutine_d__39__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeNextSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_AvalonSceneManager__changeNextSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall AvalonSceneManager__changeNextSceneCoroutine_d__39__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeNextSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changeNextSceneCoroutine_d__39__System_IDisposable_Dispose(
        AvalonSceneManager__changeNextSceneCoroutine_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__38___ctor(
        AvalonSceneManager__changePrevSceneCoroutine_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__38__MoveNext(
        AvalonSceneManager__changePrevSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AvalonSceneManager__changePrevSceneCoroutine_d__38_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v25; // x0
  int32_t v26; // w8
  float duration_5__2; // s0
  int32_t v28; // w1
  PartyOrganizationUtility_o *v29; // x19
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w8
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  bool result; // w0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_Object_o *targetRoot; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  const MethodInfo *v64; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__38_o *v65; // x22
  __int64 v66; // x1
  UnityEngine_Object_o *v67; // x21
  int32_t v68; // w19
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v71; // x2
  __int64 v72; // x1
  UnityEngine_Object_o *v73; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4B157D4 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v19, v20);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)sub_1BCA7E0(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v21,
                                                                     v22);
    byte_4B157D4 = 1;
  }
  m_Handle = 0;
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
      v25 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
        v25 = AvalonSceneManager_TypeInfo;
        fadeType = _4__this->fields.fadeType;
      }
      LODWORD(v8->fields._duration_5__2) = LODWORD(v25->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(fadeType - 1) > 1 )
        goto LABEL_11;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v8->fields.fadeTimeSkip )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      v8->fields._duration_5__2 = 0.0;
LABEL_14:
      v26 = _4__this->fields.fadeType;
      if ( v26 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v8->fields._duration_5__2;
        v28 = 2;
      }
      else
      {
        if ( v26 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v8->fields._duration_5__2;
        v28 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v28, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v8->fields.__2__current = 0LL;
        v29 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v29, 0LL, v45, v46, v47, v48, v49, v50);
        v36 = 2;
LABEL_32:
        *(_DWORD *)&v29[-1].fields._IsQuestStartMenuMode_k__BackingField = v36;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__InitTurotialArrowMark((CommonUI_o *)this, 0LL);
      if ( v8->fields.changeType <= 1u )
      {
        if ( !_4__this )
          goto LABEL_55;
        if ( _4__this->fields.prevscenetemp )
        {
          targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          if ( UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)_4__this->fields.targetRoot;
            if ( !this )
              goto LABEL_55;
            ((void (__fastcall *)(AvalonSceneManager__changePrevSceneCoroutine_d__38_o *, Il2CppMethodPointer))this->klass->vtable._7_System_Collections_IEnumerator_get_Current.method)(
              this,
              this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr);
          }
          _4__this->fields.prevscenetemp = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.prevscenetemp, 0LL, v58, v59, v60, v61, v62, v63);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)System_Collections_Generic_Stack_object___Pop(
                                                                             (System_Collections_Generic_Stack_T__o *)this,
                                                                             (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !this )
              goto LABEL_55;
            v65 = this;
            v67 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                            (AvalonSceneManager_o *)this,
                                            *(System_String_o **)&this->fields.__1__state,
                                            v64);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Object__op_Inequality(
                                                                             v67,
                                                                             0LL,
                                                                             0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v67 )
                goto LABEL_55;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v67,
                     *(System_String_o **)&v65->fields.__1__state,
                     0LL) )
              {
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v67,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v67->klass[1]._1.this_arg.bits)(
                  v67,
                  v67->klass[1]._1.element_class);
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v67,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
            }
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)_4__this->fields.scenestack;
            if ( !this )
              goto LABEL_55;
          }
          if ( !v8->fields.changeType )
          {
            v8->fields.__2__current = 0LL;
            v29 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v29, 0LL, v51, v52, v53, v54, v55, v56);
            v36 = 3;
            goto LABEL_32;
          }
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
          v68 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v68 >= 0 )
          {
            while ( 1 )
            {
              if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, method);
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v68, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                               (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                               0LL);
              v73 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v71);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
              this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Object__op_Inequality(
                                                                               v73,
                                                                               0LL,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v73 )
                  goto LABEL_55;
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v73,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              if ( --v68 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_55:
        sub_1BCAA3C(this, method);
      }
      return 0;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_14;
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
      v29 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v29, 0LL, v30, v31, v32, v33, v34, v35);
      v36 = 4;
      goto LABEL_32;
    case 4:
      v8->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v37);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v8->fields.__2__current = 0LL;
      v29 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v29, 0LL, v38, v39, v40, v41, v42, v43);
      v36 = 5;
      goto LABEL_32;
    case 5:
      result = 0;
      v8->fields.__1__state = -1;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changePrevSceneCoroutine_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changePrevSceneCoroutine_d__38__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changePrevSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_AvalonSceneManager__changePrevSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall AvalonSceneManager__changePrevSceneCoroutine_d__38__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changePrevSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changePrevSceneCoroutine_d__38__System_IDisposable_Dispose(
        AvalonSceneManager__changePrevSceneCoroutine_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__changeSceneCoroutine_d__37___ctor(
        AvalonSceneManager__changeSceneCoroutine_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__changeSceneCoroutine_d__37__MoveNext(
        AvalonSceneManager__changeSceneCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v20; // w22
  const MethodInfo *v21; // x2
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v22; // x21
  bool v23; // w0
  const MethodInfo *v24; // x2
  bool v25; // w0
  const MethodInfo *v26; // x2
  bool v27; // w0
  const MethodInfo *v28; // x2
  System_String_o *v29; // x2
  const MethodInfo *v30; // x4
  System_Collections_IEnumerator_o *v31; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  __int64 v42; // x1
  PartyOrganizationUtility_o *v43; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int v50; // w8
  System_Collections_IEnumerator_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_IEnumerator_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Action_o *callback; // x0
  const MethodInfo *v66; // x2
  int32_t ConnectMarkEventId; // w1
  bool v68; // w2
  bool v69; // w0
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v70; // x22

  v4 = this;
  if ( (byte_4B157D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_GC_TypeInfo, method, v2);
    sub_1BCA7E0(&SceneList_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)sub_1BCA7E0(
                                                                 &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                 v15,
                                                                 v16);
    byte_4B157D5 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      scenename = v4->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
      SceneType = SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)(SceneType - 10) > 0x3E
        || ((1LL << ((unsigned __int8)SceneType - 10)) & 0x400C000053400001LL) == 0 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
        goto LABEL_55;
      }
      v20 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_55;
      v22 = this;
      v23 = AvalonSceneManager__checkNowScene(_4__this, 10, v21);
      if ( v20 != 38 || !v23 )
      {
        v25 = AvalonSceneManager__checkNowScene(_4__this, 9, v24);
        if ( v20 != 10 || !v25 )
        {
          v27 = AvalonSceneManager__checkNowScene(_4__this, 9, v26);
          if ( v20 != 38 || !v27 )
          {
            if ( AvalonSceneManager__checkNowScene(_4__this, 39, v28)
              && v20 <= 0x3D
              && ((1LL << v20) & 0x3000010000000000LL) != 0 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                ConnectMarkEventId = 0;
                v68 = 0;
                goto LABEL_53;
              }
LABEL_55:
              sub_1BCAA3C(this, method);
            }
            v69 = AvalonSceneManager__checkNowScene(_4__this, 9, v66);
            if ( v20 == 34 && v69 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_55;
              v68 = 1;
              ConnectMarkEventId = 0;
            }
            else
            {
              if ( v22 && v20 == 32 && !LOBYTE(v22[2].monitor) )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
                  goto LABEL_17;
                }
                goto LABEL_55;
              }
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v70 = this;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
              if ( !v70 )
                goto LABEL_55;
              v68 = 1;
              this = v70;
              ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
            }
LABEL_53:
            CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v68, 0LL);
            if ( !v22 )
              goto LABEL_18;
            goto LABEL_17;
          }
        }
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
      if ( v22 )
LABEL_17:
        LOBYTE(v22[2].monitor) = 0;
LABEL_18:
      v31 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v4->fields.changeType,
              v29,
              v4->fields.fadeTimeSkip,
              v30);
      v4->fields.__2__current = (Il2CppObject *)v31;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v31, v33, v34, v35, v36, v37, v38);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      changeType = v4->fields.changeType;
      v4->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_27;
      v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v41, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v42);
      System_GC__Collect_63447616(0LL);
      v4->fields.__2__current = (Il2CppObject *)v41;
      v43 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v43, (int64_t)v41, v44, v45, v46, v47, v48, v49);
      v50 = 2;
      goto LABEL_29;
    case 2:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v51 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v51;
      v43 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v43, (int64_t)v51, v52, v53, v54, v55, v56, v57);
      v50 = 3;
      goto LABEL_29;
    case 3:
      v4->fields.__1__state = -1;
LABEL_27:
      if ( !_4__this )
        goto LABEL_55;
      v58 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v4->fields.changeType, v4->fields.scenename, v3);
      v4->fields.__2__current = (Il2CppObject *)v58;
      v43 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v43, (int64_t)v58, v59, v60, v61, v62, v63, v64);
      v50 = 4;
LABEL_29:
      *(_DWORD *)&v43[-1].fields._IsQuestStartMenuMode_k__BackingField = v50;
      return 1;
    case 4:
      callback = v4->fields.callback;
      v4->fields.__1__state = -1;
      ActionExtensions__Call(callback, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AvalonSceneManager__changeSceneCoroutine_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__changeSceneCoroutine_d__37__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__changeSceneCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AvalonSceneManager__changeSceneCoroutine_d__37_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall AvalonSceneManager__changeSceneCoroutine_d__37__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__changeSceneCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__changeSceneCoroutine_d__37__System_IDisposable_Dispose(
        AvalonSceneManager__changeSceneCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__checkUnloadScenes_d__16___ctor(
        AvalonSceneManager__checkUnloadScenes_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__checkUnloadScenes_d__16__MoveNext(
        AvalonSceneManager__checkUnloadScenes_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager__checkUnloadScenes_d__16_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t _1__state; // w9
  struct AvalonSceneManager_o *_4__this; // x8
  _BOOL4 bContinue_5__2; // w9
  __int64 v17; // x1
  Il2CppObject *current; // x20
  int32_t *p_m_Handle; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v29; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B157D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10, v11);
    this = (AvalonSceneManager__checkUnloadScenes_d__16_o *)sub_1BCA7E0(
                                                              &UnityEngine_SceneManagement_SceneManager_TypeInfo,
                                                              v12,
                                                              v13);
    byte_4B157D6 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  m_Handle = 0;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    bContinue_5__2 = v3->fields._bContinue_5__2;
    v3->fields.__1__state = -1;
    if ( !bContinue_5__2 )
    {
      if ( _4__this )
      {
        m_listUnloadScenes = _4__this->fields.m_listUnloadScenes;
        if ( m_listUnloadScenes )
        {
          size = m_listUnloadScenes->fields._size;
          v29 = m_listUnloadScenes->fields._version + 1;
          m_listUnloadScenes->fields._size = 0;
          m_listUnloadScenes->fields._version = v29;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0LL);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_1BCAA3C(this, method);
    }
  }
  else
  {
    this = 0LL;
    if ( _1__state )
      return (char)this;
    v3->fields.__1__state = -1;
    v3->fields._bContinue_5__2 = 1;
  }
  v3->fields._bContinue_5__2 = 0;
  if ( !_4__this )
    goto LABEL_22;
  this = (AvalonSceneManager__checkUnloadScenes_d__16_o *)_4__this->fields.m_listUnloadScenes;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo, v17);
    m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName((System_String_o *)current, 0LL).fields.m_Handle;
    p_m_Handle = &m_Handle;
    if ( UnityEngine_SceneManagement_Scene__get_buildIndex((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL) >= 1 )
    {
      v3->fields._bContinue_5__2 = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v21, v22, v23, v24, v25, v26);
  LOBYTE(this) = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return (char)this;
}


Il2CppObject *__fastcall AvalonSceneManager__checkUnloadScenes_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__checkUnloadScenes_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__checkUnloadScenes_d__16__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__checkUnloadScenes_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AvalonSceneManager__checkUnloadScenes_d__16_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall AvalonSceneManager__checkUnloadScenes_d__16__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__checkUnloadScenes_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__checkUnloadScenes_d__16__System_IDisposable_Dispose(
        AvalonSceneManager__checkUnloadScenes_d__16_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AvalonSceneManager__setupUI_d__40___ctor(
        AvalonSceneManager__setupUI_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__setupUI_d__40__MoveNext(
        AvalonSceneManager__setupUI_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v31; // x20
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  int32_t v34; // w21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  int32_t v38; // w8
  System_Action_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x22
  __int64 v55; // x1
  System_Func_bool__o *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  UnityEngine_WaitUntil_o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  if ( (byte_4B157D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&OptionManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__, v15, v16);
    sub_1BCA7E0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__, v17, v18);
    sub_1BCA7E0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__, v19, v20);
    sub_1BCA7E0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__, v21, v22);
    sub_1BCA7E0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__, v23, v24);
    sub_1BCA7E0(&AvalonSceneManager___c__DisplayClass40_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v27, v28);
    byte_4B157D7 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v38 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v31 = sub_1BCAA2C(AvalonSceneManager___c__DisplayClass40_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v31, 0LL);
    if ( !v31 )
      goto LABEL_40;
    *(_DWORD *)(v31 + 16) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v33);
    v34 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v31 + 16) = 1;
    }
    else
    {
      v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v31,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
      AtlasManager__LoadUISkin(v39, 7, v34, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v31 + 17) = 1;
    }
    else
    {
      v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v31,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v45);
      AtlasManager__LoadUISkin(v44, 1, v34, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_40:
      sub_1BCAA3C(Instance, v33);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v31 + 18) = 1;
    }
    else
    {
      v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v31,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50);
      AtlasManager__LoadUISkin(v49, 2, v34, 0LL);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v46);
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v31 + 19) = 1;
    }
    else
    {
      v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v31,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v55);
      CommonEffectManager__LoadSkinEffects(v54, v34, 0LL);
    }
    v56 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v51, v52, v53);
    System_Func_bool____ctor(
      v56,
      (Il2CppObject *)v31,
      Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__,
      0LL);
    v60 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v57, v58, v59);
    UnityEngine_WaitUntil___ctor(v60, v56, 0LL);
    this->fields.__2__current = (Il2CppObject *)v60;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v60, v61, v62, v63, v64, v65, v66);
    v38 = 1;
    result = 1;
  }
  this->fields.__1__state = v38;
  return result;
}


Il2CppObject *__fastcall AvalonSceneManager__setupUI_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AvalonSceneManager__setupUI_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__setupUI_d__40__System_Collections_IEnumerator_Reset(
        AvalonSceneManager__setupUI_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AvalonSceneManager__setupUI_d__40_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall AvalonSceneManager__setupUI_d__40__System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__setupUI_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__setupUI_d__40__System_IDisposable_Dispose(
        AvalonSceneManager__setupUI_d__40_o *this,
        const MethodInfo *method)
{
  ;
}