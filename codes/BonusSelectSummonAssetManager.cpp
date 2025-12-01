void BonusSelectSummonAssetManager___ctor(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BonusSelectSummonAssetManager__GetAssets(
        BonusSelectSummonAssetManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_4CC37C6 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__);
    sub_1C713B0(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
    sub_1C713B0(&StringLiteral_13185/*"SummonScene/BonusSelectSummon"*/);
    byte_4CC37C6 = 1;
  }
  v5 = sub_1C715FC(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13185/*"SummonScene/BonusSelectSummon"*/, v20, 1, 0);
}


void BonusSelectSummonAssetManager__Release(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  this->fields._ConfirmDialogPrefab_k__BackingField = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._MsgInfoPrefab_k__BackingField = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o **prefab,
        System_String_o *prefabName,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51560868; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC37C7 & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    byte_4CC37C7 = 1;
  }
  if ( !assetData )
    sub_1C71608(this, prefab);
  Object_object__51560868 = AssetData__GetObject_object__51560868(
                              assetData,
                              prefabName,
                              (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
  *prefab = (UnityEngine_GameObject_o *)Object_object__51560868;
  sub_1C71354((GrandQuestFolderBoardItem_o *)prefab, (int32_t)Object_object__51560868, v9, v10, v11, v12, v13, v14);
}


UnityEngine_GameObject_o *BonusSelectSummonAssetManager__get_ConfirmDialogPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *BonusSelectSummonAssetManager__get_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._MsgInfoMenberPrefab_k__BackingField;
}


UnityEngine_GameObject_o *BonusSelectSummonAssetManager__get_MsgInfoPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._MsgInfoPrefab_k__BackingField;
}


UnityEngine_GameObject_o *BonusSelectSummonAssetManager__get_OrganizationListViewItemPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OrganizationListViewItemPrefab_k__BackingField;
}


UnityEngine_GameObject_o *BonusSelectSummonAssetManager__get_ServantSelectMenuPrefab(
        BonusSelectSummonAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSelectMenuPrefab_k__BackingField;
}


void BonusSelectSummonAssetManager__set_ConfirmDialogPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ConfirmDialogPrefab_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void BonusSelectSummonAssetManager__set_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MsgInfoMenberPrefab_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonAssetManager__set_MsgInfoPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MsgInfoPrefab_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonAssetManager__set_OrganizationListViewItemPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OrganizationListViewItemPrefab_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonAssetManager__set_ServantSelectMenuPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantSelectMenuPrefab_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonAssetManager___c__DisplayClass21_0___ctor(
        BonusSelectSummonAssetManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BonusSelectSummonAssetManager___c__DisplayClass21_0___GetAssets_b__0(
        BonusSelectSummonAssetManager___c__DisplayClass21_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BonusSelectSummonAssetManager___c__DisplayClass21_0_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  const MethodInfo *v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  const MethodInfo *v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w1
  UnityEngine_GameObject_o *v45; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v46; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v47; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v48; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4CC37C8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3196/*"BonusSelectSummonConfirmDialog"*/);
    sub_1C713B0(&StringLiteral_3197/*"BonusSelectSummonMsgInfo"*/);
    sub_1C713B0(&StringLiteral_3198/*"BonusSelectSummonMsgInfoMenber"*/);
    sub_1C713B0(&StringLiteral_3199/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/);
    this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)sub_1C713B0(&StringLiteral_3200/*"BonusSelectSummonPartyServantSelectMenu"*/);
    byte_4CC37C8 = 1;
  }
  v48 = 0;
  prefab = 0;
  v46 = 0;
  v47 = 0;
  v45 = 0;
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &prefab,
    (System_String_o *)StringLiteral_3196/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    v3);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v12 = (int)prefab;
  this->fields.__4__this = (struct BonusSelectSummonAssetManager_o *)prefab;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, v12, v6, v7, v8, v9, v10, v11);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v48,
    (System_String_o *)StringLiteral_3199/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    v13);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v20 = (int)v48;
  this->fields.finishCallback = (struct System_Action_o *)v48;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.finishCallback, v20, v14, v15, v16, v17, v18, v19);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v47,
    (System_String_o *)StringLiteral_3200/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    v21);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v28 = (int)v47;
  this[1].klass = (BonusSelectSummonAssetManager___c__DisplayClass21_0_c *)v47;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this[1], v28, v22, v23, v24, v25, v26, v27);
  if ( !v5->fields.__4__this
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v46,
          (System_String_o *)StringLiteral_3197/*"BonusSelectSummonMsgInfo"*/,
          assetData,
          v29),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0)
    || (v36 = (int)v46,
        this[1].monitor = v46,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this[1].monitor, v36, v30, v31, v32, v33, v34, v35),
        !v5->fields.__4__this)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v45,
          (System_String_o *)StringLiteral_3198/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          v37),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_1C71608(this, assetData);
  }
  v44 = (int)v45;
  this[1].fields.__4__this = (struct BonusSelectSummonAssetManager_o *)v45;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this[1].fields, v44, v38, v39, v40, v41, v42, v43);
  ActionExtensions__Call(v5->fields.finishCallback, 0);
}