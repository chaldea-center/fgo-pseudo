void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_42B1FFE & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_6247/*"EventUI/Prefabs/80367"*/);
    byte_42B1FFE = 1;
  }
  v3 = sub_B5299C(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_6247/*"EventUI/Prefabs/80367"*/;
  if ( StringLiteral_6247/*"EventUI/Prefabs/80367"*/ )
  {
    v12 = sub_B52A44(StringLiteral_6247/*"EventUI/Prefabs/80367"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B52A7C(0LL);
      sub_B52A28(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6247/*"EventUI/Prefabs/80367"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B52A88(v12);
    sub_B52A28(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  AssetData_array *AssetStorage_30367664; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array *loadAssetNames; // x22
  AssetData_o *v17; // x22
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  DiggingAssetManager_Fields *p_fields; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Action_o *v75; // x20
  __int64 v76; // x0

  if ( (byte_42B1FFC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_DiggingSettings___);
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__);
    sub_B52984(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
    sub_B52984(&StringLiteral_2859/*"BlockPrefab"*/);
    sub_B52984(&StringLiteral_5337/*"DiggingRewardDialog"*/);
    sub_B52984(&StringLiteral_5338/*"DiggingSettings"*/);
    sub_B52984(&StringLiteral_5334/*"DiggingCompleteImagePrefab"*/);
    sub_B52984(&StringLiteral_5336/*"DiggingPointRewardDialog"*/);
    sub_B52984(&StringLiteral_5335/*"DiggingConfirmDialog"*/);
    sub_B52984(&StringLiteral_11594/*"RewardPrefab"*/);
    sub_B52984(&StringLiteral_2222/*"AutoDiggingDialog"*/);
    byte_42B1FFC = 1;
  }
  v7 = sub_B52A54(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  DiggingAssetManager___c__DisplayClass33_0___ctor((DiggingAssetManager___c__DisplayClass33_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)finishCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  loadAssetNames = this->fields.loadAssetNames;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_30367664 = AssetManager__getAssetStorage_30367664(loadAssetNames, 0LL);
  if ( !AssetStorage_30367664 )
    goto LABEL_14;
  if ( !AssetStorage_30367664->max_length )
  {
    v76 = sub_B52A88(AssetStorage_30367664);
    sub_B52A28(v76, 0LL);
  }
  v17 = AssetStorage_30367664->m_Items[0];
  if ( !v17 )
LABEL_14:
    sub_B52A5C(AssetStorage_30367664, v9);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage_30367664->m_Items[0],
                                                                        (System_String_o *)StringLiteral_2859/*"BlockPrefab"*/,
                                                                        (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  this->fields._blockPrefab_k__BackingField = Object_WarBoardWaitTimeSetting;
  p_fields = &this->fields;
  sub_B52920(
    (BattleServantConfConponent_o *)p_fields,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_11594/*"RewardPrefab"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  p_fields->_rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&p_fields->_rewardPrefab_k__BackingField,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_2222/*"AutoDiggingDialog"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  p_fields->_AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&p_fields->_AutoDiggingDialogPrefab_k__BackingField,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_5335/*"DiggingConfirmDialog"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  p_fields->_DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&p_fields->_DiggingConfirmDialogPrefab_k__BackingField,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_5336/*"DiggingPointRewardDialog"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  p_fields->_DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&p_fields->_DiggingPointRewardDialogPrefab_k__BackingField,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_5337/*"DiggingRewardDialog"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  p_fields->_DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
  sub_B52920(
    (BattleServantConfConponent_o *)&p_fields->_DiggingRewardDialogPrefab_k__BackingField,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_5334/*"DiggingCompleteImagePrefab"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  p_fields->_DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v61;
  sub_B52920(
    (BattleServantConfConponent_o *)&p_fields->_DiggingCompleteImagePrefab_k__BackingField,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v17,
                                 (System_String_o *)StringLiteral_5338/*"DiggingSettings"*/,
                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_DiggingSettings___);
  p_fields->_Settings_k__BackingField = (struct DiggingSettings_o *)v68;
  sub_B52920((BattleServantConfConponent_o *)&p_fields->_Settings_k__BackingField, v68, v69, v70, v71, v72, v73, v74);
  v75 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)v7, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28376908(eventId, v75, 1, 0LL);
}


void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42B1FFD & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B1FFD = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28377088(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._rewardPrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AutoDiggingDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingCompleteImagePrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingPointRewardDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingRewardDialogPrefab_k__BackingField;
}


DiggingSettings_o *__fastcall DiggingAssetManager__get_Settings(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_blockPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._blockPrefab_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall DiggingAssetManager__get_rewardPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._rewardPrefab_k__BackingField;
}


void __fastcall DiggingAssetManager__set_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_Settings(
        DiggingAssetManager_o *this,
        DiggingSettings_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._Settings_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._blockPrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._rewardPrefab_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._rewardPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DiggingAssetManager___c__DisplayClass33_0___ctor(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingAssetManager___c__DisplayClass33_0___GetAssets_b__0(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}