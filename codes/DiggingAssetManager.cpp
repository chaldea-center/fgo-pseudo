void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x20

  if ( (byte_4AFC7CD & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, method);
    sub_1BC3008(&StringLiteral_6215/*"EventUI/Prefabs/80367"*/, v3);
    byte_4AFC7CD = 1;
  }
  v4 = sub_1BC30B0(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BC3264(0LL, v5);
  v7 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BC326C(v4, v5, v6);
  *(_QWORD *)(v4 + 32) = StringLiteral_6215/*"EventUI/Prefabs/80367"*/;
  sub_1BC2FAC(v4 + 32);
  this->fields.loadAssetNames = v7;
  sub_1BC2FAC(&this->fields.loadAssetNames);
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
  AssetData_array *AssetStorage_39579352; // x0
  __int64 v23; // x1
  System_String_array *loadAssetNames; // x22
  __int64 v25; // x2
  AssetData_o *v26; // x22
  System_Action_o *v27; // x20

  if ( (byte_4AFC7CB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, v8);
    sub_1BC3008(&AssetManager_TypeInfo, v9);
    sub_1BC3008(&AtlasManager_TypeInfo, v10);
    sub_1BC3008(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_1BC3008(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_3159/*"BlockPrefab"*/, v13);
    sub_1BC3008(&StringLiteral_5230/*"DiggingRewardDialog"*/, v14);
    sub_1BC3008(&StringLiteral_5231/*"DiggingSettings"*/, v15);
    sub_1BC3008(&StringLiteral_5227/*"DiggingCompleteImagePrefab"*/, v16);
    sub_1BC3008(&StringLiteral_5229/*"DiggingPointRewardDialog"*/, v17);
    sub_1BC3008(&StringLiteral_5228/*"DiggingConfirmDialog"*/, v18);
    sub_1BC3008(&StringLiteral_11291/*"RewardPrefab"*/, v19);
    sub_1BC3008(&StringLiteral_2471/*"AutoDiggingDialog"*/, v20);
    byte_4AFC7CB = 1;
  }
  v21 = (Il2CppObject *)sub_1BC3254(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  v21[1].klass = (Il2CppClass *)finishCallback;
  sub_1BC2FAC(&v21[1]);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_39579352 = AssetManager__getAssetStorage_39579352(loadAssetNames, 0LL);
  if ( !AssetStorage_39579352 )
    goto LABEL_12;
  if ( !AssetStorage_39579352->max_length )
    sub_1BC326C(AssetStorage_39579352, v23, v25);
  v26 = AssetStorage_39579352->m_Items[0];
  if ( !v26 )
LABEL_12:
    sub_1BC3264(AssetStorage_39579352, v23);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                                                   AssetStorage_39579352->m_Items[0],
                                                                                   (System_String_o *)StringLiteral_3159/*"BlockPrefab"*/,
                                                                                   (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                                                    v26,
                                                                                    (System_String_o *)StringLiteral_11291/*"RewardPrefab"*/,
                                                                                    (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                                                               v26,
                                                                                               (System_String_o *)StringLiteral_2471/*"AutoDiggingDialog"*/,
                                                                                               (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                                                                  v26,
                                                                                                  (System_String_o *)StringLiteral_5228/*"DiggingConfirmDialog"*/,
                                                                                                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(v26, (System_String_o *)StringLiteral_5229/*"DiggingPointRewardDialog"*/, (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                                                                 v26,
                                                                                                 (System_String_o *)StringLiteral_5230/*"DiggingRewardDialog"*/,
                                                                                                 (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                                                                  v26,
                                                                                                  (System_String_o *)StringLiteral_5227/*"DiggingCompleteImagePrefab"*/,
                                                                                                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  sub_1BC2FAC(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)AssetData__GetObject_object__50213776(
                                                                         v26,
                                                                         (System_String_o *)StringLiteral_5231/*"DiggingSettings"*/,
                                                                         (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_DiggingSettings___);
  sub_1BC2FAC(&this->fields._Settings_k__BackingField);
  v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v27, v21, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39643260(eventId, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4AFC7CC & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AFC7CC = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39643424(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1BC2FAC(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
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
  sub_1BC2FAC(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1BC2FAC(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1BC2FAC(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1BC2FAC(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1BC2FAC(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_Settings(
        DiggingAssetManager_o *this,
        DiggingSettings_o *value,
        const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_1BC2FAC(&this->fields._Settings_k__BackingField);
}


void __fastcall DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._blockPrefab_k__BackingField = value;
  sub_1BC2FAC(&this->fields);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._rewardPrefab_k__BackingField = value;
  sub_1BC2FAC(&this->fields._rewardPrefab_k__BackingField);
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