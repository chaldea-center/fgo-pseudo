void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42EA95C & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6283/*"EventUI/Prefabs/80367"*/, v5, v6, v7);
    byte_42EA95C = 1;
  }
  v8 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v16 = (struct System_String_array *)v8;
  v17 = StringLiteral_6283/*"EventUI/Prefabs/80367"*/;
  if ( StringLiteral_6283/*"EventUI/Prefabs/80367"*/ )
  {
    v17 = sub_B5D684(StringLiteral_6283/*"EventUI/Prefabs/80367"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v26 = sub_B5D6BC(0LL);
      sub_B5D668(v26, 0LL);
    }
    v18 = (System_Int32_array **)StringLiteral_6283/*"EventUI/Prefabs/80367"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
  {
    v25 = sub_B5D6C8(v17);
    sub_B5D668(v25, 0LL);
  }
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  this->fields.loadAssetNames = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadAssetNames,
    (System_Int32_array **)v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  __int64 v49; // x21
  AssetData_array *AssetStorage_30665292; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array *loadAssetNames; // x22
  AssetData_o *v59; // x22
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  DiggingAssetManager_Fields *p_fields; // x20
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
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Action_o *v117; // x20
  __int64 v118; // x0

  if ( (byte_42EA95A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_AssetData_GetObject_DiggingSettings___, v7, v8, v9);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v10, v11, v12);
    sub_B5D5C4(&AssetManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&AtlasManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v19, v20, v21);
    sub_B5D5C4(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2884/*"BlockPrefab"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_5372/*"DiggingRewardDialog"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_5373/*"DiggingSettings"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_5369/*"DiggingCompleteImagePrefab"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_5371/*"DiggingPointRewardDialog"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_5370/*"DiggingConfirmDialog"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_11640/*"RewardPrefab"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_2227/*"AutoDiggingDialog"*/, v46, v47, v48);
    byte_42EA95A = 1;
  }
  v49 = sub_B5D694(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  DiggingAssetManager___c__DisplayClass33_0___ctor((DiggingAssetManager___c__DisplayClass33_0_o *)v49, 0LL);
  if ( !v49 )
    goto LABEL_14;
  *(_QWORD *)(v49 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v49 + 16),
    (System_Int32_array **)finishCallback,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  loadAssetNames = this->fields.loadAssetNames;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_30665292 = AssetManager__getAssetStorage_30665292(loadAssetNames, 0LL);
  if ( !AssetStorage_30665292 )
    goto LABEL_14;
  if ( !AssetStorage_30665292->max_length )
  {
    v118 = sub_B5D6C8(AssetStorage_30665292);
    sub_B5D668(v118, 0LL);
  }
  v59 = AssetStorage_30665292->m_Items[0];
  if ( !v59 )
LABEL_14:
    sub_B5D69C(AssetStorage_30665292, v51);
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage_30665292->m_Items[0],
                                                                        (System_String_o *)StringLiteral_2884/*"BlockPrefab"*/,
                                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields._blockPrefab_k__BackingField = Object_WarBoardWaitTimeSetting;
  p_fields = &this->fields;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_fields,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v59,
                                 (System_String_o *)StringLiteral_11640/*"RewardPrefab"*/,
                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields->_rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_rewardPrefab_k__BackingField,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v59,
                                 (System_String_o *)StringLiteral_2227/*"AutoDiggingDialog"*/,
                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields->_AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_AutoDiggingDialogPrefab_k__BackingField,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v59,
                                 (System_String_o *)StringLiteral_5370/*"DiggingConfirmDialog"*/,
                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields->_DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v82;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_DiggingConfirmDialogPrefab_k__BackingField,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v59,
                                 (System_String_o *)StringLiteral_5371/*"DiggingPointRewardDialog"*/,
                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields->_DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v89;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_DiggingPointRewardDialogPrefab_k__BackingField,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 v59,
                                 (System_String_o *)StringLiteral_5372/*"DiggingRewardDialog"*/,
                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields->_DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v96;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_DiggingRewardDialogPrefab_k__BackingField,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v103 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  v59,
                                  (System_String_o *)StringLiteral_5369/*"DiggingCompleteImagePrefab"*/,
                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields->_DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v103;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_DiggingCompleteImagePrefab_k__BackingField,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v110 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  v59,
                                  (System_String_o *)StringLiteral_5373/*"DiggingSettings"*/,
                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_DiggingSettings___);
  p_fields->_Settings_k__BackingField = (struct DiggingSettings_o *)v110;
  sub_B5D560(
    (BattleServantConfConponent_o *)&p_fields->_Settings_k__BackingField,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v117 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v117,
    (Il2CppObject *)v49,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(eventId, v117, 1, 0LL);
}


void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42EA95B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42EA95B = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_31190280(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._rewardPrefab_k__BackingField,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0LL,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0LL,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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