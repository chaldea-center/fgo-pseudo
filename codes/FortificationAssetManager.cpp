void __fastcall FortificationAssetManager___ctor(FortificationAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_4C26052 & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, method);
    sub_1C3B764(&StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v3);
    byte_4C26052 = 1;
  }
  v4 = sub_1C3B80C(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1C3B9C0(0LL, v5);
  v12 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1C3B9C8(v4, v5);
  v13 = StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAssetManager__AssertionCheck(FortificationAssetManager_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAssetManager__GetAssets(
        FortificationAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  System_String_o *v28; // x20
  AssetLoader_LoadEndDataHandler_o *v29; // x21

  if ( (byte_4C2604F & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1C3B764(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__, v8);
    sub_1C3B764(&FortificationAssetManager___c__DisplayClass73_0_TypeInfo, v9);
    byte_4C2604F = 1;
  }
  v10 = sub_1C3B9B0(FortificationAssetManager___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)finishCallback, v19, v20, v21, v22, v23, v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1C3B9C0(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1C3B9C8(v11, v12);
  v26 = loadAssetNames->m_Items[0];
  v27 = System_Int32__ToString((int)v10 + 24, 0LL);
  v28 = System_String__Concat_63368612(v26, v27, 0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v10,
    Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v28, v29, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__GetOrganizationBgTex(
        FortificationAssetManager_o *this,
        int32_t eventId,
        int32_t slot,
        bool isSlotBg,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  UnityEngine_Texture2D_o **p_organizationSlotBgTex2_k__BackingField; // x8

  if ( (byte_4C26050 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRewardBgMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C26050 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRewardBgMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v11);
  }
  switch ( EventRewardBgMaster__GetEventRewardSlotBgId((EventRewardBgMaster_o *)Instance, eventId, slot, 0LL) )
  {
    case 8040002:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex2_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex2_k__BackingField;
      break;
    case 8040003:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex3_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex3_k__BackingField;
      break;
    case 8040004:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex4_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex4_k__BackingField;
      break;
    case 8040005:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex5_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex5_k__BackingField;
      break;
    default:
      if ( isSlotBg )
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationSlotBgTex_k__BackingField;
      else
        p_organizationSlotBgTex2_k__BackingField = &this->fields._organizationBgTex_k__BackingField;
      break;
  }
  return *p_organizationSlotBgTex2_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAssetManager__Release(
        FortificationAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
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
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7

  if ( (byte_4C26051 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C26051 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_39282512(eventId, 0LL);
  this->fields._fortificationCamera_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._autoFortificationButton_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._autoFortificationButton_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._organizationPanel_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationPanel_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._organizationBgTex_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._organizationBgTex2_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex2_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._organizationBgTex3_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex3_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._organizationBgTex4_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex4_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._organizationBgTex5_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex5_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._organizationSlotBgTex_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._organizationSlotBgTex2_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._organizationSlotBgTex3_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._organizationSlotBgTex4_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._organizationSlotBgTex5_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._eventFortificationWorkObj_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._eventFortificationWorkMiniObj_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._eventFortificationListViewPanel_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._fortificationConfirmDialog_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._fortificationAutomaticDialog_k__BackingField = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_autoFortificationButton(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._autoFortificationButton_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationListViewPanel_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationWorkMiniObj_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._eventFortificationWorkObj_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationAutomaticDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_fortificationCamera(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationCamera_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._fortificationConfirmDialog_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex2(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex2_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex3(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex3_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex4(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex4_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationBgTex5(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationBgTex5_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall FortificationAssetManager__get_organizationPanel(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationPanel_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex2_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex3_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex4_k__BackingField;
}


UnityEngine_Texture2D_o *__fastcall FortificationAssetManager__get_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._organizationSlotBgTex5_k__BackingField;
}


void __fastcall FortificationAssetManager__set_autoFortificationButton(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._autoFortificationButton_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._autoFortificationButton_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_eventFortificationListViewPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._eventFortificationListViewPanel_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._eventFortificationListViewPanel_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkMiniObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._eventFortificationWorkMiniObj_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_eventFortificationWorkObj(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._eventFortificationWorkObj_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._eventFortificationWorkObj_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_fortificationAutomaticDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._fortificationAutomaticDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._fortificationAutomaticDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_fortificationCamera(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._fortificationCamera_k__BackingField = value;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall FortificationAssetManager__set_fortificationConfirmDialog(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._fortificationConfirmDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._fortificationConfirmDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationBgTex_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationBgTex2_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex2_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationBgTex3_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex3_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationBgTex4_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex4_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationBgTex5_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationBgTex5_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationPanel(
        FortificationAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationPanel_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationPanel_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationSlotBgTex_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex2(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationSlotBgTex2_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex2_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex3(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationSlotBgTex3_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex3_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex4(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationSlotBgTex4_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex4_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager__set_organizationSlotBgTex5(
        FortificationAssetManager_o *this,
        UnityEngine_Texture2D_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._organizationSlotBgTex5_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._organizationSlotBgTex5_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FortificationAssetManager___c__DisplayClass73_0___ctor(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAssetManager___c__DisplayClass73_0___GetAssets_b__0(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  FortificationAssetManager___c__DisplayClass73_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  struct FortificationAssetManager_o *_4__this; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct FortificationAssetManager_o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct FortificationAssetManager_o *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct FortificationAssetManager_o *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct FortificationAssetManager_o *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct FortificationAssetManager_o *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct FortificationAssetManager_o *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct FortificationAssetManager_o *v97; // x21
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct FortificationAssetManager_o *v109; // x21
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct FortificationAssetManager_o *v121; // x21
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct FortificationAssetManager_o *v133; // x21
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x0
  System_String_o *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct FortificationAssetManager_o *v145; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject *v149; // x0
  System_String_o *v150; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct FortificationAssetManager_o *v157; // x21
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  Il2CppObject *v161; // x0
  System_String_o *v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  struct FortificationAssetManager_o *v169; // x21
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  struct FortificationAssetManager_o *v176; // x21
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  struct FortificationAssetManager_o *v183; // x21
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  struct FortificationAssetManager_o *v190; // x21
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  struct FortificationAssetManager_o *v197; // x21
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  System_Action_o *_9__1; // x21
  int32_t v205; // w20
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int32_t v212; // [xsp+8h] [xbp-68h] BYREF
  int32_t v213; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v214; // [xsp+10h] [xbp-60h] BYREF
  int32_t v215; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v216; // [xsp+18h] [xbp-58h] BYREF
  int32_t v217; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v218; // [xsp+20h] [xbp-50h] BYREF
  int32_t v219; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v220; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+2Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C26053 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, assetData);
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, v5);
    sub_1C3B764(&Method_AssetData_GetObject_Texture2D____77902880, v6);
    sub_1C3B764(&AtlasManager_TypeInfo, v7);
    sub_1C3B764(&int_TypeInfo, v8);
    sub_1C3B764(&Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__, v9);
    sub_1C3B764(&StringLiteral_19523/*"gsw"*/, v10);
    sub_1C3B764(&StringLiteral_19531/*"gutsText"*/, v11);
    sub_1C3B764(&StringLiteral_19526/*"gu"*/, v12);
    sub_1C3B764(&StringLiteral_19524/*"gsw-FR"*/, v13);
    sub_1C3B764(&StringLiteral_19525/*"gt"*/, v14);
    sub_1C3B764(&StringLiteral_6341/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v15);
    sub_1C3B764(&StringLiteral_6971/*"GreaterThanOrEqual"*/, v16);
    sub_1C3B764(&StringLiteral_19529/*"guid"*/, v17);
    sub_1C3B764(&StringLiteral_6972/*"Greek"*/, v18);
    sub_1C3B764(&StringLiteral_19530/*"gutsIconId"*/, v19);
    sub_1C3B764(&StringLiteral_19528/*"guardEffectId"*/, v20);
    sub_1C3B764(&StringLiteral_19532/*"gutsTextColor"*/, v21);
    sub_1C3B764(&StringLiteral_6967/*"Graphics API "*/, v22);
    sub_1C3B764(&StringLiteral_6965/*"GradientSettings "*/, v23);
    sub_1C3B764(&StringLiteral_19527/*"gu-IN"*/, v24);
    sub_1C3B764(&StringLiteral_6966/*"GrailFragments"*/, v25);
    sub_1C3B764(&StringLiteral_6969/*"GrayText"*/, v26);
    this = (FortificationAssetManager___c__DisplayClass73_0_o *)sub_1C3B764(&StringLiteral_2636/*"B4042"*/, v27);
    byte_4C26053 = 1;
  }
  if ( !assetData )
    goto LABEL_28;
  _4__this = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6966/*"GrailFragments"*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !_4__this )
    goto LABEL_28;
  _4__this->fields._fortificationCamera_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields, (int64_t)this, v29, v30, v31, v32, v33, v34);
  v35 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_2636/*"B4042"*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v35 )
    goto LABEL_28;
  v35->fields._autoFortificationButton_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v35->fields._autoFortificationButton_k__BackingField,
    (int64_t)this,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6969/*"GrayText"*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v42 )
    goto LABEL_28;
  v42->fields._organizationPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v42->fields._organizationPanel_k__BackingField,
    (int64_t)this,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = v4->fields.__4__this;
  eventId = v4->fields.eventId;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v50, v51, v52);
  v54 = System_String__Format((System_String_o *)StringLiteral_19528/*"guardEffectId"*/, v53, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v54,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v49 )
    goto LABEL_28;
  v49->fields._organizationBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v49->fields._organizationBgTex_k__BackingField,
    (int64_t)this,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = v4->fields.__4__this;
  v220 = v4->fields.eventId;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v220, v62, v63, v64);
  v66 = System_String__Format((System_String_o *)StringLiteral_19529/*"guid"*/, v65, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v66,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v61 )
    goto LABEL_28;
  v61->fields._organizationBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v61->fields._organizationBgTex2_k__BackingField,
    (int64_t)this,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = v4->fields.__4__this;
  v219 = v4->fields.eventId;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219, v74, v75, v76);
  v78 = System_String__Format((System_String_o *)StringLiteral_19530/*"gutsIconId"*/, v77, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v78,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v73 )
    goto LABEL_28;
  v73->fields._organizationBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v73->fields._organizationBgTex3_k__BackingField,
    (int64_t)this,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v85 = v4->fields.__4__this;
  v218 = v4->fields.eventId;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v86, v87, v88);
  v90 = System_String__Format((System_String_o *)StringLiteral_19531/*"gutsText"*/, v89, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v90,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v85 )
    goto LABEL_28;
  v85->fields._organizationBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v85->fields._organizationBgTex4_k__BackingField,
    (int64_t)this,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = v4->fields.__4__this;
  v217 = v4->fields.eventId;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v217, v98, v99, v100);
  v102 = System_String__Format((System_String_o *)StringLiteral_19532/*"gutsTextColor"*/, v101, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v102,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v97 )
    goto LABEL_28;
  v97->fields._organizationBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v97->fields._organizationBgTex5_k__BackingField,
    (int64_t)this,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = v4->fields.__4__this;
  v216 = v4->fields.eventId;
  v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v216, v110, v111, v112);
  v114 = System_String__Format((System_String_o *)StringLiteral_19523/*"gsw"*/, v113, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v114,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v109 )
    goto LABEL_28;
  v109->fields._organizationSlotBgTex_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v109->fields._organizationSlotBgTex_k__BackingField,
    (int64_t)this,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = v4->fields.__4__this;
  v215 = v4->fields.eventId;
  v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v215, v122, v123, v124);
  v126 = System_String__Format((System_String_o *)StringLiteral_19524/*"gsw-FR"*/, v125, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v126,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v121 )
    goto LABEL_28;
  v121->fields._organizationSlotBgTex2_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v121->fields._organizationSlotBgTex2_k__BackingField,
    (int64_t)this,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = v4->fields.__4__this;
  v214 = v4->fields.eventId;
  v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v214, v134, v135, v136);
  v138 = System_String__Format((System_String_o *)StringLiteral_19525/*"gt"*/, v137, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v138,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v133 )
    goto LABEL_28;
  v133->fields._organizationSlotBgTex3_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v133->fields._organizationSlotBgTex3_k__BackingField,
    (int64_t)this,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v145 = v4->fields.__4__this;
  v213 = v4->fields.eventId;
  v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v213, v146, v147, v148);
  v150 = System_String__Format((System_String_o *)StringLiteral_19526/*"gu"*/, v149, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v150,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v145 )
    goto LABEL_28;
  v145->fields._organizationSlotBgTex4_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v145->fields._organizationSlotBgTex4_k__BackingField,
    (int64_t)this,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  v157 = v4->fields.__4__this;
  v212 = v4->fields.eventId;
  v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v212, v158, v159, v160);
  v162 = System_String__Format((System_String_o *)StringLiteral_19527/*"gu-IN"*/, v161, 0LL);
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                v162,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_Texture2D____77902880);
  if ( !v157 )
    goto LABEL_28;
  v157->fields._organizationSlotBgTex5_k__BackingField = (struct UnityEngine_Texture2D_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v157->fields._organizationSlotBgTex5_k__BackingField,
    (int64_t)this,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v169 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6971/*"GreaterThanOrEqual"*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v169 )
    goto LABEL_28;
  v169->fields._eventFortificationWorkObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v169->fields._eventFortificationWorkObj_k__BackingField,
    (int64_t)this,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v176 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6972/*"Greek"*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v176 )
    goto LABEL_28;
  v176->fields._eventFortificationWorkMiniObj_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v176->fields._eventFortificationWorkMiniObj_k__BackingField,
    (int64_t)this,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  v183 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6341/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v183 )
    goto LABEL_28;
  v183->fields._eventFortificationListViewPanel_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v183->fields._eventFortificationListViewPanel_k__BackingField,
    (int64_t)this,
    v184,
    v185,
    v186,
    v187,
    v188,
    v189);
  v190 = v4->fields.__4__this;
  this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                assetData,
                                                                (System_String_o *)StringLiteral_6967/*"Graphics API "*/,
                                                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !v190
    || (v190->fields._fortificationConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&v190->fields._fortificationConfirmDialog_k__BackingField,
          (int64_t)this,
          v191,
          v192,
          v193,
          v194,
          v195,
          v196),
        v197 = v4->fields.__4__this,
        this = (FortificationAssetManager___c__DisplayClass73_0_o *)AssetData__GetObject_object__50142412(
                                                                      assetData,
                                                                      (System_String_o *)StringLiteral_6965/*"GradientSettings "*/,
                                                                      (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856),
        !v197)
    || (v197->fields._fortificationAutomaticDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&v197->fields._fortificationAutomaticDialog_k__BackingField,
          (int64_t)this,
          v198,
          v199,
          v200,
          v201,
          v202,
          v203),
        !v4->fields.__4__this) )
  {
LABEL_28:
    sub_1C3B9C0(this, assetData);
  }
  _9__1 = v4->fields.__9__1;
  v205 = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_FortificationAssetManager___c__DisplayClass73_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v206, v207, v208, v209, v210, v211);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39282348(v205, _9__1, 1, 0LL);
}


void __fastcall FortificationAssetManager___c__DisplayClass73_0___GetAssets_b__1(
        FortificationAssetManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}