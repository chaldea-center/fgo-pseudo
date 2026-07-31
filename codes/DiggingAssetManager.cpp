void DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_array *v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5932946 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_6522/*"EventUI/Prefabs/80367"*/);
    byte_5932946 = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 1);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_21FFED4(v3);
  v12 = StringLiteral_6522/*"EventUI/Prefabs/80367"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6522/*"EventUI/Prefabs/80367"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetNames,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingAssetManager__GetAssets(
        DiggingAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  AssetData_array *AssetStorage_47473732; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_array *loadAssetNames; // x22
  AssetData_o *v19; // x22
  Il2CppObject *Object_object__58323140; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  Il2CppObject *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *v69; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_Action_o *v76; // x20
  __int64 v77; // x1
  __int64 v78; // x2

  if ( (byte_5932944 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_DiggingSettings___);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__);
    sub_21FFC50(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3308/*"BlockPrefab"*/);
    sub_21FFC50(&StringLiteral_5454/*"DiggingRewardDialog"*/);
    sub_21FFC50(&StringLiteral_5455/*"DiggingSettings"*/);
    sub_21FFC50(&StringLiteral_5451/*"DiggingCompleteImagePrefab"*/);
    sub_21FFC50(&StringLiteral_5453/*"DiggingPointRewardDialog"*/);
    sub_21FFC50(&StringLiteral_5452/*"DiggingConfirmDialog"*/);
    sub_21FFC50(&StringLiteral_11881/*"RewardPrefab"*/);
    sub_21FFC50(&StringLiteral_2598/*"AutoDiggingDialog"*/);
    byte_5932944 = 1;
  }
  v7 = sub_21FFEBC(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)finishCallback, v10, v11, v12, v13, v14, v15);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16, v17);
  AssetStorage_47473732 = AssetManager__getAssetStorage_47473732(loadAssetNames, 0);
  if ( !AssetStorage_47473732 )
    goto LABEL_12;
  if ( !LODWORD(AssetStorage_47473732->max_length) )
    sub_21FFED4(AssetStorage_47473732);
  v19 = AssetStorage_47473732->m_Items[0];
  if ( !v19 )
LABEL_12:
    sub_21FFECC(AssetStorage_47473732, v9);
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              AssetStorage_47473732->m_Items[0],
                              (System_String_o *)StringLiteral_3308/*"BlockPrefab"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__58323140;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)Object_object__58323140,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_11881/*"RewardPrefab"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rewardPrefab_k__BackingField,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_2598/*"AutoDiggingDialog"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v34;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_5452/*"DiggingConfirmDialog"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v41;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_5453/*"DiggingPointRewardDialog"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v48;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_5454/*"DiggingRewardDialog"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_5451/*"DiggingCompleteImagePrefab"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v62;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v69 = AssetData__GetObject_object__58323140(
          v19,
          (System_String_o *)StringLiteral_5455/*"DiggingSettings"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v69;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v76, (Il2CppObject *)v7, Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v77, v78);
  AtlasManager__LoadEventUI_47538036(eventId, v76, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_5932945 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5932945 = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
  AtlasManager__ReleaseEventUI_47538200(eventId, 0);
  this->fields._blockPrefab_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v5, v6, v7, v8, v9, v10);
  this->fields._rewardPrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rewardPrefab_k__BackingField,
    0,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    0,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


UnityEngine_GameObject_o *DiggingAssetManager__get_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AutoDiggingDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingCompleteImagePrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingConfirmDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingPointRewardDialogPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._DiggingRewardDialogPrefab_k__BackingField;
}


DiggingSettings_o *DiggingAssetManager__get_Settings(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._Settings_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_blockPrefab(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._blockPrefab_k__BackingField;
}


UnityEngine_GameObject_o *DiggingAssetManager__get_rewardPrefab(DiggingAssetManager_o *this, const MethodInfo *method)
{
  return this->fields._rewardPrefab_k__BackingField;
}


void DiggingAssetManager__set_AutoDiggingDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_DiggingCompleteImagePrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_DiggingConfirmDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_DiggingPointRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_DiggingRewardDialogPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_Settings(DiggingAssetManager_o *this, DiggingSettings_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Settings_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Settings_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_blockPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._blockPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._rewardPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rewardPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DiggingAssetManager___c__DisplayClass33_0___ctor(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingAssetManager___c__DisplayClass33_0___GetAssets_b__0(
        DiggingAssetManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}