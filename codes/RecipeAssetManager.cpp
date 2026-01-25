void RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_String_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_4CE8B63 & 1) == 0 )
  {
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_6281/*"EventUI/Prefabs/80391"*/);
    byte_4CE8B63 = 1;
  }
  v3 = sub_1C7BB90(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C7BD40(0, v4);
  v5 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C7BD48(v3);
  v6 = StringLiteral_6281/*"EventUI/Prefabs/80391"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6281/*"EventUI/Prefabs/80391"*/;
  sub_1C7BA8C(v3 + 32, v6);
  this->fields.loadAssetNames = v5;
  sub_1C7BA8C(&this->fields.loadAssetNames, v5);
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
  __int64 v9; // x1
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v11; // x19
  AssetLoader_LoadEndDataHandler_o *v12; // x20

  if ( (byte_4CE8B61 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__);
    sub_1C7BAE8(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
    byte_4CE8B61 = 1;
  }
  v7 = sub_1C7BD34(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C7BA8C(v7 + 16, this),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        v8 = sub_1C7BA8C(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C7BD40(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C7BD48(v8);
  v11 = loadAssetNames->m_Items[0];
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, v12, 1, 0);
}


void RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4CE8B62 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    byte_4CE8B62 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_41168504(eventId, 0);
  this->fields._recipeRewardDialog_k__BackingField = 0;
  sub_1C7BA8C(&this->fields, 0);
  this->fields._recipePointRewardDialog_k__BackingField = 0;
  sub_1C7BA8C(&this->fields._recipePointRewardDialog_k__BackingField, 0);
  this->fields._recipeConfirmDialog_k__BackingField = 0;
  sub_1C7BA8C(&this->fields._recipeConfirmDialog_k__BackingField, 0);
  this->fields._recipeDropEffetct_k__BackingField = 0;
  sub_1C7BA8C(&this->fields._recipeDropEffetct_k__BackingField, 0);
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
  sub_1C7BA8C(&this->fields._recipeConfirmDialog_k__BackingField, value);
}


void RecipeAssetManager__set_recipeDropEffetct(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_1C7BA8C(&this->fields._recipeDropEffetct_k__BackingField, value);
}


void RecipeAssetManager__set_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_1C7BA8C(&this->fields._recipePointRewardDialog_k__BackingField, value);
}


void RecipeAssetManager__set_recipeRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_1C7BA8C(&this->fields, value);
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
  if ( (byte_4CE8B64 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__);
    sub_1C7BAE8(&StringLiteral_11272/*"RecipeRewardDialog"*/);
    sub_1C7BAE8(&StringLiteral_18997/*"ef_treasure_drop"*/);
    sub_1C7BAE8(&StringLiteral_11271/*"RecipePointRewardDialog"*/);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1C7BAE8(&StringLiteral_6253/*"EventRecipeConfirmDialog"*/);
    byte_4CE8B64 = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51713432(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11272/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C7BA8C(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51713432(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11271/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !v6 )
    goto LABEL_13;
  v6->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C7BA8C(&v6->fields._recipePointRewardDialog_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51713432(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6253/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !v7
    || (v7->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C7BA8C(&v7->fields._recipeConfirmDialog_k__BackingField, this),
        v8 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__51713432(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18997/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560),
        !v8) )
  {
LABEL_13:
    sub_1C7BD40(this, assetData);
  }
  v8->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C7BA8C(&v8->fields._recipeDropEffetct_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C7BA8C(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41168332(eventId, _9__1, 1, 0);
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