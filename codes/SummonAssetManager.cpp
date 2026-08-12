void SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_596FA28 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
    byte_596FA28 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


ServantRewardAction_o *SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  ServantRewardAction_o *result; // x0
  System_String_o **v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Object_object__58532980; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x20
  UnityEngine_Transform_o *v17; // x20

  if ( (byte_596FA26 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13291/*"Servant_get_prefab"*/);
    sub_2213A60(&StringLiteral_13292/*"Servant_get_prefab_for_battle"*/);
    byte_596FA26 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v8 = (System_String_o **)&StringLiteral_13292/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v8 = (System_String_o **)&StringLiteral_13291/*"Servant_get_prefab"*/;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                (AssetData_o *)result,
                                *v8,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__58532980,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v14 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE0 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v15 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
    v16 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    if ( !v16 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(v16, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v17 )
LABEL_21:
      sub_2213CDC(transform, v13);
    UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v14,
                                      (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2

  if ( (byte_596FA25 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__);
    sub_2213A60(&SummonAssetManager___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&StringLiteral_6143/*"Effect/Summon"*/);
    byte_596FA25 = 1;
  }
  v5 = sub_2213CCC(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onLoad;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)onLoad, v14, v15, v16, v17, v18, v19);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)v5,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22, v23);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6143/*"Effect/Summon"*/, v21, 1, 0, 0);
  }
}


void SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_summonAssets; // x19
  AssetData_o *v5; // x20
  struct AssetData_o *summonAssets; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596FA27 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FA27 = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (MissionNaviTransitionBoardItem_o *)&this->fields.summonAssets;
  v5 = summonAssets;
  if ( summonAssets )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47496972(v5, 0);
    p_summonAssets->klass = 0;
    sub_2213A04(p_summonAssets, 0, v7, v8, v9, v10, v11, v12);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, data);
  _4__this->fields.summonAssets = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.summonAssets,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.onLoad, 0);
}