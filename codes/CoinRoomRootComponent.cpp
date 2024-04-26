void __fastcall CoinRoomRootComponent___ctor(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__EndLoadAsset(
        CoinRoomRootComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *inited; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4352064 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4352064 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.assetData,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.isAssetLoaded = 1;
    inited = CoinRoomRootComponent__InitUI(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v13);
    AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4352065 & 1) == 0 )
  {
    sub_B70694(&CoinRoomRootComponent__InitUI_d__7_TypeInfo);
    byte_4352065 = 1;
  }
  v3 = sub_B70764(CoinRoomRootComponent__InitUI_d__7_TypeInfo);
  CoinRoomRootComponent__InitUI_d__7___ctor((CoinRoomRootComponent__InitUI_d__7_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CoinRoomRootComponent____n__0(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__beginInitialize(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  CoinRoomUtility_c *v9; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_4352063 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_CoinRoomRootComponent_EndLoadAsset__);
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352063 = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_31197044(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v5, 0, 0LL);
    if ( !Child )
      sub_B7076C(0LL, v7);
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v8, 0LL);
  }
  v9 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v9 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v9->static_fields->ASSET_NAME;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(ASSET_NAME, v11, 1, 0LL);
}


void __fastcall CoinRoomRootComponent__beginStartUp(
        CoinRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17527796((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__InitUI_d__7___ctor(
        CoinRoomRootComponent__InitUI_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CoinRoomRootComponent__InitUI_d__7__MoveNext(
        CoinRoomRootComponent__InitUI_d__7_o *this,
        const MethodInfo *method)
{
  CoinRoomRootComponent__InitUI_d__7_o *v2; // x20
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v11; // x8
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x21
  Il2CppObject *v14; // x22
  struct CoinRoomRootComponent___c_StaticFields *v15; // x0
  UnityEngine_GameObject_o *v16; // x20

  v2 = this;
  if ( (byte_434EDC4 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_BasicHelper_Find_GameObject___);
    sub_B70694(&Method_System_Func_GameObject__bool___ctor__);
    sub_B70694(&System_Func_GameObject__bool__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_CoinRoomRootComponent___c__InitUI_b__7_0__);
    sub_B70694(&CoinRoomRootComponent___c_TypeInfo);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)sub_B70694(&StringLiteral_14874/*"UIRootPanel"*/);
    byte_434EDC4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v11 = CoinRoomRootComponent___c_TypeInfo;
    if ( (BYTE3(CoinRoomRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v11 = CoinRoomRootComponent___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_GameObject__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v14,
        Method_CoinRoomRootComponent___c__InitUI_b__7_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_GameObject__bool___ctor__);
      v15 = CoinRoomRootComponent___c_TypeInfo->static_fields;
      v15->__9__7_0 = (struct System_Func_GameObject__bool__o *)_9__7_0;
      sub_B70630(&v15->__9__7_0);
    }
    this = (CoinRoomRootComponent__InitUI_d__7_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)Children,
                                                     (System_Func_T__bool__o *)_9__7_0,
                                                     (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_23;
    v16 = (UnityEngine_GameObject_o *)this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v16,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_23;
    if ( !this )
      goto LABEL_23;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, 0LL);
    CoinRoomRootComponent____n__0(_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_23;
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (CoinRoomRootComponent__InitUI_d__7_o *)_4__this->fields.assetData;
      if ( this )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       (AssetData_o *)this,
                                                                       (System_String_o *)StringLiteral_14874/*"UIRootPanel"*/,
                                                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
        this = (CoinRoomRootComponent__InitUI_d__7_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          v2->fields._createRoot_5__2 = BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)_4__this,
                                          Object_WarBoardWaitTimeSetting,
                                          transform,
                                          0LL,
                                          0LL);
          sub_B70630(&v2->fields._createRoot_5__2);
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B70630(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_23:
    sub_B7076C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall CoinRoomRootComponent__InitUI_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomRootComponent__InitUI_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CoinRoomRootComponent__InitUI_d__7__System_Collections_IEnumerator_Reset(
        CoinRoomRootComponent__InitUI_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_CoinRoomRootComponent__InitUI_d__7_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall CoinRoomRootComponent__InitUI_d__7__System_Collections_IEnumerator_get_Current(
        CoinRoomRootComponent__InitUI_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CoinRoomRootComponent__InitUI_d__7__System_IDisposable_Dispose(
        CoinRoomRootComponent__InitUI_d__7_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434EDC2 & 1) == 0 )
  {
    sub_B70694(&CoinRoomRootComponent___c_TypeInfo);
    byte_434EDC2 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall CoinRoomRootComponent___c___ctor(CoinRoomRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CoinRoomRootComponent___c___InitUI_b__7_0(
        CoinRoomRootComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_434EDC3 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_B70694(&StringLiteral_8667/*"LobbyPanel"*/);
    byte_434EDC3 = 1;
  }
  if ( !x )
    sub_B7076C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8667/*"LobbyPanel"*/, 0LL);
}