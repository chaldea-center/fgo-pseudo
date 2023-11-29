void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F7CE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, method);
    byte_40F7CE8 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
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
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  UnityEngine_Transform_o *v27; // x20
  int v28; // s0

  if ( (byte_40F7CE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, parent);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_12673, v10);
    sub_B16FFC(&StringLiteral_12674, v11);
    byte_40F7CE6 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v13 = (System_String_o **)&StringLiteral_12674;
    if ( !isForBattle )
      v13 = (System_String_o **)&StringLiteral_12673;
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 (AssetData_o *)result,
                                                                                 *v13,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v15 )
      goto LABEL_16;
    v16 = v15;
    transform = UnityEngine_GameObject__get_transform(v15, 0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_parent(transform, parent, 0LL);
    v18 = UnityEngine_GameObject__get_transform(v16, 0LL);
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v18
      || (UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
          v22 = UnityEngine_GameObject__get_transform(v16, 0LL),
          *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__get_identity(0LL),
          !v22)
      || (UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v23, 0LL),
          v27 = UnityEngine_GameObject__get_transform(v16, 0LL),
          *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL),
          !v27) )
    {
LABEL_16:
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      v16,
                                      (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
  }
  return result;
}


void __fastcall SummonAssetManager__LoadSummonAssets(
        SummonAssetManager_o *this,
        System_Action_o *onLoad,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v29; // x19

  if ( (byte_40F7CE5 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, onLoad);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v8);
    sub_B16FFC(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_5833, v10);
    byte_40F7CE5 = 1;
  }
  v11 = sub_B170CC(SummonAssetManager___c__DisplayClass1_0_TypeInfo, onLoad, method, v3, v4);
  SummonAssetManager___c__DisplayClass1_0___ctor((SummonAssetManager___c__DisplayClass1_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = onLoad;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)onLoad, v18, v19, v20, v21, v22, v23);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
  }
  else
  {
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26, v27);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5833, v29, 1, 0LL);
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

  if ( (byte_40F7CE7 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F7CE7 = 1;
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
    AssetManager__releaseAsset_29947376(v4, 0LL);
    p_summonAssets->klass = 0LL;
    sub_B16F98(p_summonAssets, 0LL, v6, v7, v8, v9, v10, v11);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SummonAssetManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.summonAssets = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.summonAssets,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}