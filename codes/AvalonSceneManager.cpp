void __fastcall AvalonSceneManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FBA30 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v1);
    byte_49FBA30 = 1;
  }
  LODWORD(AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME) = (struct AvalonSceneManager_StaticFields)1045220557;
}


void __fastcall AvalonSceneManager___ctor(AvalonSceneManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FBA2F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Stack_SceneTemp__TypeInfo, v7);
    byte_49FBA2F = 1;
  }
  v8 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                  System_Collections_Generic_Stack_SceneTemp__TypeInfo,
                                                  method,
                                                  v2);
  System_Collections_Generic_Stack_object____ctor(
    v8,
    (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_SceneTemp___ctor__);
  this->fields.scenestack = (struct System_Collections_Generic_Stack_SceneTemp__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scenestack, (int32_t)v8, v9, v10);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.m_listUnloadScenes = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.m_listUnloadScenes, (int32_t)v13, v14, v15);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_AvalonSceneManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
        AvalonSceneManager_o *this,
        int32_t sceneType,
        bool forceUnload,
        const MethodInfo_2E23130 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct SceneRootComponent_o *targetRoot; // x23
  Il2CppClass *_0_T; // x22
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Component_o *v15; // x20
  Il2CppType *_1_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v18; // x0
  __int64 methodPtr_low; // x10
  _QWORD *monitor; // x8
  System_String_o *SceneName; // x19
  AvalonSceneManager_o *v22; // x0
  const MethodInfo_2E23308 *v23; // x1
  System_RuntimeTypeHandle_o v24; // 0:w0.4
  System_RuntimeTypeHandle_o v25; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&BattleRootComponent_var, *(_QWORD *)&sceneType);
    sub_1B640C8(&BattleRootComponent_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v9);
    sub_1B640C8(&System_Type_TypeInfo, v10);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  gameObject = (UnityEngine_GameObject_o *)AvalonSceneManager__checkNowScene(this, sceneType, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    targetRoot = this->fields.targetRoot;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1BB5FA4(method->rgctx_data->_0_T);
      _0_T = (Il2CppClass *)gameObject;
    }
    if ( targetRoot )
    {
      v14 = (UnityEngine_Component_o *)sub_1B64204(targetRoot, _0_T);
      if ( !v14 )
      {
        sub_1B645E4(targetRoot);
        AvalonSceneManager__UnloadScene_object_(v22, v23);
        return;
      }
      v15 = v14;
      gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        _1_T = method->rgctx_data->_1_T;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v24.fields.value = (int)_1_T;
        TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
        v25.fields.value = (int)BattleRootComponent_var;
        v18 = System_Type__GetTypeFromHandle(v25, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_Type__op_Equality(TypeFromHandle, v18, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_18;
        methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BattleRootComponent_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        {
          monitor = v15[3].monitor;
          if ( monitor )
          {
            gameObject = (UnityEngine_GameObject_o *)monitor[62];
            if ( gameObject )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)gameObject, 0LL);
LABEL_18:
              if ( forceUnload )
              {
                SceneName = SceneRootComponent__getSceneName((SceneRootComponent_o *)v15, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69179756(SceneName, 0LL);
              }
              return;
            }
          }
        }
      }
    }
    sub_1B64324(gameObject);
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
  if ( (byte_49FBA2E & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_49FBA2E = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1B64324(this);
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
  if ( (byte_49FBA19 & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_49FBA19 = 1;
  }
  m_listUnloadScenes = v2->fields.m_listUnloadScenes;
  if ( !m_listUnloadScenes )
    sub_1B64324(this);
  return m_listUnloadScenes->fields._size == 0;
}


bool __fastcall AvalonSceneManager__IsStackScene(AvalonSceneManager_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *v2; // x19
  struct System_Collections_Generic_Stack_SceneTemp__o *scenestack; // x8

  v2 = this;
  if ( (byte_49FBA1C & 1) == 0 )
  {
    this = (AvalonSceneManager_o *)sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, method);
    byte_49FBA1C = 1;
  }
  scenestack = v2->fields.scenestack;
  if ( !scenestack )
    sub_1B64324(this);
  return scenestack->fields._size > 0;
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__UnloadSceneAsync_object_(
        AvalonSceneManager_o *this,
        System_Action_o *callback,
        const MethodInfo_2E234C4 *method)
{
  const MethodInfo_2E234C4_RGCTXs *rgctx_data; // x8
  __int64 _0_AvalonSceneManager__UnloadSceneAsync_d__45_T; // x0
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v7; // x0
  const MethodInfo_2E234C4_RGCTXs *v8; // x8
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000(method);
    rgctx_data = method->rgctx_data;
  }
  _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = (__int64)rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_;
  if ( (BYTE5(rgctx_data->_0_AvalonSceneManager__UnloadSceneAsync_d__45_T_->vtable[0].methodPtr) & 1) == 0 )
    _0_AvalonSceneManager__UnloadSceneAsync_d__45_T = sub_1BB5FA4(_0_AvalonSceneManager__UnloadSceneAsync_d__45_T);
  v7 = (AvalonSceneManager__UnloadSceneAsync_d__45_T__o *)sub_1B64314(
                                                            _0_AvalonSceneManager__UnloadSceneAsync_d__45_T,
                                                            callback,
                                                            method);
  v8 = method->rgctx_data;
  v9 = v7;
  AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
    v7,
    0,
    (const MethodInfo_31401A4 *)v8->_1_AvalonSceneManager__UnloadSceneAsync_d__45_T___ctor);
  if ( !v9 )
    sub_1B64324(v10);
  v9->fields.callback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.callback, (int32_t)callback, v11, v12);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall AvalonSceneManager__UnloadScene_object_(AvalonSceneManager_o *this, const MethodInfo_2E23308 *method)
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
  const MethodInfo_2E234C4 *v18; // x2
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
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
      sub_1B64324(0LL);
    if ( !RootGameObjects->max_length )
      sub_1B6432C(RootGameObjects, v8);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         RootGameObjects->m_Items[0],
                         (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
    v11 = sub_1B64204(Component_object, _0_T);
    v12 = method->rgctx_data->_0_T;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
    if ( v11 )
    {
      v13 = (UnityEngine_Object_o *)sub_1B64204(v11, v12);
      if ( !v13 )
      {
        sub_1B645E4(v11);
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
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69179756(name, 0LL);
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

  if ( (byte_49FBA2B & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo, *(_QWORD *)&changeType);
    byte_49FBA2B = 1;
  }
  v7 = sub_1B64314(AvalonSceneManager__changeNextSceneCoroutine_d__39_TypeInfo, *(_QWORD *)&changeType, scenename);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 48) = changeType;
  *(_QWORD *)(v7 + 40) = scenename;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)scenename, v10, v11);
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

  if ( (byte_49FBA2A & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo, *(_QWORD *)&changeType);
    byte_49FBA2A = 1;
  }
  v8 = fadeTimeSkip;
  v9 = sub_1B64314(AvalonSceneManager__changePrevSceneCoroutine_d__38_TypeInfo, *(_QWORD *)&changeType, scenename);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v10, v11);
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

  if ( (byte_49FBA26 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_49FBA26 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_37969948(this, 2, SceneName, fade, data, 0, v10);
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

  if ( (byte_49FBA29 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo, *(_QWORD *)&changeType);
    byte_49FBA29 = 1;
  }
  v11 = fadeTimeSkip;
  v12 = sub_1B64314(AvalonSceneManager__changeSceneCoroutine_d__37_TypeInfo, *(_QWORD *)&changeType, scenename);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)this, v13, v14);
  *(_DWORD *)(v12 + 48) = changeType;
  *(_QWORD *)(v12 + 32) = scenename;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)scenename, v15, v16);
  *(_BYTE *)(v12 + 52) = v11;
  *(_QWORD *)(v12 + 56) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 56), (int32_t)callback, v17, v18);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_37969948(
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
  int32_t v17; // w2
  int32_t v18; // w3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v20; // x23
  int32_t SceneType; // w23
  int32_t v22; // w0
  const MethodInfo *v23; // x5
  TerminalSceneComponent_c *v24; // x0
  TerminalSceneComponent_c *v25; // x0
  System_Collections_IEnumerator_o *v26; // x0

  if ( (byte_49FBA27 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v14);
    byte_49FBA27 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sendData, (int32_t)data, v17, v18);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v20 = prevscenetemp->fields.sceneName;
  else
    v20 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v20, 0LL);
  v22 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v22 == 34 )
    {
      v24 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v24 = TerminalSceneComponent_TypeInfo;
      }
      v24->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v22 == 34 )
  {
    v25 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v25 = TerminalSceneComponent_TypeInfo;
    }
    v25->static_fields->isSummonToTerminalTransition = 1;
  }
  v26 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, fadeTimeSkip, 0LL, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__changeScene_37970868(
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
  int32_t v17; // w2
  int32_t v18; // w3
  struct SceneTemp_o *prevscenetemp; // x8
  System_String_o *v20; // x23
  int32_t SceneType; // w23
  int32_t v22; // w0
  const MethodInfo *v23; // x5
  TerminalSceneComponent_c *v24; // x0
  TerminalSceneComponent_c *v25; // x0
  System_Collections_IEnumerator_o *v26; // x0

  if ( (byte_49FBA28 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&changeType);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v13);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v14);
    byte_49FBA28 = 1;
  }
  if ( !scenename || this->fields.isBusySceneChange )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CrashReporter__LeaveBreadcrumb((CrashReporter_o *)Instance, scenename, 0LL);
  this->fields.sendData = data;
  this->fields.isBusySceneChange = 1;
  this->fields.fadeType = fade;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sendData, (int32_t)data, v17, v18);
  prevscenetemp = this->fields.prevscenetemp;
  if ( prevscenetemp )
    v20 = prevscenetemp->fields.sceneName;
  else
    v20 = 0LL;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v20, 0LL);
  v22 = SceneList__getSceneType(scenename, 0LL);
  if ( SceneType == 9 )
  {
    if ( v22 == 34 )
    {
      v24 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v24 = TerminalSceneComponent_TypeInfo;
      }
      v24->static_fields->isTitleToTerminalTransition = 1;
    }
  }
  else if ( SceneType == 20 && v22 == 34 )
  {
    v25 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v25 = TerminalSceneComponent_TypeInfo;
    }
    v25->static_fields->isSummonToTerminalTransition = 1;
  }
  v26 = AvalonSceneManager__changeSceneCoroutine(this, changeType, scenename, 0, callback, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
  return 1;
}


bool __fastcall AvalonSceneManager__changeScene_37971620(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_37969948(this, 2, scenename, fade, data, 0, v5);
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

  if ( (byte_49FBA20 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v4);
    byte_49FBA20 = 1;
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
  struct SceneTemp_o *prevscenetemp; // x8

  if ( (byte_49FBA1E & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_49FBA1E = 1;
  }
  if ( !this->fields.prevscenetemp )
    return 0;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  prevscenetemp = this->fields.prevscenetemp;
  if ( !prevscenetemp )
    sub_1B64324(SceneName);
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

  if ( (byte_49FBA1F & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, v5);
    byte_49FBA1F = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1B64324(0LL);
  v7 = System_Collections_Generic_Stack_object___Peek(
         scenestack,
         (const MethodInfo_37051B8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FBA1A & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo, method);
    byte_49FBA1A = 1;
  }
  v4 = sub_1B64314(AvalonSceneManager__checkUnloadScenes_d__16_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall AvalonSceneManager__destroySceneObject(AvalonSceneManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x0
  System_Collections_Generic_List_object__o *m_listUnloadScenes; // x21
  int32_t *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_Stack_T__o *v21; // x1
  Il2CppClass **v22; // x0
  System_Collections_IEnumerator_o *v23; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FBA1B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Clear__, v6);
    byte_49FBA1B = 1;
  }
  m_Handle = 0;
  this->fields.prevscenetemp = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.prevscenetemp, 0, v2, v3);
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_16;
  System_Collections_Generic_Stack_object___Clear(
    scenestack,
    (const MethodInfo_3704E08 *)Method_System_Collections_Generic_Stack_SceneTemp__Clear__);
  this->fields.targetRoot = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetRoot, 0, v8, v9);
  if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  v11 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
      m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v11, 0LL).fields.m_Handle;
      p_m_Handle = &m_Handle;
      name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
      UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69179756(name, 0LL);
      m_listUnloadScenes = (System_Collections_Generic_List_object__o *)this->fields.m_listUnloadScenes;
      v15 = &m_Handle;
      scenestack = (System_Collections_Generic_Stack_T__o *)UnityEngine_SceneManagement_Scene__get_name(
                                                              (UnityEngine_SceneManagement_Scene_o)v15,
                                                              0LL);
      if ( !m_listUnloadScenes )
        break;
      items = m_listUnloadScenes->fields._items;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      ++m_listUnloadScenes->fields._version;
      if ( !items )
        break;
      size = m_listUnloadScenes->fields._size;
      v21 = scenestack;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          m_listUnloadScenes,
          (Il2CppObject *)scenestack,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        m_listUnloadScenes->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
      }
      if ( --v11 < 0 )
        goto LABEL_15;
    }
LABEL_16:
    sub_1B64324(scenestack);
  }
LABEL_15:
  v23 = AvalonSceneManager__checkUnloadScenes(this, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
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

  sendData = this->fields.sendData;
  p_sendData = (ServantStatusBattleListViewItem_o *)&this->fields.sendData;
  v5 = sendData;
  p_sendData->klass = 0LL;
  sub_1B6406C(p_sendData, 0, (int32_t)method, v3);
  if ( !comp )
    sub_1B64324(v8);
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

  if ( (byte_49FBA1D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Peek__, method);
    byte_49FBA1D = 1;
  }
  scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
  if ( !scenestack )
    sub_1B64324(0LL);
  result = (System_String_o *)System_Collections_Generic_Stack_object___Peek(
                                scenestack,
                                (const MethodInfo_37051B8 *)Method_System_Collections_Generic_Stack_SceneTemp__Peek__);
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

  if ( (byte_49FBA18 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___, scenenName);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v5);
    byte_49FBA18 = 1;
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
          sub_1B6432C(RootGameObjects, v10);
        RootGameObjects = (UnityEngine_GameObject_array *)v12->m_Items[v13];
        if ( !RootGameObjects )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)RootGameObjects,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SceneRootComponent___);
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
      sub_1B64324(RootGameObjects);
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

  return AvalonSceneManager__popScene_37970392(this, fade, data, 0, v4);
}


bool __fastcall AvalonSceneManager__popSceneRefresh(
        AvalonSceneManager_o *this,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return AvalonSceneManager__popScene_37970392(this, fade, data, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__popScene_37970392(
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

  if ( (byte_49FBA22 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, *(_QWORD *)&fade);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__get_Count__, v9);
    byte_49FBA22 = 1;
  }
  scenestack = this->fields.scenestack;
  if ( !scenestack )
    goto LABEL_11;
  v11 = *((_DWORD *)scenestack + 6);
  if ( v11 < 1 )
    return v11 > 0;
  scenestack = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)scenestack,
                 (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
  if ( !scenestack )
LABEL_11:
    sub_1B64324(scenestack);
  if ( isRefresh )
    v13 = 5;
  else
    v13 = 4;
  AvalonSceneManager__changeScene_37969948(this, v13, *((System_String_o **)scenestack + 2), fade, data, 0, v12);
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
  struct SceneTemp_o *prevscenetemp; // x23
  System_Collections_Generic_Stack_T__o *scenestack; // x0
  System_String_o *SceneName; // x0
  const MethodInfo *v17; // x6
  const MethodInfo *v19; // x6

  if ( (byte_49FBA21 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&SceneList_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Push__, v11);
    byte_49FBA21 = 1;
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
        (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_SceneTemp__Push__);
    }
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  if ( AvalonSceneManager__changeScene_37969948(this, 3, SceneName, fade, data, 0, v17) )
    return 1;
  if ( prevscenetemp )
  {
    scenestack = (System_Collections_Generic_Stack_T__o *)this->fields.scenestack;
    if ( scenestack )
    {
      System_Collections_Generic_Stack_object___Pop(
        scenestack,
        (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
      AvalonSceneManager__changeScene_37969948(this, 4, prevscenetemp->fields.sceneName, fade, data, 0, v19);
      return 0;
    }
LABEL_17:
    sub_1B64324(scenestack);
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

  if ( (byte_49FBA2D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, flag);
    byte_49FBA2D = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
    return 0;
  v6 = this->fields.targetRoot;
  if ( !v6 )
    sub_1B64324(0LL);
  return SceneRootComponent__SetSceneActive(v6, flag, 0LL);
}


System_Collections_IEnumerator_o *__fastcall AvalonSceneManager__setupUI(
        AvalonSceneManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x19

  if ( (byte_49FBA2C & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager__setupUI_d__40_TypeInfo, method);
    byte_49FBA2C = 1;
  }
  v3 = sub_1B64314(AvalonSceneManager__setupUI_d__40_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v3;
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

  if ( (byte_49FBA23 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_49FBA23 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_37969948(this, 1, SceneName, fade, data, 0, v10);
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

  if ( (byte_49FBA25 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_49FBA25 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_37969948(this, 0, SceneName, fade, data, fadeTimeSkip, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AvalonSceneManager__transitionScene_37970720(
        AvalonSceneManager_o *this,
        int32_t type,
        System_Action_o *callback,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *SceneName; // x2
  const MethodInfo *v12; // x6

  if ( (byte_49FBA24 & 1) == 0 )
  {
    sub_1B640C8(&SceneList_TypeInfo, *(_QWORD *)&type);
    byte_49FBA24 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0LL);
  return AvalonSceneManager__changeScene_37970868(this, 1, SceneName, fade, data, callback, v12);
}


bool __fastcall AvalonSceneManager__transitionScene_37971596(
        AvalonSceneManager_o *this,
        System_String_o *scenename,
        int32_t fade,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return AvalonSceneManager__changeScene_37969948(this, 1, scenename, fade, data, 0, v5);
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object____ctor(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        int32_t 1__state,
        const MethodInfo_31401A4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___MoveNext(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_31401D0 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  int32_t v9; // w21
  int32_t *p_m_Handle; // x0
  void *asyncOp_5__2; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  Il2CppClass *_1_T; // x1
  __int64 v15; // x23
  Il2CppClass *v16; // x22
  UnityEngine_Object_o *v17; // x0
  int32_t *v18; // x0
  System_String_o *name; // x20
  struct UnityEngine_AsyncOperation_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  AvalonSceneManager__UnloadSceneAsync_d__45_T__o *v27; // x0
  const MethodInfo_314042C *v28; // x1
  int32_t m_Handle; // [xsp+8h] [xbp-48h] BYREF
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A02328 & 1) == 0 )
  {
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___, method);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v6);
    byte_4A02328 = 1;
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
      sub_1B64324(asyncOp_5__2);
    if ( UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)asyncOp_5__2, 0LL) )
      goto LABEL_30;
    v30 = 0;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    this->fields.__2__current = v23;
    p__2__current = &this->fields.__2__current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v23, v25, v26);
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
      v9 = UnityEngine_SceneManagement_SceneManager__get_sceneCount(0LL) - 1;
      while ( (v9 & 0x80000000) == 0 )
      {
        if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
        m_Handle = UnityEngine_SceneManagement_SceneManager__GetSceneAt(v9, 0LL).fields.m_Handle;
        p_m_Handle = &m_Handle;
        asyncOp_5__2 = UnityEngine_SceneManagement_Scene__GetRootGameObjects(
                         (UnityEngine_SceneManagement_Scene_o)p_m_Handle,
                         0LL);
        if ( !asyncOp_5__2 )
          goto LABEL_33;
        if ( !*((_DWORD *)asyncOp_5__2 + 6) )
          sub_1B6432C(asyncOp_5__2, v12);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *((UnityEngine_GameObject_o **)asyncOp_5__2 + 4),
                             (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SceneRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        _1_T = method->klass->rgctx_data->_1_T;
        if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
          _1_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_1_T);
        v15 = sub_1B64204(Component_object, _1_T);
        v16 = method->klass->rgctx_data->_1_T;
        if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
          v16 = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_1_T);
        if ( v15 )
        {
          v17 = (UnityEngine_Object_o *)sub_1B64204(v15, v16);
          if ( !v17 )
          {
            sub_1B645E4(v15);
            return (unsigned __int8)AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                      v27,
                                      v28);
          }
        }
        else
        {
          v17 = 0LL;
        }
        --v9;
        if ( UnityEngine_Object__op_Implicit(v17, 0LL) )
        {
          v18 = &m_Handle;
          name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)v18, 0LL);
          if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
          v20 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69179756(name, 0LL);
          this->fields._asyncOp_5__2 = v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._asyncOp_5__2, (int32_t)v20, v21, v22);
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
        const MethodInfo_314042C *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_Reset(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_3140434 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_NotSupportedException_o *v6; // x20

  v3 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v6 = (System_NotSupportedException_o *)sub_1B64314(v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  sub_1B641F0(v6, method);
}


Il2CppObject *__fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_Collections_IEnumerator_get_Current(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_3140468 *method)
{
  return this->fields.__2__current;
}


void __fastcall AvalonSceneManager__UnloadSceneAsync_d__45_object___System_IDisposable_Dispose(
        AvalonSceneManager__UnloadSceneAsync_d__45_T__o *this,
        const MethodInfo_31401CC *method)
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
  __int64 v46; // x1
  int _2__current; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v48; // x22
  unsigned int v49; // w27
  UnityEngine_GameObject_o *v50; // x23
  int v51; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v52; // x24
  int i; // w28
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v54; // x8
  UnityEngine_Component_o *gameObject; // x25
  UnityEngine_Object_c *v56; // x0
  int v57; // w8
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o *v58; // x23
  unsigned int v59; // w25
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c **v60; // x8
  UnityEngine_Component_o *v61; // x24
  UnityEngine_Object_c *v62; // x0
  UnityEngine_Object_o *v63; // x22
  UnityEngine_Object_o *v64; // x22
  AvalonSceneManager__changeNextSceneCoroutine_d__39_c *klass; // x8
  void (*v66)(void); // x9
  SceneRootComponent_o *v67; // x22
  SceneTemp_o *v68; // x21
  int32_t v69; // w2
  int32_t v70; // w3
  struct SceneRootComponent_o *v71; // x1
  AvalonSceneManager__changeNextSceneCoroutine_d__39_o **p_targetRoot; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x19
  ServantStatusBattleListViewItem_o *p_sendData; // x20
  Il2CppObject *sendData; // t1
  UnityEngine_Object_o *v81; // x22
  UnityEngine_Object_o *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x20
  ServantStatusBattleListViewItem_o *v86; // x19
  int32_t m_Handle; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_49FBA31 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponents_Component___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v8);
    sub_1B640C8(&SceneTemp_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_3225/*"BattleScriptScene"*/, v10);
    sub_1B640C8(&StringLiteral_3223/*"BattleScene"*/, v11);
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FBA31 = 1;
  }
  m_Handle = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields._newTargetRoot_5__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, 0, (int32_t)v2, v3);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v19, v17, v18);
      }
      if ( v4->fields.changeType <= 1u
        && System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3225/*"BattleScriptScene"*/, 0LL) )
      {
        v20 = System_String__op_Inequality(v4->fields.scenename, (System_String_o *)StringLiteral_3223/*"BattleScene"*/, 0LL);
        if ( v20 )
        {
          v22 = AvalonSceneManager__setupUI((AvalonSceneManager_o *)v20, v21);
          v4->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v22, v24, v25);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v32, v33, v34);
LABEL_26:
      v35 = *p_newTargetRoot_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
      {
LABEL_68:
        v63 = *p_newTargetRoot_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_103;
          v64 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
          {
            if ( _4__this->fields.prevscenetemp )
            {
              this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
              if ( !this )
                goto LABEL_103;
              klass = this->klass;
              if ( v4->fields.changeType == 3 )
                v66 = (void (*)(void))klass->vtable._8_System_Collections_IEnumerator_Reset.method;
              else
                v66 = (void (*)(void))klass->vtable._7_System_Collections_IEnumerator_get_Current.method;
              v66();
            }
            v81 = (UnityEngine_Object_o *)_4__this->fields.targetRoot;
            v82 = *p_newTargetRoot_5__2;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v81, v82, 0LL) )
              goto LABEL_102;
            this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)_4__this->fields.targetRoot;
            if ( this )
            {
              if ( v4->fields.changeType == 5 )
              {
                v85 = SceneRootComponent__getSceneName((SceneRootComponent_o *)this, 0LL);
                if ( !UnityEngine_SceneManagement_SceneManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_SceneManagement_SceneManager_TypeInfo);
                UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync_69179756(v85, 0LL);
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
                v86 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B6406C(v86, 0, v83, v84);
                *(_DWORD *)&v86[-1].fields.isMine = 3;
                return 1;
              }
            }
LABEL_103:
            sub_1B64324(this);
          }
LABEL_80:
          v67 = v4->fields._newTargetRoot_5__2;
          v68 = (SceneTemp_o *)sub_1B64314(SceneTemp_TypeInfo, method, v2);
          SceneTemp___ctor_38277200(v68, v67, 0LL);
          if ( !_4__this )
            goto LABEL_103;
          _4__this->fields.prevscenetemp = v68;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.prevscenetemp, (int32_t)v68, v69, v70);
          v71 = v4->fields._newTargetRoot_5__2;
          _4__this->fields.targetRoot = v71;
          p_targetRoot = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&_4__this->fields.targetRoot;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.targetRoot, (int32_t)v71, v73, v74);
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
            v77 = sendData;
            p_sendData->klass = 0LL;
            sub_1B6406C(p_sendData, 0, v75, v76);
            this = *(AvalonSceneManager__changeNextSceneCoroutine_d__39_o **)&p_sendData[-1].fields.dispLimitCount.fields.fakeValue;
            if ( !this )
              goto LABEL_103;
            ((void (__fastcall *)(AvalonSceneManager__changeNextSceneCoroutine_d__39_o *, Il2CppObject *, const char *))this->klass[1]._1.gc_desc)(
              this,
              v77,
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
      sub_1B6406C(v37, 0, v38, v39);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._newTargetRoot_5__2, (int32_t)v40, v41, v42);
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
      v48 = this;
      if ( _2__current < 1 )
        goto LABEL_68;
      v49 = 0;
      break;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_80;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v49 >= _2__current )
LABEL_104:
      sub_1B6432C(this, v46);
    v50 = (UnityEngine_GameObject_o *)*((_QWORD *)&v48->fields.__4__this + (int)v49);
    if ( !v50 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                     v50,
                                                                     (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_AudioListener___);
    if ( !this )
      goto LABEL_103;
    v51 = (int)this->fields.__2__current;
    v52 = this;
    if ( v51 >= 1 )
    {
      for ( i = 0; i < v51; ++i )
      {
        if ( i >= (unsigned int)v51 )
          goto LABEL_104;
        v54 = &v52->klass + i;
        gameObject = (UnityEngine_Component_o *)v54[4];
        if ( !gameObject )
          goto LABEL_103;
        this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__48433004(
                                                                         (UnityEngine_Component_o *)v54[4],
                                                                         (const MethodInfo_2E3076C *)Method_UnityEngine_Component_GetComponents_Component___);
        if ( !this )
          goto LABEL_103;
        if ( LODWORD(this->fields.__2__current) == 1 )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            v56 = UnityEngine_Object_TypeInfo;
LABEL_53:
            j_il2cpp_runtime_class_init_0(v56);
          }
        }
        else
        {
          v56 = UnityEngine_Object_TypeInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            goto LABEL_53;
        }
        UnityEngine_Object__DestroyImmediate_69127924((UnityEngine_Object_o *)gameObject, 0LL);
        v51 = (int)v52->fields.__2__current;
      }
    }
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                     v50,
                                                                     (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_PlayMakerGUI___);
    if ( !this )
      goto LABEL_103;
    v57 = (int)this->fields.__2__current;
    v58 = this;
    if ( v57 >= 1 )
      break;
LABEL_67:
    _2__current = (int)v48->fields.__2__current;
    if ( (int)++v49 >= _2__current )
      goto LABEL_68;
  }
  v59 = 0;
  while ( 1 )
  {
    if ( v59 >= v57 )
      goto LABEL_104;
    v60 = &v58->klass + (int)v59;
    v61 = (UnityEngine_Component_o *)v60[4];
    if ( !v61 )
      goto LABEL_103;
    this = (AvalonSceneManager__changeNextSceneCoroutine_d__39_o *)UnityEngine_Component__GetComponents_object__48433004(
                                                                     (UnityEngine_Component_o *)v60[4],
                                                                     (const MethodInfo_2E3076C *)Method_UnityEngine_Component_GetComponents_Component___);
    if ( !this )
      goto LABEL_103;
    if ( LODWORD(this->fields.__2__current) == 2 )
    {
      v61 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v61, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        v62 = UnityEngine_Object_TypeInfo;
LABEL_65:
        j_il2cpp_runtime_class_init_0(v62);
      }
    }
    else
    {
      v62 = UnityEngine_Object_TypeInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        goto LABEL_65;
    }
    UnityEngine_Object__DestroyImmediate_69127924((UnityEngine_Object_o *)v61, 0LL);
    v57 = (int)v58->fields.__2__current;
    if ( (int)++v59 >= v57 )
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AvalonSceneManager__changeNextSceneCoroutine_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FBA32 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&CommonEffectManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_SceneManagement_SceneManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_SceneTemp__Pop__, v10);
    this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)sub_1B640C8(
                                                                     &Method_System_Collections_Generic_Stack_SceneTemp__get_Count__,
                                                                     v11);
    byte_49FBA32 = 1;
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
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
LABEL_11:
      if ( !v4->fields.fadeTimeSkip )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, 0, v2, v3);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      v4->fields._duration_5__2 = 0.0;
LABEL_14:
      v15 = _4__this->fields.fadeType;
      if ( v15 == 2 )
      {
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v17 = 2;
      }
      else
      {
        if ( v15 != 1 )
          goto LABEL_29;
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_55;
        duration_5__2 = v4->fields._duration_5__2;
        v17 = 1;
      }
      CommonUI__maskFadeout((CommonUI_o *)this, v17, duration_5__2, 0LL, 0LL);
LABEL_29:
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      if ( CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
      {
        v4->fields.__2__current = 0LL;
        v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v18, 0, v25, v26);
        v21 = 2;
LABEL_32:
        *(_DWORD *)&v18[-1].fields.isMine = v21;
        return 1;
      }
LABEL_33:
      MainMenuBar__setButtonActive(0, 0LL);
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.prevscenetemp, 0, v30, v31);
        }
        this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)_4__this->fields.scenestack;
        if ( this )
        {
          while ( SLODWORD(this->fields.__2__current) > 0 )
          {
            this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)System_Collections_Generic_Stack_object___Pop(
                                                                             (System_Collections_Generic_Stack_T__o *)this,
                                                                             (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_SceneTemp__Pop__);
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
            sub_1B6406C(v18, 0, v27, v28);
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
        sub_1B64324(this);
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
      sub_1B6406C(v18, 0, v19, v20);
      v21 = 4;
      goto LABEL_32;
    case 4:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changePrevSceneCoroutine_d__38_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AtlasManager__ReleaseNoneResidentAtlas((AtlasManager_o *)this, 0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__ReleaseSkinEffects(0LL);
      v4->fields.__2__current = 0LL;
      v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v18, 0, v22, v23);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AvalonSceneManager__changePrevSceneCoroutine_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AvalonSceneManager_o *_4__this; // x20
  System_String_o *scenename; // x21
  int32_t SceneType; // w0
  unsigned int v14; // w22
  const MethodInfo *v15; // x2
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v16; // x21
  bool v17; // w0
  const MethodInfo *v18; // x2
  bool v19; // w0
  const MethodInfo *v20; // x2
  bool v21; // w0
  const MethodInfo *v22; // x2
  System_String_o *v23; // x2
  const MethodInfo *v24; // x4
  System_Collections_IEnumerator_o *v25; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  bool result; // w0
  int32_t changeType; // w8
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  ServantStatusBattleListViewItem_o *v32; // x19
  int32_t v33; // w2
  int32_t v34; // w3
  int v35; // w8
  System_Collections_IEnumerator_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_IEnumerator_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Action_o *callback; // x0
  const MethodInfo *v43; // x2
  int32_t ConnectMarkEventId; // w1
  bool v45; // w2
  bool v46; // w0
  AvalonSceneManager__changeSceneCoroutine_d__37_o *v47; // x22

  v4 = this;
  if ( (byte_49FBA33 & 1) == 0 )
  {
    sub_1B640C8(&System_GC_TypeInfo, method);
    sub_1B640C8(&SceneList_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v10);
    byte_49FBA33 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      scenename = v4->fields.scenename;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneType = SceneList__getSceneType(scenename, 0LL);
      if ( (unsigned int)(SceneType - 10) > 0x3E
        || ((1LL << ((unsigned __int8)SceneType - 10)) & 0x400C000053400001LL) == 0 )
      {
        this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
          if ( _4__this )
            goto LABEL_18;
        }
        goto LABEL_55;
      }
      v14 = SceneType;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !_4__this )
        goto LABEL_55;
      v16 = this;
      v17 = AvalonSceneManager__checkNowScene(_4__this, 10, v15);
      if ( v14 != 38 || !v17 )
      {
        v19 = AvalonSceneManager__checkNowScene(_4__this, 9, v18);
        if ( v14 != 10 || !v19 )
        {
          v21 = AvalonSceneManager__checkNowScene(_4__this, 9, v20);
          if ( v14 != 38 || !v21 )
          {
            if ( AvalonSceneManager__checkNowScene(_4__this, 39, v22)
              && v14 <= 0x3D
              && ((1LL << v14) & 0x3000010000000000LL) != 0 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( this )
              {
                ConnectMarkEventId = 0;
                v45 = 0;
                goto LABEL_53;
              }
LABEL_55:
              sub_1B64324(this);
            }
            v46 = AvalonSceneManager__checkNowScene(_4__this, 9, v43);
            if ( v14 == 34 && v46 )
            {
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !this )
                goto LABEL_55;
              v45 = 1;
              ConnectMarkEventId = 0;
            }
            else
            {
              if ( v16 && v14 == 32 && !LOBYTE(v16[2].monitor) )
              {
                this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 0, 0LL);
                  goto LABEL_17;
                }
                goto LABEL_55;
              }
              this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v47 = this;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !v47 )
                goto LABEL_55;
              v45 = 1;
              this = v47;
              ConnectMarkEventId = TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId;
            }
LABEL_53:
            CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, ConnectMarkEventId, v45, 0LL);
            if ( !v16 )
              goto LABEL_18;
            goto LABEL_17;
          }
        }
      }
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_55;
      CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0LL);
      if ( v16 )
LABEL_17:
        LOBYTE(v16[2].monitor) = 0;
LABEL_18:
      v25 = AvalonSceneManager__changePrevSceneCoroutine(
              _4__this,
              v4->fields.changeType,
              v23,
              v4->fields.fadeTimeSkip,
              v24);
      v4->fields.__2__current = (Il2CppObject *)v25;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v25, v27, v28);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      changeType = v4->fields.changeType;
      v4->fields.__1__state = -1;
      if ( changeType )
        goto LABEL_27;
      v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62421456(0LL);
      v4->fields.__2__current = (Il2CppObject *)v31;
      v32 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v32, (int32_t)v31, v33, v34);
      v35 = 2;
      goto LABEL_29;
    case 2:
      v4->fields.__1__state = -1;
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (AvalonSceneManager__changeSceneCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_55;
      v36 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v36;
      v32 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v32, (int32_t)v36, v37, v38);
      v35 = 3;
      goto LABEL_29;
    case 3:
      v4->fields.__1__state = -1;
LABEL_27:
      if ( !_4__this )
        goto LABEL_55;
      v39 = AvalonSceneManager__changeNextSceneCoroutine(_4__this, v4->fields.changeType, v4->fields.scenename, v3);
      v4->fields.__2__current = (Il2CppObject *)v39;
      v32 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v32, (int32_t)v39, v40, v41);
      v35 = 4;
LABEL_29:
      *(_DWORD *)&v32[-1].fields.isMine = v35;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AvalonSceneManager__changeSceneCoroutine_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FBA34 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    this = (AvalonSceneManager__checkUnloadScenes_d__16_o *)sub_1B640C8(
                                                              &UnityEngine_SceneManagement_SceneManager_TypeInfo,
                                                              v7);
    byte_49FBA34 = 1;
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
      sub_1B64324(this);
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
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v14, v15);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AvalonSceneManager__checkUnloadScenes_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v20; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w8
  System_Action_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22
  System_Func_bool__o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_WaitUntil_o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FBA35 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v4);
    sub_1B640C8(&CommonEffectManager_TypeInfo, v5);
    sub_1B640C8(&System_Func_bool__TypeInfo, v6);
    sub_1B640C8(&OptionManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v8);
    sub_1B640C8(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__, v9);
    sub_1B640C8(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__, v10);
    sub_1B640C8(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__, v11);
    sub_1B640C8(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__, v12);
    sub_1B640C8(&Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__, v13);
    sub_1B640C8(&AvalonSceneManager___c__DisplayClass40_0_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v15);
    byte_49FBA35 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v23 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v18 = sub_1B64314(AvalonSceneManager___c__DisplayClass40_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( !v18 )
      goto LABEL_40;
    *(_DWORD *)(v18 + 16) = 0;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v20 = OptionManager__isSavedMemoryMode(0LL) ? 1 : 10;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 7, 0LL) )
    {
      *(_BYTE *)(v18 + 16) = 1;
    }
    else
    {
      v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v24, 7, v20, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0LL) )
    {
      *(_BYTE *)(v18 + 17) = 1;
    }
    else
    {
      v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v27, 1, v20, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
LABEL_40:
      sub_1B64324(Instance);
    if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0LL) )
    {
      *(_BYTE *)(v18 + 18) = 1;
    }
    else
    {
      v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v28, v29);
      System_Action___ctor(
        v30,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v30, 2, v20, 0LL);
    }
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( CommonEffectManager__IsLoadedSkinData(0LL) )
    {
      *(_BYTE *)(v18 + 19) = 1;
    }
    else
    {
      v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v18,
        Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__3__,
        0LL);
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      CommonEffectManager__LoadSkinEffects(v33, v20, 0LL);
    }
    v34 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v31, v32);
    System_Func_bool____ctor(
      v34,
      (Il2CppObject *)v18,
      Method_AvalonSceneManager___c__DisplayClass40_0__setupUI_b__4__,
      0LL);
    v37 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v35, v36);
    UnityEngine_WaitUntil___ctor(v37, v34, 0LL);
    this->fields.__2__current = (Il2CppObject *)v37;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v37, v38, v39);
    v23 = 1;
    result = 1;
  }
  this->fields.__1__state = v23;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AvalonSceneManager__setupUI_d__40_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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