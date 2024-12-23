void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_4B6AB0A & 1) == 0 )
  {
    sub_1BE4ACC(&string___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_6366/*"EventUI/Prefabs/80381"*/, v3);
    byte_4B6AB0A = 1;
  }
  v4 = sub_1BE4B74(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BE4D28(0LL, v5);
  v12 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1BE4D30(v4, v5);
  v13 = StringLiteral_6366/*"EventUI/Prefabs/80381"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6366/*"EventUI/Prefabs/80381"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadAssetNames, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionAssetManager__GetAssets(
        ExpeditionAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
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
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x20

  if ( (byte_4B6AB08 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BE4ACC(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v8);
    sub_1BE4ACC(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v9);
    byte_4B6AB08 = 1;
  }
  v10 = sub_1BE4D18(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)finishCallback, v19, v20, v21, v22, v23, v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BE4D28(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1BE4D30(v11, v12);
  v26 = loadAssetNames->m_Items[0];
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__GetRunEffect(
        ExpeditionAssetManager_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_efRunHakkenshi20_k__BackingField; // x8

  if ( idx <= 40 )
  {
    if ( idx <= 20 )
    {
      if ( idx == 20 )
      {
        p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi20_k__BackingField;
        return *p_efRunHakkenshi20_k__BackingField;
      }
    }
    else
    {
      if ( idx == 30 )
      {
        p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi30_k__BackingField;
        return *p_efRunHakkenshi20_k__BackingField;
      }
      if ( idx == 40 )
      {
        p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi40_k__BackingField;
        return *p_efRunHakkenshi20_k__BackingField;
      }
    }
LABEL_15:
    p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi10_k__BackingField;
    return *p_efRunHakkenshi20_k__BackingField;
  }
  if ( idx <= 60 )
  {
    if ( idx == 50 )
    {
      p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi50_k__BackingField;
      return *p_efRunHakkenshi20_k__BackingField;
    }
    if ( idx == 60 )
    {
      p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi60_k__BackingField;
      return *p_efRunHakkenshi20_k__BackingField;
    }
    goto LABEL_15;
  }
  if ( idx == 70 )
  {
    p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi70_k__BackingField;
    return *p_efRunHakkenshi20_k__BackingField;
  }
  if ( idx != 80 )
    goto LABEL_15;
  p_efRunHakkenshi20_k__BackingField = &this->fields._efRunHakkenshi80_k__BackingField;
  return *p_efRunHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__GetStayHakkenshiObj(
        ExpeditionAssetManager_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionAssetManager_Fields *p_efStayHakkenshi20_k__BackingField; // x8

  if ( idx <= 40 )
  {
    if ( idx <= 20 )
    {
      if ( idx == 20 )
      {
        p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi20_k__BackingField;
        return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
    }
    else
    {
      if ( idx == 30 )
      {
        p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi30_k__BackingField;
        return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
      if ( idx == 40 )
      {
        p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi40_k__BackingField;
        return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
    }
LABEL_15:
    p_efStayHakkenshi20_k__BackingField = &this->fields;
    return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
  }
  if ( idx <= 60 )
  {
    if ( idx == 50 )
    {
      p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi50_k__BackingField;
      return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
    }
    if ( idx == 60 )
    {
      p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi60_k__BackingField;
      return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
    }
    goto LABEL_15;
  }
  if ( idx == 70 )
  {
    p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi70_k__BackingField;
    return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
  }
  if ( idx != 80 )
    goto LABEL_15;
  p_efStayHakkenshi20_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi80_k__BackingField;
  return p_efStayHakkenshi20_k__BackingField->_efStayHakkenshi10_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionAssetManager__Release(
        ExpeditionAssetManager_o *this,
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
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7

  if ( (byte_4B6AB09 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B6AB09 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38766772(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0LL,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._bitExpeditionStart_k__BackingField,
    0LL,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._bitExpeditionFinish_k__BackingField,
    0LL,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_bitExpeditionFinish(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._bitExpeditionFinish_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._bitExpeditionStart_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi10_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi30_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi40_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi50_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi60_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efRunHakkenshi80_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi10_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi20_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi30_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi40_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi50_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi60_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._efStayHakkenshi80_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionPointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__get_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._expeditionRewardDialog_k__BackingField;
}


void __fastcall ExpeditionAssetManager__set_bitExpeditionFinish(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._bitExpeditionFinish_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._bitExpeditionFinish_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_bitExpeditionStart(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._bitExpeditionStart_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._bitExpeditionStart_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi10_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi20_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi30_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi40_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi50_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi60_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi70_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efRunHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efRunHakkenshi80_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi10(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi10_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi30(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi30_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi40(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi40_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi50(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi50_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi60(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi60_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi70(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi70_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi80(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._efStayHakkenshi80_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_expeditionConfirmDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._expeditionConfirmDialog_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_expeditionPointRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._expeditionPointRewardDialog_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager__set_expeditionRewardDialog(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._expeditionRewardDialog_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExpeditionAssetManager___c__DisplayClass85_0___ctor(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExpeditionAssetManager___c__DisplayClass85_0___GetAssets_b__0(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ExpeditionAssetManager___c__DisplayClass85_0_o *v4; // x19
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
  __int64 v28; // x1
  struct ExpeditionAssetManager_o *_4__this; // x21
  ExpeditionAssetManager___c__DisplayClass85_0_Fields *p_fields; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct ExpeditionAssetManager_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct ExpeditionAssetManager_o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct ExpeditionAssetManager_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct ExpeditionAssetManager_o *v65; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct ExpeditionAssetManager_o *v72; // x21
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct ExpeditionAssetManager_o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct ExpeditionAssetManager_o *v86; // x21
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct ExpeditionAssetManager_o *v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  PartyOrganizationUtility_o *v100; // x21
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  PartyOrganizationUtility_o *v107; // x21
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  PartyOrganizationUtility_o *v114; // x21
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  PartyOrganizationUtility_o *v121; // x21
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  PartyOrganizationUtility_o *v128; // x21
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  PartyOrganizationUtility_o *v135; // x21
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  PartyOrganizationUtility_o *v142; // x21
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  PartyOrganizationUtility_o *v149; // x21
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  PartyOrganizationUtility_o *v156; // x21
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  PartyOrganizationUtility_o *v163; // x21
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  PartyOrganizationUtility_o *v170; // x21
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7

  v4 = this;
  if ( (byte_4B6AB0B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, assetData);
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, v5);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_1BE4ACC(&StringLiteral_6450/*"ExpeditionConfirmDialog"*/, v8);
    sub_1BE4ACC(&StringLiteral_23871/*"stay_dog_10"*/, v9);
    sub_1BE4ACC(&StringLiteral_17517/*"bit_runningdog_10"*/, v10);
    sub_1BE4ACC(&StringLiteral_6453/*"ExpeditionRewardDialog"*/, v11);
    sub_1BE4ACC(&StringLiteral_6452/*"ExpeditionPointRewardDialog"*/, v12);
    sub_1BE4ACC(&StringLiteral_17444/*"bit_expedition_finish"*/, v13);
    sub_1BE4ACC(&StringLiteral_23875/*"stay_dog_50"*/, v14);
    sub_1BE4ACC(&StringLiteral_17522/*"bit_runningdog_60"*/, v15);
    sub_1BE4ACC(&StringLiteral_17520/*"bit_runningdog_40"*/, v16);
    sub_1BE4ACC(&StringLiteral_17519/*"bit_runningdog_30"*/, v17);
    sub_1BE4ACC(&StringLiteral_23878/*"stay_dog_80"*/, v18);
    sub_1BE4ACC(&StringLiteral_17448/*"bit_expedition_start"*/, v19);
    sub_1BE4ACC(&StringLiteral_23872/*"stay_dog_20"*/, v20);
    sub_1BE4ACC(&StringLiteral_23873/*"stay_dog_30"*/, v21);
    sub_1BE4ACC(&StringLiteral_23877/*"stay_dog_70"*/, v22);
    sub_1BE4ACC(&StringLiteral_17518/*"bit_runningdog_20"*/, v23);
    sub_1BE4ACC(&StringLiteral_23874/*"stay_dog_40"*/, v24);
    sub_1BE4ACC(&StringLiteral_23876/*"stay_dog_60"*/, v25);
    sub_1BE4ACC(&StringLiteral_17524/*"bit_runningdog_80"*/, v26);
    sub_1BE4ACC(&StringLiteral_17521/*"bit_runningdog_50"*/, v27);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_1BE4ACC(&StringLiteral_17523/*"bit_runningdog_70"*/, v28);
    byte_4B6AB0B = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_30;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23871/*"stay_dog_10"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !_4__this )
    goto LABEL_30;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields, (int64_t)this, v31, v32, v33, v34, v35, v36);
  v37 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23872/*"stay_dog_20"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v37 )
    goto LABEL_30;
  v37->fields._normalFollowerInfo = (struct FollowerInfo_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v37->fields._normalFollowerInfo,
    (int64_t)this,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23873/*"stay_dog_30"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v44 )
    goto LABEL_30;
  v44->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v44->fields._efStayHakkenshi30_k__BackingField,
    (int64_t)this,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23874/*"stay_dog_40"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v51 )
    goto LABEL_30;
  v51->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v51->fields._efStayHakkenshi40_k__BackingField,
    (int64_t)this,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23875/*"stay_dog_50"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v58 )
    goto LABEL_30;
  v58->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v58->fields._efStayHakkenshi50_k__BackingField,
    (int64_t)this,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23876/*"stay_dog_60"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v65 )
    goto LABEL_30;
  v65->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v65->fields._efStayHakkenshi60_k__BackingField,
    (int64_t)this,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23877/*"stay_dog_70"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v72 )
    goto LABEL_30;
  v72->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v72->fields._efStayHakkenshi70_k__BackingField,
    (int64_t)this,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_23878/*"stay_dog_80"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v79 )
    goto LABEL_30;
  v79->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v79->fields._efStayHakkenshi80_k__BackingField,
    (int64_t)this,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6450/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v86 )
    goto LABEL_30;
  v86->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v86->fields._expeditionConfirmDialog_k__BackingField,
    (int64_t)this,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v93 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6453/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v93 )
    goto LABEL_30;
  v93->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v93->fields._expeditionRewardDialog_k__BackingField,
    (int64_t)this,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v100 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6452/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v100 )
    goto LABEL_30;
  v100[1].klass = (PartyOrganizationUtility_c *)this;
  sub_1BE4A70(v100 + 1, (int64_t)this, v101, v102, v103, v104, v105, v106);
  v107 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17448/*"bit_expedition_start"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v107 )
    goto LABEL_30;
  v107[1].monitor = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)((char *)v107 + 168), (int64_t)this, v108, v109, v110, v111, v112, v113);
  v114 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17444/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v114 )
    goto LABEL_30;
  v114[1].fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)this;
  sub_1BE4A70((PartyOrganizationUtility_o *)((char *)v114 + 176), (int64_t)this, v115, v116, v117, v118, v119, v120);
  v121 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17517/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v121 )
    goto LABEL_30;
  v121->fields._PartyItemSmc_k__BackingField = (struct PartyListViewItem_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v121->fields._PartyItemSmc_k__BackingField,
    (int64_t)this,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17518/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v128 )
    goto LABEL_30;
  *(_QWORD *)&v128->fields._IsWaveBattleRestart_k__BackingField = this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v128->fields._IsWaveBattleRestart_k__BackingField,
    (int64_t)this,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v135 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17519/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v135 )
    goto LABEL_30;
  v135->fields._WaveBattleStartTime_k__BackingField = (int64_t)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v135->fields._WaveBattleStartTime_k__BackingField,
    (int64_t)this,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  v142 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17520/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v142 )
    goto LABEL_30;
  *(_QWORD *)&v142->fields._WaveBattleRestartWave_k__BackingField = this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v142->fields._WaveBattleRestartWave_k__BackingField,
    (int64_t)this,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v149 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17521/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v149 )
    goto LABEL_30;
  *(_QWORD *)&v149->fields._CachedQuestPhase_k__BackingField = this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v149->fields._CachedQuestPhase_k__BackingField,
    (int64_t)this,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v156 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17522/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v156 )
    goto LABEL_30;
  v156->fields._CachedFriendshipUpItemInfo_k__BackingField = (struct FriendshipUpItemInfo_array *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v156->fields._CachedFriendshipUpItemInfo_k__BackingField,
    (int64_t)this,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  v163 = (PartyOrganizationUtility_o *)p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17523/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !v163
    || (v163->fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)this,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v163->fields.temporaryPartyInfo,
          (int64_t)this,
          v164,
          v165,
          v166,
          v167,
          v168,
          v169),
        v170 = (PartyOrganizationUtility_o *)p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_object__49525204(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17524/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408),
        !v170) )
  {
LABEL_30:
    sub_1BE4D28(this, assetData);
  }
  v170->fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v170->fields._TransitionDestinationFromDetail_k__BackingField,
    (int64_t)this,
    v171,
    v172,
    v173,
    v174,
    v175,
    v176);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v179, v180, v181, v182, v183, v184);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38766608(eventId, _9__1, 1, 0LL);
}


void __fastcall ExpeditionAssetManager___c__DisplayClass85_0___GetAssets_b__1(
        ExpeditionAssetManager___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}