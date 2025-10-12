void DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_String_array *v4; // x20
  __int64 v5; // x1

  if ( (byte_4C32058 & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_6269/*"EventUI/Prefabs/80367"*/);
    byte_4C32058 = 1;
  }
  v3 = sub_1C32CC8(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C32E7C(0);
  v4 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C32E84(v3);
  v5 = StringLiteral_6269/*"EventUI/Prefabs/80367"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6269/*"EventUI/Prefabs/80367"*/;
  sub_1C32BC4(v3 + 32, v5);
  this->fields.loadAssetNames = v4;
  sub_1C32BC4(&this->fields.loadAssetNames, v4);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  AssetData_array *AssetStorage_40443500; // x0
  System_String_array *loadAssetNames; // x22
  AssetData_o *v10; // x22
  Il2CppObject *Object_object__51111776; // x0
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x0
  System_Action_o *v19; // x20

  if ( (byte_4C32056 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_DiggingSettings___);
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__);
    sub_1C32C20(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
    sub_1C32C20(&StringLiteral_3184/*"BlockPrefab"*/);
    sub_1C32C20(&StringLiteral_5275/*"DiggingRewardDialog"*/);
    sub_1C32C20(&StringLiteral_5276/*"DiggingSettings"*/);
    sub_1C32C20(&StringLiteral_5272/*"DiggingCompleteImagePrefab"*/);
    sub_1C32C20(&StringLiteral_5274/*"DiggingPointRewardDialog"*/);
    sub_1C32C20(&StringLiteral_5273/*"DiggingConfirmDialog"*/);
    sub_1C32C20(&StringLiteral_11405/*"RewardPrefab"*/);
    sub_1C32C20(&StringLiteral_2488/*"AutoDiggingDialog"*/);
    byte_4C32056 = 1;
  }
  v7 = (Il2CppObject *)sub_1C32E6C(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_12;
  v7[1].klass = (Il2CppClass *)finishCallback;
  sub_1C32BC4(&v7[1], finishCallback);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40443500 = AssetManager__getAssetStorage_40443500(loadAssetNames, 0);
  if ( !AssetStorage_40443500 )
    goto LABEL_12;
  if ( !LODWORD(AssetStorage_40443500->max_length) )
    sub_1C32E84(AssetStorage_40443500);
  v10 = AssetStorage_40443500->m_Items[0];
  if ( !v10 )
LABEL_12:
    sub_1C32E7C(AssetStorage_40443500);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              AssetStorage_40443500->m_Items[0],
                              (System_String_o *)StringLiteral_3184/*"BlockPrefab"*/,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__51111776;
  sub_1C32BC4(&this->fields, Object_object__51111776);
  v12 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_11405/*"RewardPrefab"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v12;
  sub_1C32BC4(&this->fields._rewardPrefab_k__BackingField, v12);
  v13 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_2488/*"AutoDiggingDialog"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v13;
  sub_1C32BC4(&this->fields._AutoDiggingDialogPrefab_k__BackingField, v13);
  v14 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_5273/*"DiggingConfirmDialog"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v14;
  sub_1C32BC4(&this->fields._DiggingConfirmDialogPrefab_k__BackingField, v14);
  v15 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_5274/*"DiggingPointRewardDialog"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v15;
  sub_1C32BC4(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField, v15);
  v16 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_5275/*"DiggingRewardDialog"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v16;
  sub_1C32BC4(&this->fields._DiggingRewardDialogPrefab_k__BackingField, v16);
  v17 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_5272/*"DiggingCompleteImagePrefab"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v17;
  sub_1C32BC4(&this->fields._DiggingCompleteImagePrefab_k__BackingField, v17);
  v18 = AssetData__GetObject_object__51111776(
          v10,
          (System_String_o *)StringLiteral_5276/*"DiggingSettings"*/,
          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v18;
  sub_1C32BC4(&this->fields._Settings_k__BackingField, v18);
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v19, v7, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40507304(eventId, v19, 1, 0);
}


void DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C32057 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C32057 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40507476(eventId, 0);
  this->fields._blockPrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields, 0);
  this->fields._rewardPrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields._rewardPrefab_k__BackingField, 0);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields._AutoDiggingDialogPrefab_k__BackingField, 0);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields._DiggingConfirmDialogPrefab_k__BackingField, 0);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField, 0);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields._DiggingRewardDialogPrefab_k__BackingField, 0);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0;
  sub_1C32BC4(&this->fields._DiggingCompleteImagePrefab_k__BackingField, 0);
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
  sub_1C32BC4(&this->fields._AutoDiggingDialogPrefab_k__BackingField, value);
}


void DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1C32BC4(&this->fields._DiggingCompleteImagePrefab_k__BackingField, value);
}


void DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1C32BC4(&this->fields._DiggingConfirmDialogPrefab_k__BackingField, value);
}


void DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1C32BC4(&this->fields._DiggingPointRewardDialogPrefab_k__BackingField, value);
}


void DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1C32BC4(&this->fields._DiggingRewardDialogPrefab_k__BackingField, value);
}


void DiggingAssetManager__set_Settings(DiggingAssetManager_o *this, DiggingSettings_o *value, const MethodInfo *method)
{
  this->fields._Settings_k__BackingField = value;
  sub_1C32BC4(&this->fields._Settings_k__BackingField, value);
}


void DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._blockPrefab_k__BackingField = value;
  sub_1C32BC4(&this->fields, value);
}


void DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._rewardPrefab_k__BackingField = value;
  sub_1C32BC4(&this->fields._rewardPrefab_k__BackingField, value);
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