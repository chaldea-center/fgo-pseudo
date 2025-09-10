void SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C26560 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
    byte_4C26560 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


ServantRewardAction_o *SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  ServantRewardAction_o *result; // x0
  System_String_o **v8; // x8
  Il2CppObject *Object_object__51051712; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x20

  if ( (byte_4C2655E & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_12746/*"Servant_get_prefab"*/);
    sub_1C2D490(&StringLiteral_12747/*"Servant_get_prefab_for_battle"*/);
    byte_4C2655E = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v8 = (System_String_o **)&StringLiteral_12747/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v8 = (System_String_o **)&StringLiteral_12746/*"Servant_get_prefab"*/;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                (AssetData_o *)result,
                                *v8,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51051712,
                                              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v12 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v13 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
      byte_4C20DA7 = 1;
    }
    if ( !v14 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(v14, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( !v15 )
LABEL_21:
      sub_1C2D6EC(transform, v11);
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v12,
                                      (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
  }
  return result;
}


void SummonAssetManager__LoadSummonAssets(
        SummonAssetManager_o *this,
        System_Action_o *onLoad,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4C2655D & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__);
    sub_1C2D490(&SummonAssetManager___c__DisplayClass1_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5884/*"Effect/Summon"*/);
    byte_4C2655D = 1;
  }
  v5 = sub_1C2D6DC(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = onLoad;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)onLoad, v10, v11);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v13,
      (Il2CppObject *)v5,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5884/*"Effect/Summon"*/, v13, 1, 0);
  }
}


void SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2655F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C2655F = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (CGThumbnailListItem_o *)&this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(v4, 0);
    p_summonAssets->klass = 0;
    sub_1C2D434(p_summonAssets, 0, v6, v7);
  }
}


void SummonAssetManager___c__DisplayClass1_0___ctor(
        SummonAssetManager___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonAssetManager___c__DisplayClass1_0___LoadSummonAssets_b__0(
        SummonAssetManager___c__DisplayClass1_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, data);
  _4__this->fields.summonAssets = data;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.onLoad, 0);
}