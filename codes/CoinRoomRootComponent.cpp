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

  if ( (byte_42E8D27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)assetData, (_DWORD)method, v3);
    byte_42E8D27 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_B5D560(
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v13);
    AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8D28 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomRootComponent__InitUI_d__7_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D28 = 1;
  }
  v5 = sub_B5D694(CoinRoomRootComponent__InitUI_d__7_TypeInfo);
  CoinRoomRootComponent__InitUI_d__7___ctor((CoinRoomRootComponent__InitUI_d__7_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CoinRoomRootComponent____n__0(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__beginInitialize(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  AssetData_o *assetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  CoinRoomUtility_c *v23; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21

  if ( (byte_42E8D26 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CoinRoomRootComponent_EndLoadAsset__, v5, v6, v7);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E8D26 = 1;
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
    AssetManager__releaseAsset_30657564(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v19, 0, 0LL);
    if ( !Child )
      sub_B5D69C(0LL, v21);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v22, 0LL);
  }
  v23 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v23 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v23->static_fields->ASSET_NAME;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(ASSET_NAME, v25, 1, 0LL);
}


void __fastcall CoinRoomRootComponent__beginStartUp(
        CoinRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CoinRoomRootComponent__InitUI_d__7_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v37; // x8
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x21
  Il2CppObject *v40; // x22
  struct CoinRoomRootComponent___c_StaticFields *v41; // x0
  UnityEngine_GameObject_o *v42; // x20

  v4 = this;
  if ( (byte_42E5EA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_Find_GameObject___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_GameObject__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_GameObject__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_CoinRoomRootComponent___c__InitUI_b__7_0__, v20, v21, v22);
    sub_B5D5C4(&CoinRoomRootComponent___c_TypeInfo, v23, v24, v25);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)sub_B5D5C4(&StringLiteral_14846/*"UIRootPanel"*/, v26, v27, v28);
    byte_42E5EA9 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v4->fields._createRoot_5__2;
    v4->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v37 = CoinRoomRootComponent___c_TypeInfo;
    if ( (BYTE3(CoinRoomRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v37 = CoinRoomRootComponent___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameObject__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_0,
        v40,
        Method_CoinRoomRootComponent___c__InitUI_b__7_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_GameObject__bool___ctor__);
      v41 = CoinRoomRootComponent___c_TypeInfo->static_fields;
      v41->__9__7_0 = (struct System_Func_GameObject__bool__o *)_9__7_0;
      sub_B5D560(&v41->__9__7_0);
    }
    this = (CoinRoomRootComponent__InitUI_d__7_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)Children,
                                                     (System_Func_T__bool__o *)_9__7_0,
                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_23;
    v42 = (UnityEngine_GameObject_o *)this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v42,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_23;
    if ( !this )
      goto LABEL_23;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, 0LL);
    CoinRoomRootComponent____n__0(_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__7_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_23;
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (CoinRoomRootComponent__InitUI_d__7_o *)_4__this->fields.assetData;
      if ( this )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       (AssetData_o *)this,
                                                                       (System_String_o *)StringLiteral_14846/*"UIRootPanel"*/,
                                                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
        this = (CoinRoomRootComponent__InitUI_d__7_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          v4->fields._createRoot_5__2 = BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)_4__this,
                                          Object_WarBoardWaitTimeSetting,
                                          transform,
                                          0LL,
                                          0LL);
          sub_B5D560(&v4->fields._createRoot_5__2);
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
    }
LABEL_23:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CoinRoomRootComponent__InitUI_d__7_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EA7 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomRootComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5EA7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  System_String_o *name; // x0

  if ( (byte_42E5EA8 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_B5D5C4(&StringLiteral_8652/*"LobbyPanel"*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5EA8 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8652/*"LobbyPanel"*/, 0LL);
}