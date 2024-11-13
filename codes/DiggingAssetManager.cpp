void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_array *v14; // x20
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1A3D5 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6350/*"EventUI/Prefabs/80367"*/, v4, v5);
    byte_4B1A3D5 = 1;
  }
  v6 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v14 = (struct System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1BCAA44(v6, v7);
  v15 = StringLiteral_6350/*"EventUI/Prefabs/80367"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_6350/*"EventUI/Prefabs/80367"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13);
  this->fields.loadAssetNames = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v14, v16, v17, v18, v19, v20, v21);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x21
  AssetData_array *AssetStorage_38513712; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  System_String_array *loadAssetNames; // x22
  AssetData_o *v46; // x22
  Il2CppObject *Object_object__49237568; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  Il2CppObject *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppObject *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  Il2CppObject *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  Il2CppObject *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Action_o *v106; // x20
  __int64 v107; // x1

  if ( (byte_4B1A3D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, finishCallback);
    sub_1BCA7E0(&Method_AssetData_GetObject_DiggingSettings___, v7, v8);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v9, v10);
    sub_1BCA7E0(&AssetManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v15, v16);
    sub_1BCA7E0(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3325/*"BlockPrefab"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_5385/*"DiggingRewardDialog"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_5386/*"DiggingSettings"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5382/*"DiggingCompleteImagePrefab"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_5384/*"DiggingPointRewardDialog"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5383/*"DiggingConfirmDialog"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11513/*"RewardPrefab"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2630/*"AutoDiggingDialog"*/, v33, v34);
    byte_4B1A3D3 = 1;
  }
  v35 = sub_1BCAA2C(DiggingAssetManager___c__DisplayClass33_0_TypeInfo, *(_QWORD *)&eventId, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_12;
  *(_QWORD *)(v35 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)finishCallback, v38, v39, v40, v41, v42, v43);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v44);
  AssetStorage_38513712 = AssetManager__getAssetStorage_38513712(loadAssetNames, 0LL);
  if ( !AssetStorage_38513712 )
    goto LABEL_12;
  if ( !AssetStorage_38513712->max_length )
    sub_1BCAA44(AssetStorage_38513712, v37);
  v46 = AssetStorage_38513712->m_Items[0];
  if ( !v46 )
LABEL_12:
    sub_1BCAA3C(AssetStorage_38513712, v37);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              AssetStorage_38513712->m_Items[0],
                              (System_String_o *)StringLiteral_3325/*"BlockPrefab"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)Object_object__49237568,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_11513/*"RewardPrefab"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v54;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._rewardPrefab_k__BackingField,
    (int64_t)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_2630/*"AutoDiggingDialog"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v61;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int64_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_5383/*"DiggingConfirmDialog"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v68;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int64_t)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_5384/*"DiggingPointRewardDialog"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v75;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int64_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_5385/*"DiggingRewardDialog"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v82;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int64_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_5382/*"DiggingCompleteImagePrefab"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v89;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int64_t)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = AssetData__GetObject_object__49237568(
          v46,
          (System_String_o *)StringLiteral_5386/*"DiggingSettings"*/,
          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v96;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v106 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v103, v104, v105);
  System_Action___ctor(
    v106,
    (Il2CppObject *)v35,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v107);
  AtlasManager__LoadEventUI_38574292(eventId, v106, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingAssetManager__Release(DiggingAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B1A3D4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B1A3D4 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId);
  AtlasManager__ReleaseEventUI_38574456(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._rewardPrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AutoDiggingDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DiggingCompleteImagePrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DiggingConfirmDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DiggingRewardDialogPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Settings_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._blockPrefab_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall DiggingAssetManager__set_rewardPrefab(
        DiggingAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._rewardPrefab_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._rewardPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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