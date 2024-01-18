void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  if ( (byte_4185854 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, method);
    byte_4185854 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
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
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x19
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  UnityEngine_Transform_o *v27; // x20
  int v28; // s0

  if ( (byte_4185852 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parent);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_12729/*"Servant_get_prefab"*/, v10);
    sub_B2C35C(&StringLiteral_12730/*"Servant_get_prefab_for_battle"*/, v11);
    byte_4185852 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v13 = (System_String_o **)&StringLiteral_12730/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v13 = (System_String_o **)&StringLiteral_12729/*"Servant_get_prefab"*/;
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 (AssetData_o *)result,
                                                                                 *v13,
                                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              Object_WarBoardWaitTimeSetting,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_16;
    v17 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    v18 = UnityEngine_GameObject__get_transform(v17, 0LL);
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v18
      || (UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL),
          v22 = UnityEngine_GameObject__get_transform(v17, 0LL),
          *(UnityEngine_Quaternion_o *)&v23 = UnityEngine_Quaternion__get_identity(0LL),
          !v22)
      || (UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v23, 0LL),
          v27 = UnityEngine_GameObject__get_transform(v17, 0LL),
          *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL),
          !v27) )
    {
LABEL_16:
      sub_B2C434(transform, v16);
    }
    UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      v17,
                                      (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
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
  SummonAssetManager___c__DisplayClass1_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4185851 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, onLoad);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v6);
    sub_B2C35C(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5850/*"Effect/Summon"*/, v8);
    byte_4185851 = 1;
  }
  v9 = (SummonAssetManager___c__DisplayClass1_0_o *)sub_B2C42C(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  SummonAssetManager___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.__4__this = this;
  sub_B2C2F8(&v9->fields, this);
  v9->fields.onLoad = onLoad;
  sub_B2C2F8(&v9->fields.onLoad, onLoad);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(v9->fields.onLoad, 0LL);
  }
  else
  {
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v13,
      (Il2CppObject *)v9,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5850/*"Effect/Summon"*/, v13, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  struct AssetData_o **p_summonAssets; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *summonAssets; // t1

  if ( (byte_4185853 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4185853 = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = &this->fields.summonAssets;
  v4 = summonAssets;
  if ( summonAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30152684(v4, 0LL);
    *p_summonAssets = 0LL;
    sub_B2C2F8(p_summonAssets, 0LL);
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
    sub_B2C434(0LL, data);
  _4__this->fields.summonAssets = data;
  sub_B2C2F8(&_4__this->fields.summonAssets, data);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}