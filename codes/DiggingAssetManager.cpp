void DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_String_array *v6; // x20

  if ( (byte_4C21989 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_6261/*"EventUI/Prefabs/80367"*/);
    byte_4C21989 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v6 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v4, v5);
  *(_QWORD *)(v3 + 32) = StringLiteral_6261/*"EventUI/Prefabs/80367"*/;
  sub_1C2D434(v3 + 32);
  this->fields.loadAssetNames = v6;
  sub_1C2D434(&this->fields.loadAssetNames);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  AssetData_array *AssetStorage_40321272; // x0
  __int64 v9; // x1
  System_String_array *loadAssetNames; // x22
  __int64 v11; // x2
  AssetData_o *v12; // x22
  System_Action_o *v13; // x20

  if ( (byte_4C21987 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_DiggingSettings___);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__);
    sub_1C2D490(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
    sub_1C2D490(&StringLiteral_3181/*"BlockPrefab"*/);
    sub_1C2D490(&StringLiteral_5267/*"DiggingRewardDialog"*/);
    sub_1C2D490(&StringLiteral_5268/*"DiggingSettings"*/);
    sub_1C2D490(&StringLiteral_5264/*"DiggingCompleteImagePrefab"*/);
    sub_1C2D490(&StringLiteral_5266/*"DiggingPointRewardDialog"*/);
    sub_1C2D490(&StringLiteral_5265/*"DiggingConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_11399/*"RewardPrefab"*/);
    sub_1C2D490(&StringLiteral_2485/*"AutoDiggingDialog"*/);
    byte_4C21987 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_12;
  v7[1].klass = (Il2CppClass *)finishCallback;
  sub_1C2D434(&v7[1]);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40321272 = AssetManager__getAssetStorage_40321272(loadAssetNames, 0);
  if ( !AssetStorage_40321272 )
    goto LABEL_12;
  if ( !LODWORD(AssetStorage_40321272->max_length) )
    sub_1C2D6F4(AssetStorage_40321272, v9, v11);
  v12 = AssetStorage_40321272->m_Items[0];
  if ( !v12 )
LABEL_12:
    sub_1C2D6EC(AssetStorage_40321272, v9);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                                                                   AssetStorage_40321272->m_Items[0],
                                                                                   (System_String_o *)StringLiteral_3181/*"BlockPrefab"*/,
                                                                                   (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                                                                    v12,
                                                                                    (System_String_o *)StringLiteral_11399/*"RewardPrefab"*/,
                                                                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                                                                               v12,
                                                                                               (System_String_o *)StringLiteral_2485/*"AutoDiggingDialog"*/,
                                                                                               (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                                                                                  v12,
                                                                                                  (System_String_o *)StringLiteral_5265/*"DiggingConfirmDialog"*/,
                                                                                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(v12, (System_String_o *)StringLiteral_5266/*"DiggingPointRewardDialog"*/, (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                                                                                 v12,
                                                                                                 (System_String_o *)StringLiteral_5267/*"DiggingRewardDialog"*/,
                                                                                                 (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                                                                                  v12,
                                                                                                  (System_String_o *)StringLiteral_5264/*"DiggingCompleteImagePrefab"*/,
                                                                                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  sub_1C2D434(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)AssetData__GetObject_object__51051712(
                                                                         v12,
                                                                         (System_String_o *)StringLiteral_5268/*"DiggingSettings"*/,
                                                                         (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_DiggingSettings___);
  sub_1C2D434(&this->fields._Settings_k__BackingField);
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v13, v7, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40385076(eventId, v13, 1, 0);
}


void DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C21988 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C21988 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40385248(eventId, 0);
  this->fields._blockPrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields);
  this->fields._rewardPrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields._rewardPrefab_k__BackingField);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0;
  sub_1C2D434(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
}


UnityEngine_GameObject_o *DiggingAssetManager__get_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AutoDiggingDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingCompleteImagePrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingPointRewardDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingRewardDialogPrefab_k__BackingField;
}


DiggingSettings_o *DiggingAssetManager__get_Settings(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_blockPrefab(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._blockPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_rewardPrefab(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._rewardPrefab_k__BackingField;
}


void DiggingAssetManager__set_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_1C2D434(&this->fields._AutoDiggingDialogPrefab_k__BackingField);
}


void DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1C2D434(&this->fields._DiggingCompleteImagePrefab_k__BackingField);
}


void DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1C2D434(&this->fields._DiggingConfirmDialogPrefab_k__BackingField);
}


void DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1C2D434(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField);
}


void DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1C2D434(&this->fields._DiggingRewardDialogPrefab_k__BackingField);
}


void DiggingAssetManager__set_Settings(DiggingAssetManager_o *this, DiggingSettings_o *value, const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_1C2D434(&this->fields._Settings_k__BackingField);
}


void DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._blockPrefab_k__BackingField = value;
  sub_1C2D434(&this->fields);
}


void DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._rewardPrefab_k__BackingField = value;
  sub_1C2D434(&this->fields._rewardPrefab_k__BackingField);
}


void DiggingAssetManager___c__DisplayClass33_0___ctor(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingAssetManager___c__DisplayClass33_0___GetAssets_b__0(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}