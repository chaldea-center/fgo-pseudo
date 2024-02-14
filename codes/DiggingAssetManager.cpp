void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
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

  if ( (byte_4216274 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6221/*"EventUI/Prefabs/80367"*/, v3);
    byte_4216274 = 1;
  }
  v4 = sub_B0D8BC(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B0D97C(0LL);
  v11 = (struct System_String_array *)v4;
  v12 = StringLiteral_6221/*"EventUI/Prefabs/80367"*/;
  if ( StringLiteral_6221/*"EventUI/Prefabs/80367"*/ )
  {
    v12 = sub_B0D964(StringLiteral_6221/*"EventUI/Prefabs/80367"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B0D99C(0LL);
      sub_B0D948(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6221/*"EventUI/Prefabs/80367"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B0D9A8(v12);
    sub_B0D948(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B0D840(
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
  AssetData_array *AssetStorage_29524128; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *loadAssetNames; // x22
  AssetData_o *v30; // x22
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  DiggingAssetManager_Fields *p_fields; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x1
  __int64 v89; // x2
  System_Action_o *v90; // x20
  __int64 v91; // x0

  if ( (byte_4216272 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v8);
    sub_B0D8A4(&AssetManager_TypeInfo, v9);
    sub_B0D8A4(&AtlasManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_B0D8A4(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_2839/*"BlockPrefab"*/, v13);
    sub_B0D8A4(&StringLiteral_5312/*"DiggingRewardDialog"*/, v14);
    sub_B0D8A4(&StringLiteral_5313/*"DiggingSettings"*/, v15);
    sub_B0D8A4(&StringLiteral_5309/*"DiggingCompleteImagePrefab"*/, v16);
    sub_B0D8A4(&StringLiteral_5311/*"DiggingPointRewardDialog"*/, v17);
    sub_B0D8A4(&StringLiteral_5310/*"DiggingConfirmDialog"*/, v18);
    sub_B0D8A4(&StringLiteral_11534/*"RewardPrefab"*/, v19);
    sub_B0D8A4(&StringLiteral_2208/*"AutoDiggingDialog"*/, v20);
    byte_4216272 = 1;
  }
  v21 = sub_B0D974(DiggingAssetManager___c__DisplayClass33_0_TypeInfo, *(_QWORD *)&eventId, finishCallback);
  DiggingAssetManager___c__DisplayClass33_0___ctor((DiggingAssetManager___c__DisplayClass33_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)finishCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  loadAssetNames = this->fields.loadAssetNames;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_29524128 = AssetManager__getAssetStorage_29524128(loadAssetNames, 0LL);
  if ( !AssetStorage_29524128 )
    goto LABEL_14;
  if ( !AssetStorage_29524128->max_length )
  {
    v91 = sub_B0D9A8(AssetStorage_29524128);
    sub_B0D948(v91, 0LL);
  }
  v30 = AssetStorage_29524128->m_Items[0];
  if ( !v30 )
LABEL_14:
    sub_B0D97C(AssetStorage_29524128);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage_29524128->m_Items[0],
                                                                        (System_String_o *)StringLiteral_2839/*"BlockPrefab"*/,
                                                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  this->fields._blockPrefab_k__BackingField = Object_WarBoardWaitTimeSetting;
  p_fields = &this->fields;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_fields,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_11534/*"RewardPrefab"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  p_fields->_rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v39;
  sub_B0D840(
    (BattleServantConfConponent_o *)&p_fields->_rewardPrefab_k__BackingField,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_2208/*"AutoDiggingDialog"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  p_fields->_AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v46;
  sub_B0D840(
    (BattleServantConfConponent_o *)&p_fields->_AutoDiggingDialogPrefab_k__BackingField,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_5310/*"DiggingConfirmDialog"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  p_fields->_DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v53;
  sub_B0D840(
    (BattleServantConfConponent_o *)&p_fields->_DiggingConfirmDialogPrefab_k__BackingField,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_5311/*"DiggingPointRewardDialog"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  p_fields->_DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v60;
  sub_B0D840(
    (BattleServantConfConponent_o *)&p_fields->_DiggingPointRewardDialogPrefab_k__BackingField,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_5312/*"DiggingRewardDialog"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  p_fields->_DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v67;
  sub_B0D840(
    (BattleServantConfConponent_o *)&p_fields->_DiggingRewardDialogPrefab_k__BackingField,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_5309/*"DiggingCompleteImagePrefab"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  p_fields->_DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v74;
  sub_B0D840(
    (BattleServantConfConponent_o *)&p_fields->_DiggingCompleteImagePrefab_k__BackingField,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v30,
                                 (System_String_o *)StringLiteral_5313/*"DiggingSettings"*/,
                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_DiggingSettings___);
  p_fields->_Settings_k__BackingField = (struct DiggingSettings_o *)v81;
  sub_B0D840((BattleServantConfConponent_o *)&p_fields->_Settings_k__BackingField, v81, v82, v83, v84, v85, v86, v87);
  v90 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v88, v89);
  System_Action___ctor(
    v90,
    (Il2CppObject *)v21,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_27921540(eventId, v90, 1, 0LL);
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

  if ( (byte_4216273 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4216273 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_27921720(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._rewardPrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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