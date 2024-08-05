void __fastcall BonusSelectSummonAssetManager___ctor(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BonusSelectSummonAssetManager__GetAssets(
        BonusSelectSummonAssetManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  AssetLoader_LoadEndDataHandler_o *v16; // x19

  if ( (byte_49FACC9 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, finishCallback);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B64870(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__, v6);
    sub_1B64870(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, v7);
    sub_1B64870(&StringLiteral_13023/*"SummonScene/BonusSelectSummon"*/, v8);
    byte_49FACC9 = 1;
  }
  v9 = sub_1B64ABC(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64ACC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = finishCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)finishCallback, v14, v15);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13023/*"SummonScene/BonusSelectSummon"*/, v16, 1, 0LL);
}


void __fastcall BonusSelectSummonAssetManager__Release(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  this->fields._ConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, 0, v2, v3);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0LL;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0,
    v5,
    v6);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField, 0, v7, v8);
  this->fields._MsgInfoPrefab_k__BackingField = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._MsgInfoPrefab_k__BackingField, 0, v9, v10);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField, 0, v11, v12);
}


void __fastcall BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o **prefab,
        System_String_o *prefabName,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__48356600; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FACCA & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, prefab);
    byte_49FACCA = 1;
  }
  if ( !assetData )
    sub_1B64ACC(this, prefab);
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              assetData,
                              prefabName,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  *prefab = (UnityEngine_GameObject_o *)Object_object__48356600;
  sub_1B64814((ServantStatusBattleListViewItem_o *)prefab, (int32_t)Object_object__48356600, v9, v10);
}


UnityEngine_GameObject_o *__fastcall BonusSelectSummonAssetManager__get_ConfirmDialogPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BonusSelectSummonAssetManager__get_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._MsgInfoMenberPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BonusSelectSummonAssetManager__get_MsgInfoPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._MsgInfoPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BonusSelectSummonAssetManager__get_OrganizationListViewItemPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OrganizationListViewItemPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BonusSelectSummonAssetManager__get_ServantSelectMenuPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSelectMenuPrefab_k__BackingField;
}


void __fastcall BonusSelectSummonAssetManager__set_ConfirmDialogPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ConfirmDialogPrefab_k__BackingField = value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BonusSelectSummonAssetManager__set_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MsgInfoMenberPrefab_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BonusSelectSummonAssetManager__set_MsgInfoPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MsgInfoPrefab_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BonusSelectSummonAssetManager__set_OrganizationListViewItemPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OrganizationListViewItemPrefab_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BonusSelectSummonAssetManager__set_ServantSelectMenuPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ServantSelectMenuPrefab_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BonusSelectSummonAssetManager___c__DisplayClass21_0___ctor(
        BonusSelectSummonAssetManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BonusSelectSummonAssetManager___c__DisplayClass21_0___GetAssets_b__0(
        BonusSelectSummonAssetManager___c__DisplayClass21_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BonusSelectSummonAssetManager___c__DisplayClass21_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  const MethodInfo *v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  UnityEngine_GameObject_o *v29; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v30; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v31; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v32; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_49FACCB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3294/*"BonusSelectSummonConfirmDialog"*/, assetData);
    sub_1B64870(&StringLiteral_3295/*"BonusSelectSummonMsgInfo"*/, v6);
    sub_1B64870(&StringLiteral_3296/*"BonusSelectSummonMsgInfoMenber"*/, v7);
    sub_1B64870(&StringLiteral_3297/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/, v8);
    this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)sub_1B64870(&StringLiteral_3299/*"BonusSelectSummonPartyServantSelectMenu"*/, v9);
    byte_49FACCB = 1;
  }
  v32 = 0LL;
  prefab = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &prefab,
    (System_String_o *)StringLiteral_3294/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    v3);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v12 = (int)prefab;
  this->fields.__4__this = (struct BonusSelectSummonAssetManager_o *)prefab;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, v12, v10, v11);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v32,
    (System_String_o *)StringLiteral_3297/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    v13);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v16 = (int)v32;
  this->fields.finishCallback = (struct System_Action_o *)v32;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.finishCallback, v16, v14, v15);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v31,
    (System_String_o *)StringLiteral_3299/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    v17);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v20 = (int)v31;
  this[1].klass = (BonusSelectSummonAssetManager___c__DisplayClass21_0_c *)v31;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[1], v20, v18, v19);
  if ( !v5->fields.__4__this
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v30,
          (System_String_o *)StringLiteral_3295/*"BonusSelectSummonMsgInfo"*/,
          assetData,
          v21),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0LL)
    || (v24 = (int)v30,
        this[1].monitor = v30,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this[1].monitor, v24, v22, v23),
        !v5->fields.__4__this)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v29,
          (System_String_o *)StringLiteral_3296/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          v25),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1B64ACC(this, assetData);
  }
  v28 = (int)v29;
  this[1].fields.__4__this = (struct BonusSelectSummonAssetManager_o *)v29;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[1].fields, v28, v26, v27);
  ActionExtensions__Call(v5->fields.finishCallback, 0LL);
}