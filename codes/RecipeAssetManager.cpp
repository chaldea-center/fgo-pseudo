void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x20

  if ( (byte_4A48EC4 & 1) == 0 )
  {
    sub_1B863B8(&string___TypeInfo, method);
    sub_1B863B8(&StringLiteral_6201/*"EventUI/Prefabs/80391"*/, v3);
    byte_4A48EC4 = 1;
  }
  v4 = sub_1B86460(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B86614(0LL, v5);
  v6 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B8661C(v4, v5);
  *(_QWORD *)(v4 + 32) = StringLiteral_6201/*"EventUI/Prefabs/80391"*/;
  sub_1B8635C(v4 + 32);
  this->fields.loadAssetNames = v6;
  sub_1B8635C(&this->fields.loadAssetNames);
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
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v14; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_4A48EC2 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B863B8(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__, v8);
    sub_1B863B8(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo, v9);
    byte_4A48EC2 = 1;
  }
  v10 = sub_1B86604(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B8635C(v10 + 16),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        v11 = sub_1B8635C(v10 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B86614(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1B8661C(v11, v12);
  v14 = loadAssetNames->m_Items[0];
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, v15, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4A48EC3 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A48EC3 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38815748(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_1B8635C(&this->fields);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._recipePointRewardDialog_k__BackingField);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._recipeConfirmDialog_k__BackingField);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._recipeDropEffetct_k__BackingField);
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
  this->fields._recipeConfirmDialog_k__BackingField = value;
  sub_1B8635C(&this->fields._recipeConfirmDialog_k__BackingField);
}


void __fastcall RecipeAssetManager__set_recipeDropEffetct(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_1B8635C(&this->fields._recipeDropEffetct_k__BackingField);
}


void __fastcall RecipeAssetManager__set_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_1B8635C(&this->fields._recipePointRewardDialog_k__BackingField);
}


void __fastcall RecipeAssetManager__set_recipeRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_1B8635C(&this->fields);
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
  if ( (byte_4A48EC5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, assetData);
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, v5);
    sub_1B863B8(&AtlasManager_TypeInfo, v6);
    sub_1B863B8(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__, v7);
    sub_1B863B8(&StringLiteral_11036/*"RecipeRewardDialog"*/, v8);
    sub_1B863B8(&StringLiteral_18635/*"ef_treasure_drop"*/, v9);
    sub_1B863B8(&StringLiteral_11035/*"RecipePointRewardDialog"*/, v10);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1B863B8(&StringLiteral_6173/*"EventRecipeConfirmDialog"*/, v11);
    byte_4A48EC5 = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49610244(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11036/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B8635C(&_4__this->fields);
  v13 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49610244(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11035/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !v13 )
    goto LABEL_13;
  v13->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B8635C(&v13->fields._recipePointRewardDialog_k__BackingField);
  v14 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49610244(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6173/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !v14
    || (v14->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B8635C(&v14->fields._recipeConfirmDialog_k__BackingField),
        v15 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49610244(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18635/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296),
        !v15) )
  {
LABEL_13:
    sub_1B86614(this, assetData);
  }
  v15->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B8635C(&v15->fields._recipeDropEffetct_k__BackingField);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B8635C(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38815584(eventId, _9__1, 1, 0LL);
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