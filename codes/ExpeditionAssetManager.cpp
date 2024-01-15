void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
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

  if ( (byte_40FACEE & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_6187/*"EventUI/Prefabs/80381"*/, v4);
    byte_40FACEE = 1;
  }
  v5 = sub_B17014(string___TypeInfo, 1LL, v2);
  if ( !v5 )
    sub_B170D4();
  v12 = (struct System_String_array *)v5;
  v13 = StringLiteral_6187/*"EventUI/Prefabs/80381"*/;
  if ( StringLiteral_6187/*"EventUI/Prefabs/80381"*/ )
  {
    v13 = sub_B170BC(StringLiteral_6187/*"EventUI/Prefabs/80381"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    v14 = (System_Int32_array **)StringLiteral_6187/*"EventUI/Prefabs/80381"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
  {
    sub_B17100(v13, v14, v6);
    sub_B170A0();
  }
  v12->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  this->fields.loadAssetNames = v12;
  sub_B16F98(
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
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
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x20

  if ( (byte_40FACEC & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v9);
    sub_B16FFC(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v10);
    byte_40FACEC = 1;
  }
  v11 = sub_B170CC(
          ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo,
          *(_QWORD *)&eventId,
          finishCallback,
          method,
          v4);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v11 + 32) = finishCallback,
        *(_DWORD *)(v11 + 24) = eventId,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 32),
          (System_Int32_array **)finishCallback,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B170D4();
  }
  if ( !loadAssetNames->max_length )
  {
    sub_B17100(v24, v25, v26);
    sub_B170A0();
  }
  v30 = loadAssetNames->m_Items[0];
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0LL);
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

  if ( (byte_40FACED & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FACED = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_28584740(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    0LL,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    0LL,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    0LL,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    0LL,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    0LL,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    0LL,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    0LL,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    0LL,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0LL,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionStart_k__BackingField,
    0LL,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ExpeditionAssetManager_o *v38; // x21
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ExpeditionAssetManager_o *v46; // x21
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ExpeditionAssetManager_o *v54; // x21
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct ExpeditionAssetManager_o *v62; // x21
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ExpeditionAssetManager_o *v70; // x21
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct ExpeditionAssetManager_o *v78; // x21
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct ExpeditionAssetManager_o *v86; // x21
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct ExpeditionAssetManager_o *v94; // x21
  System_Int32_array **v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct ExpeditionAssetManager_o *v102; // x21
  System_Int32_array **v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct ExpeditionAssetManager_o *v110; // x21
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct ExpeditionAssetManager_o *v118; // x21
  System_Int32_array **v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  struct ExpeditionAssetManager_o *v126; // x21
  System_Int32_array **v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  struct ExpeditionAssetManager_o *v134; // x21
  System_Int32_array **v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  struct ExpeditionAssetManager_o *v142; // x21
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  struct ExpeditionAssetManager_o *v150; // x21
  System_Int32_array **v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  struct ExpeditionAssetManager_o *v158; // x21
  System_Int32_array **v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  struct ExpeditionAssetManager_o *v166; // x21
  System_Int32_array **v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  struct ExpeditionAssetManager_o *v174; // x21
  System_Int32_array **v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  struct ExpeditionAssetManager_o *v182; // x21
  System_Int32_array **v183; // x0
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  struct ExpeditionAssetManager_o *v190; // x21
  System_Int32_array **v191; // x0
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x3
  __int64 v201; // x4
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7

  if ( (byte_40F7080 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v5);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v7);
    sub_B16FFC(&StringLiteral_6261/*"ExpeditionConfirmDialog"*/, v8);
    sub_B16FFC(&StringLiteral_22224/*"stay_dog_10"*/, v9);
    sub_B16FFC(&StringLiteral_16762/*"bit_runningdog_10"*/, v10);
    sub_B16FFC(&StringLiteral_6264/*"ExpeditionRewardDialog"*/, v11);
    sub_B16FFC(&StringLiteral_6263/*"ExpeditionPointRewardDialog"*/, v12);
    sub_B16FFC(&StringLiteral_16692/*"bit_expedition_finish"*/, v13);
    sub_B16FFC(&StringLiteral_22228/*"stay_dog_50"*/, v14);
    sub_B16FFC(&StringLiteral_16767/*"bit_runningdog_60"*/, v15);
    sub_B16FFC(&StringLiteral_16765/*"bit_runningdog_40"*/, v16);
    sub_B16FFC(&StringLiteral_16764/*"bit_runningdog_30"*/, v17);
    sub_B16FFC(&StringLiteral_22231/*"stay_dog_80"*/, v18);
    sub_B16FFC(&StringLiteral_16696/*"bit_expedition_start"*/, v19);
    sub_B16FFC(&StringLiteral_22225/*"stay_dog_20"*/, v20);
    sub_B16FFC(&StringLiteral_22226/*"stay_dog_30"*/, v21);
    sub_B16FFC(&StringLiteral_22230/*"stay_dog_70"*/, v22);
    sub_B16FFC(&StringLiteral_16763/*"bit_runningdog_20"*/, v23);
    sub_B16FFC(&StringLiteral_22227/*"stay_dog_40"*/, v24);
    sub_B16FFC(&StringLiteral_22229/*"stay_dog_60"*/, v25);
    sub_B16FFC(&StringLiteral_16769/*"bit_runningdog_80"*/, v26);
    sub_B16FFC(&StringLiteral_16766/*"bit_runningdog_50"*/, v27);
    sub_B16FFC(&StringLiteral_16768/*"bit_runningdog_70"*/, v28);
    byte_40F7080 = 1;
  }
  p_fields = &this->fields;
  _4__this = this->fields.__4__this;
  if ( !assetData )
    goto LABEL_31;
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_22224/*"stay_dog_10"*/,
                                                            (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !_4__this )
    goto LABEL_31;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields,
    Object_WarBoardWaitTimeSetting,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = p_fields->__4__this;
  v39 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22225/*"stay_dog_20"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v38 )
    goto LABEL_31;
  v38->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v38->fields._efStayHakkenshi20_k__BackingField,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = p_fields->__4__this;
  v47 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22226/*"stay_dog_30"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v46 )
    goto LABEL_31;
  v46->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v46->fields._efStayHakkenshi30_k__BackingField,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = p_fields->__4__this;
  v55 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22227/*"stay_dog_40"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v54 )
    goto LABEL_31;
  v54->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v54->fields._efStayHakkenshi40_k__BackingField,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = p_fields->__4__this;
  v63 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22228/*"stay_dog_50"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v62 )
    goto LABEL_31;
  v62->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)v63;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v62->fields._efStayHakkenshi50_k__BackingField,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = p_fields->__4__this;
  v71 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22229/*"stay_dog_60"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v70 )
    goto LABEL_31;
  v70->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v70->fields._efStayHakkenshi60_k__BackingField,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v78 = p_fields->__4__this;
  v79 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22230/*"stay_dog_70"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v78 )
    goto LABEL_31;
  v78->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)v79;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v78->fields._efStayHakkenshi70_k__BackingField,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = p_fields->__4__this;
  v87 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_22231/*"stay_dog_80"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v86 )
    goto LABEL_31;
  v86->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)v87;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v86->fields._efStayHakkenshi80_k__BackingField,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = p_fields->__4__this;
  v95 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                 assetData,
                                 (System_String_o *)StringLiteral_6261/*"ExpeditionConfirmDialog"*/,
                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v94 )
    goto LABEL_31;
  v94->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v95;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v94->fields._expeditionConfirmDialog_k__BackingField,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = p_fields->__4__this;
  v103 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_6264/*"ExpeditionRewardDialog"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v102 )
    goto LABEL_31;
  v102->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v103;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v102->fields._expeditionRewardDialog_k__BackingField,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v110 = p_fields->__4__this;
  v111 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_6263/*"ExpeditionPointRewardDialog"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v110 )
    goto LABEL_31;
  v110->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)v111;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v110->fields._expeditionPointRewardDialog_k__BackingField,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  v118 = p_fields->__4__this;
  v119 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16696/*"bit_expedition_start"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v118 )
    goto LABEL_31;
  v118->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)v119;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v118->fields._bitExpeditionStart_k__BackingField,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v126 = p_fields->__4__this;
  v127 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16692/*"bit_expedition_finish"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v126 )
    goto LABEL_31;
  v126->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)v127;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v126->fields._bitExpeditionFinish_k__BackingField,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v134 = p_fields->__4__this;
  v135 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16762/*"bit_runningdog_10"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v134 )
    goto LABEL_31;
  v134->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)v135;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v134->fields._efRunHakkenshi10_k__BackingField,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  v142 = p_fields->__4__this;
  v143 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16763/*"bit_runningdog_20"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v142 )
    goto LABEL_31;
  v142->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)v143;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v142->fields._efRunHakkenshi20_k__BackingField,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  v150 = p_fields->__4__this;
  v151 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16764/*"bit_runningdog_30"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v150 )
    goto LABEL_31;
  v150->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)v151;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v150->fields._efRunHakkenshi30_k__BackingField,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  v158 = p_fields->__4__this;
  v159 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16765/*"bit_runningdog_40"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v158 )
    goto LABEL_31;
  v158->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)v159;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v158->fields._efRunHakkenshi40_k__BackingField,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  v166 = p_fields->__4__this;
  v167 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16766/*"bit_runningdog_50"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v166 )
    goto LABEL_31;
  v166->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)v167;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v166->fields._efRunHakkenshi50_k__BackingField,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  v174 = p_fields->__4__this;
  v175 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16767/*"bit_runningdog_60"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v174 )
    goto LABEL_31;
  v174->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)v175;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v174->fields._efRunHakkenshi60_k__BackingField,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
  v182 = p_fields->__4__this;
  v183 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  assetData,
                                  (System_String_o *)StringLiteral_16768/*"bit_runningdog_70"*/,
                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !v182
    || (v182->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)v183,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v182->fields._efRunHakkenshi70_k__BackingField,
          v183,
          v184,
          v185,
          v186,
          v187,
          v188,
          v189),
        v190 = p_fields->__4__this,
        v191 = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                        assetData,
                                        (System_String_o *)StringLiteral_16769/*"bit_runningdog_80"*/,
                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        !v190) )
  {
LABEL_31:
    sub_B170D4();
  }
  v190->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)v191;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v190->fields._efRunHakkenshi80_k__BackingField,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196,
    v197);
  _9__1 = this->fields.__9__1;
  eventId = this->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v198, v199, v200, v201);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v204,
      v205,
      v206,
      v207,
      v208,
      v209);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(eventId, _9__1, 1, 0LL);
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