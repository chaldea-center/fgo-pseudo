void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_49BA16D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, method);
    byte_49BA16D = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37B4828 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


ServantRewardAction_o *__fastcall SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantRewardAction_o *result; // x0
  System_String_o **v13; // x8
  Il2CppObject *Object_object__49169892; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x19
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *v20; // x20

  if ( (byte_49BA16B & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, parent);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_12455/*"Servant_get_prefab"*/, v10);
    sub_1B4CF90(&StringLiteral_12456/*"Servant_get_prefab_for_battle"*/, v11);
    byte_49BA16B = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v13 = (System_String_o **)&StringLiteral_12456/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v13 = (System_String_o **)&StringLiteral_12455/*"Servant_get_prefab"*/;
    Object_object__49169892 = AssetData__GetObject_object__49169892(
                                (AssetData_o *)result,
                                *v13,
                                (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__49169892,
                                              (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v17 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49B5361 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
      byte_49B5361 = 1;
    }
    if ( !v18 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
    v19 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49B5367 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B4CF90(&UnityEngine_Quaternion_TypeInfo, v16);
      byte_49B5367 = 1;
    }
    if ( !v19 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(
      v19,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
    v20 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49B5366 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v16);
      byte_49B5366 = 1;
    }
    if ( !v20 )
LABEL_21:
      sub_1B4D1EC(transform, v16);
    UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v17,
                                      (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
  }
  return result;
}


void __fastcall SummonAssetManager__LoadSummonAssets(
        SummonAssetManager_o *this,
        System_Action_o *onLoad,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v17; // x19

  if ( (byte_49BA16A & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, onLoad);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B4CF90(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v6);
    sub_1B4CF90(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_5785/*"Effect/Summon"*/, v8);
    byte_49BA16A = 1;
  }
  v9 = sub_1B4D1DC(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = onLoad;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)onLoad, v14, v15);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)v9,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5785/*"Effect/Summon"*/, v17, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BA16C & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    byte_49BA16C = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (CGThumbnailListItem_o *)&this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38328408(v4, 0LL);
    p_summonAssets->klass = 0LL;
    sub_1B4CF34(p_summonAssets, 0, v6, v7);
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
  const MethodInfo *v3; // x3
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, data);
  _4__this->fields.summonAssets = data;
  sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}