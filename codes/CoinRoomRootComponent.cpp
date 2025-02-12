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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *inited; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4BCB1A2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, assetData);
    byte_4BCB1A2 = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.assetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    inited = CoinRoomRootComponent__InitUI(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C1AE30(0LL, v13);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BCB1A3 & 1) == 0 )
  {
    sub_1C1ABD4(&CoinRoomRootComponent__InitUI_d__6_TypeInfo, method);
    byte_4BCB1A3 = 1;
  }
  v3 = sub_1C1AE20(CoinRoomRootComponent__InitUI_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4BCB1A1 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&Method_CoinRoomRootComponent_EndLoadAsset__, v3);
    sub_1C1ABD4(&CoinRoomUtility_TypeInfo, v4);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    byte_4BCB1A1 = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38988476(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v9, 0, 0LL);
    if ( !Child )
      sub_1C1AE30(0LL, v11);
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v12, 0LL);
  }
  v13 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v13 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v13->static_fields->ASSET_NAME;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  SceneRootComponent__beginStartUp_39873964((SceneRootComponent_o *)this, 0LL);
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
  Il2CppObject *Object_object__49812820; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v31; // x8
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v33; // x22
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  CoinRoomRootComponent__InitUI_d__6_o *v41; // x20
  const MethodInfo *v42; // x2

  v2 = this;
  if ( (byte_4BCB1A6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, method);
    sub_1C1ABD4(&Method_BasicHelper_Find_GameObject___, v3);
    sub_1C1ABD4(&System_Func_GameObject__bool__TypeInfo, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C1ABD4(&Method_CoinRoomRootComponent___c__InitUI_b__6_0__, v7);
    sub_1C1ABD4(&CoinRoomRootComponent___c_TypeInfo, v8);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)sub_1C1ABD4(&StringLiteral_15022/*"UIRootPanel"*/, v9);
    byte_4BCB1A6 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v2->fields._createRoot_5__2;
    v2->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v31 = CoinRoomRootComponent___c_TypeInfo;
    if ( !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo);
      v31 = CoinRoomRootComponent___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__bool__o *)v31->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = CoinRoomRootComponent___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__6_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__6_0, v33, Method_CoinRoomRootComponent___c__InitUI_b__6_0__, 0LL);
      static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_GameObject__bool__o *)_9__6_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    this = (CoinRoomRootComponent__InitUI_d__6_o *)BasicHelper__Find_object_(
                                                     (System_Object_array *)Children,
                                                     (System_Func_T__bool__o *)_9__6_0,
                                                     (const MethodInfo_2F8AFC8 *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_21;
    v41 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v41,
                                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_21;
    if ( !this )
      goto LABEL_21;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, v42);
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        Object_object__49812820 = AssetData__GetObject_object__49812820(
                                    (AssetData_o *)this,
                                    (System_String_o *)StringLiteral_15022/*"UIRootPanel"*/,
                                    (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
        this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     (UnityEngine_GameObject_o *)Object_object__49812820,
                     transform,
                     0LL,
                     0LL);
          v2->fields._createRoot_5__2 = Object;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&v2->fields._createRoot_5__2,
            (int64_t)Object,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          v2->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C1AB78(p__2__current, 0LL, v22, v23, v24, v25, v26, v27);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C1AE30(this, method);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_CoinRoomRootComponent__InitUI_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCB1A4 & 1) == 0 )
  {
    sub_1C1ABD4(&CoinRoomRootComponent___c_TypeInfo, v1);
    byte_4BCB1A4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(CoinRoomRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CoinRoomRootComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CoinRoomRootComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BCB1A5 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_1C1ABD4(&StringLiteral_8624/*"LobbyPanel"*/, x);
    byte_4BCB1A5 = 1;
  }
  if ( !x )
    sub_1C1AE30(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8624/*"LobbyPanel"*/, 0LL);
}