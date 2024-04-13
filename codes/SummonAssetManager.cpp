void __fastcall SummonAssetManager___ctor(SummonAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA389 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager___ctor__, (_DWORD)method, v2, v3);
    byte_42EA389 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_SummonAssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantRewardAction_o *__fastcall SummonAssetManager__InstantiateSvtGetPrefab(
        SummonAssetManager_o *this,
        UnityEngine_Transform_o *parent,
        bool isForBattle,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  ServantRewardAction_o *result; // x0
  System_String_o **v23; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x19
  UnityEngine_Transform_o *v28; // x20
  int v29; // s0
  UnityEngine_Transform_o *v32; // x20
  int v33; // s0
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0

  if ( (byte_42EA387 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parent, isForBattle, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12885/*"Servant_get_prefab"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12886/*"Servant_get_prefab_for_battle"*/, v19, v20, v21);
    byte_42EA387 = 1;
  }
  result = (ServantRewardAction_o *)this->fields.summonAssets;
  if ( result )
  {
    v23 = (System_String_o **)&StringLiteral_12886/*"Servant_get_prefab_for_battle"*/;
    if ( !isForBattle )
      v23 = (System_String_o **)&StringLiteral_12885/*"Servant_get_prefab"*/;
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 (AssetData_o *)result,
                                                                                 *v23,
                                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              Object_WarBoardWaitTimeSetting,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_16;
    v27 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, parent, 0LL);
    v28 = UnityEngine_GameObject__get_transform(v27, 0LL);
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v28
      || (UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL),
          v32 = UnityEngine_GameObject__get_transform(v27, 0LL),
          *(UnityEngine_Quaternion_o *)&v33 = UnityEngine_Quaternion__get_identity(0LL),
          !v32)
      || (UnityEngine_Transform__set_localRotation(v32, *(UnityEngine_Quaternion_o *)&v33, 0LL),
          v37 = UnityEngine_GameObject__get_transform(v27, 0LL),
          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL),
          !v37) )
    {
LABEL_16:
      sub_B5D69C(transform, v26);
    }
    UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
    return (ServantRewardAction_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                      v27,
                                      (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_ServantRewardAction___);
  }
  return result;
}


void __fastcall SummonAssetManager__LoadSummonAssets(
        SummonAssetManager_o *this,
        System_Action_o *onLoad,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AssetData_o *summonAssets; // x0
  AssetLoader_LoadEndDataHandler_o *v34; // x19

  if ( (byte_42EA386 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)onLoad, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__, v9, v10, v11);
    sub_B5D5C4(&SummonAssetManager___c__DisplayClass1_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5929/*"Effect/Summon"*/, v15, v16, v17);
    byte_42EA386 = 1;
  }
  v18 = sub_B5D694(SummonAssetManager___c__DisplayClass1_0_TypeInfo);
  SummonAssetManager___c__DisplayClass1_0___ctor((SummonAssetManager___c__DisplayClass1_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = onLoad;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)onLoad, v27, v28, v29, v30, v31, v32);
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
  }
  else
  {
    v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v34,
      (Il2CppObject *)v18,
      Method_SummonAssetManager___c__DisplayClass1_0__LoadSummonAssets_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5929/*"Effect/Summon"*/, v34, 1, 0LL);
  }
}


void __fastcall SummonAssetManager__UnloadSummonAssets(SummonAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_summonAssets; // x19
  AssetData_o *v6; // x20
  struct AssetData_o *summonAssets; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA388 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA388 = 1;
  }
  summonAssets = this->fields.summonAssets;
  p_summonAssets = (BattleServantConfConponent_o *)&this->fields.summonAssets;
  v6 = summonAssets;
  if ( summonAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(v6, 0LL);
    p_summonAssets->klass = 0LL;
    sub_B5D560(p_summonAssets, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.summonAssets = data;
  sub_B5D560(&_4__this->fields.summonAssets);
  ActionExtensions__Call(this->fields.onLoad, 0LL);
}