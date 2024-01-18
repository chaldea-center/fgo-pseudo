void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_array *v12; // x20
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_4189417 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_6204/*"EventUI/Prefabs/80367"*/, v3);
    byte_4189417 = 1;
  }
  v4 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v12 = (struct System_String_array *)v4;
  v13 = StringLiteral_6204/*"EventUI/Prefabs/80367"*/;
  if ( StringLiteral_6204/*"EventUI/Prefabs/80367"*/ )
  {
    v13 = sub_B2C41C(StringLiteral_6204/*"EventUI/Prefabs/80367"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v22 = sub_B2C454(0LL);
      sub_B2C400(v22, 0LL);
    }
    v14 = (System_Int32_array **)StringLiteral_6204/*"EventUI/Prefabs/80367"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    v21 = sub_B2C460(v13);
    sub_B2C400(v21, 0LL);
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  AssetData_array *AssetStorage_30160412; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array *loadAssetNames; // x22
  AssetData_o *v31; // x22
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  DiggingAssetManager_Fields *p_fields; // x20
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
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Action_o *v89; // x20
  __int64 v90; // x0

  if ( (byte_4189415 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v8);
    sub_B2C35C(&AssetManager_TypeInfo, v9);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_B2C35C(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2828/*"BlockPrefab"*/, v13);
    sub_B2C35C(&StringLiteral_5296/*"DiggingRewardDialog"*/, v14);
    sub_B2C35C(&StringLiteral_5297/*"DiggingSettings"*/, v15);
    sub_B2C35C(&StringLiteral_5293/*"DiggingCompleteImagePrefab"*/, v16);
    sub_B2C35C(&StringLiteral_5295/*"DiggingPointRewardDialog"*/, v17);
    sub_B2C35C(&StringLiteral_5294/*"DiggingConfirmDialog"*/, v18);
    sub_B2C35C(&StringLiteral_11507/*"RewardPrefab"*/, v19);
    sub_B2C35C(&StringLiteral_2198/*"AutoDiggingDialog"*/, v20);
    byte_4189415 = 1;
  }
  v21 = sub_B2C42C(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  DiggingAssetManager___c__DisplayClass33_0___ctor((DiggingAssetManager___c__DisplayClass33_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)finishCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  loadAssetNames = this->fields.loadAssetNames;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_30160412 = AssetManager__getAssetStorage_30160412(loadAssetNames, 0LL);
  if ( !AssetStorage_30160412 )
    goto LABEL_14;
  if ( !AssetStorage_30160412->max_length )
  {
    v90 = sub_B2C460(AssetStorage_30160412);
    sub_B2C400(v90, 0LL);
  }
  v31 = AssetStorage_30160412->m_Items[0];
  if ( !v31 )
LABEL_14:
    sub_B2C434(AssetStorage_30160412, v23);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage_30160412->m_Items[0],
                                                                        (System_String_o *)StringLiteral_2828/*"BlockPrefab"*/,
                                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields._blockPrefab_k__BackingField = Object_WarBoardWaitTimeSetting;
  p_fields = &this->fields;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_fields,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_11507/*"RewardPrefab"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields->_rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&p_fields->_rewardPrefab_k__BackingField,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_2198/*"AutoDiggingDialog"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields->_AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v47;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&p_fields->_AutoDiggingDialogPrefab_k__BackingField,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_5294/*"DiggingConfirmDialog"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields->_DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&p_fields->_DiggingConfirmDialogPrefab_k__BackingField,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_5295/*"DiggingPointRewardDialog"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields->_DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v61;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&p_fields->_DiggingPointRewardDialogPrefab_k__BackingField,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_5296/*"DiggingRewardDialog"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields->_DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v68;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&p_fields->_DiggingRewardDialogPrefab_k__BackingField,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_5293/*"DiggingCompleteImagePrefab"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields->_DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v75;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&p_fields->_DiggingCompleteImagePrefab_k__BackingField,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v31,
                                 (System_String_o *)StringLiteral_5297/*"DiggingSettings"*/,
                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_DiggingSettings___);
  p_fields->_Settings_k__BackingField = (struct DiggingSettings_o *)v82;
  sub_B2C2F8((BattleServantConfConponent_o *)&p_fields->_Settings_k__BackingField, v82, v83, v84, v85, v86, v87, v88);
  v89 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v89,
    (Il2CppObject *)v21,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(eventId, v89, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4189416 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4189416 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28451204(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._rewardPrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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