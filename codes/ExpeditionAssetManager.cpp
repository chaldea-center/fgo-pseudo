void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5EE8D & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6231/*"EventUI/Prefabs/80381"*/);
    byte_4A5EE8D = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6231/*"EventUI/Prefabs/80381"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6231/*"EventUI/Prefabs/80381"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionAssetManager__GetAssets(
        ExpeditionAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v15; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_4A5EE8B & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__);
    sub_1B885B0(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
    byte_4A5EE8B = 1;
  }
  v7 = sub_1B887FC(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B8880C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
    sub_1B88814(v8, v9);
  v15 = loadAssetNames->m_Items[0];
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v16, 1, 0LL);
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

  if ( (byte_4A5EE8C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5EE8C = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi20_k__BackingField, 0, v7, v8);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi30_k__BackingField, 0, v9, v10);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi40_k__BackingField, 0, v11, v12);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi50_k__BackingField, 0, v13, v14);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi60_k__BackingField, 0, v15, v16);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi70_k__BackingField, 0, v17, v18);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efStayHakkenshi80_k__BackingField, 0, v19, v20);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi10_k__BackingField, 0, v21, v22);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi20_k__BackingField, 0, v23, v24);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi30_k__BackingField, 0, v25, v26);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi40_k__BackingField, 0, v27, v28);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi50_k__BackingField, 0, v29, v30);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi60_k__BackingField, 0, v31, v32);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi70_k__BackingField, 0, v33, v34);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._efRunHakkenshi80_k__BackingField, 0, v35, v36);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._expeditionConfirmDialog_k__BackingField, 0, v37, v38);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._expeditionRewardDialog_k__BackingField, 0, v39, v40);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0,
    v41,
    v42);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._bitExpeditionStart_k__BackingField, 0, v43, v44);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._bitExpeditionFinish_k__BackingField, 0, v45, v46);
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  struct ExpeditionAssetManager_o *_4__this; // x21
  ExpeditionAssetManager___c__DisplayClass85_0_Fields *p_fields; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct ExpeditionAssetManager_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct ExpeditionAssetManager_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct ExpeditionAssetManager_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct ExpeditionAssetManager_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct ExpeditionAssetManager_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  struct ExpeditionAssetManager_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct ExpeditionAssetManager_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  struct ExpeditionAssetManager_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  struct ExpeditionAssetManager_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  ServantStatusBattleListViewItem_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  ServantStatusBattleListViewItem_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  ServantStatusBattleListViewItem_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  ServantStatusBattleListViewItem_o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  ServantStatusBattleListViewItem_o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  ServantStatusBattleListViewItem_o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  ServantStatusBattleListViewItem_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  ServantStatusBattleListViewItem_o *v60; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  ServantStatusBattleListViewItem_o *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  ServantStatusBattleListViewItem_o *v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v71; // w2
  int32_t v72; // w3

  v4 = this;
  if ( (byte_4A5EE8E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__);
    sub_1B885B0(&StringLiteral_6311/*"ExpeditionConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_23536/*"stay_dog_10"*/);
    sub_1B885B0(&StringLiteral_17300/*"bit_runningdog_10"*/);
    sub_1B885B0(&StringLiteral_6314/*"ExpeditionRewardDialog"*/);
    sub_1B885B0(&StringLiteral_6313/*"ExpeditionPointRewardDialog"*/);
    sub_1B885B0(&StringLiteral_17226/*"bit_expedition_finish"*/);
    sub_1B885B0(&StringLiteral_23540/*"stay_dog_50"*/);
    sub_1B885B0(&StringLiteral_17305/*"bit_runningdog_60"*/);
    sub_1B885B0(&StringLiteral_17303/*"bit_runningdog_40"*/);
    sub_1B885B0(&StringLiteral_17302/*"bit_runningdog_30"*/);
    sub_1B885B0(&StringLiteral_23543/*"stay_dog_80"*/);
    sub_1B885B0(&StringLiteral_17230/*"bit_expedition_start"*/);
    sub_1B885B0(&StringLiteral_23537/*"stay_dog_20"*/);
    sub_1B885B0(&StringLiteral_23538/*"stay_dog_30"*/);
    sub_1B885B0(&StringLiteral_23542/*"stay_dog_70"*/);
    sub_1B885B0(&StringLiteral_17301/*"bit_runningdog_20"*/);
    sub_1B885B0(&StringLiteral_23539/*"stay_dog_40"*/);
    sub_1B885B0(&StringLiteral_23541/*"stay_dog_60"*/);
    sub_1B885B0(&StringLiteral_17307/*"bit_runningdog_80"*/);
    sub_1B885B0(&StringLiteral_17304/*"bit_runningdog_50"*/);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_1B885B0(&StringLiteral_17306/*"bit_runningdog_70"*/);
    byte_4A5EE8E = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_30;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23536/*"stay_dog_10"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !_4__this )
    goto LABEL_30;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v7, v8);
  v9 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23537/*"stay_dog_20"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v9 )
    goto LABEL_30;
  *(_QWORD *)&v9->fields.sortIndex = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.sortIndex, (int32_t)this, v10, v11);
  v12 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23538/*"stay_dog_30"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v12 )
    goto LABEL_30;
  v12->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v12->fields._efStayHakkenshi30_k__BackingField,
    (int32_t)this,
    v13,
    v14);
  v15 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23539/*"stay_dog_40"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v15 )
    goto LABEL_30;
  v15->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v15->fields._efStayHakkenshi40_k__BackingField,
    (int32_t)this,
    v16,
    v17);
  v18 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23540/*"stay_dog_50"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v18 )
    goto LABEL_30;
  v18->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v18->fields._efStayHakkenshi50_k__BackingField,
    (int32_t)this,
    v19,
    v20);
  v21 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23541/*"stay_dog_60"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v21 )
    goto LABEL_30;
  v21->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v21->fields._efStayHakkenshi60_k__BackingField,
    (int32_t)this,
    v22,
    v23);
  v24 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23542/*"stay_dog_70"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v24 )
    goto LABEL_30;
  v24->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v24->fields._efStayHakkenshi70_k__BackingField,
    (int32_t)this,
    v25,
    v26);
  v27 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23543/*"stay_dog_80"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v27 )
    goto LABEL_30;
  v27->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v27->fields._efStayHakkenshi80_k__BackingField,
    (int32_t)this,
    v28,
    v29);
  v30 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6311/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v30 )
    goto LABEL_30;
  v30->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v30->fields._expeditionConfirmDialog_k__BackingField,
    (int32_t)this,
    v31,
    v32);
  v33 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6314/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v33 )
    goto LABEL_30;
  v33->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v33->fields._expeditionRewardDialog_k__BackingField,
    (int32_t)this,
    v34,
    v35);
  v36 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6313/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v36 )
    goto LABEL_30;
  v36->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v36->fields._expeditionPointRewardDialog_k__BackingField,
    (int32_t)this,
    v37,
    v38);
  v39 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17230/*"bit_expedition_start"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v39 )
    goto LABEL_30;
  v39[1].klass = (ServantStatusBattleListViewItem_c *)this;
  sub_1B88554(v39 + 1, (int32_t)this, v40, v41);
  v42 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17226/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v42 )
    goto LABEL_30;
  v42[1].monitor = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v42 + 176), (int32_t)this, v43, v44);
  v45 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17300/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v45 )
    goto LABEL_30;
  *(_QWORD *)&v45->fields.isTermination = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.isTermination, (int32_t)this, v46, v47);
  v48 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17301/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v48 )
    goto LABEL_30;
  *(_QWORD *)&v48->fields.basePosition.fields.y = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v48->fields.basePosition.fields.y, (int32_t)this, v49, v50);
  v51 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17302/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v51 )
    goto LABEL_30;
  v51->fields.viewObject = (struct ListViewObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v51->fields.viewObject, (int32_t)this, v52, v53);
  v54 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17303/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v54 )
    goto LABEL_30;
  *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->fields.svtId, (int32_t)this, v55, v56);
  v57 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17304/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v57 )
    goto LABEL_30;
  *(_QWORD *)&v57->fields.svtId.fields.fakeValue = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v57->fields.svtId.fields.fakeValue, (int32_t)this, v58, v59);
  v60 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17305/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v60 )
    goto LABEL_30;
  *(_QWORD *)&v60->fields.dispLimitCount.fields.currentCryptoKey = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v60->fields.dispLimitCount, (int32_t)this, v61, v62);
  v63 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17306/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v63
    || (*(_QWORD *)&v63->fields.dispLimitCount.fields.fakeValue = this,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v63->fields.dispLimitCount.fields.fakeValue,
          (int32_t)this,
          v64,
          v65),
        v66 = (ServantStatusBattleListViewItem_o *)p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__48635516(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17307/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        !v66) )
  {
LABEL_30:
    sub_1B8880C(this, assetData);
  }
  *(_QWORD *)&v66->fields.isEnabled = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v66->fields.isEnabled, (int32_t)this, v67, v68);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v71, v72);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(eventId, _9__1, 1, 0LL);
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