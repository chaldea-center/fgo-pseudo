void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
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

  if ( (byte_40F82CB & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_6188/*"EventUI/Prefabs/80391"*/, v4);
    byte_40F82CB = 1;
  }
  v5 = sub_B17014(string___TypeInfo, 1LL, v2);
  if ( !v5 )
    sub_B170D4();
  v12 = (struct System_String_array *)v5;
  v13 = StringLiteral_6188/*"EventUI/Prefabs/80391"*/;
  if ( StringLiteral_6188/*"EventUI/Prefabs/80391"*/ )
  {
    v13 = sub_B170BC(StringLiteral_6188/*"EventUI/Prefabs/80391"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    v14 = (System_Int32_array **)StringLiteral_6188/*"EventUI/Prefabs/80391"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    sub_B17100(v13, v14, v6);
    sub_B170A0();
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B16F98(
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x20

  if ( (byte_40F82C9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__, v9);
    sub_B16FFC(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo, v10);
    byte_40F82C9 = 1;
  }
  v11 = sub_B170CC(RecipeAssetManager___c__DisplayClass17_0_TypeInfo, *(_QWORD *)&eventId, finishCallback, method, v4);
  RecipeAssetManager___c__DisplayClass17_0___ctor((RecipeAssetManager___c__DisplayClass17_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v11 + 32) = finishCallback,
        *(_DWORD *)(v11 + 24) = eventId,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 32),
          (System_Int32_array **)finishCallback,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B170D4();
  }
  if ( !loadAssetNames->max_length )
  {
    sub_B17100(v24, v25, v26);
    sub_B170A0();
  }
  v30 = loadAssetNames->m_Items[0];
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0LL);
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

  if ( (byte_40F82CA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F82CA = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28584740(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeAssetManager_o *_4__this; // x21
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct RecipeAssetManager_o *v20; // x21
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct RecipeAssetManager_o *v28; // x21
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct RecipeAssetManager_o *v36; // x21
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40F7411 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v5);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__, v7);
    sub_B16FFC(&StringLiteral_11287/*"RecipeRewardDialog"*/, v8);
    sub_B16FFC(&StringLiteral_18150/*"ef_treasure_drop"*/, v9);
    sub_B16FFC(&StringLiteral_11286/*"RecipePointRewardDialog"*/, v10);
    sub_B16FFC(&StringLiteral_6169/*"EventRecipeConfirmDialog"*/, v11);
    byte_40F7411 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_11287/*"RecipeRewardDialog"*/,
                                                            (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields,
    Object_WarBoardWaitTimeSetting,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.__4__this;
  v21 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_11286/*"RecipePointRewardDialog"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v20 )
    goto LABEL_14;
  v20->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->fields._recipePointRewardDialog_k__BackingField,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = this->fields.__4__this;
  v29 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_6169/*"EventRecipeConfirmDialog"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v28
    || (v28->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v29,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v28->fields._recipeConfirmDialog_k__BackingField,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        v36 = this->fields.__4__this,
        v37 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       assetData,
                                       (System_String_o *)StringLiteral_18150/*"ef_treasure_drop"*/,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        !v36) )
  {
LABEL_14:
    sub_B170D4();
  }
  v36->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->fields._recipeDropEffetct_k__BackingField,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  _9__1 = this->fields.__9__1;
  eventId = this->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(eventId, _9__1, 1, 0LL);
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