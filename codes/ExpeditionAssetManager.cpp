void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_4389FC9 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_6353/*"EventUI/Prefabs/80381"*/);
    byte_4389FC9 = 1;
  }
  v3 = sub_B775DC(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_6353/*"EventUI/Prefabs/80381"*/;
  if ( StringLiteral_6353/*"EventUI/Prefabs/80381"*/ )
  {
    v12 = sub_B77684(StringLiteral_6353/*"EventUI/Prefabs/80381"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
      v21 = sub_B776BC();
      sub_B77668(v21, 0LL);
    }
    v13 = (System_Int32_array **)StringLiteral_6353/*"EventUI/Prefabs/80381"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
  {
    v20 = sub_B776C8(v12);
    sub_B77668(v20, 0LL);
  }
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B77560((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_B77560(
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


void __fastcall ExpeditionAssetManager__GetAssets(
        ExpeditionAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20
  __int64 v25; // x0

  if ( (byte_4389FC7 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__);
    sub_B775C4(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
    byte_4389FC7 = 1;
  }
  v7 = sub_B77694(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 32) = finishCallback,
        *(_DWORD *)(v7 + 24) = eventId,
        sub_B77560(
          (BattleServantConfConponent_o *)(v7 + 32),
          (System_Int32_array **)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B7769C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
  {
    v25 = sub_B776C8(v8);
    sub_B77668(v25, 0LL);
  }
  v23 = loadAssetNames->m_Items[0];
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v23, v24, 1, 0LL);
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

  if ( (byte_4389FC8 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    byte_4389FC8 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_24479600(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0LL,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionStart_k__BackingField,
    0LL,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
  struct ExpeditionAssetManager_o *_4__this; // x21
  ExpeditionAssetManager___c__DisplayClass85_0_Fields *p_fields; // x22
  struct ExpeditionAssetManager_o *v7; // x21
  struct ExpeditionAssetManager_o *v8; // x21
  struct ExpeditionAssetManager_o *v9; // x21
  struct ExpeditionAssetManager_o *v10; // x21
  struct ExpeditionAssetManager_o *v11; // x21
  struct ExpeditionAssetManager_o *v12; // x21
  struct ExpeditionAssetManager_o *v13; // x21
  struct ExpeditionAssetManager_o *v14; // x21
  struct ExpeditionAssetManager_o *v15; // x21
  struct ExpeditionAssetManager_o *v16; // x21
  struct ExpeditionAssetManager_o *v17; // x21
  struct ExpeditionAssetManager_o *v18; // x21
  struct ExpeditionAssetManager_o *v19; // x21
  struct ExpeditionAssetManager_o *v20; // x21
  struct ExpeditionAssetManager_o *v21; // x21
  struct ExpeditionAssetManager_o *v22; // x21
  struct ExpeditionAssetManager_o *v23; // x21
  struct ExpeditionAssetManager_o *v24; // x21
  struct ExpeditionAssetManager_o *v25; // x21
  struct ExpeditionAssetManager_o *v26; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4388066 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__);
    sub_B775C4(&StringLiteral_6427/*"ExpeditionConfirmDialog"*/);
    sub_B775C4(&StringLiteral_22790/*"stay_dog_10"*/);
    sub_B775C4(&StringLiteral_17162/*"bit_runningdog_10"*/);
    sub_B775C4(&StringLiteral_6430/*"ExpeditionRewardDialog"*/);
    sub_B775C4(&StringLiteral_6429/*"ExpeditionPointRewardDialog"*/);
    sub_B775C4(&StringLiteral_17088/*"bit_expedition_finish"*/);
    sub_B775C4(&StringLiteral_22794/*"stay_dog_50"*/);
    sub_B775C4(&StringLiteral_17167/*"bit_runningdog_60"*/);
    sub_B775C4(&StringLiteral_17165/*"bit_runningdog_40"*/);
    sub_B775C4(&StringLiteral_17164/*"bit_runningdog_30"*/);
    sub_B775C4(&StringLiteral_22797/*"stay_dog_80"*/);
    sub_B775C4(&StringLiteral_17092/*"bit_expedition_start"*/);
    sub_B775C4(&StringLiteral_22791/*"stay_dog_20"*/);
    sub_B775C4(&StringLiteral_22792/*"stay_dog_30"*/);
    sub_B775C4(&StringLiteral_22796/*"stay_dog_70"*/);
    sub_B775C4(&StringLiteral_17163/*"bit_runningdog_20"*/);
    sub_B775C4(&StringLiteral_22793/*"stay_dog_40"*/);
    sub_B775C4(&StringLiteral_22795/*"stay_dog_60"*/);
    sub_B775C4(&StringLiteral_17169/*"bit_runningdog_80"*/);
    sub_B775C4(&StringLiteral_17166/*"bit_runningdog_50"*/);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_B775C4(&StringLiteral_17168/*"bit_runningdog_70"*/);
    byte_4388066 = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_31;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22790/*"stay_dog_10"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !_4__this )
    goto LABEL_31;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&_4__this->fields);
  v7 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22791/*"stay_dog_20"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v7 )
    goto LABEL_31;
  v7->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v7->fields._efStayHakkenshi20_k__BackingField);
  v8 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22792/*"stay_dog_30"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v8 )
    goto LABEL_31;
  v8->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v8->fields._efStayHakkenshi30_k__BackingField);
  v9 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22793/*"stay_dog_40"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v9 )
    goto LABEL_31;
  v9->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v9->fields._efStayHakkenshi40_k__BackingField);
  v10 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22794/*"stay_dog_50"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v10 )
    goto LABEL_31;
  v10->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v10->fields._efStayHakkenshi50_k__BackingField);
  v11 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22795/*"stay_dog_60"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v11 )
    goto LABEL_31;
  v11->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v11->fields._efStayHakkenshi60_k__BackingField);
  v12 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22796/*"stay_dog_70"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v12 )
    goto LABEL_31;
  v12->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v12->fields._efStayHakkenshi70_k__BackingField);
  v13 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22797/*"stay_dog_80"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v13 )
    goto LABEL_31;
  v13->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v13->fields._efStayHakkenshi80_k__BackingField);
  v14 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6427/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v14 )
    goto LABEL_31;
  v14->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v14->fields._expeditionConfirmDialog_k__BackingField);
  v15 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6430/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v15 )
    goto LABEL_31;
  v15->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v15->fields._expeditionRewardDialog_k__BackingField);
  v16 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6429/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v16 )
    goto LABEL_31;
  v16->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v16->fields._expeditionPointRewardDialog_k__BackingField);
  v17 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17092/*"bit_expedition_start"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v17 )
    goto LABEL_31;
  v17->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v17->fields._bitExpeditionStart_k__BackingField);
  v18 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17088/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v18 )
    goto LABEL_31;
  v18->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v18->fields._bitExpeditionFinish_k__BackingField);
  v19 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17162/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v19 )
    goto LABEL_31;
  v19->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v19->fields._efRunHakkenshi10_k__BackingField);
  v20 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17163/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v20 )
    goto LABEL_31;
  v20->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v20->fields._efRunHakkenshi20_k__BackingField);
  v21 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17164/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v21 )
    goto LABEL_31;
  v21->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v21->fields._efRunHakkenshi30_k__BackingField);
  v22 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17165/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v22 )
    goto LABEL_31;
  v22->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v22->fields._efRunHakkenshi40_k__BackingField);
  v23 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17166/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v23 )
    goto LABEL_31;
  v23->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v23->fields._efRunHakkenshi50_k__BackingField);
  v24 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17167/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v24 )
    goto LABEL_31;
  v24->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v24->fields._efRunHakkenshi60_k__BackingField);
  v25 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17168/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !v25
    || (v25->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B77560(&v25->fields._efRunHakkenshi70_k__BackingField),
        v26 = p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17169/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408),
        !v26) )
  {
LABEL_31:
    sub_B7769C(this, assetData);
  }
  v26->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(&v26->fields._efRunHakkenshi80_k__BackingField);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B77560(&v4->fields.__9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_24479412(eventId, _9__1, 1, 0LL);
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