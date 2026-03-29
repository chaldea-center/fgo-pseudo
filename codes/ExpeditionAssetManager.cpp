void ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_String_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_4D2AB18 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_6302/*"EventUI/Prefabs/80381"*/);
    byte_4D2AB18 = 1;
  }
  v3 = sub_1C93B7C(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v5 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C93D34(v3);
  v6 = StringLiteral_6302/*"EventUI/Prefabs/80381"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6302/*"EventUI/Prefabs/80381"*/;
  sub_1C93A78(v3 + 32, v6);
  this->fields.loadAssetNames = v5;
  sub_1C93A78(&this->fields.loadAssetNames, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExpeditionAssetManager__GetAssets(
        ExpeditionAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v11; // x19
  AssetLoader_LoadEndDataHandler_o *v12; // x20

  if ( (byte_4D2AB16 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__);
    sub_1C93AD4(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
    byte_4D2AB16 = 1;
  }
  v7 = sub_1C93D20(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C93A78(v7 + 16, this),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        v8 = sub_1C93A78(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C93D2C(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C93D34(v8);
  v11 = loadAssetNames->m_Items[0];
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, v12, 1, 0);
}


UnityEngine_GameObject_o *ExpeditionAssetManager__GetRunEffect(
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


UnityEngine_GameObject_o *ExpeditionAssetManager__GetStayHakkenshiObj(
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


void ExpeditionAssetManager__Release(ExpeditionAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4D2AB17 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    byte_4D2AB17 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_41320228(eventId, 0);
  this->fields._efStayHakkenshi10_k__BackingField = 0;
  sub_1C93A78(&this->fields, 0);
  this->fields._efStayHakkenshi20_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi20_k__BackingField, 0);
  this->fields._efStayHakkenshi30_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi30_k__BackingField, 0);
  this->fields._efStayHakkenshi40_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi40_k__BackingField, 0);
  this->fields._efStayHakkenshi50_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi50_k__BackingField, 0);
  this->fields._efStayHakkenshi60_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi60_k__BackingField, 0);
  this->fields._efStayHakkenshi70_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi70_k__BackingField, 0);
  this->fields._efStayHakkenshi80_k__BackingField = 0;
  sub_1C93A78(&this->fields._efStayHakkenshi80_k__BackingField, 0);
  this->fields._efRunHakkenshi10_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi10_k__BackingField, 0);
  this->fields._efRunHakkenshi20_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi20_k__BackingField, 0);
  this->fields._efRunHakkenshi30_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi30_k__BackingField, 0);
  this->fields._efRunHakkenshi40_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi40_k__BackingField, 0);
  this->fields._efRunHakkenshi50_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi50_k__BackingField, 0);
  this->fields._efRunHakkenshi60_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi60_k__BackingField, 0);
  this->fields._efRunHakkenshi70_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi70_k__BackingField, 0);
  this->fields._efRunHakkenshi80_k__BackingField = 0;
  sub_1C93A78(&this->fields._efRunHakkenshi80_k__BackingField, 0);
  this->fields._expeditionConfirmDialog_k__BackingField = 0;
  sub_1C93A78(&this->fields._expeditionConfirmDialog_k__BackingField, 0);
  this->fields._expeditionRewardDialog_k__BackingField = 0;
  sub_1C93A78(&this->fields._expeditionRewardDialog_k__BackingField, 0);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0;
  sub_1C93A78(&this->fields._expeditionPointRewardDialog_k__BackingField, 0);
  this->fields._bitExpeditionStart_k__BackingField = 0;
  sub_1C93A78(&this->fields._bitExpeditionStart_k__BackingField, 0);
  this->fields._bitExpeditionFinish_k__BackingField = 0;
  sub_1C93A78(&this->fields._bitExpeditionFinish_k__BackingField, 0);
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_bitExpeditionFinish(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._bitExpeditionFinish_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._bitExpeditionStart_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi10_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi30_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi40_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi50_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi60_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi80_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi10_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi30_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi40_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi50_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi60_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi80_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionPointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *ExpeditionAssetManager__get_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionRewardDialog_k__BackingField;
}


void ExpeditionAssetManager__set_bitExpeditionFinish(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._bitExpeditionFinish_k__BackingField = value;
  sub_1C93A78(&this->fields._bitExpeditionFinish_k__BackingField, value);
}


void ExpeditionAssetManager__set_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._bitExpeditionStart_k__BackingField = value;
  sub_1C93A78(&this->fields._bitExpeditionStart_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi10_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi10_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi20_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi20_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi30_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi30_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi40_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi40_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi50_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi50_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi60_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi60_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi70_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi70_k__BackingField, value);
}


void ExpeditionAssetManager__set_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi80_k__BackingField = value;
  sub_1C93A78(&this->fields._efRunHakkenshi80_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi10_k__BackingField = value;
  sub_1C93A78(&this->fields, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi20_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi30_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi30_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi40_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi40_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi50_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi50_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi60_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi60_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi70_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi70_k__BackingField, value);
}


void ExpeditionAssetManager__set_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi80_k__BackingField = value;
  sub_1C93A78(&this->fields._efStayHakkenshi80_k__BackingField, value);
}


void ExpeditionAssetManager__set_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._expeditionConfirmDialog_k__BackingField = value;
  sub_1C93A78(&this->fields._expeditionConfirmDialog_k__BackingField, value);
}


void ExpeditionAssetManager__set_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._expeditionPointRewardDialog_k__BackingField = value;
  sub_1C93A78(&this->fields._expeditionPointRewardDialog_k__BackingField, value);
}


void ExpeditionAssetManager__set_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._expeditionRewardDialog_k__BackingField = value;
  sub_1C93A78(&this->fields._expeditionRewardDialog_k__BackingField, value);
}


void ExpeditionAssetManager___c__DisplayClass85_0___ctor(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExpeditionAssetManager___c__DisplayClass85_0___GetAssets_b__0(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ExpeditionAssetManager___c__DisplayClass85_0_o *v4; // x19
  struct ExpeditionAssetManager_o *_4__this; // x21
  ExpeditionAssetManager___c__DisplayClass85_0_Fields *p_fields; // x22
  struct ExpeditionAssetManager_o *v7; // x21
  struct ExpeditionAssetManager_o *v8; // x21
  struct ExpeditionAssetManager_o *v9; // x21
  struct ExpeditionAssetManager_o *v10; // x21
  struct ExpeditionAssetManager_o *v11; // x21
  struct ExpeditionAssetManager_o *v12; // x21
  struct ExpeditionAssetManager_o *v13; // x21
  struct ExpeditionAssetManager_o *v14; // x21
  struct ExpeditionAssetManager_o *v15; // x21
  struct ExpeditionAssetManager_o *v16; // x21
  struct ExpeditionAssetManager_o *v17; // x21
  struct ExpeditionAssetManager_o *v18; // x21
  struct ExpeditionAssetManager_o *v19; // x21
  struct ExpeditionAssetManager_o *v20; // x21
  struct ExpeditionAssetManager_o *v21; // x21
  struct ExpeditionAssetManager_o *v22; // x21
  struct ExpeditionAssetManager_o *v23; // x21
  struct ExpeditionAssetManager_o *v24; // x21
  struct ExpeditionAssetManager_o *v25; // x21
  struct ExpeditionAssetManager_o *v26; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4D2AB19 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__);
    sub_1C93AD4(&StringLiteral_6385/*"ExpeditionConfirmDialog"*/);
    sub_1C93AD4(&StringLiteral_23992/*"stay_dog_10"*/);
    sub_1C93AD4(&StringLiteral_17396/*"bit_runningdog_10"*/);
    sub_1C93AD4(&StringLiteral_6388/*"ExpeditionRewardDialog"*/);
    sub_1C93AD4(&StringLiteral_6387/*"ExpeditionPointRewardDialog"*/);
    sub_1C93AD4(&StringLiteral_17327/*"bit_expedition_finish"*/);
    sub_1C93AD4(&StringLiteral_23996/*"stay_dog_50"*/);
    sub_1C93AD4(&StringLiteral_17401/*"bit_runningdog_60"*/);
    sub_1C93AD4(&StringLiteral_17399/*"bit_runningdog_40"*/);
    sub_1C93AD4(&StringLiteral_17398/*"bit_runningdog_30"*/);
    sub_1C93AD4(&StringLiteral_23999/*"stay_dog_80"*/);
    sub_1C93AD4(&StringLiteral_17331/*"bit_expedition_start"*/);
    sub_1C93AD4(&StringLiteral_23993/*"stay_dog_20"*/);
    sub_1C93AD4(&StringLiteral_23994/*"stay_dog_30"*/);
    sub_1C93AD4(&StringLiteral_23998/*"stay_dog_70"*/);
    sub_1C93AD4(&StringLiteral_17397/*"bit_runningdog_20"*/);
    sub_1C93AD4(&StringLiteral_23995/*"stay_dog_40"*/);
    sub_1C93AD4(&StringLiteral_23997/*"stay_dog_60"*/);
    sub_1C93AD4(&StringLiteral_17403/*"bit_runningdog_80"*/);
    sub_1C93AD4(&StringLiteral_17400/*"bit_runningdog_50"*/);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_1C93AD4(&StringLiteral_17402/*"bit_runningdog_70"*/);
    byte_4D2AB19 = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_30;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23992/*"stay_dog_10"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !_4__this )
    goto LABEL_30;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&_4__this->fields, this);
  v7 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23993/*"stay_dog_20"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v7 )
    goto LABEL_30;
  v7->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v7->fields._efStayHakkenshi20_k__BackingField, this);
  v8 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23994/*"stay_dog_30"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v8 )
    goto LABEL_30;
  v8->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v8->fields._efStayHakkenshi30_k__BackingField, this);
  v9 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23995/*"stay_dog_40"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v9 )
    goto LABEL_30;
  v9->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v9->fields._efStayHakkenshi40_k__BackingField, this);
  v10 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23996/*"stay_dog_50"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v10 )
    goto LABEL_30;
  v10->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v10->fields._efStayHakkenshi50_k__BackingField, this);
  v11 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23997/*"stay_dog_60"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v11 )
    goto LABEL_30;
  v11->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v11->fields._efStayHakkenshi60_k__BackingField, this);
  v12 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23998/*"stay_dog_70"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v12 )
    goto LABEL_30;
  v12->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v12->fields._efStayHakkenshi70_k__BackingField, this);
  v13 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23999/*"stay_dog_80"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v13 )
    goto LABEL_30;
  v13->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v13->fields._efStayHakkenshi80_k__BackingField, this);
  v14 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6385/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v14 )
    goto LABEL_30;
  v14->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v14->fields._expeditionConfirmDialog_k__BackingField, this);
  v15 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6388/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v15 )
    goto LABEL_30;
  v15->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v15->fields._expeditionRewardDialog_k__BackingField, this);
  v16 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6387/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v16 )
    goto LABEL_30;
  v16->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v16->fields._expeditionPointRewardDialog_k__BackingField, this);
  v17 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17331/*"bit_expedition_start"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v17 )
    goto LABEL_30;
  v17->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v17->fields._bitExpeditionStart_k__BackingField, this);
  v18 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17327/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v18 )
    goto LABEL_30;
  v18->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v18->fields._bitExpeditionFinish_k__BackingField, this);
  v19 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17396/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v19 )
    goto LABEL_30;
  v19->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v19->fields._efRunHakkenshi10_k__BackingField, this);
  v20 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17397/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v20 )
    goto LABEL_30;
  v20->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v20->fields._efRunHakkenshi20_k__BackingField, this);
  v21 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17398/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v21 )
    goto LABEL_30;
  v21->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v21->fields._efRunHakkenshi30_k__BackingField, this);
  v22 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17399/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v22 )
    goto LABEL_30;
  v22->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v22->fields._efRunHakkenshi40_k__BackingField, this);
  v23 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17400/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v23 )
    goto LABEL_30;
  v23->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v23->fields._efRunHakkenshi50_k__BackingField, this);
  v24 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17401/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v24 )
    goto LABEL_30;
  v24->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v24->fields._efRunHakkenshi60_k__BackingField, this);
  v25 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17402/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !v25
    || (v25->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C93A78(&v25->fields._efRunHakkenshi70_k__BackingField, this),
        v26 = p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__51927708(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17403/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888),
        !v26) )
  {
LABEL_30:
    sub_1C93D2C(this, assetData);
  }
  v26->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(&v26->fields._efRunHakkenshi80_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C93A78(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41320056(eventId, _9__1, 1, 0);
}


void ExpeditionAssetManager___c__DisplayClass85_0___GetAssets_b__1(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}