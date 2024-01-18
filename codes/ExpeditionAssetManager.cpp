void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_4187776 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_6205/*"EventUI/Prefabs/80381"*/, v3);
    byte_4187776 = 1;
  }
  v4 = sub_B2C374(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v12 = (struct System_String_array *)v4;
  v13 = StringLiteral_6205/*"EventUI/Prefabs/80381"*/;
  if ( StringLiteral_6205/*"EventUI/Prefabs/80381"*/ )
  {
    v13 = sub_B2C41C(StringLiteral_6205/*"EventUI/Prefabs/80381"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v22 = sub_B2C454(0LL);
      sub_B2C400(v22, 0LL);
    }
    v14 = (System_Int32_array **)StringLiteral_6205/*"EventUI/Prefabs/80381"*/;
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x20
  __int64 v28; // x0

  if ( (byte_4187774 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v8);
    sub_B2C35C(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v9);
    byte_4187774 = 1;
  }
  v10 = sub_B2C42C(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_QWORD *)(v10 + 32) = finishCallback,
        *(_DWORD *)(v10 + 24) = eventId,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 32),
          (System_Int32_array **)finishCallback,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B2C434(v11, v12);
  }
  if ( !loadAssetNames->max_length )
  {
    v28 = sub_B2C460(v11);
    sub_B2C400(v28, 0LL);
  }
  v26 = loadAssetNames->m_Items[0];
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
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

  if ( (byte_4187775 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4187775 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28451204(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0LL,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionStart_k__BackingField,
    0LL,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_41841B3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&AtlasManager_TypeInfo, v6);
    sub_B2C35C(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_B2C35C(&StringLiteral_6279/*"ExpeditionConfirmDialog"*/, v8);
    sub_B2C35C(&StringLiteral_22316/*"stay_dog_10"*/, v9);
    sub_B2C35C(&StringLiteral_16828/*"bit_runningdog_10"*/, v10);
    sub_B2C35C(&StringLiteral_6282/*"ExpeditionRewardDialog"*/, v11);
    sub_B2C35C(&StringLiteral_6281/*"ExpeditionPointRewardDialog"*/, v12);
    sub_B2C35C(&StringLiteral_16756/*"bit_expedition_finish"*/, v13);
    sub_B2C35C(&StringLiteral_22320/*"stay_dog_50"*/, v14);
    sub_B2C35C(&StringLiteral_16833/*"bit_runningdog_60"*/, v15);
    sub_B2C35C(&StringLiteral_16831/*"bit_runningdog_40"*/, v16);
    sub_B2C35C(&StringLiteral_16830/*"bit_runningdog_30"*/, v17);
    sub_B2C35C(&StringLiteral_22323/*"stay_dog_80"*/, v18);
    sub_B2C35C(&StringLiteral_16760/*"bit_expedition_start"*/, v19);
    sub_B2C35C(&StringLiteral_22317/*"stay_dog_20"*/, v20);
    sub_B2C35C(&StringLiteral_22318/*"stay_dog_30"*/, v21);
    sub_B2C35C(&StringLiteral_22322/*"stay_dog_70"*/, v22);
    sub_B2C35C(&StringLiteral_16829/*"bit_runningdog_20"*/, v23);
    sub_B2C35C(&StringLiteral_22319/*"stay_dog_40"*/, v24);
    sub_B2C35C(&StringLiteral_22321/*"stay_dog_60"*/, v25);
    sub_B2C35C(&StringLiteral_16835/*"bit_runningdog_80"*/, v26);
    sub_B2C35C(&StringLiteral_16832/*"bit_runningdog_50"*/, v27);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_B2C35C(&StringLiteral_16834/*"bit_runningdog_70"*/, v28);
    byte_41841B3 = 1;
  }
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  if ( !assetData )
    goto LABEL_31;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22316/*"stay_dog_10"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !_4__this )
    goto LABEL_31;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&_4__this->fields, this);
  v31 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22317/*"stay_dog_20"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v31 )
    goto LABEL_31;
  v31->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v31->fields._efStayHakkenshi20_k__BackingField, this);
  v32 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22318/*"stay_dog_30"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v32 )
    goto LABEL_31;
  v32->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v32->fields._efStayHakkenshi30_k__BackingField, this);
  v33 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22319/*"stay_dog_40"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v33 )
    goto LABEL_31;
  v33->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v33->fields._efStayHakkenshi40_k__BackingField, this);
  v34 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22320/*"stay_dog_50"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v34 )
    goto LABEL_31;
  v34->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v34->fields._efStayHakkenshi50_k__BackingField, this);
  v35 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22321/*"stay_dog_60"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v35 )
    goto LABEL_31;
  v35->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v35->fields._efStayHakkenshi60_k__BackingField, this);
  v36 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22322/*"stay_dog_70"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v36 )
    goto LABEL_31;
  v36->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v36->fields._efStayHakkenshi70_k__BackingField, this);
  v37 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22323/*"stay_dog_80"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v37 )
    goto LABEL_31;
  v37->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v37->fields._efStayHakkenshi80_k__BackingField, this);
  v38 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6279/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v38 )
    goto LABEL_31;
  v38->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v38->fields._expeditionConfirmDialog_k__BackingField, this);
  v39 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6282/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v39 )
    goto LABEL_31;
  v39->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v39->fields._expeditionRewardDialog_k__BackingField, this);
  v40 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6281/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v40 )
    goto LABEL_31;
  v40->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v40->fields._expeditionPointRewardDialog_k__BackingField, this);
  v41 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16760/*"bit_expedition_start"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v41 )
    goto LABEL_31;
  v41->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v41->fields._bitExpeditionStart_k__BackingField, this);
  v42 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16756/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v42 )
    goto LABEL_31;
  v42->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v42->fields._bitExpeditionFinish_k__BackingField, this);
  v43 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16828/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v43 )
    goto LABEL_31;
  v43->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v43->fields._efRunHakkenshi10_k__BackingField, this);
  v44 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16829/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v44 )
    goto LABEL_31;
  v44->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v44->fields._efRunHakkenshi20_k__BackingField, this);
  v45 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16830/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v45 )
    goto LABEL_31;
  v45->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v45->fields._efRunHakkenshi30_k__BackingField, this);
  v46 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16831/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v46 )
    goto LABEL_31;
  v46->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v46->fields._efRunHakkenshi40_k__BackingField, this);
  v47 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16832/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v47 )
    goto LABEL_31;
  v47->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v47->fields._efRunHakkenshi50_k__BackingField, this);
  v48 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16833/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v48 )
    goto LABEL_31;
  v48->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v48->fields._efRunHakkenshi60_k__BackingField, this);
  v49 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16834/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !v49
    || (v49->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(&v49->fields._efRunHakkenshi70_k__BackingField, this),
        v50 = p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_16835/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !v50) )
  {
LABEL_31:
    sub_B2C434(this, assetData);
  }
  v50->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&v50->fields._efRunHakkenshi80_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(eventId, _9__1, 1, 0LL);
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