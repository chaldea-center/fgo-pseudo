void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0038B & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_6205/*"EventUI/Prefabs/80391"*/, v3);
    byte_4A0038B = 1;
  }
  v4 = sub_1B64170(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B64324(0LL);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B6432C(v4, v5);
  v9 = StringLiteral_6205/*"EventUI/Prefabs/80391"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6205/*"EventUI/Prefabs/80391"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v19; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x20

  if ( (byte_4A00389 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__, v8);
    sub_1B640C8(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo, v9);
    byte_4A00389 = 1;
  }
  v10 = sub_1B64314(RecipeAssetManager___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&eventId, finishCallback);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)finishCallback, v14, v15),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B64324(v11);
  }
  if ( !loadAssetNames->max_length )
    sub_1B6432C(v11, v16);
  v19 = loadAssetNames->m_Items[0];
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v10,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A0038A & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A0038A = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37544568(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._recipePointRewardDialog_k__BackingField, 0, v7, v8);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._recipeConfirmDialog_k__BackingField, 0, v9, v10);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._recipeDropEffetct_k__BackingField, 0, v11, v12);
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v14; // w3
  struct RecipeAssetManager_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct RecipeAssetManager_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct RecipeAssetManager_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v28; // w2
  int32_t v29; // w3

  v4 = this;
  if ( (byte_4A0038C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, assetData);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v5);
    sub_1B640C8(&AtlasManager_TypeInfo, v6);
    sub_1B640C8(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__, v7);
    sub_1B640C8(&StringLiteral_11141/*"RecipeRewardDialog"*/, v8);
    sub_1B640C8(&StringLiteral_18792/*"ef_treasure_drop"*/, v9);
    sub_1B640C8(&StringLiteral_11140/*"RecipePointRewardDialog"*/, v10);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1B640C8(&StringLiteral_6177/*"EventRecipeConfirmDialog"*/, v11);
    byte_4A0038C = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48347676(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11141/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v13, v14);
  v15 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48347676(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11140/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v15 )
    goto LABEL_13;
  v15->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v15->fields._recipePointRewardDialog_k__BackingField,
    (int32_t)this,
    v16,
    v17);
  v18 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48347676(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6177/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !v18
    || (v18->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v18->fields._recipeConfirmDialog_k__BackingField,
          (int32_t)this,
          v19,
          v20),
        v21 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__48347676(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18792/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960),
        !v21) )
  {
LABEL_13:
    sub_1B64324(this);
  }
  v21->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v21->fields._recipeDropEffetct_k__BackingField,
    (int32_t)this,
    v22,
    v23);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v28, v29);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37544396(eventId, _9__1, 1, 0LL);
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