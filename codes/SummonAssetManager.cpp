void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1550C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, method, v2);
    byte_4B1550C = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantRewardAction_o *__fastcall SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ServantRewardAction_o *result; // x0
  System_String_o **v18; // x8
  __int64 v19; // x1
  Il2CppObject *Object_object__49237568; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x19
  __int64 v24; // x2
  UnityEngine_Transform_o *v25; // x20
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x20
  __int64 v28; // x2
  UnityEngine_Transform_o *v29; // x20

  if ( (byte_4B1550A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parent, isForBattle);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_12808/*"Servant_get_prefab"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12809/*"Servant_get_prefab_for_battle"*/, v15, v16);
    byte_4B1550A = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v18 = (System_String_o **)&StringLiteral_12809/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v18 = (System_String_o **)&StringLiteral_12808/*"Servant_get_prefab"*/;
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                (AssetData_o *)result,
                                *v18,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49237568,
                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v23 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
    v25 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v24);
      byte_4B109C1 = 1;
    }
    if ( !v25 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
    v27 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v22, v26);
      byte_4B109C7 = 1;
    }
    if ( !v27 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(
      v27,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
    v29 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v28);
      byte_4B109C6 = 1;
    }
    if ( !v29 )
LABEL_21:
      sub_1BCAA3C(transform, v22);
    UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v23,
                                      (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
  }
  return result;
}


void __fastcall SummonAssetManager__LoadSummonAssets(
        SummonAssetManager_o *this,
        System_Action_o *onLoad,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v33; // x19
  __int64 v34; // x1

  if ( (byte_4B15509 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, onLoad, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v8, v9);
    sub_1BCA7E0(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5965/*"Effect/Summon"*/, v12, v13);
    byte_4B15509 = 1;
  }
  v14 = sub_1BCAA2C(SummonAssetManager___c__DisplayClass1_0_TypeInfo, onLoad, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = onLoad;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)onLoad, v23, v24, v25, v26, v27, v28);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
  }
  else
  {
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
    AssetLoader_LoadEndDataHandler___ctor(
      v33,
      (Il2CppObject *)v14,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5965/*"Effect/Summon"*/, v33, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_summonAssets; // x19
  AssetData_o *v5; // x20
  struct AssetData_o *summonAssets; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1550B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B1550B = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (PartyOrganizationUtility_o *)&this->fields.summonAssets;
  v5 = summonAssets;
  if ( summonAssets )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505704(v5, 0LL);
    p_summonAssets->klass = 0LL;
    sub_1BCA784(p_summonAssets, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SummonAssetManager___c__DisplayClass1_0___ctor(
        SummonAssetManager___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonAssetManager___c__DisplayClass1_0___LoadSummonAssets_b__0(
        SummonAssetManager___c__DisplayClass1_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, data);
  _4__this->fields.summonAssets = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.summonAssets,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}