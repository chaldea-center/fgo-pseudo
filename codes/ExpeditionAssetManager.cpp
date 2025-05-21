void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B48CFF & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, method);
    sub_1BDB878(&StringLiteral_6279/*"EventUI/Prefabs/80381"*/, v3);
    byte_4B48CFF = 1;
  }
  v4 = sub_1BDB920(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BDBAD4(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BDBADC(v4, v5, v6);
  v9 = StringLiteral_6279/*"EventUI/Prefabs/80381"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6279/*"EventUI/Prefabs/80381"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionAssetManager__GetAssets(
        ExpeditionAssetManager_o *this,
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v19; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x20

  if ( (byte_4B48CFD & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BDB878(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v8);
    sub_1BDB878(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v9);
    byte_4B48CFD = 1;
  }
  v10 = sub_1BDBAC4(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BDBAD4(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BDBADC(v11, v12, v17);
  v19 = loadAssetNames->m_Items[0];
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v10,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__GetRunEffect(
        ExpeditionAssetManager_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_efRunHakkenshi20_k__BackingField; // x8

  if ( idx <= 40 )
  {
    if ( idx <= 20 )
    {
      if ( idx == 20 )
      {
        p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi20_k__BackingField;
        return *p_efRunHakkenshi20_k__BackingField;
      }
    }
    else
    {
      if ( idx == 30 )
      {
        p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi30_k__BackingField;
        return *p_efRunHakkenshi20_k__BackingField;
      }
      if ( idx == 40 )
      {
        p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi40_k__BackingField;
        return *p_efRunHakkenshi20_k__BackingField;
      }
    }
LABEL_15:
    p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi10_k__BackingField;
    return *p_efRunHakkenshi20_k__BackingField;
  }
  if ( idx <= 60 )
  {
    if ( idx == 50 )
    {
      p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi50_k__BackingField;
      return *p_efRunHakkenshi20_k__BackingField;
    }
    if ( idx == 60 )
    {
      p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi60_k__BackingField;
      return *p_efRunHakkenshi20_k__BackingField;
    }
    goto LABEL_15;
  }
  if ( idx == 70 )
  {
    p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi70_k__BackingField;
    return *p_efRunHakkenshi20_k__BackingField;
  }
  if ( idx != 80 )
    goto LABEL_15;
  p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi80_k__BackingField;
  return *p_efRunHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__GetStayHakkenshiObj(
        ExpeditionAssetManager_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionAssetManager_Fields *p_efStayHakkenshi20_k__BackingField; // x8

  if ( idx <= 40 )
  {
    if ( idx <= 20 )
    {
      if ( idx == 20 )
      {
        p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi20_k__BackingField;
        return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
    }
    else
    {
      if ( idx == 30 )
      {
        p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi30_k__BackingField;
        return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
      if ( idx == 40 )
      {
        p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi40_k__BackingField;
        return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
    }
LABEL_15:
    p_efStayHakkenshi20_k__BackingField = &this->fields;
    return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
  }
  if ( idx <= 60 )
  {
    if ( idx == 50 )
    {
      p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi50_k__BackingField;
      return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
    }
    if ( idx == 60 )
    {
      p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi60_k__BackingField;
      return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
    }
    goto LABEL_15;
  }
  if ( idx == 70 )
  {
    p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi70_k__BackingField;
    return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
  }
  if ( idx != 80 )
    goto LABEL_15;
  p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi80_k__BackingField;
  return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionAssetManager__Release(
        ExpeditionAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4B48CFE & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B48CFE = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39626112(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v5, v6);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi20_k__BackingField, 0, v7, v8);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi30_k__BackingField, 0, v9, v10);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi40_k__BackingField, 0, v11, v12);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi50_k__BackingField, 0, v13, v14);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi60_k__BackingField, 0, v15, v16);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi70_k__BackingField, 0, v17, v18);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efStayHakkenshi80_k__BackingField, 0, v19, v20);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi10_k__BackingField, 0, v21, v22);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi20_k__BackingField, 0, v23, v24);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi30_k__BackingField, 0, v25, v26);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi40_k__BackingField, 0, v27, v28);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi50_k__BackingField, 0, v29, v30);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi60_k__BackingField, 0, v31, v32);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi70_k__BackingField, 0, v33, v34);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._efRunHakkenshi80_k__BackingField, 0, v35, v36);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._expeditionConfirmDialog_k__BackingField, 0, v37, v38);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._expeditionRewardDialog_k__BackingField, 0, v39, v40);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._expeditionPointRewardDialog_k__BackingField, 0, v41, v42);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._bitExpeditionStart_k__BackingField, 0, v43, v44);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._bitExpeditionFinish_k__BackingField, 0, v45, v46);
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_bitExpeditionFinish(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._bitExpeditionFinish_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._bitExpeditionStart_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi10_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi30_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi40_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi50_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi60_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi80_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi10_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi30_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi40_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi50_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi60_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi80_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionPointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionRewardDialog_k__BackingField;
}


void __fastcall ExpeditionAssetManager__set_bitExpeditionFinish(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._bitExpeditionFinish_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._bitExpeditionFinish_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._bitExpeditionStart_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._bitExpeditionStart_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi10_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi20_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi30_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi40_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi50_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi60_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi70_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efRunHakkenshi80_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi10_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi30_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi40_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi50_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi60_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi70_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._efStayHakkenshi80_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._expeditionConfirmDialog_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._expeditionPointRewardDialog_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._expeditionRewardDialog_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager___c__DisplayClass85_0___ctor(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionAssetManager___c__DisplayClass85_0___GetAssets_b__0(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ExpeditionAssetManager___c__DisplayClass85_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct ExpeditionAssetManager_o *_4__this; // x21
  ExpeditionAssetManager___c__DisplayClass85_0_Fields *p_fields; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  CGThumbnailListItem_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct ExpeditionAssetManager_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct ExpeditionAssetManager_o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct ExpeditionAssetManager_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct ExpeditionAssetManager_o *v45; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct ExpeditionAssetManager_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct ExpeditionAssetManager_o *v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct ExpeditionAssetManager_o *v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct ExpeditionAssetManager_o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct ExpeditionAssetManager_o *v60; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct ExpeditionAssetManager_o *v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct ExpeditionAssetManager_o *v66; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct ExpeditionAssetManager_o *v69; // x21
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct ExpeditionAssetManager_o *v72; // x21
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct ExpeditionAssetManager_o *v75; // x21
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct ExpeditionAssetManager_o *v78; // x21
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct ExpeditionAssetManager_o *v81; // x21
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct ExpeditionAssetManager_o *v84; // x21
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  CGThumbnailListItem_o *v87; // x21
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  CGThumbnailListItem_o *v90; // x21
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v95; // w2
  const MethodInfo *v96; // x3

  v4 = this;
  if ( (byte_4B48D00 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, assetData);
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, v5);
    sub_1BDB878(&AtlasManager_TypeInfo, v6);
    sub_1BDB878(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_1BDB878(&StringLiteral_6362/*"ExpeditionConfirmDialog"*/, v8);
    sub_1BDB878(&StringLiteral_23729/*"stay_dog_10"*/, v9);
    sub_1BDB878(&StringLiteral_17282/*"bit_runningdog_10"*/, v10);
    sub_1BDB878(&StringLiteral_6365/*"ExpeditionRewardDialog"*/, v11);
    sub_1BDB878(&StringLiteral_6364/*"ExpeditionPointRewardDialog"*/, v12);
    sub_1BDB878(&StringLiteral_17213/*"bit_expedition_finish"*/, v13);
    sub_1BDB878(&StringLiteral_23733/*"stay_dog_50"*/, v14);
    sub_1BDB878(&StringLiteral_17287/*"bit_runningdog_60"*/, v15);
    sub_1BDB878(&StringLiteral_17285/*"bit_runningdog_40"*/, v16);
    sub_1BDB878(&StringLiteral_17284/*"bit_runningdog_30"*/, v17);
    sub_1BDB878(&StringLiteral_23736/*"stay_dog_80"*/, v18);
    sub_1BDB878(&StringLiteral_17217/*"bit_expedition_start"*/, v19);
    sub_1BDB878(&StringLiteral_23730/*"stay_dog_20"*/, v20);
    sub_1BDB878(&StringLiteral_23731/*"stay_dog_30"*/, v21);
    sub_1BDB878(&StringLiteral_23735/*"stay_dog_70"*/, v22);
    sub_1BDB878(&StringLiteral_17283/*"bit_runningdog_20"*/, v23);
    sub_1BDB878(&StringLiteral_23732/*"stay_dog_40"*/, v24);
    sub_1BDB878(&StringLiteral_23734/*"stay_dog_60"*/, v25);
    sub_1BDB878(&StringLiteral_17289/*"bit_runningdog_80"*/, v26);
    sub_1BDB878(&StringLiteral_17286/*"bit_runningdog_50"*/, v27);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_1BDB878(&StringLiteral_17288/*"bit_runningdog_70"*/, v28);
    byte_4B48D00 = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_30;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23729/*"stay_dog_10"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !_4__this )
    goto LABEL_30;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields, (int32_t)this, v31, v32);
  v33 = (CGThumbnailListItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23730/*"stay_dog_20"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v33 )
    goto LABEL_30;
  *(_QWORD *)&v33->fields.sortIndex = this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v33->fields.sortIndex, (int32_t)this, v34, v35);
  v36 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23731/*"stay_dog_30"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v36 )
    goto LABEL_30;
  v36->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v36->fields._efStayHakkenshi30_k__BackingField, (int32_t)this, v37, v38);
  v39 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23732/*"stay_dog_40"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v39 )
    goto LABEL_30;
  v39->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v39->fields._efStayHakkenshi40_k__BackingField, (int32_t)this, v40, v41);
  v42 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23733/*"stay_dog_50"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v42 )
    goto LABEL_30;
  v42->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v42->fields._efStayHakkenshi50_k__BackingField, (int32_t)this, v43, v44);
  v45 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23734/*"stay_dog_60"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v45 )
    goto LABEL_30;
  v45->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v45->fields._efStayHakkenshi60_k__BackingField, (int32_t)this, v46, v47);
  v48 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23735/*"stay_dog_70"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v48 )
    goto LABEL_30;
  v48->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v48->fields._efStayHakkenshi70_k__BackingField, (int32_t)this, v49, v50);
  v51 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23736/*"stay_dog_80"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v51 )
    goto LABEL_30;
  v51->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v51->fields._efStayHakkenshi80_k__BackingField, (int32_t)this, v52, v53);
  v54 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6362/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v54 )
    goto LABEL_30;
  v54->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v54->fields._expeditionConfirmDialog_k__BackingField, (int32_t)this, v55, v56);
  v57 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6365/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v57 )
    goto LABEL_30;
  v57->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v57->fields._expeditionRewardDialog_k__BackingField, (int32_t)this, v58, v59);
  v60 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6364/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v60 )
    goto LABEL_30;
  v60->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&v60->fields._expeditionPointRewardDialog_k__BackingField,
    (int32_t)this,
    v61,
    v62);
  v63 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17217/*"bit_expedition_start"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v63 )
    goto LABEL_30;
  v63->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v63->fields._bitExpeditionStart_k__BackingField, (int32_t)this, v64, v65);
  v66 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17213/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v66 )
    goto LABEL_30;
  v66->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v66->fields._bitExpeditionFinish_k__BackingField, (int32_t)this, v67, v68);
  v69 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17282/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v69 )
    goto LABEL_30;
  v69->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v69->fields._efRunHakkenshi10_k__BackingField, (int32_t)this, v70, v71);
  v72 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17283/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v72 )
    goto LABEL_30;
  v72->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v72->fields._efRunHakkenshi20_k__BackingField, (int32_t)this, v73, v74);
  v75 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17284/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v75 )
    goto LABEL_30;
  v75->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v75->fields._efRunHakkenshi30_k__BackingField, (int32_t)this, v76, v77);
  v78 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17285/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v78 )
    goto LABEL_30;
  v78->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v78->fields._efRunHakkenshi40_k__BackingField, (int32_t)this, v79, v80);
  v81 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17286/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v81 )
    goto LABEL_30;
  v81->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v81->fields._efRunHakkenshi50_k__BackingField, (int32_t)this, v82, v83);
  v84 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17287/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v84 )
    goto LABEL_30;
  v84->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v84->fields._efRunHakkenshi60_k__BackingField, (int32_t)this, v85, v86);
  v87 = (CGThumbnailListItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17288/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !v87
    || (v87[1].klass = (CGThumbnailListItem_c *)this,
        sub_1BDB81C(v87 + 1, (int32_t)this, v88, v89),
        v90 = (CGThumbnailListItem_o *)p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50417328(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17289/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016),
        !v90) )
  {
LABEL_30:
    sub_1BDBAD4(this, assetData);
  }
  v90[1].monitor = this;
  sub_1BDB81C((CGThumbnailListItem_o *)((char *)v90 + 144), (int32_t)this, v91, v92);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v95, v96);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39625948(eventId, _9__1, 1, 0LL);
}


void __fastcall ExpeditionAssetManager___c__DisplayClass85_0___GetAssets_b__1(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}