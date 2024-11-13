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

  if ( (byte_4B1980F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, assetData, method);
    byte_4B1980F = 1;
  }
  if ( assetData )
  {
    this->fields.assetData = assetData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.assetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    inited = CoinRoomRootComponent__InitUI(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  }
  else
  {
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v13);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CoinRoomRootComponent__InitUI(
        CoinRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19810 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomRootComponent__InitUI_d__6_TypeInfo, method, v2);
    byte_4B19810 = 1;
  }
  v5 = sub_1BCAA2C(CoinRoomRootComponent__InitUI_d__6_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall CoinRoomRootComponent____n__0(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
}


void __fastcall CoinRoomRootComponent__beginInitialize(CoinRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  AssetData_o *assetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x20
  CoinRoomUtility_c *v22; // x0
  System_String_o *ASSET_NAME; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  __int64 v25; // x1

  if ( (byte_4B1980E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CoinRoomRootComponent_EndLoadAsset__, v4, v5);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1980E = 1;
  }
  assetData = this->fields.assetData;
  this->fields.state = 0;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(assetData, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v17, 0, 0LL);
    if ( !Child )
      sub_1BCAA3C(0LL, v19);
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    UnityEngine_Object__Destroy_70154244(v21, 0LL);
  }
  v22 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v14);
    v22 = CoinRoomUtility_TypeInfo;
  }
  ASSET_NAME = v22->static_fields->ASSET_NAME;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15, v16);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_CoinRoomRootComponent_EndLoadAsset__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  AssetManager__loadAssetStorage(ASSET_NAME, v24, 1, 0LL);
}


void __fastcall CoinRoomRootComponent__beginStartUp(
        CoinRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 40, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
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
  __int64 v2; // x2
  CoinRoomRootComponent__InitUI_d__6_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t _1__state; // w8
  struct CoinRoomRootComponent_o *_4__this; // x19
  Il2CppObject *Object_object__49237568; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  bool result; // w0
  UnityEngine_GameObject_o *createRoot_5__2; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  UnityEngine_GameObject_array *Children; // x20
  CoinRoomRootComponent___c_c *v42; // x8
  System_Func_object__bool__o *_9__6_0; // x21
  Il2CppObject *v44; // x22
  struct CoinRoomRootComponent___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  CoinRoomRootComponent__InitUI_d__6_o *v52; // x20
  const MethodInfo *v53; // x2

  v3 = this;
  if ( (byte_4B19813 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_Find_GameObject___, v4, v5);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_CoinRoomRootComponent___c__InitUI_b__6_0__, v12, v13);
    sub_1BCA7E0(&CoinRoomRootComponent___c_TypeInfo, v14, v15);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)sub_1BCA7E0(&StringLiteral_14937/*"UIRootPanel"*/, v16, v17);
    byte_4B19813 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    createRoot_5__2 = v3->fields._createRoot_5__2;
    v3->fields.__1__state = -1;
    Children = GameObjectExtensions__GetChildren(createRoot_5__2, 0, 0LL);
    v42 = CoinRoomRootComponent___c_TypeInfo;
    if ( !CoinRoomRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomRootComponent___c_TypeInfo, v38);
      v42 = CoinRoomRootComponent___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__bool__o *)v42->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42, v38);
        v42 = CoinRoomRootComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__6_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v38, v39, v40);
      System_Func_object__bool____ctor(_9__6_0, v44, Method_CoinRoomRootComponent___c__InitUI_b__6_0__, 0LL);
      static_fields = CoinRoomRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_GameObject__bool__o *)_9__6_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    this = (CoinRoomRootComponent__InitUI_d__6_o *)BasicHelper__Find_object_(
                                                     (System_Object_array *)Children,
                                                     (System_Func_T__bool__o *)_9__6_0,
                                                     (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_GameObject___);
    if ( !this )
      goto LABEL_21;
    v52 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v52,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CoinRoomLobbyComponent___);
    if ( !_4__this )
      goto LABEL_21;
    if ( !this )
      goto LABEL_21;
    CoinRoomLobbyComponent__OpenLobby((CoinRoomLobbyComponent_o *)this, _4__this->fields.myFSM, v53);
    SceneRootComponent__beginInitialize((SceneRootComponent_o *)_4__this, 0LL);
    this = (CoinRoomRootComponent__InitUI_d__6_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_21;
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (CoinRoomRootComponent__InitUI_d__6_o *)_4__this->fields.assetData;
      if ( this )
      {
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    (AssetData_o *)this,
                                    (System_String_o *)StringLiteral_14937/*"UIRootPanel"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        this = (CoinRoomRootComponent__InitUI_d__6_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)_4__this,
                                                         0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)_4__this,
                     (UnityEngine_GameObject_o *)Object_object__49237568,
                     transform,
                     0LL,
                     0LL);
          v3->fields._createRoot_5__2 = Object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v3->fields._createRoot_5__2,
            (int64_t)Object,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          v3->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v30, v31, v32, v33, v34, v35);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_CoinRoomRootComponent__InitUI_d__6_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19811 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomRootComponent___c_TypeInfo, v1, v2);
    byte_4B19811 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CoinRoomRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CoinRoomRootComponent___c_TypeInfo->static_fields->__9 = (struct CoinRoomRootComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CoinRoomRootComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B19812 & 1) == 0 )
  {
    this = (CoinRoomRootComponent___c_o *)sub_1BCA7E0(&StringLiteral_8581/*"LobbyPanel"*/, x, method);
    byte_4B19812 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, (System_String_o *)StringLiteral_8581/*"LobbyPanel"*/, 0LL);
}