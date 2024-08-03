void __fastcall CoinRoomRootComponent___ctor(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__EndLoadAsset(
        CoinRoomRootComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *inited; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FF8FA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, assetData);
    byte_49FF8FA = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetData, (int32_t)assetData, (int32_t)method, v3);
    inited = CoinRoomRootComponent__InitUI(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF8FB & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomRootComponent__InitUI_d__6_TypeInfo, method);
    byte_49FF8FB = 1;
  }
  v4 = sub_1B64314(CoinRoomRootComponent__InitUI_d__6_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *v13; // x20
  CoinRoomUtility_c *v14; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_49FF8F9 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_CoinRoomRootComponent_EndLoadAsset__, v3);
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v4);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF8F9 = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v11, 0, 0LL);
    if ( !Child )
      sub_1B64324(0LL);
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v13, 0LL);
  }
  v14 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v14 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v14->static_fields->ASSET_NAME;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
  AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(ASSET_NAME, v16, 1, 0LL);
}


void __fastcall CoinRoomRootComponent__beginStartUp(
        CoinRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__InitUI_d__6___ctor(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CoinRoomRootComponent__InitUI_d__6__MoveNext(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  CoinRoomRootComponent__InitUI_d__6_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  Il2CppObject *Object_object__48347676; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v25; // x8
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v27; // x22
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  CoinRoomRootComponent__InitUI_d__6_o *v31; // x20
  const MethodInfo *v32; // x2

  v2 = this;
  if ( (byte_49FF8FE & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&Method_BasicHelper_Find_GameObject___, v3);
    sub_1B640C8(&System_Func_GameObject__bool__TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&Method_CoinRoomRootComponent___c__InitUI_b__6_0__, v7);
    sub_1B640C8(&CoinRoomRootComponent___c_TypeInfo, v8);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)sub_1B640C8(&StringLiteral_14701/*"UIRootPanel"*/, v9);
    byte_49FF8FE = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v25 = CoinRoomRootComponent___c_TypeInfo;
    if ( !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v25 = CoinRoomRootComponent___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__bool__o *)v25->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = CoinRoomRootComponent___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__6_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GameObject__bool__TypeInfo, v22, v23);
      System_Func_object__bool____ctor(_9__6_0, v27, Method_CoinRoomRootComponent___c__InitUI_b__6_0__, 0LL);
      static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_GameObject__bool__o *)_9__6_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v29, v30);
    }
    this = (CoinRoomRootComponent__InitUI_d__6_o *)BasicHelper__Find_object_(
                                                     (System_Object_array *)Children,
                                                     (System_Func_T__bool__o *)_9__6_0,
                                                     (const MethodInfo_2E2543C *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_21;
    v31 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v31,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_21;
    if ( !this )
      goto LABEL_21;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, v32);
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_21;
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (CoinRoomRootComponent__InitUI_d__6_o *)_4__this->fields.assetData;
      if ( this )
      {
        Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    (AssetData_o *)this,
                                    (System_String_o *)StringLiteral_14701/*"UIRootPanel"*/,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
        this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     (UnityEngine_GameObject_o *)Object_object__48347676,
                     transform,
                     0LL,
                     0LL);
          v2->fields._createRoot_5__2 = Object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._createRoot_5__2, (int32_t)Object, v15, v16);
          v2->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B6406C(p__2__current, 0, v18, v19);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B64324(this);
  }
  return 0;
}


Il2CppObject *__fastcall CoinRoomRootComponent__InitUI_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CoinRoomRootComponent__InitUI_d__6__System_Collections_IEnumerator_Reset(
        CoinRoomRootComponent__InitUI_d__6_o *this,
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
  v6 = sub_1B640DC(&Method_CoinRoomRootComponent__InitUI_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall CoinRoomRootComponent__InitUI_d__6__System_Collections_IEnumerator_get_Current(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CoinRoomRootComponent__InitUI_d__6__System_IDisposable_Dispose(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CoinRoomRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF8FC & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomRootComponent___c_TypeInfo, v1);
    byte_49FF8FC = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CoinRoomRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CoinRoomRootComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CoinRoomRootComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall CoinRoomRootComponent___c___ctor(CoinRoomRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CoinRoomRootComponent___c___InitUI_b__6_0(
        CoinRoomRootComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_49FF8FD & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_1B640C8(&StringLiteral_8417/*"LobbyPanel"*/, x);
    byte_49FF8FD = 1;
  }
  if ( !x )
    sub_1B64324(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8417/*"LobbyPanel"*/, 0LL);
}