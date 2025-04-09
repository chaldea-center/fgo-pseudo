void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49BF244 & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_6159/*"EventUI/Prefabs/80367"*/, v3);
    byte_49BF244 = 1;
  }
  v4 = sub_1B4D038(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B4D1EC(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B4D1F4(v4, v5);
  v9 = StringLiteral_6159/*"EventUI/Prefabs/80367"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6159/*"EventUI/Prefabs/80367"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  AssetData_array *AssetStorage_38336416; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_array *loadAssetNames; // x22
  AssetData_o *v27; // x22
  Il2CppObject *Object_object__49169892; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Action_o *v52; // x20

  if ( (byte_49BF242 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, v8);
    sub_1B4CF90(&AssetManager_TypeInfo, v9);
    sub_1B4CF90(&AtlasManager_TypeInfo, v10);
    sub_1B4CF90(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_1B4CF90(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_3192/*"BlockPrefab"*/, v13);
    sub_1B4CF90(&StringLiteral_5212/*"DiggingRewardDialog"*/, v14);
    sub_1B4CF90(&StringLiteral_5213/*"DiggingSettings"*/, v15);
    sub_1B4CF90(&StringLiteral_5209/*"DiggingCompleteImagePrefab"*/, v16);
    sub_1B4CF90(&StringLiteral_5211/*"DiggingPointRewardDialog"*/, v17);
    sub_1B4CF90(&StringLiteral_5210/*"DiggingConfirmDialog"*/, v18);
    sub_1B4CF90(&StringLiteral_11151/*"RewardPrefab"*/, v19);
    sub_1B4CF90(&StringLiteral_2496/*"AutoDiggingDialog"*/, v20);
    byte_49BF242 = 1;
  }
  v21 = sub_1B4D1DC(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  *(_QWORD *)(v21 + 16) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 16), (int32_t)finishCallback, v24, v25);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_38336416 = AssetManager__getAssetStorage_38336416(loadAssetNames, 0LL);
  if ( !AssetStorage_38336416 )
    goto LABEL_12;
  if ( !AssetStorage_38336416->max_length )
    sub_1B4D1F4(AssetStorage_38336416, v23);
  v27 = AssetStorage_38336416->m_Items[0];
  if ( !v27 )
LABEL_12:
    sub_1B4D1EC(AssetStorage_38336416, v23);
  Object_object__49169892 = AssetData__GetObject_object__49169892(
                              AssetStorage_38336416->m_Items[0],
                              (System_String_o *)StringLiteral_3192/*"BlockPrefab"*/,
                              (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__49169892;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)Object_object__49169892, v29, v30);
  v31 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_11151/*"RewardPrefab"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v31;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._rewardPrefab_k__BackingField, (int32_t)v31, v32, v33);
  v34 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_2496/*"AutoDiggingDialog"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField, (int32_t)v34, v35, v36);
  v37 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_5210/*"DiggingConfirmDialog"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v37;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)v37,
    v38,
    v39);
  v40 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_5211/*"DiggingPointRewardDialog"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v40;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)v40,
    v41,
    v42);
  v43 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_5212/*"DiggingRewardDialog"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v43;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField, (int32_t)v43, v44, v45);
  v46 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_5209/*"DiggingCompleteImagePrefab"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v46;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)v46,
    v47,
    v48);
  v49 = AssetData__GetObject_object__49169892(
          v27,
          (System_String_o *)StringLiteral_5213/*"DiggingSettings"*/,
          (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v49;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)v49, v50, v51);
  v52 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v21,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38398764(eventId, v52, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49BF243 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49BF243 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38398928(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, 0, v5, v6);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._rewardPrefab_k__BackingField, 0, v7, v8);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField, 0, v9, v10);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField, 0, v11, v12);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField, 0, v13, v14);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField, 0, v15, v16);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField, 0, v17, v18);
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
  const MethodInfo *v3; // x3

  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DiggingAssetManager__set_Settings(
        DiggingAssetManager_o *this,
        DiggingSettings_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Settings_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Settings_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._blockPrefab_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._rewardPrefab_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._rewardPrefab_k__BackingField, (int32_t)value, (int32_t)method, v3);
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