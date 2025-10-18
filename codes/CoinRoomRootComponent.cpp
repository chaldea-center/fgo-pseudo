void CoinRoomRootComponent___ctor(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void CoinRoomRootComponent__EndLoadAsset(
        CoinRoomRootComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *inited; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_4C46D62 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C46D62 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, (int32_t)method, v3);
    inited = CoinRoomRootComponent__InitUI(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, inited, 0);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
  }
}


System_Collections_IEnumerator_o *CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46D63 & 1) == 0 )
  {
    sub_1C37058(&CoinRoomRootComponent__InitUI_d__6_TypeInfo);
    byte_4C46D63 = 1;
  }
  v3 = sub_1C372A4(CoinRoomRootComponent__InitUI_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void CoinRoomRootComponent____n__0(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
}


void CoinRoomRootComponent__beginInitialize(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *v7; // x20
  CoinRoomUtility_c *v8; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x21

  if ( (byte_4C46D61 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_CoinRoomRootComponent_EndLoadAsset__);
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46D61 = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(assetData, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( GameObjectExtensions__HasChild(gameObject, 0) )
  {
    v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v5, 0, 0);
    if ( !Child )
      sub_1C372B4(0);
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v7, 0);
  }
  v8 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v8 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v8->static_fields->ASSET_NAME;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(ASSET_NAME, v10, 1, 0);
}


void CoinRoomRootComponent__beginStartUp(CoinRoomRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
}


void CoinRoomRootComponent__InitUI_d__6___ctor(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CoinRoomRootComponent__InitUI_d__6__MoveNext(CoinRoomRootComponent__InitUI_d__6_o *this, const MethodInfo *method)
{
  CoinRoomRootComponent__InitUI_d__6_o *v2; // x20
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  Il2CppObject *Object_object__51154888; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v16; // x8
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v18; // x22
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CoinRoomRootComponent__InitUI_d__6_o *v22; // x20
  const MethodInfo *v23; // x2

  v2 = this;
  if ( (byte_4C46D66 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_BasicHelper_Find_GameObject___);
    sub_1C37058(&System_Func_GameObject__bool__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_CoinRoomRootComponent___c__InitUI_b__6_0__);
    sub_1C37058(&CoinRoomRootComponent___c_TypeInfo);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)sub_1C37058(&StringLiteral_14788/*"UIRootPanel"*/);
    byte_4C46D66 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0);
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
      _9__6_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__6_0, v18, Method_CoinRoomRootComponent___c__InitUI_b__6_0__, 0);
      static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_GameObject__bool__o *)_9__6_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v20, v21);
    }
    this = (CoinRoomRootComponent__InitUI_d__6_o *)BasicHelper__Find_object_(
                                                     (System_Object_array *)Children,
                                                     (System_Func_T__bool__o *)_9__6_0,
                                                     (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_21;
    v22 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v22,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_21;
    if ( !this )
      goto LABEL_21;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, v23);
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)_4__this, 0);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_21;
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (CoinRoomRootComponent__InitUI_d__6_o *)_4__this->fields.assetData;
      if ( this )
      {
        Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    (AssetData_o *)this,
                                    (System_String_o *)StringLiteral_14788/*"UIRootPanel"*/,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
        this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     (UnityEngine_GameObject_o *)Object_object__51154888,
                     transform,
                     0,
                     0);
          v2->fields._createRoot_5__2 = Object;
          sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._createRoot_5__2, (int32_t)Object, v8, v9);
          v2->fields.__2__current = 0;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C36FFC(p__2__current, 0, v11, v12);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C372B4(this);
  }
  return 0;
}


Il2CppObject *CoinRoomRootComponent__InitUI_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CoinRoomRootComponent__InitUI_d__6__System_Collections_IEnumerator_Reset(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_CoinRoomRootComponent__InitUI_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *CoinRoomRootComponent__InitUI_d__6__System_Collections_IEnumerator_get_Current(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CoinRoomRootComponent__InitUI_d__6__System_IDisposable_Dispose(
        CoinRoomRootComponent__InitUI_d__6_o *this,
        const MethodInfo *method)
{
  ;
}


void CoinRoomRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46D64 & 1) == 0 )
  {
    sub_1C37058(&CoinRoomRootComponent___c_TypeInfo);
    byte_4C46D64 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CoinRoomRootComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)CoinRoomRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CoinRoomRootComponent___c___ctor(CoinRoomRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CoinRoomRootComponent___c___InitUI_b__6_0(
        CoinRoomRootComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4C46D65 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_1C37058(&StringLiteral_8479/*"LobbyPanel"*/);
    byte_4C46D65 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8479/*"LobbyPanel"*/, 0);
}