void __fastcall BonusSelectSummonAssetManager___ctor(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BonusSelectSummonAssetManager__GetAssets(
        BonusSelectSummonAssetManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AssetLoader_LoadEndDataHandler_o *v12; // x19

  if ( (byte_4A578A8 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__);
    sub_1B885B0(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13083/*"SummonScene/BonusSelectSummon"*/);
    byte_4A578A8 = 1;
  }
  v5 = sub_1B887FC(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13083/*"SummonScene/BonusSelectSummon"*/, v12, 1, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v2, v3);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0,
    v5,
    v6);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField, 0, v7, v8);
  this->fields._MsgInfoPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._MsgInfoPrefab_k__BackingField, 0, v9, v10);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField, 0, v11, v12);
}


void __fastcall BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o **prefab,
        System_String_o *prefabName,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__48635516; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A578A9 & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    byte_4A578A9 = 1;
  }
  if ( !assetData )
    sub_1B8880C(this, prefab);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              prefabName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  *prefab = (UnityEngine_GameObject_o *)Object_object__48635516;
  sub_1B88554((ServantStatusBattleListViewItem_o *)prefab, (int32_t)Object_object__48635516, v9, v10);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BonusSelectSummonAssetManager__set_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MsgInfoMenberPrefab_k__BackingField = value;
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  sub_1B88554(
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
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  const MethodInfo *v9; // x4
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
  UnityEngine_GameObject_o *v25; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v26; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v27; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v28; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4A578AA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3316/*"BonusSelectSummonConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_3317/*"BonusSelectSummonMsgInfo"*/);
    sub_1B885B0(&StringLiteral_3318/*"BonusSelectSummonMsgInfoMenber"*/);
    sub_1B885B0(&StringLiteral_3319/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/);
    this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)sub_1B885B0(&StringLiteral_3321/*"BonusSelectSummonPartyServantSelectMenu"*/);
    byte_4A578AA = 1;
  }
  v28 = 0LL;
  prefab = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &prefab,
    (System_String_o *)StringLiteral_3316/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    v3);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v8 = (int)prefab;
  this->fields.__4__this = (struct BonusSelectSummonAssetManager_o *)prefab;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v8, v6, v7);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v28,
    (System_String_o *)StringLiteral_3319/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    v9);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v12 = (int)v28;
  this->fields.finishCallback = (struct System_Action_o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.finishCallback, v12, v10, v11);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v27,
    (System_String_o *)StringLiteral_3321/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    v13);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v16 = (int)v27;
  this[1].klass = (BonusSelectSummonAssetManager___c__DisplayClass21_0_c *)v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1], v16, v14, v15);
  if ( !v5->fields.__4__this
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v26,
          (System_String_o *)StringLiteral_3317/*"BonusSelectSummonMsgInfo"*/,
          assetData,
          v17),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0LL)
    || (v20 = (int)v26,
        this[1].monitor = v26,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1].monitor, v20, v18, v19),
        !v5->fields.__4__this)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v25,
          (System_String_o *)StringLiteral_3318/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          v21),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(this, assetData);
  }
  v24 = (int)v25;
  this[1].fields.__4__this = (struct BonusSelectSummonAssetManager_o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1].fields, v24, v22, v23);
  ActionExtensions__Call(v5->fields.finishCallback, 0LL);
}