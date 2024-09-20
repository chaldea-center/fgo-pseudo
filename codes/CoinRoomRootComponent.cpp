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
  __int64 v9; // x1

  if ( (byte_4A5E6E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E6E1 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetData, (int32_t)assetData, (int32_t)method, v3);
    inited = CoinRoomRootComponent__InitUI(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v9);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E6E2 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomRootComponent__InitUI_d__6_TypeInfo);
    byte_4A5E6E2 = 1;
  }
  v3 = sub_1B887FC(CoinRoomRootComponent__InitUI_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_4A5E6E0 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CoinRoomRootComponent_EndLoadAsset__);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E6E0 = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v5, 0, 0LL);
    if ( !Child )
      sub_1B8880C(0LL, v7);
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v8, 0LL);
  }
  v9 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v9 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v9->static_fields->ASSET_NAME;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
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
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  Il2CppObject *Object_object__48635516; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v16; // x8
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v18; // x22
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  CoinRoomRootComponent__InitUI_d__6_o *v22; // x20
  const MethodInfo *v23; // x2

  v2 = this;
  if ( (byte_4A5E6E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_BasicHelper_Find_GameObject___);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_CoinRoomRootComponent___c__InitUI_b__6_0__);
    sub_1B885B0(&CoinRoomRootComponent___c_TypeInfo);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)sub_1B885B0(&StringLiteral_14772/*"UIRootPanel"*/);
    byte_4A5E6E5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v16 = CoinRoomRootComponent___c_TypeInfo;
    if ( !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v16 = CoinRoomRootComponent___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__bool__o *)v16->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CoinRoomRootComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__6_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__6_0, v18, Method_CoinRoomRootComponent___c__InitUI_b__6_0__, 0LL);
      static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_GameObject__bool__o *)_9__6_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v20, v21);
    }
    this = (CoinRoomRootComponent__InitUI_d__6_o *)BasicHelper__Find_object_(
                                                     (System_Object_array *)Children,
                                                     (System_Func_T__bool__o *)_9__6_0,
                                                     (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_21;
    v22 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v22,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_21;
    if ( !this )
      goto LABEL_21;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, v23);
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    (AssetData_o *)this,
                                    (System_String_o *)StringLiteral_14772/*"UIRootPanel"*/,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     (UnityEngine_GameObject_o *)Object_object__48635516,
                     transform,
                     0LL,
                     0LL);
          v2->fields._createRoot_5__2 = Object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._createRoot_5__2, (int32_t)Object, v8, v9);
          v2->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(p__2__current, 0, v11, v12);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B8880C(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_CoinRoomRootComponent__InitUI_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E6E3 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomRootComponent___c_TypeInfo);
    byte_4A5E6E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CoinRoomRootComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CoinRoomRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5E6E4 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_1B885B0(&StringLiteral_8456/*"LobbyPanel"*/);
    byte_4A5E6E4 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8456/*"LobbyPanel"*/, 0LL);
}