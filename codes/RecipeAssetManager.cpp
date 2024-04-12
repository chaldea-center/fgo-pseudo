void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_42B39DC & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_6249/*"EventUI/Prefabs/80391"*/);
    byte_42B39DC = 1;
  }
  v3 = sub_B5299C(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_6249/*"EventUI/Prefabs/80391"*/;
  if ( StringLiteral_6249/*"EventUI/Prefabs/80391"*/ )
  {
    v12 = sub_B52A44(StringLiteral_6249/*"EventUI/Prefabs/80391"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B52A7C(0LL);
      sub_B52A28(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6249/*"EventUI/Prefabs/80391"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B52A88(v12);
    sub_B52A28(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20
  __int64 v25; // x0

  if ( (byte_42B39DA & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__);
    sub_B52984(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
    byte_42B39DA = 1;
  }
  v7 = sub_B52A54(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  RecipeAssetManager___c__DisplayClass17_0___ctor((RecipeAssetManager___c__DisplayClass17_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        sub_B52920(
          (BattleServantConfConponent_o *)(v7 + 32),
          (System_Int32_array **)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B52A5C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
  {
    v25 = sub_B52A88(v8);
    sub_B52A28(v25, 0LL);
  }
  v23 = loadAssetNames->m_Items[0];
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v23, v24, 1, 0LL);
}


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

  if ( (byte_42B39DB & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B39DB = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28377088(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  struct RecipeAssetManager_o *_4__this; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct RecipeAssetManager_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct RecipeAssetManager_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct RecipeAssetManager_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  v4 = this;
  if ( (byte_42AF294 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__);
    sub_B52984(&StringLiteral_11410/*"RecipeRewardDialog"*/);
    sub_B52984(&StringLiteral_18353/*"ef_treasure_drop"*/);
    sub_B52984(&StringLiteral_11409/*"RecipePointRewardDialog"*/);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_B52984(&StringLiteral_6230/*"EventRecipeConfirmDialog"*/);
    byte_42AF294 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11410/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920((BattleServantConfConponent_o *)&_4__this->fields, (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v12 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11409/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v12 )
    goto LABEL_14;
  v12->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v12->fields._recipePointRewardDialog_k__BackingField,
    (System_Int32_array **)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6230/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !v19
    || (v19->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B52920(
          (BattleServantConfConponent_o *)&v19->fields._recipeConfirmDialog_k__BackingField,
          (System_Int32_array **)this,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        v26 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_18353/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952),
        !v26) )
  {
LABEL_14:
    sub_B52A5C(this, assetData);
  }
  v26->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B52920(
    (BattleServantConfConponent_o *)&v26->fields._recipeDropEffetct_k__BackingField,
    (System_Int32_array **)this,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28376908(eventId, _9__1, 1, 0LL);
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