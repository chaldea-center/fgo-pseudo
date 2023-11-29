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

  if ( (byte_40F9A65 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, assetData);
    byte_40F9A65 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_B16F98(
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9A66 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomRootComponent__InitUI_d__7_TypeInfo, method);
    byte_40F9A66 = 1;
  }
  v6 = sub_B170CC(CoinRoomRootComponent__InitUI_d__7_TypeInfo, method, v2, v3, v4);
  CoinRoomRootComponent__InitUI_d__7___ctor((CoinRoomRootComponent__InitUI_d__7_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CoinRoomRootComponent____n__0(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__beginInitialize(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *assetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *v15; // x20
  CoinRoomUtility_c *v16; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_40F9A64 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomRootComponent_EndLoadAsset__, v3);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v4);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F9A64 = 1;
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
    AssetManager__releaseAsset_29947376(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v13, 0, 0LL);
    if ( !Child )
      sub_B170D4();
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v15, 0LL);
  }
  v16 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v16 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v16->static_fields->ASSET_NAME;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11, v12);
  AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(ASSET_NAME, v18, 1, 0LL);
}


void __fastcall CoinRoomRootComponent__beginStartUp(
        CoinRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  AssetData_o *assetData; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  Il2CppObject **p__2__current; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v38; // x8
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x21
  Il2CppObject *v41; // x22
  struct CoinRoomRootComponent___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_GameObject_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  UnityEngine_GameObject_o *v50; // x20
  CoinRoomLobbyComponent_o *Component_srcLineSprite; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F710A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_BasicHelper_Find_GameObject___, v3);
    sub_B16FFC(&Method_System_Func_GameObject__bool___ctor__, v4);
    sub_B16FFC(&System_Func_GameObject__bool__TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_CoinRoomRootComponent___c__InitUI_b__7_0__, v8);
    sub_B16FFC(&CoinRoomRootComponent___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_14629, v10);
    byte_40F710A = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = this->fields._createRoot_5__2;
    this->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v38 = CoinRoomRootComponent___c_TypeInfo;
    if ( (BYTE3(CoinRoomRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v38 = CoinRoomRootComponent___c_TypeInfo;
    }
    static_fields = v38->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_GameObject__bool__TypeInfo,
                                                                                     v33,
                                                                                     v34,
                                                                                     v35,
                                                                                     v36);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v41,
        Method_CoinRoomRootComponent___c__InitUI_b__7_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_GameObject__bool___ctor__);
      v42 = CoinRoomRootComponent___c_TypeInfo->static_fields;
      v42->__9__7_0 = (struct System_Func_GameObject__bool__o *)_9__7_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v42->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_GameObject_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                   (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)Children,
                                                                                                   (System_Func_T__bool__o *)_9__7_0,
                                                                                                   (const MethodInfo_18B650C *)Method_BasicHelper_Find_GameObject___);
    if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
      goto LABEL_23;
    v50 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
    UnityEngine_GameObject__SetActive(USFGOActorBattleActionEventConditional_OverwriteParamCondition, 1, 0LL);
    Component_srcLineSprite = (CoinRoomLobbyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v50,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_23;
    if ( !Component_srcLineSprite )
      goto LABEL_23;
    CoinRoomLobbyComponent__OpenLobby(Component_srcLineSprite, _4__this->fields.myFSM, 0LL);
    CoinRoomRootComponent____n__0(_4__this, 0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      assetData = _4__this->fields.assetData;
      if ( assetData )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       assetData,
                                                                       (System_String_o *)StringLiteral_14629,
                                                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( gameObject )
        {
          transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     Object_WarBoardWaitTimeSetting,
                     transform,
                     0LL,
                     0LL);
          this->fields._createRoot_5__2 = Object;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._createRoot_5__2,
            (System_Int32_array **)Object,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v25, v26, v27, v28, v29, v30);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_23:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CoinRoomRootComponent__InitUI_d__7_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7108 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomRootComponent___c_TypeInfo, v1);
    byte_40F7108 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CoinRoomRootComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CoinRoomRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7109 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8536, x);
    byte_40F7109 = 1;
  }
  if ( !x )
    sub_B170D4();
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8536, 0LL);
}