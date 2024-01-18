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

  if ( (byte_4188882 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, assetData);
    byte_4188882 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_B2C2F8(
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
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v13);
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

  if ( (byte_4188883 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomRootComponent__InitUI_d__7_TypeInfo, method);
    byte_4188883 = 1;
  }
  v3 = sub_B2C42C(CoinRoomRootComponent__InitUI_d__7_TypeInfo);
  CoinRoomRootComponent__InitUI_d__7___ctor((CoinRoomRootComponent__InitUI_d__7_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  CoinRoomUtility_c *v13; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_4188881 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomRootComponent_EndLoadAsset__, v3);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v4);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4188881 = 1;
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
    AssetManager__releaseAsset_30152684(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v9, 0, 0LL);
    if ( !Child )
      sub_B2C434(0LL, v11);
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v12, 0LL);
  }
  v13 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v13 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v13->static_fields->ASSET_NAME;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(ASSET_NAME, v15, 1, 0LL);
}


void __fastcall CoinRoomRootComponent__beginStartUp(
        CoinRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v20; // x8
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x21
  Il2CppObject *v23; // x22
  struct CoinRoomRootComponent___c_StaticFields *v24; // x0
  UnityEngine_GameObject_o *v25; // x20

  v2 = this;
  if ( (byte_4184F13 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_BasicHelper_Find_GameObject___, v3);
    sub_B2C35C(&Method_System_Func_GameObject__bool___ctor__, v4);
    sub_B2C35C(&System_Func_GameObject__bool__TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&Method_CoinRoomRootComponent___c__InitUI_b__7_0__, v8);
    sub_B2C35C(&CoinRoomRootComponent___c_TypeInfo, v9);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)sub_B2C35C(&StringLiteral_14689/*"UIRootPanel"*/, v10);
    byte_4184F13 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v20 = CoinRoomRootComponent___c_TypeInfo;
    if ( (BYTE3(CoinRoomRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v20 = CoinRoomRootComponent___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GameObject__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v23,
        Method_CoinRoomRootComponent___c__InitUI_b__7_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_GameObject__bool___ctor__);
      v24 = CoinRoomRootComponent___c_TypeInfo->static_fields;
      v24->__9__7_0 = (struct System_Func_GameObject__bool__o *)_9__7_0;
      sub_B2C2F8(&v24->__9__7_0, _9__7_0);
    }
    this = (CoinRoomRootComponent__InitUI_d__7_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)Children,
                                                     (System_Func_T__bool__o *)_9__7_0,
                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_23;
    v25 = (UnityEngine_GameObject_o *)this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v25,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_23;
    if ( !this )
      goto LABEL_23;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, 0LL);
    CoinRoomRootComponent____n__0(_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
                                                                       (System_String_o *)StringLiteral_14689/*"UIRootPanel"*/,
                                                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
        this = (CoinRoomRootComponent__InitUI_d__7_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     Object_WarBoardWaitTimeSetting,
                     transform,
                     0LL,
                     0LL);
          v2->fields._createRoot_5__2 = Object;
          sub_B2C2F8(&v2->fields._createRoot_5__2, Object);
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_23:
    sub_B2C434(this, method);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CoinRoomRootComponent__InitUI_d__7_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184F11 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomRootComponent___c_TypeInfo, v1);
    byte_4184F11 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184F12 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_B2C35C(&StringLiteral_8565/*"LobbyPanel"*/, x);
    byte_4184F12 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8565/*"LobbyPanel"*/, 0LL);
}