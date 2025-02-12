void __fastcall RecipeAssetManager___ctor(RecipeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_String_array *v12; // x20
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BCBD01 & 1) == 0 )
  {
    sub_1C1ABD4(&string___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_6390/*"EventUI/Prefabs/80391"*/, v3);
    byte_4BCBD01 = 1;
  }
  v4 = sub_1C1AC7C(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1C1AE30(0LL, v5);
  v12 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1C1AE38(v4, v5);
  v13 = StringLiteral_6390/*"EventUI/Prefabs/80391"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6390/*"EventUI/Prefabs/80391"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v12, v14, v15, v16, v17, v18, v19);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x20

  if ( (byte_4BCBCFF & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1C1ABD4(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__, v8);
    sub_1C1ABD4(&RecipeAssetManager___c__DisplayClass17_0_TypeInfo, v9);
    byte_4BCBCFF = 1;
  }
  v10 = sub_1C1AE20(RecipeAssetManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)finishCallback, v19, v20, v21, v22, v23, v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1C1AE30(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1C1AE38(v11, v12);
  v26 = loadAssetNames->m_Items[0];
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeAssetManager__Release(RecipeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BCBD00 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BCBD00 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39057884(eventId, 0LL);
  this->fields._recipeRewardDialog_k__BackingField = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._recipePointRewardDialog_k__BackingField = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._recipeConfirmDialog_k__BackingField = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._recipeDropEffetct_k__BackingField = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._recipeDropEffetct_k__BackingField,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._recipeConfirmDialog_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._recipeConfirmDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._recipeDropEffetct_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._recipeDropEffetct_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._recipePointRewardDialog_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._recipePointRewardDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._recipeRewardDialog_k__BackingField = value;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct RecipeAssetManager_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct RecipeAssetManager_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct RecipeAssetManager_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  v4 = this;
  if ( (byte_4BCBD02 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, assetData);
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, v5);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__, v7);
    sub_1C1ABD4(&StringLiteral_11400/*"RecipeRewardDialog"*/, v8);
    sub_1C1ABD4(&StringLiteral_19174/*"ef_treasure_drop"*/, v9);
    sub_1C1ABD4(&StringLiteral_11399/*"RecipePointRewardDialog"*/, v10);
    this = (RecipeAssetManager___c__DisplayClass17_0_o *)sub_1C1ABD4(&StringLiteral_6362/*"EventRecipeConfirmDialog"*/, v11);
    byte_4BCBD02 = 1;
  }
  if ( !assetData )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49812820(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11400/*"RecipeRewardDialog"*/,
                                                         (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields._recipeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C1AB78((PartyOrganizationUtility_o *)&_4__this->fields, (int64_t)this, v13, v14, v15, v16, v17, v18);
  v19 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49812820(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_11399/*"RecipePointRewardDialog"*/,
                                                         (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !v19 )
    goto LABEL_13;
  v19->fields._recipePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v19->fields._recipePointRewardDialog_k__BackingField,
    (int64_t)this,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49812820(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_6362/*"EventRecipeConfirmDialog"*/,
                                                         (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !v26
    || (v26->fields._recipeConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&v26->fields._recipeConfirmDialog_k__BackingField,
          (int64_t)this,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        v33 = v4->fields.__4__this,
        this = (RecipeAssetManager___c__DisplayClass17_0_o *)AssetData__GetObject_object__49812820(
                                                               assetData,
                                                               (System_String_o *)StringLiteral_19174/*"ef_treasure_drop"*/,
                                                               (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640),
        !v33) )
  {
LABEL_13:
    sub_1C1AE30(this, assetData);
  }
  v33->fields._recipeDropEffetct_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v33->fields._recipeDropEffetct_k__BackingField,
    (int64_t)this,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_RecipeAssetManager___c__DisplayClass17_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v42, v43, v44, v45, v46, v47);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39057720(eventId, _9__1, 1, 0LL);
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