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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  AssetLoader_LoadEndDataHandler_o *v28; // x19

  if ( (byte_40FB0E6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, finishCallback);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__, v8);
    sub_B16FFC(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_13108, v10);
    byte_40FB0E6 = 1;
  }
  v11 = sub_B170CC(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, finishCallback, method, v3, v4);
  BonusSelectSummonAssetManager___c__DisplayClass21_0___ctor(
    (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)finishCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26, v27);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13108, v28, 1, 0LL);
}


void __fastcall BonusSelectSummonAssetManager__Release(BonusSelectSummonAssetManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  this->fields._ConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._MsgInfoPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FB0E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, prefab);
    byte_40FB0E7 = 1;
  }
  if ( !assetData )
    sub_B170D4();
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 prefabName,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  *prefab = Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)prefab,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ConfirmDialogPrefab_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BonusSelectSummonAssetManager__set_MsgInfoMenberPrefab(
        BonusSelectSummonAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MsgInfoMenberPrefab_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MsgInfoMenberPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MsgInfoPrefab_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OrganizationListViewItemPrefab_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantSelectMenuPrefab_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BonusSelectSummonAssetManager_o *_4__this; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BonusSelectSummonAssetManager_o *v16; // x0
  System_Int32_array **v17; // x1
  BonusSelectSummonAssetManager_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BonusSelectSummonAssetManager_o *v25; // x0
  System_Int32_array **v26; // x1
  BonusSelectSummonAssetManager_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BonusSelectSummonAssetManager_o *v34; // x0
  System_Int32_array **v35; // x1
  BonusSelectSummonAssetManager_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct BonusSelectSummonAssetManager_o *v43; // x0
  System_Int32_array **v44; // x1
  BonusSelectSummonAssetManager_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct BonusSelectSummonAssetManager_o *v52; // x0
  System_Int32_array **v53; // x1
  System_Int32_array **v54; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v55; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v56; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *v57; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F7091 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2832, assetData);
    sub_B16FFC(&StringLiteral_2833, v5);
    sub_B16FFC(&StringLiteral_2834, v6);
    sub_B16FFC(&StringLiteral_2835, v7);
    sub_B16FFC(&StringLiteral_2837, v8);
    byte_40F7091 = 1;
  }
  prefab = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &prefab,
    (System_String_o *)StringLiteral_2832,
    assetData,
    0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_14;
  v17 = (System_Int32_array **)prefab;
  v16->fields._ConfirmDialogPrefab_k__BackingField = prefab;
  sub_B16F98((BattleServantConfConponent_o *)&v16->fields, v17, v10, v11, v12, v13, v14, v15);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(v18, &v57, (System_String_o *)StringLiteral_2835, assetData, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_14;
  v26 = (System_Int32_array **)v57;
  v25->fields._OrganizationListViewItemPrefab_k__BackingField = v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v25->fields._OrganizationListViewItemPrefab_k__BackingField,
    v26,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(v27, &v56, (System_String_o *)StringLiteral_2837, assetData, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_14;
  v35 = (System_Int32_array **)v56;
  v34->fields._ServantSelectMenuPrefab_k__BackingField = v56;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v34->fields._ServantSelectMenuPrefab_k__BackingField,
    v35,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(v36, &v55, (System_String_o *)StringLiteral_2833, assetData, 0LL);
  v43 = this->fields.__4__this;
  if ( !v43
    || (v44 = (System_Int32_array **)v55,
        v43->fields._MsgInfoPrefab_k__BackingField = v55,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v43->fields._MsgInfoPrefab_k__BackingField,
          v44,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42),
        (v45 = this->fields.__4__this) == 0LL)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          v45,
          (UnityEngine_GameObject_o **)&v54,
          (System_String_o *)StringLiteral_2834,
          assetData,
          0LL),
        (v52 = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v53 = v54;
  v52->fields._MsgInfoMenberPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v52->fields._MsgInfoMenberPrefab_k__BackingField,
    v53,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}