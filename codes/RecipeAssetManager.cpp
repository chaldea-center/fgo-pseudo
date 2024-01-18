void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_array *v12; // x20
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_4186122 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_6206/*"EventUI/Prefabs/80391"*/, v3);
    byte_4186122 = 1;
  }
  v4 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v12 = (struct System_String_array *)v4;
  v13 = StringLiteral_6206/*"EventUI/Prefabs/80391"*/;
  if ( StringLiteral_6206/*"EventUI/Prefabs/80391"*/ )
  {
    v13 = sub_B2C41C(StringLiteral_6206/*"EventUI/Prefabs/80391"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v22 = sub_B2C454();
      sub_B2C400(v22, 0LL);
    }
    v14 = (System_Int32_array **)StringLiteral_6206/*"EventUI/Prefabs/80391"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    v21 = sub_B2C460(v13);
    sub_B2C400(v21, 0LL);
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeAssetManager__GetAssets(
        RecipeAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x20
  __int64 v28; // x0

  if ( (byte_4186120 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__, v8);
    sub_B2C35C(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo, v9);
    byte_4186120 = 1;
  }
  v10 = sub_B2C42C(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  RecipeAssetManager___c__DisplayClass17_0___ctor((RecipeAssetManager___c__DisplayClass17_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 32),
          (System_Int32_array **)finishCallback,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B2C434(v11, v12);
  }
  if ( !loadAssetNames->max_length )
  {
    v28 = sub_B2C460(v11);
    sub_B2C400(v28, 0LL);
  }
  v26 = loadAssetNames->m_Items[0];
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4186121 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4186121 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28451204(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._recipeDropEffetct_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


UnityEngine_GameObject_o *__fastcall RecipeAssetManager__get_recipeConfirmDialog(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipeConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall RecipeAssetManager__get_recipeDropEffetct(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipeDropEffetct_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall RecipeAssetManager__get_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipePointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall RecipeAssetManager__get_recipeRewardDialog(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipeRewardDialog_k__BackingField;
}


void __fastcall RecipeAssetManager__set_recipeConfirmDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._recipeConfirmDialog_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecipeAssetManager__set_recipeDropEffetct(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._recipeDropEffetct_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecipeAssetManager__set_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecipeAssetManager__set_recipeRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecipeAssetManager___c__DisplayClass17_0___ctor(
        RecipeAssetManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeAssetManager___c__DisplayClass17_0___GetAssets_b__0(
        RecipeAssetManager___c__DisplayClass17_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  RecipeAssetManager___c__DisplayClass17_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeAssetManager_o *_4__this; // x21
  struct RecipeAssetManager_o *v13; // x21
  struct RecipeAssetManager_o *v14; // x21
  struct RecipeAssetManager_o *v15; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4185643 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&AtlasManager_TypeInfo, v6);
    sub_B2C35C(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__, v7);
    sub_B2C35C(&StringLiteral_11323/*"RecipeRewardDialog"*/, v8);
    sub_B2C35C(&StringLiteral_18218/*"ef_treasure_drop"*/, v9);
    sub_B2C35C(&StringLiteral_11322/*"RecipePointRewardDialog"*/, v10);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_B2C35C(&StringLiteral_6187/*"EventRecipeConfirmDialog"*/, v11);
    byte_4185643 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11323/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&_4__this->fields, this);
  v13 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11322/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v13 )
    goto LABEL_14;
  v13->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v13->fields._recipePointRewardDialog_k__BackingField, this);
  v14 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6187/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v14
    || (v14->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(&v14->fields._recipeConfirmDialog_k__BackingField, this),
        v15 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18218/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !v15) )
  {
LABEL_14:
    sub_B2C434(this, assetData);
  }
  v15->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v15->fields._recipeDropEffetct_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(eventId, _9__1, 1, 0LL);
}


void __fastcall RecipeAssetManager___c__DisplayClass17_0___GetAssets_b__1(
        RecipeAssetManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}