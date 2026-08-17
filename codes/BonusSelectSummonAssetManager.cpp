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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  AssetLoader_LoadEndDataHandler_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_596C964 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__);
    sub_2213A60(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
    sub_2213A60(&StringLiteral_13732/*"SummonScene/BonusSelectSummon"*/);
    byte_596C964 = 1;
  }
  v5 = sub_2213CCC(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21, v22);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13732/*"SummonScene/BonusSelectSummon"*/, v20, 1, 0, 0);
}


void BonusSelectSummonAssetManager__Release(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  this->fields._ConfirmDialogPrefab_k__BackingField = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._MsgInfoPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
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
  Il2CppObject *Object_object__58532980; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596C965 & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    byte_596C965 = 1;
  }
  if ( !assetData )
    sub_2213CDC(this, prefab);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              prefabName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  *prefab = (UnityEngine_GameObject_o *)Object_object__58532980;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)prefab, (int32_t)Object_object__58532980, v9, v10, v11, v12, v13, v14);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ConfirmDialogPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BonusSelectSummonAssetManager__set_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MsgInfoMenberPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MsgInfoPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OrganizationListViewItemPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantSelectMenuPrefab_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  struct BonusSelectSummonAssetManager_o *_4__this; // x8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w1
  const MethodInfo *v14; // x4
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  const MethodInfo *v22; // x4
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  const MethodInfo *v30; // x4
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  const MethodInfo *v38; // x4
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  UnityEngine_GameObject_o *v46; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v47; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v48; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v49; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_596C966 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3330/*"BonusSelectSummonConfirmDialog"*/);
    sub_2213A60(&StringLiteral_3331/*"BonusSelectSummonMsgInfo"*/);
    sub_2213A60(&StringLiteral_3332/*"BonusSelectSummonMsgInfoMenber"*/);
    sub_2213A60(&StringLiteral_3333/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/);
    this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)sub_2213A60(&StringLiteral_3334/*"BonusSelectSummonPartyServantSelectMenu"*/);
    byte_596C966 = 1;
  }
  _4__this = v5->fields.__4__this;
  v49 = 0;
  prefab = 0;
  v47 = 0;
  v48 = 0;
  v46 = 0;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &prefab,
    (System_String_o *)StringLiteral_3330/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    v3);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v13 = (int)prefab;
  this->fields.__4__this = (struct BonusSelectSummonAssetManager_o *)prefab;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, v13, v7, v8, v9, v10, v11, v12);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v49,
    (System_String_o *)StringLiteral_3333/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    v14);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v21 = (int)v49;
  this->fields.finishCallback = (struct System_Action_o *)v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.finishCallback, v21, v15, v16, v17, v18, v19, v20);
  if ( !v5->fields.__4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    (BonusSelectSummonAssetManager_o *)this,
    &v48,
    (System_String_o *)StringLiteral_3334/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    v22);
  this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  v29 = (int)v48;
  this[1].klass = (BonusSelectSummonAssetManager___c__DisplayClass21_0_c *)v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this[1], v29, v23, v24, v25, v26, v27, v28);
  if ( !v5->fields.__4__this
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v47,
          (System_String_o *)StringLiteral_3331/*"BonusSelectSummonMsgInfo"*/,
          assetData,
          v30),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0)
    || (v37 = (int)v47,
        this[1].monitor = v47,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this[1].monitor, v37, v31, v32, v33, v34, v35, v36),
        !v5->fields.__4__this)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          (BonusSelectSummonAssetManager_o *)this,
          &v46,
          (System_String_o *)StringLiteral_3332/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          v38),
        (this = (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, assetData);
  }
  v45 = (int)v46;
  this[1].fields.__4__this = (struct BonusSelectSummonAssetManager_o *)v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this[1].fields, v45, v39, v40, v41, v42, v43, v44);
  ActionExtensions__Call(v5->fields.finishCallback, 0);
}