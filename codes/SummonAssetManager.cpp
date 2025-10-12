void SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C36C38 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
    byte_4C36C38 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


ServantRewardAction_o *SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  ServantRewardAction_o *result; // x0
  System_String_o **v8; // x8
  Il2CppObject *Object_object__51111776; // x19
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_4C36C36 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_12750/*"Servant_get_prefab"*/);
    sub_1C32C20(&StringLiteral_12751/*"Servant_get_prefab_for_battle"*/);
    byte_4C36C36 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v8 = (System_String_o **)&StringLiteral_12751/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v8 = (System_String_o **)&StringLiteral_12750/*"Servant_get_prefab"*/;
    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                (AssetData_o *)result,
                                *v8,
                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__51111776,
                                              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v11 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
    v12 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v12 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
      byte_4C313D7 = 1;
    }
    if ( !v13 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(v13, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v14 )
LABEL_21:
      sub_1C32E7C(transform);
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v11,
                                      (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x19

  if ( (byte_4C36C35 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__);
    sub_1C32C20(&SummonAssetManager___c__DisplayClass1_0_TypeInfo);
    sub_1C32C20(&StringLiteral_5892/*"Effect/Summon"*/);
    byte_4C36C35 = 1;
  }
  v5 = sub_1C32E6C(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = onLoad;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)onLoad, v9, v10);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5892/*"Effect/Summon"*/, v12, 1, 0);
  }
}


void SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C36C37 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C36C37 = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (CGThumbnailListItem_o *)&this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(v4, 0);
    p_summonAssets->klass = 0;
    sub_1C32BC4(p_summonAssets, 0, v6, v7);
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
    sub_1C32E7C(0);
  _4__this->fields.summonAssets = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.onLoad, 0);
}