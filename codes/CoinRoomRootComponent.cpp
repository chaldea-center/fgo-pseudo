void CoinRoomRootComponent___ctor(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void CoinRoomRootComponent__EndLoadAsset(
        CoinRoomRootComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *inited; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_5974840 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974840 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
      (int32_t)assetData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    inited = CoinRoomRootComponent__InitUI(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, inited, 0);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v13);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
  }
}


System_Collections_IEnumerator_o *CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974841 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomRootComponent__InitUI_d__6_TypeInfo);
    byte_5974841 = 1;
  }
  v3 = sub_2213CCC(CoinRoomRootComponent__InitUI_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  CoinRoomUtility_c *v11; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  __int64 v14; // x1

  if ( (byte_597483F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_CoinRoomRootComponent_EndLoadAsset__);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597483F = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(assetData, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( GameObjectExtensions__HasChild(gameObject, 0) )
  {
    v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v6, 0, 0);
    if ( !Child )
      sub_2213CDC(0, v8);
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_83459800(v10, 0);
  }
  v11 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v5);
    v11 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v11->static_fields->ASSET_NAME;
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
  AssetManager__loadAssetStorage(ASSET_NAME, v13, 1, 0, 0);
}


void CoinRoomRootComponent__beginStartUp(CoinRoomRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 40, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)this, 0);
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
  int32_t _1__state; // w23
  struct CoinRoomRootComponent_o *_4__this; // x19
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v8; // x8
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v11; // x22
  struct CoinRoomRootComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  CoinRoomRootComponent__InitUI_d__6_o *v19; // x20
  const MethodInfo *v20; // x2
  Il2CppObject *Object_object__58532980; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  v2 = this;
  if ( (byte_5974844 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_BasicHelper_Find_GameObject___);
    sub_2213A60(&System_Func_GameObject__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_CoinRoomRootComponent___c__InitUI_b__6_0__);
    sub_2213A60(&CoinRoomRootComponent___c_TypeInfo);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)sub_2213A60(&StringLiteral_15381/*"UIRootPanel"*/);
    byte_5974844 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (CoinRoomRootComponent__InitUI_d__6_o *)_4__this->fields.assetData;
      if ( this )
      {
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    (AssetData_o *)this,
                                    (System_String_o *)StringLiteral_15381/*"UIRootPanel"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     (UnityEngine_GameObject_o *)Object_object__58532980,
                     transform,
                     0,
                     0);
          v2->fields._createRoot_5__2 = Object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v2->fields._createRoot_5__2,
            (int32_t)Object,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          v2->fields.__2__current = 0;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_2213A04(p__2__current, 0, v31, v32, v33, v34, v35, v36);
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return _1__state == 0;
        }
      }
    }
    goto LABEL_21;
  }
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0);
    v8 = CoinRoomRootComponent___c_TypeInfo;
    if ( !*(&CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo, v6);
      v8 = CoinRoomRootComponent___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__6_0 = (System_Func_object__bool__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v6);
        static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__6_0, v11, Method_CoinRoomRootComponent___c__InitUI_b__6_0__, 0);
      v12 = CoinRoomRootComponent___c_TypeInfo->static_fields;
      v12->__9__6_0 = (struct System_Func_GameObject__bool__o *)_9__6_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__6_0, (int32_t)_9__6_0, v13, v14, v15, v16, v17, v18);
    }
    this = (CoinRoomRootComponent__InitUI_d__6_o *)BasicHelper__Find_object_(
                                                     (System_Object_array *)Children,
                                                     (System_Func_T__bool__o *)_9__6_0,
                                                     (const MethodInfo_3810A1C *)Method_BasicHelper_Find_GameObject___);
    if ( this )
    {
      v19 = this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v19,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
      if ( _4__this )
      {
        if ( this )
        {
          CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, v20);
          SceneRootComponent__beginInitialize((SceneRootComponent_o *)_4__this, 0);
          this = (CoinRoomRootComponent__InitUI_d__6_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( this )
          {
            AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0);
            return _1__state == 0;
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CoinRoomRootComponent__InitUI_d__6_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974842 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomRootComponent___c_TypeInfo);
    byte_5974842 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CoinRoomRootComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CoinRoomRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5974843 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_2213A60(&StringLiteral_8841/*"LobbyPanel"*/);
    byte_5974843 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8841/*"LobbyPanel"*/, 0);
}