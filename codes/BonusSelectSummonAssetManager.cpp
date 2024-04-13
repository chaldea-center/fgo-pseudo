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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
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
  AssetLoader_LoadEndDataHandler_o *v33; // x19

  if ( (byte_42E8651 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__, v9, v10, v11);
    sub_B5D5C4(&BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13320/*"SummonScene/BonusSelectSummon"*/, v15, v16, v17);
    byte_42E8651 = 1;
  }
  v18 = sub_B5D694(BonusSelectSummonAssetManager___c__DisplayClass21_0_TypeInfo);
  BonusSelectSummonAssetManager___c__DisplayClass21_0___ctor(
    (BonusSelectSummonAssetManager___c__DisplayClass21_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)finishCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v18,
    Method_BonusSelectSummonAssetManager___c__DisplayClass21_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13320/*"SummonScene/BonusSelectSummon"*/, v33, 1, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._OrganizationListViewItemPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OrganizationListViewItemPrefab_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._ServantSelectMenuPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ServantSelectMenuPrefab_k__BackingField,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._MsgInfoPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._MsgInfoPrefab_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._MsgInfoMenberPrefab_k__BackingField = 0LL;
  sub_B5D560(
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

  if ( (byte_42E8652 & 1) == 0 )
  {
    this = (BonusSelectSummonAssetManager_o *)sub_B5D5C4(
                                                &Method_AssetData_GetObject_GameObject____68807504,
                                                (_DWORD)prefab,
                                                (_DWORD)prefabName,
                                                assetData);
    byte_42E8652 = 1;
  }
  if ( !assetData )
    sub_B5D69C(this, prefab);
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 prefabName,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  *prefab = Object_WarBoardWaitTimeSetting;
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct BonusSelectSummonAssetManager_o *_4__this; // x0
  UnityEngine_GameObject_o *v19; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v20; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v21; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *v22; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E5E21 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2899/*"BonusSelectSummonConfirmDialog"*/, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_2900/*"BonusSelectSummonMsgInfo"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2901/*"BonusSelectSummonMsgInfoMenber"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2902/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2904/*"BonusSelectSummonPartyServantSelectMenu"*/, v15, v16, v17);
    byte_42E5E21 = 1;
  }
  prefab = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &prefab,
    (System_String_o *)StringLiteral_2899/*"BonusSelectSummonConfirmDialog"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields._ConfirmDialogPrefab_k__BackingField = prefab;
  sub_B5D560(&_4__this->fields);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &v22,
    (System_String_o *)StringLiteral_2902/*"BonusSelectSummonPartyListViewItemMemberPrefab"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields._OrganizationListViewItemPrefab_k__BackingField = v22;
  sub_B5D560(&_4__this->fields._OrganizationListViewItemPrefab_k__BackingField);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
    _4__this,
    &v21,
    (System_String_o *)StringLiteral_2904/*"BonusSelectSummonPartyServantSelectMenu"*/,
    assetData,
    0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields._ServantSelectMenuPrefab_k__BackingField = v21;
  sub_B5D560(&_4__this->fields._ServantSelectMenuPrefab_k__BackingField);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          _4__this,
          &v20,
          (System_String_o *)StringLiteral_2900/*"BonusSelectSummonMsgInfo"*/,
          assetData,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this->fields._MsgInfoPrefab_k__BackingField = v20,
        sub_B5D560(&_4__this->fields._MsgInfoPrefab_k__BackingField),
        (_4__this = this->fields.__4__this) == 0LL)
    || (BonusSelectSummonAssetManager__SetPrefabAndNullCheck(
          _4__this,
          &v19,
          (System_String_o *)StringLiteral_2901/*"BonusSelectSummonMsgInfoMenber"*/,
          assetData,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(_4__this, assetData);
  }
  _4__this->fields._MsgInfoMenberPrefab_k__BackingField = v19;
  sub_B5D560(&_4__this->fields._MsgInfoMenberPrefab_k__BackingField);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}