void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49BF1D8 & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_6161/*"EventUI/Prefabs/80391"*/, v3);
    byte_49BF1D8 = 1;
  }
  v4 = sub_1B4D038(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B4D1EC(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B4D1F4(v4, v5);
  v9 = StringLiteral_6161/*"EventUI/Prefabs/80391"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6161/*"EventUI/Prefabs/80391"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v18; // x19
  AssetLoader_LoadEndDataHandler_o *v19; // x20

  if ( (byte_49BF1D6 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B4CF90(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__, v8);
    sub_1B4CF90(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo, v9);
    byte_49BF1D6 = 1;
  }
  v10 = sub_1B4D1DC(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B4D1EC(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1B4D1F4(v11, v12);
  v18 = loadAssetNames->m_Items[0];
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v10,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v18, v19, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BF1D7 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49BF1D7 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38398928(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, 0, v5, v6);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._recipePointRewardDialog_k__BackingField, 0, v7, v8);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._recipeConfirmDialog_k__BackingField, 0, v9, v10);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._recipeDropEffetct_k__BackingField, 0, v11, v12);
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
  const MethodInfo *v3; // x3

  this->fields._recipeConfirmDialog_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecipeAssetManager__set_recipeDropEffetct(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._recipeDropEffetct_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecipeAssetManager__set_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecipeAssetManager__set_recipeRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct RecipeAssetManager_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct RecipeAssetManager_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct RecipeAssetManager_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  v4 = this;
  if ( (byte_49BF1D9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, assetData);
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, v5);
    sub_1B4CF90(&AtlasManager_TypeInfo, v6);
    sub_1B4CF90(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__, v7);
    sub_1B4CF90(&StringLiteral_10978/*"RecipeRewardDialog"*/, v8);
    sub_1B4CF90(&StringLiteral_18554/*"ef_treasure_drop"*/, v9);
    sub_1B4CF90(&StringLiteral_10977/*"RecipePointRewardDialog"*/, v10);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1B4CF90(&StringLiteral_6133/*"EventRecipeConfirmDialog"*/, v11);
    byte_49BF1D9 = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49169892(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_10978/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields, (int32_t)this, v13, v14);
  v15 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49169892(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_10977/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v15 )
    goto LABEL_13;
  v15->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields._recipePointRewardDialog_k__BackingField, (int32_t)this, v16, v17);
  v18 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49169892(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6133/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v18
    || (v18->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B4CF34((CGThumbnailListItem_o *)&v18->fields._recipeConfirmDialog_k__BackingField, (int32_t)this, v19, v20),
        v21 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49169892(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18554/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000),
        !v21) )
  {
LABEL_13:
    sub_1B4D1EC(this, assetData);
  }
  v21->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v21->fields._recipeDropEffetct_k__BackingField, (int32_t)this, v22, v23);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v26, v27);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38398764(eventId, _9__1, 1, 0LL);
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