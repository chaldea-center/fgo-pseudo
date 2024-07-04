void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_48E66F0 & 1) == 0 )
  {
    sub_1B00CCC(&string___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_6166/*"EventUI/Prefabs/80367"*/, v3);
    byte_48E66F0 = 1;
  }
  v4 = sub_1B00D74(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B00F28(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B00F30(v4, v5);
  v9 = StringLiteral_6166/*"EventUI/Prefabs/80367"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6166/*"EventUI/Prefabs/80367"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  AssetData_array *AssetStorage_36597628; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_array *loadAssetNames; // x22
  AssetData_o *v27; // x22
  Il2CppObject *Object_object__47470892; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Action_o *v52; // x20

  if ( (byte_48E66EE & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, v8);
    sub_1B00CCC(&AssetManager_TypeInfo, v9);
    sub_1B00CCC(&AtlasManager_TypeInfo, v10);
    sub_1B00CCC(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_1B00CCC(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_3261/*"BlockPrefab"*/, v13);
    sub_1B00CCC(&StringLiteral_5254/*"DiggingRewardDialog"*/, v14);
    sub_1B00CCC(&StringLiteral_5255/*"DiggingSettings"*/, v15);
    sub_1B00CCC(&StringLiteral_5251/*"DiggingCompleteImagePrefab"*/, v16);
    sub_1B00CCC(&StringLiteral_5253/*"DiggingPointRewardDialog"*/, v17);
    sub_1B00CCC(&StringLiteral_5252/*"DiggingConfirmDialog"*/, v18);
    sub_1B00CCC(&StringLiteral_11189/*"RewardPrefab"*/, v19);
    sub_1B00CCC(&StringLiteral_2600/*"AutoDiggingDialog"*/, v20);
    byte_48E66EE = 1;
  }
  v21 = sub_1B00F18(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  *(_QWORD *)(v21 + 16) = finishCallback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)finishCallback, v24, v25);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_36597628 = AssetManager__getAssetStorage_36597628(loadAssetNames, 0LL);
  if ( !AssetStorage_36597628 )
    goto LABEL_12;
  if ( !AssetStorage_36597628->max_length )
    sub_1B00F30(AssetStorage_36597628, v23);
  v27 = AssetStorage_36597628->m_Items[0];
  if ( !v27 )
LABEL_12:
    sub_1B00F28(AssetStorage_36597628, v23);
  Object_object__47470892 = AssetData__GetObject_object__47470892(
                              AssetStorage_36597628->m_Items[0],
                              (System_String_o *)StringLiteral_3261/*"BlockPrefab"*/,
                              (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__47470892;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Object_object__47470892, v29, v30);
  v31 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_11189/*"RewardPrefab"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v31;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._rewardPrefab_k__BackingField, (int32_t)v31, v32, v33);
  v34 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_2600/*"AutoDiggingDialog"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int32_t)v34,
    v35,
    v36);
  v37 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_5252/*"DiggingConfirmDialog"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v37;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)v37,
    v38,
    v39);
  v40 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_5253/*"DiggingPointRewardDialog"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v40;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)v40,
    v41,
    v42);
  v43 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_5254/*"DiggingRewardDialog"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v43;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int32_t)v43,
    v44,
    v45);
  v46 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_5251/*"DiggingCompleteImagePrefab"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v46;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)v46,
    v47,
    v48);
  v49 = AssetData__GetObject_object__47470892(
          v27,
          (System_String_o *)StringLiteral_5255/*"DiggingSettings"*/,
          (const MethodInfo_2D4592C *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v49;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v49, v50, v51);
  v52 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v21,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_36656536(eventId, v52, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_48E66EF & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_48E66EF = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_36656708(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._rewardPrefab_k__BackingField, 0, v7, v8);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField, 0, v9, v10);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0,
    v11,
    v12);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0,
    v13,
    v14);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0,
    v15,
    v16);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1B00C70(
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
  sub_1B00C70(
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
  sub_1B00C70(
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
  sub_1B00C70(
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
  sub_1B00C70(
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
  sub_1B00C70(
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
  sub_1B00C70(
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._rewardPrefab_k__BackingField = value;
  sub_1B00C70(
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