void __fastcall BonusSelectSummonAssetManager___ctor(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BonusSelectSummonAssetManager__GetAssets(
        BonusSelectSummonAssetManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AssetLoader_LoadEndDataHandler_o *v32; // x19
  __int64 v33; // x1

  if ( (byte_4B12835 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__, v8, v9);
    sub_1BCA7E0(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_13244/*"SummonScene/BonusSelectSummon"*/, v12, v13);
    byte_4B12835 = 1;
  }
  v14 = sub_1BCAA2C(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)finishCallback, v23, v24, v25, v26, v27, v28);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13244/*"SummonScene/BonusSelectSummon"*/, v32, 1, 0LL);
}


void __fastcall BonusSelectSummonAssetManager__Release(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  this->fields._ConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._MsgInfoPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o **prefab,
        System_String_o *prefabName,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__49237568; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12836 & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_1BCA7E0(
                                                &Method_AssetData_GetObject_GameObject____76836696,
                                                prefab,
                                                prefabName);
    byte_4B12836 = 1;
  }
  if ( !assetData )
    sub_1BCAA3C(this, prefab);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              prefabName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  *prefab = (UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784((PartyOrganizationUtility_o *)prefab, (int64_t)Object_object__49237568, v9, v10, v11, v12, v13, v14);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ConfirmDialogPrefab_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BonusSelectSummonAssetManager__set_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MsgInfoMenberPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BonusSelectSummonAssetManager__set_MsgInfoPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MsgInfoPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BonusSelectSummonAssetManager__set_OrganizationListViewItemPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OrganizationListViewItemPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BonusSelectSummonAssetManager__set_ServantSelectMenuPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantSelectMenuPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_GameObject_o *v20; // x1
  const MethodInfo *v21; // x4
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *v28; // x1
  const MethodInfo *v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *v36; // x1
  const MethodInfo *v37; // x4
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_GameObject_o *v44; // x1
  const MethodInfo *v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_GameObject_o *v52; // x1
  UnityEngine_GameObject_o *v53; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v54; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v55; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v56; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4B12837 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3341/*"BonusSelectSummonConfirmDialog"*/, assetData, method);
    sub_1BCA7E0(&StringLiteral_3342/*"BonusSelectSummonMsgInfo"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3343/*"BonusSelectSummonMsgInfoMenber"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3344/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/, v10, v11);
    this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)sub_1BCA7E0(&StringLiteral_3346/*"BonusSelectSummonPartyServantSelectMenu"*/, v12, v13);
    byte_4B12837 = 1;
  }
  v56 = 0LL;
  prefab = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &prefab,
    (System_String_o *)StringLiteral_3341/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    v3);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v20 = prefab;
  this->fields.__4__this = (struct BonusSelectSummonAssetManager_o *)prefab;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v20, v14, v15, v16, v17, v18, v19);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v56,
    (System_String_o *)StringLiteral_3344/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    v21);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v28 = v56;
  this->fields.finishCallback = (struct System_Action_o *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.finishCallback, (int64_t)v28, v22, v23, v24, v25, v26, v27);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v55,
    (System_String_o *)StringLiteral_3346/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    v29);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v36 = v55;
  this[1].klass = (BonusSelectSummonAssetManager___c__DisplayClass21_0_c *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this[1], (int64_t)v36, v30, v31, v32, v33, v34, v35);
  if ( !v5->fields.__4__this
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v54,
          (System_String_o *)StringLiteral_3342/*"BonusSelectSummonMsgInfo"*/,
          assetData,
          v37),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0LL)
    || (v44 = v54,
        this[1].monitor = v54,
        sub_1BCA784((PartyOrganizationUtility_o *)&this[1].monitor, (int64_t)v44, v38, v39, v40, v41, v42, v43),
        !v5->fields.__4__this)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v53,
          (System_String_o *)StringLiteral_3343/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          v45),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(this, assetData);
  }
  v52 = v53;
  this[1].fields.__4__this = (struct BonusSelectSummonAssetManager_o *)v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&this[1].fields, (int64_t)v52, v46, v47, v48, v49, v50, v51);
  ActionExtensions__Call(v5->fields.finishCallback, 0LL);
}