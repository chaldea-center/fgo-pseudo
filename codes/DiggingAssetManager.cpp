void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x20

  if ( (byte_4B3F26B & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, method);
    sub_1BDB878(&StringLiteral_6278/*"EventUI/Prefabs/80367"*/, v3);
    byte_4B3F26B = 1;
  }
  v4 = sub_1BDB920(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BDBAD4(0LL, v5);
  v7 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BDBADC(v4, v5, v6);
  *(_QWORD *)(v4 + 32) = StringLiteral_6278/*"EventUI/Prefabs/80367"*/;
  sub_1BDB81C(v4 + 32);
  this->fields.loadAssetNames = v7;
  sub_1BDB81C(&this->fields.loadAssetNames);
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
  AssetData_array *AssetStorage_39562180; // x0
  __int64 v23; // x1
  System_String_array *loadAssetNames; // x22
  __int64 v25; // x2
  AssetData_o *v26; // x22
  System_Action_o *v27; // x20

  if ( (byte_4B3F269 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, v8);
    sub_1BDB878(&AssetManager_TypeInfo, v9);
    sub_1BDB878(&AtlasManager_TypeInfo, v10);
    sub_1BDB878(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_1BDB878(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_3225/*"BlockPrefab"*/, v13);
    sub_1BDB878(&StringLiteral_5311/*"DiggingRewardDialog"*/, v14);
    sub_1BDB878(&StringLiteral_5312/*"DiggingSettings"*/, v15);
    sub_1BDB878(&StringLiteral_5308/*"DiggingCompleteImagePrefab"*/, v16);
    sub_1BDB878(&StringLiteral_5310/*"DiggingPointRewardDialog"*/, v17);
    sub_1BDB878(&StringLiteral_5309/*"DiggingConfirmDialog"*/, v18);
    sub_1BDB878(&StringLiteral_11376/*"RewardPrefab"*/, v19);
    sub_1BDB878(&StringLiteral_2516/*"AutoDiggingDialog"*/, v20);
    byte_4B3F269 = 1;
  }
  v21 = (Il2CppObject *)sub_1BDBAC4(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  v21[1].klass = (Il2CppClass *)finishCallback;
  sub_1BDB81C(&v21[1]);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_39562180 = AssetManager__getAssetStorage_39562180(loadAssetNames, 0LL);
  if ( !AssetStorage_39562180 )
    goto LABEL_12;
  if ( !AssetStorage_39562180->max_length )
    sub_1BDBADC(AssetStorage_39562180, v23, v25);
  v26 = AssetStorage_39562180->m_Items[0];
  if ( !v26 )
LABEL_12:
    sub_1BDBAD4(AssetStorage_39562180, v23);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                                                                   AssetStorage_39562180->m_Items[0],
                                                                                   (System_String_o *)StringLiteral_3225/*"BlockPrefab"*/,
                                                                                   (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                                                                    v26,
                                                                                    (System_String_o *)StringLiteral_11376/*"RewardPrefab"*/,
                                                                                    (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                                                                               v26,
                                                                                               (System_String_o *)StringLiteral_2516/*"AutoDiggingDialog"*/,
                                                                                               (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                                                                                  v26,
                                                                                                  (System_String_o *)StringLiteral_5309/*"DiggingConfirmDialog"*/,
                                                                                                  (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(v26, (System_String_o *)StringLiteral_5310/*"DiggingPointRewardDialog"*/, (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                                                                                 v26,
                                                                                                 (System_String_o *)StringLiteral_5311/*"DiggingRewardDialog"*/,
                                                                                                 (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                                                                                  v26,
                                                                                                  (System_String_o *)StringLiteral_5308/*"DiggingCompleteImagePrefab"*/,
                                                                                                  (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  sub_1BDB81C(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)AssetData__GetObject_object__50417328(
                                                                         v26,
                                                                         (System_String_o *)StringLiteral_5312/*"DiggingSettings"*/,
                                                                         (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_DiggingSettings___);
  sub_1BDB81C(&this->fields._Settings_k__BackingField);
  v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v27, v21, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39625948(eventId, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4B3F26A & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B3F26A = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39626112(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1BDB81C(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
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
  sub_1BDB81C(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
}


void __fastcall DiggingAssetManager__set_Settings(
        DiggingAssetManager_o *this,
        DiggingSettings_o *value,
        const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_1BDB81C(&this->fields._Settings_k__BackingField);
}


void __fastcall DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._blockPrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._rewardPrefab_k__BackingField = value;
  sub_1BDB81C(&this->fields._rewardPrefab_k__BackingField);
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