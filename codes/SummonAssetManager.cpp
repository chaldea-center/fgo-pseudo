void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FB768 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, method);
    byte_49FB768 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
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
  Il2CppObject *Object_object__48347676; // x19
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x19
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x20
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x20
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x20

  if ( (byte_49FB766 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, parent);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_12589/*"Servant_get_prefab"*/, v10);
    sub_1B640C8(&StringLiteral_12590/*"Servant_get_prefab_for_battle"*/, v11);
    byte_49FB766 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v13 = (System_String_o **)&StringLiteral_12590/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v13 = (System_String_o **)&StringLiteral_12589/*"Servant_get_prefab"*/;
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                (AssetData_o *)result,
                                *v13,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              Object_object__48347676,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_21;
    v16 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7111 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
      byte_49F7111 = 1;
    }
    if ( !v18 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
    v20 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7117 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v19);
      byte_49F7117 = 1;
    }
    if ( !v20 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(
      v20,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
    v22 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
      byte_49F7116 = 1;
    }
    if ( !v22 )
LABEL_21:
      sub_1B64324(transform);
    UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_object_(
                                      v16,
                                      (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v18; // x19

  if ( (byte_49FB765 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, onLoad);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v6);
    sub_1B640C8(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5826/*"Effect/Summon"*/, v8);
    byte_49FB765 = 1;
  }
  v9 = sub_1B64314(SummonAssetManager___c__DisplayClass1_0_TypeInfo, onLoad, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = onLoad;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)onLoad, v13, v14);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    AssetLoader_LoadEndDataHandler___ctor(
      v18,
      (Il2CppObject *)v9,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5826/*"Effect/Summon"*/, v18, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB767 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FB767 = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (ServantStatusBattleListViewItem_o *)&this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(v4, 0LL);
    p_summonAssets->klass = 0LL;
    sub_1B6406C(p_summonAssets, 0, v6, v7);
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
    sub_1B64324(0LL);
  _4__this->fields.summonAssets = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}