void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12A0E & 1) == 0 )
  {
    sub_1BCA7E0(&SummonRootComponent_TypeInfo, v1, v2);
    byte_4B12A0E = 1;
  }
  SummonRootComponent_TypeInfo->static_fields->FIGURE_ID = 800100;
}


void __fastcall SummonRootComponent___ctor(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonRootComponent__ActivateExternalPurchase(
        SummonRootComponent_o *this,
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

  if ( (byte_4B12A00 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo, method, v2);
    byte_4B12A00 = 1;
  }
  v5 = sub_1BCAA2C(SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SummonRootComponent__ClearAssetsInScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *summonEffPrefab; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4B12A09 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12A09 = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(v6, 0LL);
  }
}


void __fastcall SummonRootComponent__EndLoadAssetData(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *p_assetLoadCallback; // x19
  System_Action_o *v18; // x20
  struct System_Action_o *assetLoadCallback; // t1
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_4B12A07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data, method);
    byte_4B12A07 = 1;
  }
  this->fields.summonAssets = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.summonAssets,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonRootComponent__LoadAssetsToScene(this, v10);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (PartyOrganizationUtility_o *)&this->fields.assetLoadCallback;
  v18 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0LL;
    sub_1BCA784(p_assetLoadCallback, 0LL, v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v18, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v21);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Object_object__49237568; // x20
  Il2CppObject *v13; // x0
  SummonRootComponent_o **p_bgGo; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  SummonRootComponent_o *v21; // x21
  __int64 v22; // x2
  SummonRootComponent_o *v23; // x21
  __int64 v24; // x2
  SummonRootComponent_o *v25; // x20

  v4 = this;
  if ( (byte_4B12A04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (SummonRootComponent_o *)sub_1BCA7E0(&StringLiteral_17337/*"bg"*/, v9, v10);
    byte_4B12A04 = 1;
  }
  if ( !data )
    goto LABEL_18;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              (System_String_o *)StringLiteral_17337/*"bg"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v13;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.bgGo, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v4->fields.bgRoot )
    goto LABEL_18;
  v21 = this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0LL);
  if ( !v21 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v21, (UnityEngine_Transform_o *)this, 0LL);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v23 = this;
  if ( !byte_4B109C1 )
  {
    this = (SummonRootComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v22);
    byte_4B109C1 = 1;
  }
  if ( !v23 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v23,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v25 = this;
  if ( !byte_4B109C6 )
  {
    this = (SummonRootComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v24);
    byte_4B109C6 = 1;
  }
  if ( !v25 )
LABEL_18:
    sub_1BCAA3C(this, data);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v25,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B12A0D & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    byte_4B12A0D = 1;
  }
  v8 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, method, v2, v3);
  SceneJumpInfo___ctor_39380884(v8, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v8, 0LL);
}


void __fastcall SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *summonAssets; // x0
  __int64 v17; // x1
  Il2CppObject *Object_object__49237568; // x20
  Il2CppObject *v19; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Transform_o *v27; // x21
  __int64 v28; // x2
  UnityEngine_Transform_o *v29; // x21
  __int64 v30; // x2
  UnityEngine_Transform_o *v31; // x21
  struct SummonControl_o *summonCtr; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_4B12A08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_13242/*"SummonRoot"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12976/*"SmmonEffPref"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_13237/*"SummonEffect2Prefab"*/, v14, v15);
    byte_4B12A08 = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_27;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)summonAssets,
                              (System_String_o *)StringLiteral_13237/*"SummonEffect2Prefab"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v19 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = (struct UnityEngine_GameObject_o *)v19;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.summonEffPrefab, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_27;
  v27 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v27 )
    goto LABEL_27;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)summonAssets, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v29 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4B109C1 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v28);
    byte_4B109C1 = 1;
  }
  if ( !v29 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v31 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4B109C6 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v30);
    byte_4B109C6 = 1;
  }
  if ( !v31 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !summonCtr )
    goto LABEL_27;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&summonCtr->fields.summonInstance,
    (int64_t)summonAssets,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_12976/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     summonAssets,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13242/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_27:
    sub_1BCAA3C(summonAssets, method);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, summonAssets, 0LL);
}


void __fastcall SummonRootComponent__SetAssetStroageData(
        SummonRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  AssetData_o *summonAssets; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  AssetLoader_LoadEndDataHandler_o *v25; // x20
  __int64 v26; // x1

  if ( (byte_4B12A06 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SummonRootComponent_EndLoadAssetData__, v9, v10);
    sub_1BCA7E0(&StringLiteral_5965/*"Effect/Summon"*/, v11, v12);
    byte_4B12A06 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v15);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.assetLoadCallback,
      (int64_t)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v22, v23, v24);
    AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5965/*"Effect/Summon"*/, v25, 1, 0LL);
  }
}


void __fastcall SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  System_String_o *path; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  __int64 v21; // x1

  if ( (byte_4B12A03 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SummonRootComponent_EndLoadBg__, v11, v12);
    sub_1BCA7E0(&StringLiteral_3292/*"Bg/10500"*/, v13, v14);
    byte_4B12A03 = 1;
  }
  v15 = StringLiteral_3292/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_3292/*"Bg/10500"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.path, v15, v2, v3, v4, v5, v6, v7);
  path = this->fields.path;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
  AssetManager__loadAssetStorage(path, v20, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_1BCAA3C(0LL, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4B12A02 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SummonControl___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    byte_4B12A02 = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.summonCtr;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
  }
  if ( !gameObject
    || (SummonControl__quit((SummonControl_o *)gameObject, 0LL),
        SummonRootComponent__destroyBgInfo(this, v11),
        SummonRootComponent__destroyAssetData(this, v12),
        (gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(gameObject, v9);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_IEnumerator_o *v4; // x1

  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  v4 = SummonRootComponent__ActivateExternalPurchase(this, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_39383112((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4B12A01 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B12A01 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
  SoundManager__playBgm(MainBgmName, 0LL);
  SummonRootComponent__SetBg(this, v8);
}


void __fastcall SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
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
  PartyOrganizationUtility_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  UserServantMaster_o *v16; // x21
  UserServantEntity_o *HeroineData; // x0
  __int64 v18; // x1
  SummonRootComponent_c *v19; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v21; // x22
  int32_t FIGURE_ID; // w21
  __int64 v23; // x23
  __int64 v24; // x24
  int32_t v25; // w0
  UIStandFigureR_o *RenderPrefab_38692692; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B12A0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&SummonRootComponent_TypeInfo, v10, v11);
    byte_4B12A0B = 1;
  }
  p_standFigure = (PartyOrganizationUtility_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(standFigure, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v16 = (UserServantMaster_o *)Instance;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo, v15);
    if ( !v16 )
LABEL_19:
      sub_1BCAA3C(Instance, v15);
    HeroineData = UserServantMaster__getHeroineData(v16, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0LL);
    v19 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    v21 = HeroineData;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo, v18);
      v19 = SummonRootComponent_TypeInfo;
    }
    FIGURE_ID = v19->static_fields->FIGURE_ID;
    if ( v21 )
    {
      v24 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v33.fields.currentCryptoKey = v24;
      *(_QWORD *)&v33.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
      RenderPrefab_38692692 = StandFigureManager__CreateRenderPrefab_38692692(
                                svtBase,
                                FIGURE_ID,
                                v25,
                                v21->fields.lv,
                                1,
                                0,
                                1,
                                0LL,
                                0LL);
    }
    else
    {
      RenderPrefab_38692692 = StandFigureManager__CreateRenderPrefab_38693360(
                                svtBase,
                                FIGURE_ID,
                                0,
                                1,
                                0,
                                1,
                                0LL,
                                0,
                                -1,
                                0LL);
    }
    p_standFigure->klass = (PartyOrganizationUtility_c *)RenderPrefab_38692692;
    sub_1BCA784(p_standFigure, (int64_t)RenderPrefab_38692692, v27, v28, v29, v30, v31, v32);
  }
}


void __fastcall SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *summonAssets; // x0
  __int64 v5; // x1
  AssetData_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4B12A0A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B12A0A = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    v6 = this->fields.summonAssets;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAsset_38505704(v6, 0LL);
    this->fields.summonAssets = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.summonAssets, 0LL, v7, v8, v9, v10, v11, v12);
    SummonRootComponent__ClearAssetsInScene(this, v13);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *path; // x20
  __int64 v7; // x1
  PartyOrganizationUtility_o *p_bgGo; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  __int64 v11; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12A05 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12A05 = 1;
  }
  path = this->fields.path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (PartyOrganizationUtility_o *)&this->fields.bgGo;
  v9 = (UnityEngine_Object_o *)bgGo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_1BCA784(p_bgGo, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v5; // x20
  struct UIStandFigureR_o *standFigure; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B12A0C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12A0C = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v5 = (UnityEngine_Object_o *)standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_standFigure )
      sub_1BCAA3C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_standFigure, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall SummonRootComponent__ActivateExternalPurchase_d__12___ctor(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonRootComponent__ActivateExternalPurchase_d__12__MoveNext(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t _1__state; // w8
  PurchaseBehaviour_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  SummonRootComponent___c_c *v19; // x0
  System_Func_bool__o *_9__12_0; // x20
  Il2CppObject *v21; // x21
  struct SummonRootComponent___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_WaitUntil_o *v29; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool result; // w0
  SceneRootComponent_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v40; // x1

  if ( (byte_4B12A11 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__, v8, v9);
    sub_1BCA7E0(&SummonRootComponent___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v12, v13);
    byte_4B12A11 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (SceneRootComponent_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v40);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, _4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v15 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
    v15 = PurchaseBehaviour_TypeInfo;
  }
  v15->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateExternal(0LL);
  v19 = SummonRootComponent___c_TypeInfo;
  if ( !SummonRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonRootComponent___c_TypeInfo, v16);
    v19 = SummonRootComponent___c_TypeInfo;
  }
  _9__12_0 = v19->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = SummonRootComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__12_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v16, v17, v18);
    System_Func_bool____ctor(_9__12_0, v21, Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__, 0LL);
    static_fields = SummonRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v16, v17, v18);
  UnityEngine_WaitUntil___ctor(v29, _9__12_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_IEnumerator_Reset(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
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
  v8 = sub_1BCA7F4(
         &Method_SummonRootComponent__ActivateExternalPurchase_d__12_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_IEnumerator_get_Current(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonRootComponent__ActivateExternalPurchase_d__12__System_IDisposable_Dispose(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonRootComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B12A0F & 1) == 0 )
  {
    sub_1BCA7E0(&SummonRootComponent___c_TypeInfo, v1, v2);
    byte_4B12A0F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SummonRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SummonRootComponent___c_TypeInfo->static_fields->__9 = (struct SummonRootComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonRootComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SummonRootComponent___c___ctor(SummonRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonRootComponent___c___ActivateExternalPurchase_b__12_0(
        SummonRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicExternal_c *v3; // x0

  if ( (byte_4B12A10 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseLogicExternal_TypeInfo, method, v2);
    byte_4B12A10 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, method);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  return v3->static_fields->isEnd;
}