void RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_String_array *v4; // x20
  __int64 v5; // x1

  if ( (byte_4C3D5D6 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_6272/*"EventUI/Prefabs/80391"*/);
    byte_4C3D5D6 = 1;
  }
  v3 = sub_1C37100(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C372B4(0);
  v4 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C372BC(v3);
  v5 = StringLiteral_6272/*"EventUI/Prefabs/80391"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6272/*"EventUI/Prefabs/80391"*/;
  sub_1C36FFC(v3 + 32, v5);
  this->fields.loadAssetNames = v4;
  sub_1C36FFC(&this->fields.loadAssetNames, v4);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeAssetManager__GetAssets(
        RecipeAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v10; // x19
  AssetLoader_LoadEndDataHandler_o *v11; // x20

  if ( (byte_4C3D5D4 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__);
    sub_1C37058(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
    byte_4C3D5D4 = 1;
  }
  v7 = sub_1C372A4(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C36FFC(v7 + 16, this),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        v8 = sub_1C36FFC(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C372B4(v8);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C372BC(v8);
  v10 = loadAssetNames->m_Items[0];
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v7,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v10, v11, 1, 0);
}


void RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C3D5D5 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C3D5D5 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40606860(eventId, 0);
  this->fields._recipeRewardDialog_k__BackingField = 0;
  sub_1C36FFC(&this->fields, 0);
  this->fields._recipePointRewardDialog_k__BackingField = 0;
  sub_1C36FFC(&this->fields._recipePointRewardDialog_k__BackingField, 0);
  this->fields._recipeConfirmDialog_k__BackingField = 0;
  sub_1C36FFC(&this->fields._recipeConfirmDialog_k__BackingField, 0);
  this->fields._recipeDropEffetct_k__BackingField = 0;
  sub_1C36FFC(&this->fields._recipeDropEffetct_k__BackingField, 0);
}


UnityEngine_GameObject_o *RecipeAssetManager__get_recipeConfirmDialog(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipeConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *RecipeAssetManager__get_recipeDropEffetct(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipeDropEffetct_k__BackingField;
}


UnityEngine_GameObject_o *RecipeAssetManager__get_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipePointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *RecipeAssetManager__get_recipeRewardDialog(
        RecipeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._recipeRewardDialog_k__BackingField;
}


void RecipeAssetManager__set_recipeConfirmDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeConfirmDialog_k__BackingField = value;
  sub_1C36FFC(&this->fields._recipeConfirmDialog_k__BackingField, value);
}


void RecipeAssetManager__set_recipeDropEffetct(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_1C36FFC(&this->fields._recipeDropEffetct_k__BackingField, value);
}


void RecipeAssetManager__set_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_1C36FFC(&this->fields._recipePointRewardDialog_k__BackingField, value);
}


void RecipeAssetManager__set_recipeRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_1C36FFC(&this->fields, value);
}


void RecipeAssetManager___c__DisplayClass17_0___ctor(
        RecipeAssetManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeAssetManager___c__DisplayClass17_0___GetAssets_b__0(
        RecipeAssetManager___c__DisplayClass17_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  RecipeAssetManager___c__DisplayClass17_0_o *v4; // x19
  struct RecipeAssetManager_o *_4__this; // x21
  struct RecipeAssetManager_o *v6; // x21
  struct RecipeAssetManager_o *v7; // x21
  struct RecipeAssetManager_o *v8; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4C3D5D7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__);
    sub_1C37058(&StringLiteral_11224/*"RecipeRewardDialog"*/);
    sub_1C37058(&StringLiteral_18871/*"ef_treasure_drop"*/);
    sub_1C37058(&StringLiteral_11223/*"RecipePointRewardDialog"*/);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1C37058(&StringLiteral_6244/*"EventRecipeConfirmDialog"*/);
    byte_4C3D5D7 = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51154888(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11224/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C36FFC(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51154888(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11223/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !v6 )
    goto LABEL_13;
  v6->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C36FFC(&v6->fields._recipePointRewardDialog_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51154888(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6244/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !v7
    || (v7->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C36FFC(&v7->fields._recipeConfirmDialog_k__BackingField, this),
        v8 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51154888(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18871/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168),
        !v8) )
  {
LABEL_13:
    sub_1C372B4(this);
  }
  v8->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C36FFC(&v8->fields._recipeDropEffetct_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C36FFC(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40606688(eventId, _9__1, 1, 0);
}


void RecipeAssetManager___c__DisplayClass17_0___GetAssets_b__1(
        RecipeAssetManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}