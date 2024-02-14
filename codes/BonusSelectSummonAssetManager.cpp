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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  AssetLoader_LoadEndDataHandler_o *v25; // x19

  if ( (byte_4214BD5 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, finishCallback);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__, v6);
    sub_B0D8A4(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_13208/*"SummonScene/BonusSelectSummon"*/, v8);
    byte_4214BD5 = 1;
  }
  v9 = sub_B0D974(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, finishCallback, method);
  BonusSelectSummonAssetManager___c__DisplayClass21_0___ctor(
    (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)finishCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13208/*"SummonScene/BonusSelectSummon"*/, v25, 1, 0LL);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._MsgInfoPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0LL;
  sub_B0D840(
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

  if ( (byte_4214BD6 & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, prefab);
    byte_4214BD6 = 1;
  }
  if ( !assetData )
    sub_B0D97C(this);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 prefabName,
                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  *prefab = Object_WarBoardWaitTimeSetting;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  struct BonusSelectSummonAssetManager_o *_4__this; // x0
  UnityEngine_GameObject_o *v10; // x1
  UnityEngine_GameObject_o *v11; // x1
  UnityEngine_GameObject_o *v12; // x1
  UnityEngine_GameObject_o *v13; // x1
  UnityEngine_GameObject_o *v14; // x1
  UnityEngine_GameObject_o *v15; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v16; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v17; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *v18; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4211DC8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2855/*"BonusSelectSummonConfirmDialog"*/, assetData);
    sub_B0D8A4(&StringLiteral_2856/*"BonusSelectSummonMsgInfo"*/, v5);
    sub_B0D8A4(&StringLiteral_2857/*"BonusSelectSummonMsgInfoMenber"*/, v6);
    sub_B0D8A4(&StringLiteral_2858/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/, v7);
    sub_B0D8A4(&StringLiteral_2860/*"BonusSelectSummonPartyServantSelectMenu"*/, v8);
    byte_4211DC8 = 1;
  }
  prefab = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &prefab,
    (System_String_o *)StringLiteral_2855/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v10 = prefab;
  _4__this->fields._ConfirmDialogPrefab_k__BackingField = prefab;
  sub_B0D840(&_4__this->fields, v10);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &v18,
    (System_String_o *)StringLiteral_2858/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v11 = v18;
  _4__this->fields._OrganizationListViewItemPrefab_k__BackingField = v18;
  sub_B0D840(&_4__this->fields._OrganizationListViewItemPrefab_k__BackingField, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &v17,
    (System_String_o *)StringLiteral_2860/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v12 = v17;
  _4__this->fields._ServantSelectMenuPrefab_k__BackingField = v17;
  sub_B0D840(&_4__this->fields._ServantSelectMenuPrefab_k__BackingField, v12);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &v16,
    (System_String_o *)StringLiteral_2856/*"BonusSelectSummonMsgInfo"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v13 = v16,
        _4__this->fields._MsgInfoPrefab_k__BackingField = v16,
        sub_B0D840(&_4__this->fields._MsgInfoPrefab_k__BackingField, v13),
        (_4__this = this->fields.__4__this) == 0LL)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          _4__this,
          &v15,
          (System_String_o *)StringLiteral_2857/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(_4__this);
  }
  v14 = v15;
  _4__this->fields._MsgInfoMenberPrefab_k__BackingField = v15;
  sub_B0D840(&_4__this->fields._MsgInfoMenberPrefab_k__BackingField, v14);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}