void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x20

  if ( (byte_4A48F30 & 1) == 0 )
  {
    sub_1B863B8(&string___TypeInfo, method);
    sub_1B863B8(&StringLiteral_6199/*"EventUI/Prefabs/80367"*/, v3);
    byte_4A48F30 = 1;
  }
  v4 = sub_1B86460(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B86614(0LL, v5);
  v6 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B8661C(v4, v5);
  *(_QWORD *)(v4 + 32) = StringLiteral_6199/*"EventUI/Prefabs/80367"*/;
  sub_1B8635C(v4 + 32);
  this->fields.loadAssetNames = v6;
  sub_1B8635C(&this->fields.loadAssetNames);
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
  Il2CppObject *v21; // x21
  AssetData_array *AssetStorage_38752976; // x0
  __int64 v23; // x1
  System_String_array *loadAssetNames; // x22
  AssetData_o *v25; // x22
  System_Action_o *v26; // x20

  if ( (byte_4A48F2E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, v8);
    sub_1B863B8(&AssetManager_TypeInfo, v9);
    sub_1B863B8(&AtlasManager_TypeInfo, v10);
    sub_1B863B8(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_1B863B8(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_3210/*"BlockPrefab"*/, v13);
    sub_1B863B8(&StringLiteral_5242/*"DiggingRewardDialog"*/, v14);
    sub_1B863B8(&StringLiteral_5243/*"DiggingSettings"*/, v15);
    sub_1B863B8(&StringLiteral_5239/*"DiggingCompleteImagePrefab"*/, v16);
    sub_1B863B8(&StringLiteral_5241/*"DiggingPointRewardDialog"*/, v17);
    sub_1B863B8(&StringLiteral_5240/*"DiggingConfirmDialog"*/, v18);
    sub_1B863B8(&StringLiteral_11210/*"RewardPrefab"*/, v19);
    sub_1B863B8(&StringLiteral_2504/*"AutoDiggingDialog"*/, v20);
    byte_4A48F2E = 1;
  }
  v21 = (Il2CppObject *)sub_1B86604(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  v21[1].klass = (Il2CppClass *)finishCallback;
  sub_1B8635C(&v21[1]);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_38752976 = AssetManager__getAssetStorage_38752976(loadAssetNames, 0LL);
  if ( !AssetStorage_38752976 )
    goto LABEL_12;
  if ( !AssetStorage_38752976->max_length )
    sub_1B8661C(AssetStorage_38752976, v23);
  v25 = AssetStorage_38752976->m_Items[0];
  if ( !v25 )
LABEL_12:
    sub_1B86614(AssetStorage_38752976, v23);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(
                                                                                   AssetStorage_38752976->m_Items[0],
                                                                                   (System_String_o *)StringLiteral_3210/*"BlockPrefab"*/,
                                                                                   (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(
                                                                                    v25,
                                                                                    (System_String_o *)StringLiteral_11210/*"RewardPrefab"*/,
                                                                                    (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(
                                                                                               v25,
                                                                                               (System_String_o *)StringLiteral_2504/*"AutoDiggingDialog"*/,
                                                                                               (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(
                                                                                                  v25,
                                                                                                  (System_String_o *)StringLiteral_5240/*"DiggingConfirmDialog"*/,
                                                                                                  (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(v25, (System_String_o *)StringLiteral_5241/*"DiggingPointRewardDialog"*/, (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(
                                                                                                 v25,
                                                                                                 (System_String_o *)StringLiteral_5242/*"DiggingRewardDialog"*/,
                                                                                                 (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__49610244(
                                                                                                  v25,
                                                                                                  (System_String_o *)StringLiteral_5239/*"DiggingCompleteImagePrefab"*/,
                                                                                                  (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  sub_1B8635C(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)AssetData__GetObject_object__49610244(
                                                                         v25,
                                                                         (System_String_o *)StringLiteral_5243/*"DiggingSettings"*/,
                                                                         (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_DiggingSettings___);
  sub_1B8635C(&this->fields._Settings_k__BackingField);
  v26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v26, v21, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38815584(eventId, v26, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4A48F2F & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A48F2F = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38815748(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1B8635C(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
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
  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_Settings(
        DiggingAssetManager_o *this,
        DiggingSettings_o *value,
        const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_1B8635C(&this->fields._Settings_k__BackingField);
}


void __fastcall DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._blockPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._rewardPrefab_k__BackingField = value;
  sub_1B8635C(&this->fields._rewardPrefab_k__BackingField);
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