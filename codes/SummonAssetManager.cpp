void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A4A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
    byte_4A5A4A0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


ServantRewardAction_o *__fastcall SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  ServantRewardAction_o *result; // x0
  System_String_o **v8; // x8
  Il2CppObject *Object_object__48635516; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x20

  if ( (byte_4A5A49E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12650/*"Servant_get_prefab"*/);
    sub_1B885B0(&StringLiteral_12651/*"Servant_get_prefab_for_battle"*/);
    byte_4A5A49E = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v8 = (System_String_o **)&StringLiteral_12651/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v8 = (System_String_o **)&StringLiteral_12650/*"Servant_get_prefab"*/;
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                (AssetData_o *)result,
                                *v8,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48635516,
                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v12 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE1 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v13 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE7 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4A55CE7 = 1;
    }
    if ( !v14 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(
      v14,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
    v15 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v15 )
LABEL_21:
      sub_1B8880C(transform, v11);
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v12,
                                      (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
  }
  return result;
}


void __fastcall SummonAssetManager__LoadSummonAssets(
        SummonAssetManager_o *this,
        System_Action_o *onLoad,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4A5A49D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__);
    sub_1B885B0(&SummonAssetManager___c__DisplayClass1_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5852/*"Effect/Summon"*/);
    byte_4A5A49D = 1;
  }
  v5 = sub_1B887FC(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = onLoad;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)onLoad, v10, v11);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
  }
  else
  {
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v13,
      (Il2CppObject *)v5,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5852/*"Effect/Summon"*/, v13, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5A49F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A49F = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (ServantStatusBattleListViewItem_o *)&this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(v4, 0LL);
    p_summonAssets->klass = 0LL;
    sub_1B88554(p_summonAssets, 0, v6, v7);
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
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, data);
  _4__this->fields.summonAssets = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}