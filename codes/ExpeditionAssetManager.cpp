void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_421410B & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6222/*"EventUI/Prefabs/80381"*/, v3);
    byte_421410B = 1;
  }
  v4 = sub_B0D8BC(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B0D97C(0LL);
  v11 = (struct System_String_array *)v4;
  v12 = StringLiteral_6222/*"EventUI/Prefabs/80381"*/;
  if ( StringLiteral_6222/*"EventUI/Prefabs/80381"*/ )
  {
    v12 = sub_B0D964(StringLiteral_6222/*"EventUI/Prefabs/80381"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B0D99C(0LL);
      sub_B0D948(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6222/*"EventUI/Prefabs/80381"*/;
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
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v27; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x20
  __int64 v29; // x0

  if ( (byte_4214109 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B0D8A4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v8);
    sub_B0D8A4(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v9);
    byte_4214109 = 1;
  }
  v10 = sub_B0D974(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, *(_QWORD *)&eventId, finishCallback);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v10 + 32),
          (System_Int32_array **)finishCallback,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B0D97C(v11);
  }
  if ( !loadAssetNames->max_length )
  {
    v29 = sub_B0D9A8(v11);
    sub_B0D948(v29, 0LL);
  }
  v27 = loadAssetNames->m_Items[0];
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v27, v28, 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__GetRunEffect(
        ExpeditionAssetManager_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o **p_efRunHakkenshi70_k__BackingField; // x8

  if ( idx > 40 )
  {
    if ( idx > 60 )
    {
      if ( idx == 70 )
      {
        p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi70_k__BackingField;
        return *p_efRunHakkenshi70_k__BackingField;
      }
      if ( idx == 80 )
      {
        p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi80_k__BackingField;
        return *p_efRunHakkenshi70_k__BackingField;
      }
    }
    else
    {
      if ( idx == 50 )
      {
        p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi50_k__BackingField;
        return *p_efRunHakkenshi70_k__BackingField;
      }
      if ( idx == 60 )
      {
        p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi60_k__BackingField;
        return *p_efRunHakkenshi70_k__BackingField;
      }
    }
LABEL_15:
    p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi10_k__BackingField;
    return *p_efRunHakkenshi70_k__BackingField;
  }
  if ( idx > 20 )
  {
    if ( idx == 30 )
    {
      p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi30_k__BackingField;
      return *p_efRunHakkenshi70_k__BackingField;
    }
    if ( idx == 40 )
    {
      p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi40_k__BackingField;
      return *p_efRunHakkenshi70_k__BackingField;
    }
    goto LABEL_15;
  }
  if ( idx != 20 )
    goto LABEL_15;
  p_efRunHakkenshi70_k__BackingField = &this->fields._efRunHakkenshi20_k__BackingField;
  return *p_efRunHakkenshi70_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ExpeditionAssetManager__GetStayHakkenshiObj(
        ExpeditionAssetManager_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  ExpeditionAssetManager_Fields *p_efStayHakkenshi70_k__BackingField; // x8

  if ( idx > 40 )
  {
    if ( idx > 60 )
    {
      if ( idx == 70 )
      {
        p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi70_k__BackingField;
        return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
      if ( idx == 80 )
      {
        p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi80_k__BackingField;
        return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
    }
    else
    {
      if ( idx == 50 )
      {
        p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi50_k__BackingField;
        return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
      if ( idx == 60 )
      {
        p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi60_k__BackingField;
        return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
      }
    }
LABEL_15:
    p_efStayHakkenshi70_k__BackingField = &this->fields;
    return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
  }
  if ( idx > 20 )
  {
    if ( idx == 30 )
    {
      p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi30_k__BackingField;
      return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
    }
    if ( idx == 40 )
    {
      p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi40_k__BackingField;
      return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
    }
    goto LABEL_15;
  }
  if ( idx != 20 )
    goto LABEL_15;
  p_efStayHakkenshi70_k__BackingField = (ExpeditionAssetManager_Fields *)&this->fields._efStayHakkenshi20_k__BackingField;
  return p_efStayHakkenshi70_k__BackingField->_efStayHakkenshi10_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExpeditionAssetManager__Release(
        ExpeditionAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7

  if ( (byte_421410A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_421410A = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_27921720(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0LL,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionStart_k__BackingField,
    0LL,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionFinish_k__BackingField,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._bitExpeditionFinish_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionFinish_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._bitExpeditionStart_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionStart_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi10_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi20_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi30_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi40_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi50_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi60_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi70_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efRunHakkenshi80_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi10_k__BackingField = value;
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


void __fastcall ExpeditionAssetManager__set_efStayHakkenshi20(
        ExpeditionAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi20_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi30_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi40_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi50_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi60_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi70_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._efStayHakkenshi80_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._expeditionConfirmDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._expeditionPointRewardDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._expeditionRewardDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  struct ExpeditionAssetManager_o *v31; // x21
  struct ExpeditionAssetManager_o *v32; // x21
  struct ExpeditionAssetManager_o *v33; // x21
  struct ExpeditionAssetManager_o *v34; // x21
  struct ExpeditionAssetManager_o *v35; // x21
  struct ExpeditionAssetManager_o *v36; // x21
  struct ExpeditionAssetManager_o *v37; // x21
  struct ExpeditionAssetManager_o *v38; // x21
  struct ExpeditionAssetManager_o *v39; // x21
  struct ExpeditionAssetManager_o *v40; // x21
  struct ExpeditionAssetManager_o *v41; // x21
  struct ExpeditionAssetManager_o *v42; // x21
  struct ExpeditionAssetManager_o *v43; // x21
  struct ExpeditionAssetManager_o *v44; // x21
  struct ExpeditionAssetManager_o *v45; // x21
  struct ExpeditionAssetManager_o *v46; // x21
  struct ExpeditionAssetManager_o *v47; // x21
  struct ExpeditionAssetManager_o *v48; // x21
  struct ExpeditionAssetManager_o *v49; // x21
  struct ExpeditionAssetManager_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4210F2F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetData);
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, v5);
    sub_B0D8A4(&AtlasManager_TypeInfo, v6);
    sub_B0D8A4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_B0D8A4(&StringLiteral_6296/*"ExpeditionConfirmDialog"*/, v8);
    sub_B0D8A4(&StringLiteral_22392/*"stay_dog_10"*/, v9);
    sub_B0D8A4(&StringLiteral_16877/*"bit_runningdog_10"*/, v10);
    sub_B0D8A4(&StringLiteral_6299/*"ExpeditionRewardDialog"*/, v11);
    sub_B0D8A4(&StringLiteral_6298/*"ExpeditionPointRewardDialog"*/, v12);
    sub_B0D8A4(&StringLiteral_16805/*"bit_expedition_finish"*/, v13);
    sub_B0D8A4(&StringLiteral_22396/*"stay_dog_50"*/, v14);
    sub_B0D8A4(&StringLiteral_16882/*"bit_runningdog_60"*/, v15);
    sub_B0D8A4(&StringLiteral_16880/*"bit_runningdog_40"*/, v16);
    sub_B0D8A4(&StringLiteral_16879/*"bit_runningdog_30"*/, v17);
    sub_B0D8A4(&StringLiteral_22399/*"stay_dog_80"*/, v18);
    sub_B0D8A4(&StringLiteral_16809/*"bit_expedition_start"*/, v19);
    sub_B0D8A4(&StringLiteral_22393/*"stay_dog_20"*/, v20);
    sub_B0D8A4(&StringLiteral_22394/*"stay_dog_30"*/, v21);
    sub_B0D8A4(&StringLiteral_22398/*"stay_dog_70"*/, v22);
    sub_B0D8A4(&StringLiteral_16878/*"bit_runningdog_20"*/, v23);
    sub_B0D8A4(&StringLiteral_22395/*"stay_dog_40"*/, v24);
    sub_B0D8A4(&StringLiteral_22397/*"stay_dog_60"*/, v25);
    sub_B0D8A4(&StringLiteral_16884/*"bit_runningdog_80"*/, v26);
    sub_B0D8A4(&StringLiteral_16881/*"bit_runningdog_50"*/, v27);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_B0D8A4(&StringLiteral_16883/*"bit_runningdog_70"*/, v28);
    byte_4210F2F = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_31;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22392/*"stay_dog_10"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !_4__this )
    goto LABEL_31;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&_4__this->fields, this);
  v31 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22393/*"stay_dog_20"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v31 )
    goto LABEL_31;
  v31->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v31->fields._efStayHakkenshi20_k__BackingField, this);
  v32 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22394/*"stay_dog_30"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v32 )
    goto LABEL_31;
  v32->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v32->fields._efStayHakkenshi30_k__BackingField, this);
  v33 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22395/*"stay_dog_40"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v33 )
    goto LABEL_31;
  v33->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v33->fields._efStayHakkenshi40_k__BackingField, this);
  v34 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22396/*"stay_dog_50"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v34 )
    goto LABEL_31;
  v34->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v34->fields._efStayHakkenshi50_k__BackingField, this);
  v35 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22397/*"stay_dog_60"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v35 )
    goto LABEL_31;
  v35->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v35->fields._efStayHakkenshi60_k__BackingField, this);
  v36 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22398/*"stay_dog_70"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v36 )
    goto LABEL_31;
  v36->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v36->fields._efStayHakkenshi70_k__BackingField, this);
  v37 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22399/*"stay_dog_80"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v37 )
    goto LABEL_31;
  v37->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v37->fields._efStayHakkenshi80_k__BackingField, this);
  v38 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6296/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v38 )
    goto LABEL_31;
  v38->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v38->fields._expeditionConfirmDialog_k__BackingField, this);
  v39 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6299/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v39 )
    goto LABEL_31;
  v39->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v39->fields._expeditionRewardDialog_k__BackingField, this);
  v40 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6298/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v40 )
    goto LABEL_31;
  v40->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v40->fields._expeditionPointRewardDialog_k__BackingField, this);
  v41 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16809/*"bit_expedition_start"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v41 )
    goto LABEL_31;
  v41->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v41->fields._bitExpeditionStart_k__BackingField, this);
  v42 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16805/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v42 )
    goto LABEL_31;
  v42->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v42->fields._bitExpeditionFinish_k__BackingField, this);
  v43 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16877/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v43 )
    goto LABEL_31;
  v43->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v43->fields._efRunHakkenshi10_k__BackingField, this);
  v44 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16878/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v44 )
    goto LABEL_31;
  v44->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v44->fields._efRunHakkenshi20_k__BackingField, this);
  v45 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16879/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v45 )
    goto LABEL_31;
  v45->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v45->fields._efRunHakkenshi30_k__BackingField, this);
  v46 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16880/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v46 )
    goto LABEL_31;
  v46->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v46->fields._efRunHakkenshi40_k__BackingField, this);
  v47 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16881/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v47 )
    goto LABEL_31;
  v47->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v47->fields._efRunHakkenshi50_k__BackingField, this);
  v48 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16882/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v48 )
    goto LABEL_31;
  v48->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v48->fields._efRunHakkenshi60_k__BackingField, this);
  v49 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16883/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !v49
    || (v49->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B0D840(&v49->fields._efRunHakkenshi70_k__BackingField, this),
        v50 = p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_16884/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440),
        !v50) )
  {
LABEL_31:
    sub_B0D97C(this);
  }
  v50->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B0D840(&v50->fields._efRunHakkenshi80_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_27921540(eventId, _9__1, 1, 0LL);
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