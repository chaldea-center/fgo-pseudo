void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F177 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6232/*"EventUI/Prefabs/80391"*/);
    byte_4A5F177 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6232/*"EventUI/Prefabs/80391"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6232/*"EventUI/Prefabs/80391"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeAssetManager__GetAssets(
        RecipeAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v15; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_4A5F175 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__);
    sub_1B885B0(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
    byte_4A5F175 = 1;
  }
  v7 = sub_1B887FC(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B8880C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
    sub_1B88814(v8, v9);
  v15 = loadAssetNames->m_Items[0];
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v16, 1, 0LL);
}


void __fastcall RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5F176 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5F176 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._recipePointRewardDialog_k__BackingField, 0, v7, v8);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._recipeConfirmDialog_k__BackingField, 0, v9, v10);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._recipeDropEffetct_k__BackingField, 0, v11, v12);
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
  int32_t v3; // w3

  this->fields._recipeConfirmDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecipeAssetManager__set_recipeDropEffetct(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._recipeDropEffetct_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecipeAssetManager__set_recipePointRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecipeAssetManager__set_recipeRewardDialog(
        RecipeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  struct RecipeAssetManager_o *_4__this; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct RecipeAssetManager_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct RecipeAssetManager_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct RecipeAssetManager_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v19; // w2
  int32_t v20; // w3

  v4 = this;
  if ( (byte_4A5F178 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__);
    sub_1B885B0(&StringLiteral_11195/*"RecipeRewardDialog"*/);
    sub_1B885B0(&StringLiteral_18865/*"ef_treasure_drop"*/);
    sub_1B885B0(&StringLiteral_11194/*"RecipePointRewardDialog"*/);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1B885B0(&StringLiteral_6204/*"EventRecipeConfirmDialog"*/);
    byte_4A5F178 = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48635516(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11195/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v6, v7);
  v8 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48635516(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11194/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v8 )
    goto LABEL_13;
  v8->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields._recipePointRewardDialog_k__BackingField,
    (int32_t)this,
    v9,
    v10);
  v11 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48635516(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6204/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v11
    || (v11->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v11->fields._recipeConfirmDialog_k__BackingField,
          (int32_t)this,
          v12,
          v13),
        v14 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48635516(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18865/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        !v14) )
  {
LABEL_13:
    sub_1B8880C(this, assetData);
  }
  v14->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v14->fields._recipeDropEffetct_k__BackingField,
    (int32_t)this,
    v15,
    v16);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v19, v20);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(eventId, _9__1, 1, 0LL);
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