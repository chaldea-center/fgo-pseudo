void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_42B1919 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
    byte_42B1919 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantRewardAction_o *__fastcall SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  ServantRewardAction_o *result; // x0
  System_String_o **v8; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0

  if ( (byte_42B1917 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_12826/*"Servant_get_prefab"*/);
    sub_B52984(&StringLiteral_12827/*"Servant_get_prefab_for_battle"*/);
    byte_42B1917 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v8 = (System_String_o **)&StringLiteral_12827/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v8 = (System_String_o **)&StringLiteral_12826/*"Servant_get_prefab"*/;
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 (AssetData_o *)result,
                                                                                 *v8,
                                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              Object_WarBoardWaitTimeSetting,
                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_16;
    v12 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    v13 = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v13
      || (UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
          v17 = UnityEngine_GameObject__get_transform(v12, 0LL),
          *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__get_identity(0LL),
          !v17)
      || (UnityEngine_Transform__set_localRotation(v17, *(UnityEngine_Quaternion_o *)&v18, 0LL),
          v22 = UnityEngine_GameObject__get_transform(v12, 0LL),
          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
          !v22) )
    {
LABEL_16:
      sub_B52A5C(transform, v11);
    }
    UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      v12,
                                      (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v21; // x19

  if ( (byte_42B1916 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__);
    sub_B52984(&SummonAssetManager___c__DisplayClass1_0_TypeInfo);
    sub_B52984(&StringLiteral_5893/*"Effect/Summon"*/);
    byte_42B1916 = 1;
  }
  v5 = sub_B52A54(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  SummonAssetManager___c__DisplayClass1_0___ctor((SummonAssetManager___c__DisplayClass1_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onLoad;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)onLoad, v14, v15, v16, v17, v18, v19);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
  }
  else
  {
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)v5,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5893/*"Effect/Summon"*/, v21, 1, 0LL);
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

  if ( (byte_42B1918 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B1918 = 1;
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
    AssetManager__releaseAsset_30359936(v4, 0LL);
    p_summonAssets->klass = 0LL;
    sub_B52920(p_summonAssets, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(0LL, data);
  _4__this->fields.summonAssets = data;
  sub_B52920(&_4__this->fields.summonAssets);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}