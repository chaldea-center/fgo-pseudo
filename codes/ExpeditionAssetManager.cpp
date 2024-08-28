void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A0C91E & 1) == 0 )
  {
    sub_1B686D4(&string___TypeInfo, method);
    sub_1B686D4(&StringLiteral_6205/*"EventUI/Prefabs/80381"*/, v3);
    byte_4A0C91E = 1;
  }
  v4 = sub_1B6877C(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B68930(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B68938(v4, v5);
  v9 = StringLiteral_6205/*"EventUI/Prefabs/80381"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6205/*"EventUI/Prefabs/80381"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v18; // x19
  AssetLoader_LoadEndDataHandler_o *v19; // x20

  if ( (byte_4A0C91C & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B686D4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v8);
    sub_1B686D4(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v9);
    byte_4A0C91C = 1;
  }
  v10 = sub_1B68920(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B68930(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1B68938(v11, v12);
  v18 = loadAssetNames->m_Items[0];
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v10,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v18, v19, 1, 0LL);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_4A0C91D & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A0C91D = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37606548(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi20_k__BackingField, 0, v7, v8);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi30_k__BackingField, 0, v9, v10);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi40_k__BackingField, 0, v11, v12);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi50_k__BackingField, 0, v13, v14);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi60_k__BackingField, 0, v15, v16);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi70_k__BackingField, 0, v17, v18);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi80_k__BackingField, 0, v19, v20);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi10_k__BackingField, 0, v21, v22);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi20_k__BackingField, 0, v23, v24);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi30_k__BackingField, 0, v25, v26);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi40_k__BackingField, 0, v27, v28);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi50_k__BackingField, 0, v29, v30);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi60_k__BackingField, 0, v31, v32);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi70_k__BackingField, 0, v33, v34);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi80_k__BackingField, 0, v35, v36);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._expeditionConfirmDialog_k__BackingField, 0, v37, v38);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._expeditionRewardDialog_k__BackingField, 0, v39, v40);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0,
    v41,
    v42);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._bitExpeditionStart_k__BackingField, 0, v43, v44);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._bitExpeditionFinish_k__BackingField, 0, v45, v46);
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
  int32_t v3; // w3

  this->fields._bitExpeditionFinish_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._bitExpeditionFinish_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._bitExpeditionStart_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._bitExpeditionStart_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi10_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi20_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi30_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi40_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi50_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi60_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi70_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efRunHakkenshi80_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi10_k__BackingField = value;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi30_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi40_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi50_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi60_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi70_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi80_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._expeditionConfirmDialog_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._expeditionPointRewardDialog_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ExpeditionAssetManager__set_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._expeditionRewardDialog_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._expeditionRewardDialog_k__BackingField,
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
  int32_t v32; // w3
  ServantStatusBattleListViewItem_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  struct ExpeditionAssetManager_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  struct ExpeditionAssetManager_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct ExpeditionAssetManager_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  struct ExpeditionAssetManager_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  struct ExpeditionAssetManager_o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  struct ExpeditionAssetManager_o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  struct ExpeditionAssetManager_o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  struct ExpeditionAssetManager_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  struct ExpeditionAssetManager_o *v60; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  ServantStatusBattleListViewItem_o *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  ServantStatusBattleListViewItem_o *v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  ServantStatusBattleListViewItem_o *v69; // x21
  int32_t v70; // w2
  int32_t v71; // w3
  ServantStatusBattleListViewItem_o *v72; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  ServantStatusBattleListViewItem_o *v75; // x21
  int32_t v76; // w2
  int32_t v77; // w3
  ServantStatusBattleListViewItem_o *v78; // x21
  int32_t v79; // w2
  int32_t v80; // w3
  ServantStatusBattleListViewItem_o *v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  ServantStatusBattleListViewItem_o *v84; // x21
  int32_t v85; // w2
  int32_t v86; // w3
  ServantStatusBattleListViewItem_o *v87; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  ServantStatusBattleListViewItem_o *v90; // x21
  int32_t v91; // w2
  int32_t v92; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v95; // w2
  int32_t v96; // w3

  v4 = this;
  if ( (byte_4A0C91F & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, assetData);
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, v5);
    sub_1B686D4(&AtlasManager_TypeInfo, v6);
    sub_1B686D4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_1B686D4(&StringLiteral_6285/*"ExpeditionConfirmDialog"*/, v8);
    sub_1B686D4(&StringLiteral_23455/*"stay_dog_10"*/, v9);
    sub_1B686D4(&StringLiteral_17235/*"bit_runningdog_10"*/, v10);
    sub_1B686D4(&StringLiteral_6288/*"ExpeditionRewardDialog"*/, v11);
    sub_1B686D4(&StringLiteral_6287/*"ExpeditionPointRewardDialog"*/, v12);
    sub_1B686D4(&StringLiteral_17161/*"bit_expedition_finish"*/, v13);
    sub_1B686D4(&StringLiteral_23459/*"stay_dog_50"*/, v14);
    sub_1B686D4(&StringLiteral_17240/*"bit_runningdog_60"*/, v15);
    sub_1B686D4(&StringLiteral_17238/*"bit_runningdog_40"*/, v16);
    sub_1B686D4(&StringLiteral_17237/*"bit_runningdog_30"*/, v17);
    sub_1B686D4(&StringLiteral_23462/*"stay_dog_80"*/, v18);
    sub_1B686D4(&StringLiteral_17165/*"bit_expedition_start"*/, v19);
    sub_1B686D4(&StringLiteral_23456/*"stay_dog_20"*/, v20);
    sub_1B686D4(&StringLiteral_23457/*"stay_dog_30"*/, v21);
    sub_1B686D4(&StringLiteral_23461/*"stay_dog_70"*/, v22);
    sub_1B686D4(&StringLiteral_17236/*"bit_runningdog_20"*/, v23);
    sub_1B686D4(&StringLiteral_23458/*"stay_dog_40"*/, v24);
    sub_1B686D4(&StringLiteral_23460/*"stay_dog_60"*/, v25);
    sub_1B686D4(&StringLiteral_17242/*"bit_runningdog_80"*/, v26);
    sub_1B686D4(&StringLiteral_17239/*"bit_runningdog_50"*/, v27);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_1B686D4(&StringLiteral_17241/*"bit_runningdog_70"*/, v28);
    byte_4A0C91F = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_30;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23455/*"stay_dog_10"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !_4__this )
    goto LABEL_30;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v31, v32);
  v33 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23456/*"stay_dog_20"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v33 )
    goto LABEL_30;
  *(_QWORD *)&v33->fields.sortIndex = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v33->fields.sortIndex, (int32_t)this, v34, v35);
  v36 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23457/*"stay_dog_30"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v36 )
    goto LABEL_30;
  v36->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v36->fields._efStayHakkenshi30_k__BackingField,
    (int32_t)this,
    v37,
    v38);
  v39 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23458/*"stay_dog_40"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v39 )
    goto LABEL_30;
  v39->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v39->fields._efStayHakkenshi40_k__BackingField,
    (int32_t)this,
    v40,
    v41);
  v42 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23459/*"stay_dog_50"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v42 )
    goto LABEL_30;
  v42->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v42->fields._efStayHakkenshi50_k__BackingField,
    (int32_t)this,
    v43,
    v44);
  v45 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23460/*"stay_dog_60"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v45 )
    goto LABEL_30;
  v45->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v45->fields._efStayHakkenshi60_k__BackingField,
    (int32_t)this,
    v46,
    v47);
  v48 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23461/*"stay_dog_70"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v48 )
    goto LABEL_30;
  v48->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v48->fields._efStayHakkenshi70_k__BackingField,
    (int32_t)this,
    v49,
    v50);
  v51 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23462/*"stay_dog_80"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v51 )
    goto LABEL_30;
  v51->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v51->fields._efStayHakkenshi80_k__BackingField,
    (int32_t)this,
    v52,
    v53);
  v54 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6285/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v54 )
    goto LABEL_30;
  v54->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v54->fields._expeditionConfirmDialog_k__BackingField,
    (int32_t)this,
    v55,
    v56);
  v57 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6288/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v57 )
    goto LABEL_30;
  v57->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v57->fields._expeditionRewardDialog_k__BackingField,
    (int32_t)this,
    v58,
    v59);
  v60 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6287/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v60 )
    goto LABEL_30;
  v60->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v60->fields._expeditionPointRewardDialog_k__BackingField,
    (int32_t)this,
    v61,
    v62);
  v63 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17165/*"bit_expedition_start"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v63 )
    goto LABEL_30;
  v63[1].klass = (ServantStatusBattleListViewItem_c *)this;
  sub_1B68678(v63 + 1, (int32_t)this, v64, v65);
  v66 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17161/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v66 )
    goto LABEL_30;
  v66[1].monitor = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)((char *)v66 + 176), (int32_t)this, v67, v68);
  v69 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17235/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v69 )
    goto LABEL_30;
  *(_QWORD *)&v69->fields.isTermination = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v69->fields.isTermination, (int32_t)this, v70, v71);
  v72 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17236/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v72 )
    goto LABEL_30;
  *(_QWORD *)&v72->fields.basePosition.fields.y = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v72->fields.basePosition.fields.y, (int32_t)this, v73, v74);
  v75 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17237/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v75 )
    goto LABEL_30;
  v75->fields.viewObject = (struct ListViewObject_o *)this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v75->fields.viewObject, (int32_t)this, v76, v77);
  v78 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17238/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v78 )
    goto LABEL_30;
  *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v78->fields.svtId, (int32_t)this, v79, v80);
  v81 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17239/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v81 )
    goto LABEL_30;
  *(_QWORD *)&v81->fields.svtId.fields.fakeValue = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v81->fields.svtId.fields.fakeValue, (int32_t)this, v82, v83);
  v84 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17240/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v84 )
    goto LABEL_30;
  *(_QWORD *)&v84->fields.dispLimitCount.fields.currentCryptoKey = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v84->fields.dispLimitCount, (int32_t)this, v85, v86);
  v87 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17241/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !v87
    || (*(_QWORD *)&v87->fields.dispLimitCount.fields.fakeValue = this,
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&v87->fields.dispLimitCount.fields.fakeValue,
          (int32_t)this,
          v88,
          v89),
        v90 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48415484(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17242/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192),
        !v90) )
  {
LABEL_30:
    sub_1B68930(this, assetData);
  }
  *(_QWORD *)&v90->fields.isEnabled = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v90->fields.isEnabled, (int32_t)this, v91, v92);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v95, v96);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37606376(eventId, _9__1, 1, 0LL);
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