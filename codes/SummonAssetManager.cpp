void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_4215F67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, method);
    byte_4215F67 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x19
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x19
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0

  if ( (byte_4215F65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, parent);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_12773/*"Servant_get_prefab"*/, v10);
    sub_B0D8A4(&StringLiteral_12774/*"Servant_get_prefab_for_battle"*/, v11);
    byte_4215F65 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v13 = (System_String_o **)&StringLiteral_12774/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v13 = (System_String_o **)&StringLiteral_12773/*"Servant_get_prefab"*/;
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 (AssetData_o *)result,
                                                                                 *v13,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              Object_WarBoardWaitTimeSetting,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_16;
    v16 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    v17 = UnityEngine_GameObject__get_transform(v16, 0LL);
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v17
      || (UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL),
          v21 = UnityEngine_GameObject__get_transform(v16, 0LL),
          *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__get_identity(0LL),
          !v21)
      || (UnityEngine_Transform__set_localRotation(v21, *(UnityEngine_Quaternion_o *)&v22, 0LL),
          v26 = UnityEngine_GameObject__get_transform(v16, 0LL),
          *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL),
          !v26) )
    {
LABEL_16:
      sub_B0D97C(transform);
    }
    UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      v16,
                                      (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v26; // x19

  if ( (byte_4215F64 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, onLoad);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v6);
    sub_B0D8A4(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5867/*"Effect/Summon"*/, v8);
    byte_4215F64 = 1;
  }
  v9 = sub_B0D974(SummonAssetManager___c__DisplayClass1_0_TypeInfo, onLoad, method);
  SummonAssetManager___c__DisplayClass1_0___ctor((SummonAssetManager___c__DisplayClass1_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = onLoad;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)onLoad, v17, v18, v19, v20, v21, v22);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)v9,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5867/*"Effect/Summon"*/, v26, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215F66 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_4215F66 = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (BattleServantConfConponent_o *)&this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(v4, 0LL);
    p_summonAssets->klass = 0LL;
    sub_B0D840(p_summonAssets, 0LL, v6, v7, v8, v9, v10, v11);
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
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  _4__this->fields.summonAssets = data;
  sub_B0D840(&_4__this->fields.summonAssets, data);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}