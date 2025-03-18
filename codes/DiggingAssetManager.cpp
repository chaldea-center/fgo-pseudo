void __fastcall DiggingAssetManager___ctor(DiggingAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_String_array *v12; // x20
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C262FC & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, method);
    sub_1C3B764(&StringLiteral_6392/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, v3);
    byte_4C262FC = 1;
  }
  v4 = sub_1C3B80C(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1C3B9C0(0LL, v5);
  v12 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1C3B9C8(v4, v5);
  v13 = StringLiteral_6392/*"FORTUNE_BONUS_RESULT_NO_NAME"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6392/*"FORTUNE_BONUS_RESULT_NO_NAME"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v12, v14, v15, v16, v17, v18, v19);
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
  AssetData_array *AssetStorage_39221112; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_array *loadAssetNames; // x22
  AssetData_o *v31; // x22
  Il2CppObject *Object_object__50142412; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppObject *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  Il2CppObject *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Action_o *v88; // x20

  if ( (byte_4C262FA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_AssetData_GetObject_DiggingSettings___, v7);
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, v8);
    sub_1C3B764(&AssetManager_TypeInfo, v9);
    sub_1C3B764(&AtlasManager_TypeInfo, v10);
    sub_1C3B764(&Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__, v11);
    sub_1C3B764(&DiggingAssetManager___c__DisplayClass33_0_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_3336/*"CHAPTER_CLEAR"*/, v13);
    sub_1C3B764(&StringLiteral_5411/*"ETag"*/, v14);
    sub_1C3B764(&StringLiteral_5412/*"EVENT: "*/, v15);
    sub_1C3B764(&StringLiteral_5408/*"ERROR: Cannot Match both Vertical & Horizontal."*/, v16);
    sub_1C3B764(&StringLiteral_5410/*"ETC"*/, v17);
    sub_1C3B764(&StringLiteral_5409/*"ESDH"*/, v18);
    sub_1C3B764(&StringLiteral_11610/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v19);
    sub_1C3B764(&StringLiteral_2635/*"B4041"*/, v20);
    byte_4C262FA = 1;
  }
  v21 = sub_1C3B9B0(DiggingAssetManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  *(_QWORD *)(v21 + 16) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)finishCallback, v24, v25, v26, v27, v28, v29);
  loadAssetNames = this->fields.loadAssetNames;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_39221112 = AssetManager__getAssetStorage_39221112(loadAssetNames, 0LL);
  if ( !AssetStorage_39221112 )
    goto LABEL_12;
  if ( !AssetStorage_39221112->max_length )
    sub_1C3B9C8(AssetStorage_39221112, v23);
  v31 = AssetStorage_39221112->m_Items[0];
  if ( !v31 )
LABEL_12:
    sub_1C3B9C0(AssetStorage_39221112, v23);
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              AssetStorage_39221112->m_Items[0],
                              (System_String_o *)StringLiteral_3336/*"CHAPTER_CLEAR"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._blockPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)Object_object__50142412;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)Object_object__50142412,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_11610/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._rewardPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v39;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._rewardPrefab_k__BackingField,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_2635/*"B4041"*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v46;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_5409/*"ESDH"*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v53;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    (int64_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_5410/*"ETC"*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v60;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    (int64_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_5411/*"ETag"*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v67;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_5408/*"ERROR: Cannot Match both Vertical & Horizontal."*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v74;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingCompleteImagePrefab_k__BackingField,
    (int64_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = AssetData__GetObject_object__50142412(
          v31,
          (System_String_o *)StringLiteral_5412/*"EVENT: "*/,
          (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_DiggingSettings___);
  this->fields._Settings_k__BackingField = (struct DiggingSettings_o *)v81;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Settings_k__BackingField,
    (int64_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v88,
    (Il2CppObject *)v21,
    Method_DiggingAssetManager___c__DisplayClass33_0__GetAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39282348(eventId, v88, 1, 0LL);
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

  if ( (byte_4C262FB & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C262FB = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39282512(eventId, 0LL);
  this->fields._blockPrefab_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._rewardPrefab_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._rewardPrefab_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._AutoDiggingDialogPrefab_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._AutoDiggingDialogPrefab_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._DiggingConfirmDialogPrefab_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingConfirmDialogPrefab_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._DiggingPointRewardDialogPrefab_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingPointRewardDialogPrefab_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._DiggingRewardDialogPrefab_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DiggingRewardDialogPrefab_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._DiggingCompleteImagePrefab_k__BackingField = 0LL;
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C3B708(
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