void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2D54B & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v1);
    byte_4A2D54B = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Stack_T__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A2D54A & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B761C0(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v5);
    sub_1B761C0(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v6);
    byte_4A2D54A = 1;
  }
  v7 = (System_Collections_Generic_Stack_T__o *)sub_1B7640C(System_Collections_Generic_Stack_SceneTemp__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v7,
    (const MethodInfo_372B174 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v7;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.scenestack, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.m_listUnloadScenes, (int32_t)v10, v11, v12);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3712994 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_2E4C090 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Component_o *v16; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v19; // x0
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v23; // x0
  const MethodInfo_2E4C268 *v24; // x1
  System_RuntimeTypeHandle_o v25; // 0:w0.4
  System_RuntimeTypeHandle_o v26; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B761C0(&BattleRootComponent_var, *(_QWORD *)&sceneType);
    sub_1B761C0(&BattleRootComponent_TypeInfo, v8);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v9);
    sub_1B761C0(&System_Type_TypeInfo, v10);
    if ( !method->rgctx_data )
      sub_1BC80F8(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1BC809C(method->rgctx_data->_0_T);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v15 = (UnityEngine_Component_o *)sub_1B762FC(targetRoot, _0_T);
      if ( !v15 )
      {
        sub_1B766DC(targetRoot);
        AvalonSceneManager__UnloadScene_object_(v23, v24);
        return;
      }
      v16 = v15;
      gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v25.fields.value = (int)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v25, 0LL);
        v26.fields.value = (int)BattleRootComponent_var;
        v19 = System_Type__GetTypeFromHandle(v26, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v19, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_18;
        methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BattleRootComponent_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        {
          monitor = v16[3].monitor;
          if ( monitor )
          {
            gameObject = (UnityEngine_GameObject_o *)monitor[62];
            if ( gameObject )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0LL);
LABEL_18:
              if ( forceUnload )
              {
                SceneName = SceneRootComponent__getSceneName((SceneRootComponent_o *)v16, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69339428(SceneName, 0LL);
              }
              return;
            }
          }
        }
      }
    }
    sub_1B7641C(gameObject, v12);
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
  if ( (byte_4A2D549 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_4A2D549 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1B7641C(this, method);
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
  if ( (byte_4A2D534 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B761C0(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4A2D534 = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1B7641C(this, method);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_4A2D537 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_4A2D537 = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1B7641C(this, method);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_2E4C424 *method)
{
  const MethodInfo_2E4C424_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__45_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v7; // x0
  const MethodInfo_2E4C424_RGCTXs *v8; // x8
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BC80F8(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = sub_1BC809C(_0_AvalonSceneManager__UnloadSceneAsync_d__45_T);
  v7 = (AvalonSceneManager__UnloadSceneAsync_d__45_T__o *)sub_1B7640C(_0_AvalonSceneManager__UnloadSceneAsync_d__45_T);
  v8 = method->rgctx_data;
  v9 = v7;
  AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
    v7,
    0,
    (const MethodInfo_316A6CC *)v8->_1_AvalonSceneManager__UnloadSceneAsync_d__45_T___ctor);
  if ( !v9 )
    sub_1B7641C(v10, v11);
  v9->fields.callback = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v9->fields.callback, (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_2E4C268 *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t i; // w20
  int32_t *p_m_Handle; // x0
  UnityEngine_GameObject_array *RootGameObjects; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x21
  Il2CppClass *_0_T; // x1
  __int64 v11; // x22
  Il2CppClass *v12; // x21
  UnityEngine_Object_o *v13; // x0
  int32_t *v14; // x0
  System_String_o *name; // x21
  AvalonSceneManager_o *v16; // x0
  System_Action_o *v17; // x1
  const MethodInfo_2E4C424 *v18; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B761C0(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    if ( !method->rgctx_data )
      sub_1BC80F8(method);
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
      sub_1B7641C(0LL, v8);
    if ( !RootGameObjects->max_length )
      sub_1B76424(RootGameObjects, v8);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_2EB34A0 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BC809C(method->rgctx_data->_0_T);
    v11 = sub_1B762FC(Component_object, _0_T);
    v12 = method->rgctx_data->_0_T;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1BC809C(method->rgctx_data->_0_T);
    if ( v11 )
    {
      v13 = (UnityEngine_Object_o *)sub_1B762FC(v11, v12);
      if ( !v13 )
      {
        sub_1B766DC(v11);
        AvalonSceneManager__UnloadSceneAsync_object_(v16, v17, v18);
        return;
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( UnityEngine_Object__op_Implicit(v13, 0LL) )
    {
      v14 = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v14, 0LL);
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69339428(name, 0LL);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A2D546 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo, *(_QWORD *)&changeType);
    byte_4A2D546 = 1;
  }
  v7 = sub_1B7640C(AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)scenename, v10, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A2D545 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo, *(_QWORD *)&changeType);
    byte_4A2D545 = 1;
  }
  v8 = fadeTimeSkip;
  v9 = sub_1B7640C(AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v10, v11);
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

  if ( (byte_4A2D541 & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4A2D541 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38104608(this, 2, SceneName, fade, data, 0, v10);
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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A2D544 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo, *(_QWORD *)&changeType);
    byte_4A2D544 = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1B7640C(AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)this, v13, v14);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)scenename, v15, v16);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 56), (int32_t)callback, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_38104608(
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
  int32_t v19; // w3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v21; // x23
  int32_t SceneType; // w23
  int32_t v23; // w0
  const MethodInfo *v24; // x5
  TerminalSceneComponent_c *v25; // x0
  TerminalSceneComponent_c *v26; // x0
  System_Collections_IEnumerator_o *v27; // x0

  if ( (byte_4A2D542 & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v14);
    byte_4A2D542 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v17);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.sendData, (int32_t)data, v18, v19);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_38105528(
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
  int32_t v19; // w3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v21; // x23
  int32_t SceneType; // w23
  int32_t v23; // w0
  const MethodInfo *v24; // x5
  TerminalSceneComponent_c *v25; // x0
  TerminalSceneComponent_c *v26; // x0
  System_Collections_IEnumerator_o *v27; // x0

  if ( (byte_4A2D543 & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v14);
    byte_4A2D543 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v17);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.sendData, (int32_t)data, v18, v19);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_38106280(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_38104608(this, 2, scenename, fade, data, 0, v5);
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

  if ( (byte_4A2D53B & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_4A2D53B = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkNowScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  System_String_o *SceneName; // x0
  __int64 v6; // x1
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_4A2D539 & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4A2D539 = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_1B7641C(SceneName, v6);
  return System_String__op_Equality(SceneName, prevscenetemp->fields.sceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__checkStackScene(AvalonSceneManager_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  Il2CppObject *v7; // x0
  Il2CppObject *v8; // x20
  System_String_o *SceneName; // x0

  if ( (byte_4A2D53A & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, v5);
    byte_4A2D53A = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1B7641C(0LL, *(_QWORD *)&type);
  v7 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_372B6F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
  if ( v7 )
  {
    v8 = v7;
    if ( !SceneList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    SceneName = SceneList__getSceneName(type, 0LL);
    LOBYTE(v7) = System_String__op_Equality(SceneName, (System_String_o *)v8[1].klass, 0LL);
  }
  return (char)v7;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__checkUnloadScenes(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A2D535 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo, method);
    byte_4A2D535 = 1;
  }
  v3 = sub_1B7640C(AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  int32_t v12; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_Stack_T__o *v22; // x1
  Il2CppClass **v23; // x0
  System_Collections_IEnumerator_o *v24; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A2D536 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v6);
    byte_4A2D536 = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.prevscenetemp, 0, v2, v3);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_16;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_372B348 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.targetRoot, 0, v9, v10);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v12 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v12 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v12, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69339428(name, 0LL);
      m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
      v16 = &m_Handle;
      scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                              (UnityEngine_SceneManagement_Scene_o)v16,
                                                              0LL);
      if ( !m_listUnloadScenes )
        break;
      items = m_listUnloadScenes->fields._items;
      v20 = Method_System_Collections_Generic_List_string__Add__;
      ++m_listUnloadScenes->fields._version;
      if ( !items )
        break;
      size = m_listUnloadScenes->fields._size;
      v22 = scenestack;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          m_listUnloadScenes,
          (Il2CppObject *)scenestack,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        m_listUnloadScenes->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
      }
      if ( --v12 < 0 )
        goto LABEL_15;
    }
LABEL_16:
    sub_1B7641C(scenestack, v7);
  }
LABEL_15:
  v24 = AvalonSceneManager__checkUnloadScenes(this, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
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
  sub_1B76164(p_sendData, 0, (int32_t)method, v3);
  if ( !comp )
    sub_1B7641C(v8, v9);
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

  if ( (byte_4A2D538 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method);
    byte_4A2D538 = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1B7641C(0LL, method);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_372B6F8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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

  if ( (byte_4A2D533 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v4);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_4A2D533 = 1;
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
          sub_1B76424(RootGameObjects, v10);
        RootGameObjects = (UnityEngine_GameObject_array *)v12->m_Items[v13];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
      sub_1B7641C(RootGameObjects, v10);
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

  return AvalonSceneManager__popScene_38105052(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_38105052(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_38105052(
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

  if ( (byte_4A2D53D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9);
    byte_4A2D53D = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v11 = *((_DWORD *)scenestack + 6);
  if ( v11 < 1 )
    return v11 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_372B73C *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1B7641C(scenestack, *(_QWORD *)&fade);
  if ( isRefresh )
    v13 = 5;
  else
    v13 = 4;
  AvalonSceneManager__changeScene_38104608(this, v13, *((System_String_o **)scenestack + 2), fade, data, 0, v12);
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

  if ( (byte_4A2D53C & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1B761C0(&SceneList_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v11);
    byte_4A2D53C = 1;
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
        (const MethodInfo_372B79C *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_38104608(this, 3, SceneName, fade, data, 0, v18) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_372B73C *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_38104608(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v20);
      return 0;
    }
LABEL_17:
    sub_1B7641C(scenestack, v14);
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

  if ( (byte_4A2D548 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, flag);
    byte_4A2D548 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v7 = this->fields.targetRoot;
  if ( !v7 )
    sub_1B7641C(0LL, v6);
  return SceneRootComponent__SetSceneActive(v7, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A2D547 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager__setupUI_d__40_TypeInfo, method);
    byte_4A2D547 = 1;
  }
  v2 = sub_1B7640C(AvalonSceneManager__setupUI_d__40_TypeInfo);
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

  if ( (byte_4A2D53E & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4A2D53E = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38104608(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_4A2D540 & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4A2D540 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38104608(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_38105380(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_4A2D53F & 1) == 0 )
  {
    sub_1B761C0(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_4A2D53F = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_38105528(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_38106256(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_38104608(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        int32_t 1__state,
        const MethodInfo_316A6CC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_316A6F8 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v8; // w21
  int32_t *p_m_Handle; // x0
  void *asyncOp_5__2; // x0
  Il2CppObject *Component_object; // x22
  Il2CppClass *_1_T; // x1
  __int64 v13; // x23
  Il2CppClass *v14; // x22
  UnityEngine_Object_o *v15; // x0
  int32_t *v16; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject **p__2__current; // x19
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v24; // x0
  const MethodInfo_316A930 *v25; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A33EAA & 1) == 0 )
  {
    sub_1B761C0(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v4);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_4A33EAA = 1;
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
      sub_1B7641C(asyncOp_5__2, method);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)asyncOp_5__2, 0LL) )
      goto LABEL_30;
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1B76164((ServantStatusBattleListViewItem_o *)p__2__current, 0, v21, v22);
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
      v8 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v8 & 0x80000000) == 0 )
      {
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v8, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        asyncOp_5__2 = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                         (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                         0LL);
        if ( !asyncOp_5__2 )
          goto LABEL_33;
        if ( !*((_DWORD *)asyncOp_5__2 + 6) )
          sub_1B76424(asyncOp_5__2, method);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *((UnityEngine_GameObject_o **)asyncOp_5__2 + 4),
                             (const MethodInfo_2EB34A0 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        _1_T = method->klass->rgctx_data->_1_T;
        if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
          _1_T = (Il2CppClass *)sub_1BC809C(method->klass->rgctx_data->_1_T);
        v13 = sub_1B762FC(Component_object, _1_T);
        v14 = method->klass->rgctx_data->_1_T;
        if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
          v14 = (Il2CppClass *)sub_1BC809C(method->klass->rgctx_data->_1_T);
        if ( v13 )
        {
          v15 = (UnityEngine_Object_o *)sub_1B762FC(v13, v14);
          if ( !v15 )
          {
            sub_1B766DC(v13);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v24,
                                      v25);
          }
        }
        else
        {
          v15 = 0LL;
        }
        --v8;
        if ( UnityEngine_Object__op_Implicit(v15, 0LL) )
        {
          v16 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v16, 0LL);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          v18 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69339428(name, 0LL);
          this->fields._asyncOp_5__2 = v18;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._asyncOp_5__2, (int32_t)v18, v19, v20);
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
        const MethodInfo_316A930 *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_316A938 *method)
{
  __int64 v3; // x0
  System_NotSupportedException_o *v4; // x20

  v3 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v4 = (System_NotSupportedException_o *)sub_1B7640C(v3);
  System_NotSupportedException___ctor(v4, 0LL);
  sub_1B762E8(v4, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_316A96C *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_316A6F4 *method)
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct AvalonSceneManager_o *_4__this; // x20
  UnityEngine_Object_o *targetRoot; // x22
  bool v15; // w22
  bool v16; // w0
  int32_t v17; // w2
  int32_t v18; // w3
  struct SceneRootComponent_o *v19; // x1
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_IEnumerator_o *v22; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool v26; // w20
  UnityEngine_Object_o **p_newTargetRoot_5__2; // x21
  UnityEngine_Object_o *newTargetRoot_5__2; // x22
  System_String_o *scenename; // x22
  int32_t *p_m_Handle; // x0
  const MethodInfo *v31; // x2
  SceneRootComponent_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *v35; // x22
  System_String_o *v36; // x21
  ServantStatusBattleListViewItem_o *v37; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  SceneRootComponent_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Object_o *v43; // x22
  System_String_o *v44; // x22
  int32_t *v45; // x0
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v47; // x22
  unsigned int v48; // w27
  UnityEngine_GameObject_o *v49; // x23
  int v50; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v51; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v53; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v55; // x0
  int v56; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v57; // x23
  unsigned int v58; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v59; // x8
  UnityEngine_Component_o *v60; // x24
  UnityEngine_Object_c *v61; // x0
  UnityEngine_Object_o *v62; // x22
  UnityEngine_Object_o *v63; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c *klass; // x8
  void (*v65)(void); // x9
  SceneRootComponent_o *v66; // x22
  SceneTemp_o *v67; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  struct SceneRootComponent_o *v70; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o **p_targetRoot; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  Il2CppObject *v76; // x19
  ServantStatusBattleListViewItem_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v80; // x22
  UnityEngine_Object_o *v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x20
  ServantStatusBattleListViewItem_o *v85; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A2D54C & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponents_Component___, method);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v5);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v6);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v8);
    sub_1B761C0(&SceneTemp_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_3245/*"BattleScriptScene"*/, v10);
    sub_1B761C0(&StringLiteral_3243/*"BattleScene"*/, v11);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)sub_1B761C0(&StringLiteral_1/*""*/, v12);
    byte_4A2D54C = 1;
  }
  m_Handle = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields._newTargetRoot_5__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, 0, (int32_t)v2, v3);
      if ( !_4__this )
        goto LABEL_103;
      targetRoot = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL);
      v16 = System_String__op_Equality(v4->fields.scenename, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !v15 )
        goto LABEL_11;
      if ( v16 )
        goto LABEL_12;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
      if ( !this )
        goto LABEL_103;
      v16 = SceneRootComponent__checkSceneName((SceneRootComponent_o *)this, v4->fields.scenename, 0LL);
LABEL_11:
      if ( v16 )
      {
LABEL_12:
        v19 = _4__this->fields.targetRoot;
        v4->fields._newTargetRoot_5__2 = v19;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v19, v17, v18);
      }
      if ( v4->fields.changeType <= 1u
        && System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3245/*"BattleScriptScene"*/, 0LL) )
      {
        v20 = System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3243/*"BattleScene"*/, 0LL);
        if ( v20 )
        {
          v22 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v20, v21);
          v4->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B76164(p__2__current, (int32_t)v22, v24, v25);
          v26 = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return v26;
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
      v32 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v4->fields.scenename, v31);
      v4->fields._newTargetRoot_5__2 = v32;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v32, v33, v34);
LABEL_26:
      v35 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
      {
LABEL_68:
        v62 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_103;
          v63 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_103;
              klass = this->klass;
              if ( v4->fields.changeType == 3 )
                v65 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v65 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v65();
            }
            v80 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v81 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v80, v81, 0LL) )
              goto LABEL_102;
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v4->fields.changeType == 5 )
              {
                v84 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69339428(v84, 0LL);
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
                v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B76164(v85, 0, v82, v83);
                *(_DWORD *)&v85[-1].fields.isMine = 3;
                return 1;
              }
            }
LABEL_103:
            sub_1B7641C(this, method);
          }
LABEL_80:
          v66 = v4->fields._newTargetRoot_5__2;
          v67 = (SceneTemp_o *)sub_1B7640C(SceneTemp_TypeInfo);
          SceneTemp___ctor_38412236(v67, v66, 0LL);
          if ( !_4__this )
            goto LABEL_103;
          _4__this->fields.prevscenetemp = v67;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.prevscenetemp, (int32_t)v67, v68, v69);
          v70 = v4->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = v70;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&_4__this->fields.targetRoot;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.targetRoot, (int32_t)v70, v72, v73);
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
            v76 = sendData;
            p_sendData->klass = 0LL;
            sub_1B76164(p_sendData, 0, v74, v75);
            this = *(AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&p_sendData[-1].fields.dispLimitCount.fields.fakeValue;
            if ( !this )
              goto LABEL_103;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__39_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v76,
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
      v36 = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      v26 = 1;
      UnityEngine_SceneManagement_SceneManager__LoadScene(v36, 1, 0LL);
      v4->fields.__2__current = 0LL;
      v37 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v37, 0, v38, v39);
      *(_DWORD *)&v37[-1].fields.isMine = 2;
      return v26;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_103;
      v40 = AvalonSceneManager__getTargetRoot((AvalonSceneManager_o *)this, v4->fields.scenename, v2);
      v4->fields._newTargetRoot_5__2 = v40;
      p_newTargetRoot_5__2 = (UnityEngine_Object_o **)&v4->fields._newTargetRoot_5__2;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v40, v41, v42);
      v43 = (UnityEngine_Object_o *)v4->fields._newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
        return 0;
      v44 = v4->fields.scenename;
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneByName(v44, 0LL).fields.m_Handle;
      v45 = &m_Handle;
      this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                                                                       (UnityEngine_SceneManagement_Scene_o)v45,
                                                                       0LL);
      if ( !this )
        goto LABEL_103;
      _2__current = (int)this->fields.__2__current;
      v47 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v48 = 0;
      break;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v48 >= _2__current )
LABEL_104:
      sub_1B76424(this, method);
    v49 = (UnityEngine_GameObject_o *)*((_QWORD *)&v47->fields.__4__this + (int)v48);
    if ( !v49 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48965084(
                                                                     v49,
                                                                     (const MethodInfo_2EB25DC *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_103;
    v50 = (int)this->fields.__2__current;
    v51 = this;
    if ( v50 >= 1 )
    {
      for ( i = 0; i < v50; ++i )
      {
        if ( i >= (unsigned int)v50 )
          goto LABEL_104;
        v53 = &v51->klass + i;
        gameObject = (UnityEngine_Component_o *)v53[4];
        if ( !gameObject )
          goto LABEL_103;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__48600968(
                                                                         (UnityEngine_Component_o *)v53[4],
                                                                         (const MethodInfo_2E59788 *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_103;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v55 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v55);
          }
        }
        else
        {
          v55 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_69287596((UnityEngine_Object_o *)gameObject, 0LL);
        v50 = (int)v51->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48965084(
                                                                     v49,
                                                                     (const MethodInfo_2EB25DC *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_103;
    v56 = (int)this->fields.__2__current;
    v57 = this;
    if ( v56 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v47->fields.__2__current;
    if ( (int)++v48 >= _2__current )
      goto LABEL_68;
  }
  v58 = 0;
  while ( 1 )
  {
    if ( v58 >= v56 )
      goto LABEL_104;
    v59 = &v57->klass + (int)v58;
    v60 = (UnityEngine_Component_o *)v59[4];
    if ( !v60 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__48600968(
                                                                     (UnityEngine_Component_o *)v59[4],
                                                                     (const MethodInfo_2E59788 *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_103;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v60 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v60, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v61 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v61);
      }
    }
    else
    {
      v61 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_69287596((UnityEngine_Object_o *)v60, 0LL);
    v56 = (int)v57->fields.__2__current;
    if ( (int)++v58 >= v56 )
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct AvalonSceneManager_o *_4__this; // x20
  int32_t fadeType; // w8
  AvalonSceneManager_c *v14; // x0
  int32_t v15; // w8
  float duration_5__2; // s0
  int32_t v17; // w1
  ServantStatusBattleListViewItem_o *v18; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  int v21; // w8
  int32_t v22; // w2
  int32_t v23; // w3
  bool result; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Object_o *targetRoot; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2
  AvalonSceneManager__changePrevSceneCoroutine_d__38_o *v33; // x22
  UnityEngine_Object_o *v34; // x21
  int32_t v35; // w19
  int32_t *p_m_Handle; // x0
  AvalonSceneManager_o *name; // x0
  const MethodInfo *v38; // x2
  UnityEngine_Object_o *v39; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A2D54D & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, method);
    sub_1B761C0(&CommonEffectManager_TypeInfo, v5);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    sub_1B761C0(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)sub_1B761C0(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v11);
    byte_4A2D54D = 1;
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
      v14 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v14 = AvalonSceneManager_TypeInfo;
        fadeType = _4__this->fields.fadeType;
      }
      LODWORD(v4->fields._duration_5__2) = LODWORD(v14->static_fields->DEFAULT_FADE_TIME);
      if ( (unsigned int)(fadeType - 1) > 1 )
        goto LABEL_11;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v4->fields.fadeTimeSkip )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(p__2__current, 0, v2, v3);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      v4->fields._duration_5__2 = 0.0;
LABEL_14:
      v15 = _4__this->fields.fadeType;
      if ( v15 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v17 = 2;
      }
      else
      {
        if ( v15 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v17 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v17, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v4->fields.__2__current = 0LL;
        v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v18, 0, v25, v26);
        v21 = 2;
LABEL_32:
        *(_DWORD *)&v18[-1].fields.isMine = v21;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.prevscenetemp, 0, v30, v31);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)System_Collections_Generic_Stack_object___Pop(
                                                                             (System_Collections_Generic_Stack_T__o *)this,
                                                                             (const MethodInfo_372B73C *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
            if ( !this )
              goto LABEL_55;
            v33 = this;
            v34 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(
                                            (AvalonSceneManager_o *)this,
                                            *(System_String_o **)&this->fields.__1__state,
                                            v32);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Object__op_Inequality(
                                                                             v34,
                                                                             0LL,
                                                                             0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_55;
              if ( SceneRootComponent__checkSceneName(
                     (SceneRootComponent_o *)v34,
                     *(System_String_o **)&v33->fields.__1__state,
                     0LL) )
              {
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v34,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&v34->klass[1]._1.this_arg.bits)(
                  v34,
                  v34->klass[1]._1.element_class);
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v34,
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
            v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B76164(v18, 0, v27, v28);
            v21 = 3;
            goto LABEL_32;
          }
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          v35 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
          if ( v35 >= 0 )
          {
            while ( 1 )
            {
              if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
              m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v35, 0LL).fields.m_Handle;
              p_m_Handle = &m_Handle;
              name = (AvalonSceneManager_o *)UnityEngine_SceneManagement_Scene__get_name(
                                               (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                                               0LL);
              v39 = (UnityEngine_Object_o *)AvalonSceneManager__getTargetRoot(name, (System_String_o *)name, v38);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Object__op_Inequality(
                                                                               v39,
                                                                               0LL,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v39 )
                  goto LABEL_55;
                this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)v39,
                                                                                 0LL);
                if ( !this )
                  goto LABEL_55;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              if ( --v35 < 0 )
                return 0;
            }
          }
          return 0;
        }
LABEL_55:
        sub_1B7641C(this, method);
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
      v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v18, 0, v19, v20);
      v21 = 4;
      goto LABEL_32;
    case 4:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v4->fields.__2__current = 0LL;
      v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(v18, 0, v22, v23);
      v21 = 5;
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  const MethodInfo *v14; // x2
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v15; // x21
  bool v16; // w0
  const MethodInfo *v17; // x2
  bool v18; // w0
  const MethodInfo *v19; // x2
  bool v20; // w0
  const MethodInfo *v21; // x2
  System_String_o *v22; // x2
  const MethodInfo *v23; // x4
  System_Collections_IEnumerator_o *v24; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  bool result; // w0
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v30; // x20
  ServantStatusBattleListViewItem_o *v31; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w8
  System_Collections_IEnumerator_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_IEnumerator_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Action_o *callback; // x0
  const MethodInfo *v42; // x2
  int32_t ConnectMarkEventId; // w1
  bool v44; // w2
  bool v45; // w0
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v46; // x22

  v3 = this;
  if ( (byte_4A2D54E & 1) == 0 )
  {
    sub_1B761C0(&System_GC_TypeInfo, method);
    sub_1B761C0(&SceneList_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v8);
    this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)sub_1B761C0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    byte_4A2D54E = 1;
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
        this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
        goto LABEL_55;
      }
      v13 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_55;
      v15 = this;
      v16 = AvalonSceneManager__checkNowScene(_4__this, 10, v14);
      if ( v13 != 38 || !v16 )
      {
        v18 = AvalonSceneManager__checkNowScene(_4__this, 9, v17);
        if ( v13 != 10 || !v18 )
        {
          v20 = AvalonSceneManager__checkNowScene(_4__this, 9, v19);
          if ( v13 != 38 || !v20 )
          {
            if ( AvalonSceneManager__checkNowScene(_4__this, 39, v21)
              && v13 <= 0x3D
              && ((1LL << v13) & 0x3000010000000000LL) != 0 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                ConnectMarkEventId = 0;
                v44 = 0;
                goto LABEL_53;
              }
LABEL_55:
              sub_1B7641C(this, method);
            }
            v45 = AvalonSceneManager__checkNowScene(_4__this, 9, v42);
            if ( v13 == 34 && v45 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_55;
              v44 = 1;
              ConnectMarkEventId = 0;
            }
            else
            {
              if ( v15 && v13 == 32 && !LOBYTE(v15[2].monitor) )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
                  goto LABEL_17;
                }
                goto LABEL_55;
              }
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v46 = this;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !v46 )
                goto LABEL_55;
              v44 = 1;
              this = v46;
              ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
            }
LABEL_53:
            CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v44, 0LL);
            if ( !v15 )
              goto LABEL_18;
            goto LABEL_17;
          }
        }
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
      if ( v15 )
LABEL_17:
        LOBYTE(v15[2].monitor) = 0;
LABEL_18:
      v24 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v3->fields.changeType,
              v22,
              v3->fields.fadeTimeSkip,
              v23);
      v3->fields.__2__current = (Il2CppObject *)v24;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B76164(p__2__current, (int32_t)v24, v26, v27);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      changeType = v3->fields.changeType;
      v3->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_27;
      v30 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v30, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62581128(0LL);
      v3->fields.__2__current = (Il2CppObject *)v30;
      v31 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B76164(v31, (int32_t)v30, v32, v33);
      v34 = 2;
      goto LABEL_29;
    case 2:
      v3->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v35 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v35;
      v31 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B76164(v31, (int32_t)v35, v36, v37);
      v34 = 3;
      goto LABEL_29;
    case 3:
      v3->fields.__1__state = -1;
LABEL_27:
      if ( !_4__this )
        goto LABEL_55;
      v38 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v3->fields.changeType, v3->fields.scenename, v2);
      v3->fields.__2__current = (Il2CppObject *)v38;
      v31 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B76164(v31, (int32_t)v38, v39, v40);
      v34 = 4;
LABEL_29:
      *(_DWORD *)&v31[-1].fields.isMine = v34;
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_AvalonSceneManager__changeSceneCoroutine_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Collections_Generic_List_string__o *m_listUnloadScenes; // x8
  int32_t size; // w2
  int v18; // w9
  int32_t m_Handle; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A2D54F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    this = (AvalonSceneManager__checkUnloadScenes_d__16_o *)sub_1B761C0(
                                                              &UnityEngine_SceneManagement_SceneManager_TypeInfo,
                                                              v7);
    byte_4A2D54F = 1;
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
      sub_1B7641C(this, method);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B76164(p__2__current, 0, v14, v15);
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_AvalonSceneManager__checkUnloadScenes_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v17; // x20
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w21
  int32_t v21; // w8
  System_Action_o *v22; // x22
  System_Action_o *v23; // x22
  System_Action_o *v24; // x22
  System_Action_o *v25; // x22
  System_Func_bool__o *v26; // x21
  UnityEngine_WaitUntil_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_4A2D550 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AtlasManager_TypeInfo, v3);
    sub_1B761C0(&CommonEffectManager_TypeInfo, v4);
    sub_1B761C0(&System_Func_bool__TypeInfo, v5);
    sub_1B761C0(&OptionManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v7);
    sub_1B761C0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__, v8);
    sub_1B761C0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__, v9);
    sub_1B761C0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__, v10);
    sub_1B761C0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__, v11);
    sub_1B761C0(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__, v12);
    sub_1B761C0(&AvalonSceneManager___c__DisplayClass40_0_TypeInfo, v13);
    sub_1B761C0(&UnityEngine_WaitUntil_TypeInfo, v14);
    byte_4A2D550 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v21 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v17 = sub_1B7640C(AvalonSceneManager___c__DisplayClass40_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_40;
    *(_DWORD *)(v17 + 16) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v20 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v17 + 16) = 1;
    }
    else
    {
      v22 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v17,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v22, 7, v20, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v17 + 17) = 1;
    }
    else
    {
      v23 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v17,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v23, 1, v20, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_40:
      sub_1B7641C(Instance, v19);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v17 + 18) = 1;
    }
    else
    {
      v24 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v17,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v24, 2, v20, 0LL);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v17 + 19) = 1;
    }
    else
    {
      v25 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        (Il2CppObject *)v17,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v25, v20, 0LL);
    }
    v26 = (System_Func_bool__o *)sub_1B7640C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v26,
      (Il2CppObject *)v17,
      Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__,
      0LL);
    v27 = (UnityEngine_WaitUntil_o *)sub_1B7640C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v27, v26, 0LL);
    this->fields.__2__current = (Il2CppObject *)v27;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v27, v28, v29);
    v21 = 1;
    result = 1;
  }
  this->fields.__1__state = v21;
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_AvalonSceneManager__setupUI_d__40_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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