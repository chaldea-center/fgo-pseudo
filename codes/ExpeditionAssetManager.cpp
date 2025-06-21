void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  struct System_String_array *v8; // x20

  if ( (byte_4B1690C & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6220/*"EventUI/Prefabs/80381"*/, v3);
    byte_4B1690C = 1;
  }
  v4 = sub_1BCB0A0(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BCB254(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BCB25C(v4, v5, v6, v7);
  *(_QWORD *)(v4 + 32) = StringLiteral_6220/*"EventUI/Prefabs/80381"*/;
  sub_1BCAF9C(v4 + 32);
  this->fields.loadAssetNames = v8;
  sub_1BCAF9C(&this->fields.loadAssetNames);
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
  __int64 v13; // x2
  __int64 v14; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v16; // x19
  AssetLoader_LoadEndDataHandler_o *v17; // x20

  if ( (byte_4B1690A & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BCAFF8(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v8);
    sub_1BCAFF8(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v9);
    byte_4B1690A = 1;
  }
  v10 = sub_1BCB244(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BCAF9C(v10 + 16),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        v11 = sub_1BCAF9C(v10 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BCB254(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BCB25C(v11, v12, v13, v14);
  v16 = loadAssetNames->m_Items[0];
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v17, 1, 0LL);
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
  if ( (byte_4B1690B & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B1690B = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39794596(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi20_k__BackingField);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi30_k__BackingField);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi40_k__BackingField);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi50_k__BackingField);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi60_k__BackingField);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi70_k__BackingField);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efStayHakkenshi80_k__BackingField);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi10_k__BackingField);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi20_k__BackingField);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi30_k__BackingField);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi40_k__BackingField);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi50_k__BackingField);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi60_k__BackingField);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi70_k__BackingField);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._efRunHakkenshi80_k__BackingField);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._expeditionConfirmDialog_k__BackingField);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._expeditionRewardDialog_k__BackingField);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._expeditionPointRewardDialog_k__BackingField);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._bitExpeditionStart_k__BackingField);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_1BCAF9C(&this->fields._bitExpeditionFinish_k__BackingField);
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
  this->fields._bitExpeditionFinish_k__BackingField = value;
  sub_1BCAF9C(&this->fields._bitExpeditionFinish_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._bitExpeditionStart_k__BackingField = value;
  sub_1BCAF9C(&this->fields._bitExpeditionStart_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi10_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi10_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi20_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi20_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi30_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi30_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi40_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi40_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi50_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi50_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi60_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi60_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi70_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi70_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efRunHakkenshi80_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efRunHakkenshi80_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi10_k__BackingField = value;
  sub_1BCAF9C(&this->fields);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi20_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi30_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi30_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi40_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi40_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi50_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi50_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi60_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi60_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi70_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi70_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._efStayHakkenshi80_k__BackingField = value;
  sub_1BCAF9C(&this->fields._efStayHakkenshi80_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._expeditionConfirmDialog_k__BackingField = value;
  sub_1BCAF9C(&this->fields._expeditionConfirmDialog_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._expeditionPointRewardDialog_k__BackingField = value;
  sub_1BCAF9C(&this->fields._expeditionPointRewardDialog_k__BackingField);
}


void __fastcall ExpeditionAssetManager__set_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._expeditionRewardDialog_k__BackingField = value;
  sub_1BCAF9C(&this->fields._expeditionRewardDialog_k__BackingField);
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
  struct ExpeditionAssetManager_o *v31; // x21
  struct ExpeditionAssetManager_o *v32; // x21
  struct ExpeditionAssetManager_o *v33; // x21
  struct ExpeditionAssetManager_o *v34; // x21
  struct ExpeditionAssetManager_o *v35; // x21
  struct ExpeditionAssetManager_o *v36; // x21
  struct ExpeditionAssetManager_o *v37; // x21
  struct ExpeditionAssetManager_o *v38; // x21
  struct ExpeditionAssetManager_o *v39; // x21
  struct ExpeditionAssetManager_o *v40; // x21
  struct ExpeditionAssetManager_o *v41; // x21
  struct ExpeditionAssetManager_o *v42; // x21
  struct ExpeditionAssetManager_o *v43; // x21
  struct ExpeditionAssetManager_o *v44; // x21
  struct ExpeditionAssetManager_o *v45; // x21
  struct ExpeditionAssetManager_o *v46; // x21
  struct ExpeditionAssetManager_o *v47; // x21
  struct ExpeditionAssetManager_o *v48; // x21
  struct ExpeditionAssetManager_o *v49; // x21
  struct ExpeditionAssetManager_o *v50; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4B1690D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, assetData);
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, v5);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_1BCAFF8(&StringLiteral_6301/*"ExpeditionConfirmDialog"*/, v8);
    sub_1BCAFF8(&StringLiteral_23487/*"stay_dog_10"*/, v9);
    sub_1BCAFF8(&StringLiteral_17128/*"bit_runningdog_10"*/, v10);
    sub_1BCAFF8(&StringLiteral_6304/*"ExpeditionRewardDialog"*/, v11);
    sub_1BCAFF8(&StringLiteral_6303/*"ExpeditionPointRewardDialog"*/, v12);
    sub_1BCAFF8(&StringLiteral_17059/*"bit_expedition_finish"*/, v13);
    sub_1BCAFF8(&StringLiteral_23491/*"stay_dog_50"*/, v14);
    sub_1BCAFF8(&StringLiteral_17133/*"bit_runningdog_60"*/, v15);
    sub_1BCAFF8(&StringLiteral_17131/*"bit_runningdog_40"*/, v16);
    sub_1BCAFF8(&StringLiteral_17130/*"bit_runningdog_30"*/, v17);
    sub_1BCAFF8(&StringLiteral_23494/*"stay_dog_80"*/, v18);
    sub_1BCAFF8(&StringLiteral_17063/*"bit_expedition_start"*/, v19);
    sub_1BCAFF8(&StringLiteral_23488/*"stay_dog_20"*/, v20);
    sub_1BCAFF8(&StringLiteral_23489/*"stay_dog_30"*/, v21);
    sub_1BCAFF8(&StringLiteral_23493/*"stay_dog_70"*/, v22);
    sub_1BCAFF8(&StringLiteral_17129/*"bit_runningdog_20"*/, v23);
    sub_1BCAFF8(&StringLiteral_23490/*"stay_dog_40"*/, v24);
    sub_1BCAFF8(&StringLiteral_23492/*"stay_dog_60"*/, v25);
    sub_1BCAFF8(&StringLiteral_17135/*"bit_runningdog_80"*/, v26);
    sub_1BCAFF8(&StringLiteral_17132/*"bit_runningdog_50"*/, v27);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_1BCAFF8(&StringLiteral_17134/*"bit_runningdog_70"*/, v28);
    byte_4B1690D = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_30;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23487/*"stay_dog_10"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !_4__this )
    goto LABEL_30;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&_4__this->fields);
  v31 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23488/*"stay_dog_20"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v31 )
    goto LABEL_30;
  v31->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v31->fields._efStayHakkenshi20_k__BackingField);
  v32 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23489/*"stay_dog_30"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v32 )
    goto LABEL_30;
  v32->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v32->fields._efStayHakkenshi30_k__BackingField);
  v33 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23490/*"stay_dog_40"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v33 )
    goto LABEL_30;
  v33->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v33->fields._efStayHakkenshi40_k__BackingField);
  v34 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23491/*"stay_dog_50"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v34 )
    goto LABEL_30;
  v34->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v34->fields._efStayHakkenshi50_k__BackingField);
  v35 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23492/*"stay_dog_60"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v35 )
    goto LABEL_30;
  v35->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v35->fields._efStayHakkenshi60_k__BackingField);
  v36 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23493/*"stay_dog_70"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v36 )
    goto LABEL_30;
  v36->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v36->fields._efStayHakkenshi70_k__BackingField);
  v37 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23494/*"stay_dog_80"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v37 )
    goto LABEL_30;
  v37->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v37->fields._efStayHakkenshi80_k__BackingField);
  v38 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6301/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v38 )
    goto LABEL_30;
  v38->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v38->fields._expeditionConfirmDialog_k__BackingField);
  v39 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6304/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v39 )
    goto LABEL_30;
  v39->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v39->fields._expeditionRewardDialog_k__BackingField);
  v40 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6303/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v40 )
    goto LABEL_30;
  v40->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v40->fields._expeditionPointRewardDialog_k__BackingField);
  v41 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17063/*"bit_expedition_start"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v41 )
    goto LABEL_30;
  v41->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v41->fields._bitExpeditionStart_k__BackingField);
  v42 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17059/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v42 )
    goto LABEL_30;
  v42->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v42->fields._bitExpeditionFinish_k__BackingField);
  v43 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17128/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v43 )
    goto LABEL_30;
  v43->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v43->fields._efRunHakkenshi10_k__BackingField);
  v44 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17129/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v44 )
    goto LABEL_30;
  v44->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v44->fields._efRunHakkenshi20_k__BackingField);
  v45 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17130/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v45 )
    goto LABEL_30;
  v45->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v45->fields._efRunHakkenshi30_k__BackingField);
  v46 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17131/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v46 )
    goto LABEL_30;
  v46->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v46->fields._efRunHakkenshi40_k__BackingField);
  v47 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17132/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v47 )
    goto LABEL_30;
  v47->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v47->fields._efRunHakkenshi50_k__BackingField);
  v48 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17133/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v48 )
    goto LABEL_30;
  v48->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v48->fields._efRunHakkenshi60_k__BackingField);
  v49 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17134/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !v49
    || (v49->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BCAF9C(&v49->fields._efRunHakkenshi70_k__BackingField),
        v50 = p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__50315216(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17135/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336),
        !v50) )
  {
LABEL_30:
    sub_1BCB254(this, assetData);
  }
  v50->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCAF9C(&v50->fields._efRunHakkenshi80_k__BackingField);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCAF9C(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39794424(eventId, _9__1, 1, 0LL);
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