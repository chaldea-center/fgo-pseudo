void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5A769 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    byte_4A5A769 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5A768 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
    sub_1B885B0(&System_Collections_Generic_Stack_SceneTemp__TypeInfo);
    byte_4A5A768 = 1;
  }
  v3 = (System_Collections_Generic_Stack_T__o *)sub_1B887FC(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v3,
    (const MethodInfo_3752A70 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scenestack, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.m_listUnloadScenes, (int32_t)v6, v7, v8);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_2E69590 *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Component_o *v13; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v16; // x0
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v20; // x0
  const MethodInfo_2E69768 *v21; // x1
  System_RuntimeTypeHandle_o v22; // 0:w0.4
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&BattleRootComponent_var);
    sub_1B885B0(&BattleRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1BDA48C(method->rgctx_data->_0_T);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v12 = (UnityEngine_Component_o *)sub_1B886EC(targetRoot, _0_T);
      if ( !v12 )
      {
        sub_1B88ACC(targetRoot);
        AvalonSceneManager__UnloadScene_object_(v20, v21);
        return;
      }
      v13 = v12;
      gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v22.fields.value = (int)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
        v23.fields.value = (int)BattleRootComponent_var;
        v16 = System_Type__GetTypeFromHandle(v23, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v16, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_18;
        methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BattleRootComponent_c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        {
          monitor = v13[3].monitor;
          if ( monitor )
          {
            gameObject = (UnityEngine_GameObject_o *)monitor[62];
            if ( gameObject )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0LL);
LABEL_18:
              if ( forceUnload )
              {
                SceneName = SceneRootComponent__getSceneName((SceneRootComponent_o *)v13, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69511400(SceneName, 0LL);
              }
              return;
            }
          }
        }
      }
    }
    sub_1B8880C(gameObject, v9);
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
  if ( (byte_4A5A767 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4A5A767 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1B8880C(this, method);
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
  if ( (byte_4A5A752 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4A5A752 = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1B8880C(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_4A5A755 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4A5A755 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1B8880C(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_2E69924 *method)
{
  const MethodInfo_2E69924_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__45_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v7; // x0
  const MethodInfo_2E69924_RGCTXs *v8; // x8
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = sub_1BDA48C(_0_AvalonSceneManager__UnloadSceneAsync_d__45_T);
  v7 = (AvalonSceneManager__UnloadSceneAsync_d__45_T__o *)sub_1B887FC(_0_AvalonSceneManager__UnloadSceneAsync_d__45_T);
  v8 = method->rgctx_data;
  v9 = v7;
  AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
    v7,
    0,
    (const MethodInfo_31887B0 *)v8->_1_AvalonSceneManager__UnloadSceneAsync_d__45_T___ctor);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  v9->fields.callback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.callback, (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_2E69768 *method)
{
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  Il2CppClass *_0_T; // x1
  __int64 v9; // x22
  Il2CppClass *v10; // x21
  UnityEngine_Object_o *v11; // x0
  int32_t *v12; // x0
  System_String_o *name; // x21
  AvalonSceneManager_o *v14; // x0
  System_Action_o *v15; // x1
  const MethodInfo_2E69924 *v16; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
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
      sub_1B8880C(0LL, v6);
    if ( !RootGameObjects->max_length )
      sub_1B88814(RootGameObjects, v6);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_0_T);
    v9 = sub_1B886EC(Component_object, _0_T);
    v10 = method->rgctx_data->_0_T;
    if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_0_T);
    if ( v9 )
    {
      v11 = (UnityEngine_Object_o *)sub_1B886EC(v9, v10);
      if ( !v11 )
      {
        sub_1B88ACC(v9);
        AvalonSceneManager__UnloadSceneAsync_object_(v14, v15, v16);
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
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69511400(name, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A764 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo);
    byte_4A5A764 = 1;
  }
  v7 = sub_1B887FC(AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)scenename, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__changePrevSceneCoroutine(
        AvalonSceneManager_o *this,
        int32_t changeType,
        System_String_o *scenename,
        bool fadeTimeSkip,
        const MethodInfo *method)
{
  bool v8; // w22
  __int64 v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A763 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo);
    byte_4A5A763 = 1;
  }
  v8 = fadeTimeSkip;
  v9 = sub_1B887FC(AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 44) = changeType;
  *(_BYTE *)(v9 + 40) = v8;
  return (System_Collections_IEnumerator_o *)v9;
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

  if ( (byte_4A5A75F & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5A75F = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38285184(this, 2, SceneName, fade, data, 0, v10);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5A762 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo);
    byte_4A5A762 = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1B887FC(AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)this, v13, v14);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)scenename, v15, v16);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 56), (int32_t)callback, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


bool __fastcall AvalonSceneManager__changeScene_38285184(
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
  int32_t v17; // w3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v19; // x23
  int32_t SceneType; // w23
  int32_t v21; // w0
  const MethodInfo *v22; // x5
  TerminalSceneComponent_c *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_4A5A760 & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5A760 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v15);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sendData, (int32_t)data, v16, v17);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v19 = prevscenetemp->fields.sceneName;
  else
    v19 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v19, 0LL);
  v21 = SceneList__getSceneType(scenename, 0LL);
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
  v25 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_38286104(
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
  int32_t v17; // w3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v19; // x23
  int32_t SceneType; // w23
  int32_t v21; // w0
  const MethodInfo *v22; // x5
  TerminalSceneComponent_c *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_4A5A761 & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5A761 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v15);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sendData, (int32_t)data, v16, v17);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v19 = prevscenetemp->fields.sceneName;
  else
    v19 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v19, 0LL);
  v21 = SceneList__getSceneType(scenename, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_38286856(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_38285184(this, 2, scenename, fade, data, 0, v5);
}


bool __fastcall AvalonSceneManager__checkLoadedScene(
        AvalonSceneManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x19
  int32_t *p_m_Handle; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A759 & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4A5A759 = 1;
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
  System_String_o *SceneName; // x0
  __int64 v6; // x1
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_4A5A757 & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5A757 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_1B8880C(SceneName, v6);
  return System_String__op_Equality(SceneName, prevscenetemp->fields.sceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x20
  System_String_o *SceneName; // x0

  if ( (byte_4A5A758 & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_4A5A758 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1B8880C(0LL, *(_QWORD *)&type);
  v6 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_3752FF4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v6 )
  {
    v7 = v6;
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(type, 0LL);
    LOBYTE(v6) = System_String__op_Equality(SceneName, (System_String_o *)v7[1].klass, 0LL);
  }
  return (char)v6;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A753 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo);
    byte_4A5A753 = 1;
  }
  v3 = sub_1B887FC(AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_Stack_T__o *v20; // x1
  Il2CppClass **v21; // x0
  System_Collections_IEnumerator_o *v22; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A754 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
    byte_4A5A754 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.prevscenetemp, 0, v2, v3);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_16;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_3752C44 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetRoot, 0, v7, v8);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v10 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v10, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69511400(name, 0LL);
      m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
      v14 = &m_Handle;
      scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                              (UnityEngine_SceneManagement_Scene_o)v14,
                                                              0LL);
      if ( !m_listUnloadScenes )
        break;
      items = m_listUnloadScenes->fields._items;
      v18 = Method_System_Collections_Generic_List_string__Add__;
      ++m_listUnloadScenes->fields._version;
      if ( !items )
        break;
      size = m_listUnloadScenes->fields._size;
      v20 = scenestack;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          m_listUnloadScenes,
          (Il2CppObject *)scenestack,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        m_listUnloadScenes->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
      }
      if ( --v10 < 0 )
        goto LABEL_15;
    }
LABEL_16:
    sub_1B8880C(scenestack, v5);
  }
LABEL_15:
  v22 = AvalonSceneManager__checkUnloadScenes(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
}


void __fastcall AvalonSceneManager__endInitialize(
        AvalonSceneManager_o *this,
        SceneRootComponent_o *comp,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_sendData; // x0
  Il2CppObject *v5; // x20
  Il2CppObject *sendData; // t1
  __int64 v8; // x0
  __int64 v9; // x1

  sendData = this->fields.sendData;
  p_sendData = (ServantStatusBattleListViewItem_o *)&this->fields.sendData;
  v5 = sendData;
  p_sendData->klass = 0LL;
  sub_1B88554(p_sendData, 0, (int32_t)method, v3);
  if ( !comp )
    sub_1B8880C(v8, v9);
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

  if ( (byte_4A5A756 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
    byte_4A5A756 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1B8880C(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_3752FF4 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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

  if ( (byte_4A5A751 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4A5A751 = 1;
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
          sub_1B88814(RootGameObjects, v8);
        RootGameObjects = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
      sub_1B8880C(RootGameObjects, v8);
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

  return AvalonSceneManager__popScene_38285628(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_38285628(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_38285628(
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

  if ( (byte_4A5A75B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4A5A75B = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v10 = *((_DWORD *)scenestack + 6);
  if ( v10 < 1 )
    return v10 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1B8880C(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v12 = 5;
  else
    v12 = 4;
  AvalonSceneManager__changeScene_38285184(this, v12, *((System_String_o **)scenestack + 2), fade, data, 0, v11);
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

  if ( (byte_4A5A75A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    byte_4A5A75A = 1;
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
        (const MethodInfo_3753098 *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_38285184(this, 3, SceneName, fade, data, 0, v15) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_38285184(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v17);
      return 0;
    }
LABEL_17:
    sub_1B8880C(scenestack, v11);
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

  if ( (byte_4A5A766 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A766 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1B8880C(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A5A765 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager__setupUI_d__40_TypeInfo);
    byte_4A5A765 = 1;
  }
  v2 = sub_1B887FC(AvalonSceneManager__setupUI_d__40_TypeInfo);
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

  if ( (byte_4A5A75C & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5A75C = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38285184(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_4A5A75E & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5A75E = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38285184(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_38285956(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4A5A75D & 1) == 0 )
  {
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5A75D = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38286104(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_38286832(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_38285184(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        int32_t 1__state,
        const MethodInfo_31887B0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_31887DC *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v6; // w21
  int32_t *p_m_Handle; // x0
  void *asyncOp_5__2; // x0
  Il2CppObject *Component_object; // x22
  Il2CppClass *_1_T; // x1
  __int64 v11; // x23
  Il2CppClass *v12; // x22
  UnityEngine_Object_o *v13; // x0
  int32_t *v14; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject **p__2__current; // x19
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v22; // x0
  const MethodInfo_3188A14 *v23; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6104B & 1) == 0 )
  {
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4A6104B = 1;
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
      sub_1B8880C(asyncOp_5__2, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)asyncOp_5__2, 0LL) )
      goto LABEL_30;
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v19, v20);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v6 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v6 & 0x80000000) == 0 )
      {
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v6, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        asyncOp_5__2 = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                         (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                         0LL);
        if ( !asyncOp_5__2 )
          goto LABEL_33;
        if ( !*((_DWORD *)asyncOp_5__2 + 6) )
          sub_1B88814(asyncOp_5__2, method);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *((UnityEngine_GameObject_o **)asyncOp_5__2 + 4),
                             (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        _1_T = method->klass->rgctx_data->_1_T;
        if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
          _1_T = (Il2CppClass *)sub_1BDA48C(method->klass->rgctx_data->_1_T);
        v11 = sub_1B886EC(Component_object, _1_T);
        v12 = method->klass->rgctx_data->_1_T;
        if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
          v12 = (Il2CppClass *)sub_1BDA48C(method->klass->rgctx_data->_1_T);
        if ( v11 )
        {
          v13 = (UnityEngine_Object_o *)sub_1B886EC(v11, v12);
          if ( !v13 )
          {
            sub_1B88ACC(v11);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v22,
                                      v23);
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
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          v16 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69511400(name, 0LL);
          this->fields._asyncOp_5__2 = v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._asyncOp_5__2, (int32_t)v16, v17, v18);
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
        const MethodInfo_3188A14 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_3188A1C *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B887FC(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B886D8(v4, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_3188A50 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_31887D8 *method)
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
  int32_t v3; // w3
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v4; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  UnityEngine_Object_o *targetRoot; // x22
  bool v7; // w22
  bool v8; // w0
  int32_t v9; // w2
  int32_t v10; // w3
  struct SceneRootComponent_o *v11; // x1
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *v14; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  bool v18; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v23; // x2
  SceneRootComponent_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *v27; // x22
  System_String_o *v28; // x21
  ServantStatusBattleListViewItem_o *v29; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  SceneRootComponent_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *v35; // x22
  System_String_o *v36; // x22
  int32_t *v37; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v39; // x22
  unsigned int v40; // w27
  UnityEngine_GameObject_o *v41; // x23
  int v42; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v43; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v45; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v47; // x0
  int v48; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v49; // x23
  unsigned int v50; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v51; // x8
  UnityEngine_Component_o *v52; // x24
  UnityEngine_Object_c *v53; // x0
  UnityEngine_Object_o *v54; // x22
  UnityEngine_Object_o *v55; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c *klass; // x8
  void (*v57)(void); // x9
  SceneRootComponent_o *v58; // x22
  SceneTemp_o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  struct SceneRootComponent_o *v62; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o **p_targetRoot; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x19
  ServantStatusBattleListViewItem_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v72; // x22
  UnityEngine_Object_o *v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x20
  ServantStatusBattleListViewItem_o *v77; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A5A76A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponents_Component___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1B885B0(&SceneTemp_TypeInfo);
    sub_1B885B0(&StringLiteral_3246/*"BattleScriptScene"*/);
    sub_1B885B0(&StringLiteral_3244/*"BattleScene"*/);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A76A = 1;
  }
  m_Handle = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields._newTargetRoot_5__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, 0, (int32_t)v2, v3);
      if ( !_4__this )
        goto LABEL_103;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v8 = System_String__op_Equality(v4->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v7 )
        goto LABEL_11;
      if ( v8 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_103;
      v8 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v4->fields.scenename, 0LL);
LABEL_11:
      if ( v8 )
      {
LABEL_12:
        v11 = _4__this->fields.targetRoot;
        v4->fields._newTargetRoot_5__2 = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v11, v9, v10);
      }
      if ( v4->fields.changeType <= 1u
        && System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3246/*"BattleScriptScene"*/, 0LL) )
      {
        v12 = System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3244/*"BattleScene"*/, 0LL);
        if ( v12 )
        {
          v14 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v12, v13);
          v4->fields.__2__current = (Il2CppObject *)v14;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v14, v16, v17);
          v18 = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return v18;
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
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_SceneManagement_Scene__get_isLoaded(
                                                                       (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_26;
      if ( !_4__this )
        goto LABEL_103;
      v24 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v4->fields.scenename, v23);
      v4->fields._newTargetRoot_5__2 = v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v24, v25, v26);
LABEL_26:
      v27 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v27, 0LL, 0LL) )
      {
LABEL_68:
        v54 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_103;
          v55 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_103;
              klass = this->klass;
              if ( v4->fields.changeType == 3 )
                v57 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v57 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v57();
            }
            v72 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v73 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v72, v73, 0LL) )
              goto LABEL_102;
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v4->fields.changeType == 5 )
              {
                v76 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69511400(v76, 0LL);
                goto LABEL_102;
              }
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_102:
                v4->fields.__2__current = 0LL;
                v77 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B88554(v77, 0, v74, v75);
                *(_DWORD *)&v77[-1].fields.isMine = 3;
                return 1;
              }
            }
LABEL_103:
            sub_1B8880C(this, method);
          }
LABEL_80:
          v58 = v4->fields._newTargetRoot_5__2;
          v59 = (SceneTemp_o *)sub_1B887FC(SceneTemp_TypeInfo);
          SceneTemp___ctor_38666888(v59, v58, 0LL);
          if ( !_4__this )
            goto LABEL_103;
          _4__this->fields.prevscenetemp = v59;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.prevscenetemp, (int32_t)v59, v60, v61);
          v62 = v4->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = v62;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&_4__this->fields.targetRoot;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.targetRoot, (int32_t)v62, v64, v65);
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
          if ( (v4->fields.changeType & 0xFFFFFFFE) == 4 )
          {
            sendData = _4__this->fields.sendData;
            p_sendData = (ServantStatusBattleListViewItem_o *)&_4__this->fields.sendData;
            v68 = sendData;
            p_sendData->klass = 0LL;
            sub_1B88554(p_sendData, 0, v66, v67);
            this = *(AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&p_sendData[-1].fields.dispLimitCount.fields.fakeValue;
            if ( !this )
              goto LABEL_103;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__39_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v68,
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
      v28 = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v18 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v28, 1, 0LL);
      v4->fields.__2__current = 0LL;
      v29 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v29, 0, v30, v31);
      *(_DWORD *)&v29[-1].fields.isMine = 2;
      return v18;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_103;
      v32 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v4->fields.scenename, v2);
      v4->fields._newTargetRoot_5__2 = v32;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v4->fields._newTargetRoot_5__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v32, v33, v34);
      v35 = (UnityEngine_Object_o *)v4->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
        return 0;
      v36 = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v36, 0LL).fields.m_Handle;
      v37 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v37,
                                                                       0LL);
      if ( !this )
        goto LABEL_103;
      _2__current = (int)this->fields.__2__current;
      v39 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v40 = 0;
      break;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v40 >= _2__current )
LABEL_104:
      sub_1B88814(this, method);
    v41 = (UnityEngine_GameObject_o *)*((_QWORD *)&v39->fields.__4__this + (int)v40);
    if ( !v41 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                     v41,
                                                                     (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_103;
    v42 = (int)this->fields.__2__current;
    v43 = this;
    if ( v42 >= 1 )
    {
      for ( i = 0; i < v42; ++i )
      {
        if ( i >= (unsigned int)v42 )
          goto LABEL_104;
        v45 = &v43->klass + i;
        gameObject = (UnityEngine_Component_o *)v45[4];
        if ( !gameObject )
          goto LABEL_103;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__48721032(
                                                                         (UnityEngine_Component_o *)v45[4],
                                                                         (const MethodInfo_2E76C88 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_103;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v47 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v47);
          }
        }
        else
        {
          v47 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_69459568((UnityEngine_Object_o *)gameObject, 0LL);
        v42 = (int)v43->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                     v41,
                                                                     (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_103;
    v48 = (int)this->fields.__2__current;
    v49 = this;
    if ( v48 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v39->fields.__2__current;
    if ( (int)++v40 >= _2__current )
      goto LABEL_68;
  }
  v50 = 0;
  while ( 1 )
  {
    if ( v50 >= v48 )
      goto LABEL_104;
    v51 = &v49->klass + (int)v50;
    v52 = (UnityEngine_Component_o *)v51[4];
    if ( !v52 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__48721032(
                                                                     (UnityEngine_Component_o *)v51[4],
                                                                     (const MethodInfo_2E76C88 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_103;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v52 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v52, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v53 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v53);
      }
    }
    else
    {
      v53 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_69459568((UnityEngine_Object_o *)v52, 0LL);
    v48 = (int)v49->fields.__2__current;
    if ( (int)++v50 >= v48 )
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  AvalonSceneManager__changePrevSceneCoroutine_d__38_o *v4; // x19
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v7; // x0
  int32_t v8; // w8
  float duration_5__2; // s0
  int32_t v10; // w1
  ServantStatusBattleListViewItem_o *v11; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  int v14; // w8
  int32_t v15; // w2
  int32_t v16; // w3
  bool result; // w0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *targetRoot; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__38_o *v26; // x22
  UnityEngine_Object_o *v27; // x21
  int32_t v28; // w19
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *v32; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A5A76B & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)sub_1B885B0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__);
    byte_4A5A76B = 1;
  }
  m_Handle = 0;
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
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v4->fields.fadeTimeSkip )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(p__2__current, 0, v2, v3);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      v4->fields._duration_5__2 = 0.0;
LABEL_14:
      v8 = _4__this->fields.fadeType;
      if ( v8 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v10 = 2;
      }
      else
      {
        if ( v8 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v10 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v10, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v4->fields.__2__current = 0LL;
        v11 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v11, 0, v18, v19);
        v14 = 2;
LABEL_32:
        *(_DWORD *)&v11[-1].fields.isMine = v14;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__InitTurotialArrowMark((CommonUI_o *)this, 0LL);
      if ( v4->fields.changeType <= 1u )
      {
        if ( !_4__this )
          goto LABEL_55;
        if ( _4__this->fields.prevscenetemp )
        {
          targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.prevscenetemp, 0, v23, v24);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)System_Collections_Generic_Stack_object___Pop(
                                                                             (System_Collections_Generic_Stack_T__o *)this,
                                                                             (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !this )
              goto LABEL_55;
            v26 = this;
            v27 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                            (AvalonSceneManager_o *)this,
                                            *(System_String_o **)&this->fields.__1__state,
                                            v25);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Object__op_Inequality(
                                                                             v27,
                                                                             0LL,
                                                                             0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v27 )
                goto LABEL_55;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v27,
                     *(System_String_o **)&v26->fields.__1__state,
                     0LL) )
              {
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v27,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v27->klass[1]._1.this_arg.bits)(
                  v27,
                  v27->klass[1]._1.element_class);
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v27,
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
          if ( !v4->fields.changeType )
          {
            v4->fields.__2__current = 0LL;
            v11 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v11, 0, v20, v21);
            v14 = 3;
            goto LABEL_32;
          }
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          v28 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v28 >= 0 )
          {
            while ( 1 )
            {
              if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v28, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                               (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                               0LL);
              v32 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v31);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Object__op_Inequality(
                                                                               v32,
                                                                               0LL,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v32 )
                  goto LABEL_55;
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v32,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              if ( --v28 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_55:
        sub_1B8880C(this, method);
      }
      return 0;
    case 1:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_14;
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
      v11 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v11, 0, v12, v13);
      v14 = 4;
      goto LABEL_32;
    case 4:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v4->fields.__2__current = 0LL;
      v11 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v11, 0, v15, v16);
      v14 = 5;
      goto LABEL_32;
    case 5:
      result = 0;
      v4->fields.__1__state = -1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  const MethodInfo *v2; // x3
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v3; // x19
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v7; // w22
  const MethodInfo *v8; // x2
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v9; // x21
  bool v10; // w0
  const MethodInfo *v11; // x2
  bool v12; // w0
  const MethodInfo *v13; // x2
  bool v14; // w0
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  const MethodInfo *v17; // x4
  System_Collections_IEnumerator_o *v18; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  bool result; // w0
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v24; // x20
  ServantStatusBattleListViewItem_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  System_Collections_IEnumerator_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_IEnumerator_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Action_o *callback; // x0
  const MethodInfo *v36; // x2
  int32_t ConnectMarkEventId; // w1
  bool v38; // w2
  bool v39; // w0
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v40; // x22

  v3 = this;
  if ( (byte_4A5A76C & 1) == 0 )
  {
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5A76C = 1;
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
        this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
        goto LABEL_55;
      }
      v7 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_55;
      v9 = this;
      v10 = AvalonSceneManager__checkNowScene(_4__this, 10, v8);
      if ( v7 != 38 || !v10 )
      {
        v12 = AvalonSceneManager__checkNowScene(_4__this, 9, v11);
        if ( v7 != 10 || !v12 )
        {
          v14 = AvalonSceneManager__checkNowScene(_4__this, 9, v13);
          if ( v7 != 38 || !v14 )
          {
            if ( AvalonSceneManager__checkNowScene(_4__this, 39, v15)
              && v7 <= 0x3D
              && ((1LL << v7) & 0x3000010000000000LL) != 0 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                ConnectMarkEventId = 0;
                v38 = 0;
                goto LABEL_53;
              }
LABEL_55:
              sub_1B8880C(this, method);
            }
            v39 = AvalonSceneManager__checkNowScene(_4__this, 9, v36);
            if ( v7 == 34 && v39 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_55;
              v38 = 1;
              ConnectMarkEventId = 0;
            }
            else
            {
              if ( v9 && v7 == 32 && !LOBYTE(v9[2].monitor) )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
                  goto LABEL_17;
                }
                goto LABEL_55;
              }
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v40 = this;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !v40 )
                goto LABEL_55;
              v38 = 1;
              this = v40;
              ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
            }
LABEL_53:
            CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v38, 0LL);
            if ( !v9 )
              goto LABEL_18;
            goto LABEL_17;
          }
        }
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
      if ( v9 )
LABEL_17:
        LOBYTE(v9[2].monitor) = 0;
LABEL_18:
      v18 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v3->fields.changeType,
              v16,
              v3->fields.fadeTimeSkip,
              v17);
      v3->fields.__2__current = (Il2CppObject *)v18;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v18, v20, v21);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_27;
      v24 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v24, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v3->fields.__2__current = (Il2CppObject *)v24;
      v25 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(v25, (int32_t)v24, v26, v27);
      v28 = 2;
      goto LABEL_29;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v29 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v29;
      v25 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(v25, (int32_t)v29, v30, v31);
      v28 = 3;
      goto LABEL_29;
    case 3:
      v3->fields.__1__state = -1;
LABEL_27:
      if ( !_4__this )
        goto LABEL_55;
      v32 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v3->fields.changeType, v3->fields.scenename, v2);
      v3->fields.__2__current = (Il2CppObject *)v32;
      v25 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(v25, (int32_t)v32, v33, v34);
      v28 = 4;
LABEL_29:
      *(_DWORD *)&v25[-1].fields.isMine = v28;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AvalonSceneManager__changeSceneCoroutine_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  AvalonSceneManager__checkUnloadScenes_d__16_o *v2; // x19
  int32_t _1__state; // w9
  struct AvalonSceneManager_o *_4__this; // x8
  _BOOL4 bContinue_5__2; // w9
  Il2CppObject *current; // x20
  int32_t *p_m_Handle; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v13; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A5A76D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    this = (AvalonSceneManager__checkUnloadScenes_d__16_o *)sub_1B885B0(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    byte_4A5A76D = 1;
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
            System_Array__Clear((System_Array_o *)m_listUnloadScenes->fields._items, 0, size, 0LL);
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
LABEL_22:
      sub_1B8880C(this, method);
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
  this = (AvalonSceneManager__checkUnloadScenes_d__16_o *)_4__this->fields.m_listUnloadScenes;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
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
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, 0, v9, v10);
  LOBYTE(this) = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AvalonSceneManager__checkUnloadScenes_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5A76E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__);
    sub_1B885B0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__);
    sub_1B885B0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__);
    sub_1B885B0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__);
    sub_1B885B0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__);
    sub_1B885B0(&AvalonSceneManager___c__DisplayClass40_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5A76E = 1;
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
    v5 = sub_1B887FC(AvalonSceneManager___c__DisplayClass40_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !v5 )
      goto LABEL_40;
    *(_DWORD *)(v5 + 16) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v5 + 16) = 1;
    }
    else
    {
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v10, 7, v8, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v5 + 17) = 1;
    }
    else
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v11, 1, v8, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_40:
      sub_1B8880C(Instance, v7);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v5 + 18) = 1;
    }
    else
    {
      v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v12, 2, v8, 0LL);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v5 + 19) = 1;
    }
    else
    {
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)v5,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v13, v8, 0LL);
    }
    v14 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__,
      0LL);
    v15 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v15, v14, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v15, v16, v17);
    v9 = 1;
    result = 1;
  }
  this->fields.__1__state = v9;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AvalonSceneManager__setupUI_d__40_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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