void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F1E3 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6230/*"EventUI/Prefabs/80367"*/);
    byte_4A5F1E3 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6230/*"EventUI/Prefabs/80367"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6230/*"EventUI/Prefabs/80367"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  AssetData_array *AssetStorage_37798664; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_array *loadAssetNames; // x22
  AssetData_o *v13; // x22
  Il2CppObject *Object_object__48635516; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Action_o *v38; // x20

  if ( (byte_4A5F1E1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_DiggingSettings___);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__);
    sub_1B885B0(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3300/*"BlockPrefab"*/);
    sub_1B885B0(&StringLiteral_5310/*"DiggingRewardDialog"*/);
    sub_1B885B0(&StringLiteral_5311/*"DiggingSettings"*/);
    sub_1B885B0(&StringLiteral_5307/*"DiggingCompleteImagePrefab"*/);
    sub_1B885B0(&StringLiteral_5309/*"DiggingPointRewardDialog"*/);
    sub_1B885B0(&StringLiteral_5308/*"DiggingConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_11376/*"RewardPrefab"*/);
    sub_1B885B0(&StringLiteral_2609/*"AutoDiggingDialog"*/);
    byte_4A5F1E1 = 1;
  }
  v7 = sub_1B887FC(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)finishCallback, v10, v11);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_37798664 = AssetManager__getAssetStorage_37798664(loadAssetNames, 0LL);
  if ( !AssetStorage_37798664 )
    goto LABEL_12;
  if ( !AssetStorage_37798664->max_length )
    sub_1B88814(AssetStorage_37798664, v9);
  v13 = AssetStorage_37798664->m_Items[0];
  if ( !v13 )
LABEL_12:
    sub_1B8880C(AssetStorage_37798664, v9);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              AssetStorage_37798664->m_Items[0],
                              (System_String_o *)StringLiteral_3300/*"BlockPrefab"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__48635516;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Object_object__48635516, v15, v16);
  v17 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_11376/*"RewardPrefab"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._rewardPrefab_k__BackingField, (int32_t)v17, v18, v19);
  v20 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_2609/*"AutoDiggingDialog"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v20;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int32_t)v20,
    v21,
    v22);
  v23 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_5308/*"DiggingConfirmDialog"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v23;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)v23,
    v24,
    v25);
  v26 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_5309/*"DiggingPointRewardDialog"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v26;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)v26,
    v27,
    v28);
  v29 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_5310/*"DiggingRewardDialog"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v29;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int32_t)v29,
    v30,
    v31);
  v32 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_5307/*"DiggingCompleteImagePrefab"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v32;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)v32,
    v33,
    v34);
  v35 = AssetData__GetObject_object__48635516(
          v13,
          (System_String_o *)StringLiteral_5311/*"DiggingSettings"*/,
          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v35, v36, v37);
  v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v7, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(eventId, v38, 1, 0LL);
}


void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5F1E2 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5F1E2 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._rewardPrefab_k__BackingField, 0, v7, v8);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField, 0, v9, v10);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0,
    v11,
    v12);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0,
    v13,
    v14);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0,
    v15,
    v16);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    0,
    v17,
    v18);
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AutoDiggingDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingCompleteImagePrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingPointRewardDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingRewardDialogPrefab_k__BackingField;
}


DiggingSettings_o *__fastcall DiggingAssetManager__get_Settings(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_blockPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._blockPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_rewardPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._rewardPrefab_k__BackingField;
}


void __fastcall DiggingAssetManager__set_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_Settings(
        DiggingAssetManager_o *this,
        DiggingSettings_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Settings_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._blockPrefab_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._rewardPrefab_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._rewardPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager___c__DisplayClass33_0___ctor(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingAssetManager___c__DisplayClass33_0___GetAssets_b__0(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}