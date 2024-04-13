void __fastcall ExpeditionAssetManager___ctor(ExpeditionAssetManager_o *this, const MethodInfo *method)
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

  if ( (byte_42E7A06 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6284/*"EventUI/Prefabs/80381"*/, v5, v6, v7);
    byte_42E7A06 = 1;
  }
  v8 = sub_B5D5DC(string___TypeInfo, 1LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v16 = (struct System_String_array *)v8;
  v17 = StringLiteral_6284/*"EventUI/Prefabs/80381"*/;
  if ( StringLiteral_6284/*"EventUI/Prefabs/80381"*/ )
  {
    v17 = sub_B5D684(StringLiteral_6284/*"EventUI/Prefabs/80381"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v26 = sub_B5D6BC();
      sub_B5D668(v26, 0LL);
    }
    v18 = (System_Int32_array **)StringLiteral_6284/*"EventUI/Prefabs/80381"*/;
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


void __fastcall ExpeditionAssetManager__GetAssets(
        ExpeditionAssetManager_o *this,
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
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v32; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x20
  __int64 v34; // x0

  if ( (byte_42E7A04 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)finishCallback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__, v10, v11, v12);
    sub_B5D5C4(&ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo, v13, v14, v15);
    byte_42E7A04 = 1;
  }
  v16 = sub_B5D694(ExpeditionAssetManager___c__DisplayClass85_0_TypeInfo);
  ExpeditionAssetManager___c__DisplayClass85_0___ctor((ExpeditionAssetManager___c__DisplayClass85_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_QWORD *)(v16 + 32) = finishCallback,
        *(_DWORD *)(v16 + 24) = eventId,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v16 + 32),
          (System_Int32_array **)finishCallback,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_B5D69C(v17, v18);
  }
  if ( !loadAssetNames->max_length )
  {
    v34 = sub_B5D6C8(v17);
    sub_B5D668(v34, 0LL);
  }
  v32 = loadAssetNames->m_Items[0];
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v16,
    Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v32, v33, 1, 0LL);
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
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7

  if ( (byte_42E7A05 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E7A05 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_31190280(eventId, 0LL);
  this->fields._efStayHakkenshi10_k__BackingField = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields._efStayHakkenshi20_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi20_k__BackingField,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._efStayHakkenshi30_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi30_k__BackingField,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._efStayHakkenshi40_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi40_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._efStayHakkenshi50_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi50_k__BackingField,
    0LL,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._efStayHakkenshi60_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi60_k__BackingField,
    0LL,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields._efStayHakkenshi70_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi70_k__BackingField,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields._efStayHakkenshi80_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efStayHakkenshi80_k__BackingField,
    0LL,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields._efRunHakkenshi10_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi10_k__BackingField,
    0LL,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields._efRunHakkenshi20_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi20_k__BackingField,
    0LL,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields._efRunHakkenshi30_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi30_k__BackingField,
    0LL,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields._efRunHakkenshi40_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi40_k__BackingField,
    0LL,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields._efRunHakkenshi50_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi50_k__BackingField,
    0LL,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields._efRunHakkenshi60_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi60_k__BackingField,
    0LL,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  this->fields._efRunHakkenshi70_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi70_k__BackingField,
    0LL,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  this->fields._efRunHakkenshi80_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._efRunHakkenshi80_k__BackingField,
    0LL,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields._expeditionConfirmDialog_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._expeditionConfirmDialog_k__BackingField,
    0LL,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  this->fields._expeditionRewardDialog_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._expeditionRewardDialog_k__BackingField,
    0LL,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  this->fields._expeditionPointRewardDialog_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._expeditionPointRewardDialog_k__BackingField,
    0LL,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  this->fields._bitExpeditionStart_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionStart_k__BackingField,
    0LL,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  this->fields._bitExpeditionFinish_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._bitExpeditionFinish_k__BackingField,
    0LL,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  ExpeditionAssetManager___c__DisplayClass85_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  struct ExpeditionAssetManager_o *_4__this; // x21
  ExpeditionAssetManager___c__DisplayClass85_0_Fields *p_fields; // x22
  struct ExpeditionAssetManager_o *v80; // x21
  struct ExpeditionAssetManager_o *v81; // x21
  struct ExpeditionAssetManager_o *v82; // x21
  struct ExpeditionAssetManager_o *v83; // x21
  struct ExpeditionAssetManager_o *v84; // x21
  struct ExpeditionAssetManager_o *v85; // x21
  struct ExpeditionAssetManager_o *v86; // x21
  struct ExpeditionAssetManager_o *v87; // x21
  struct ExpeditionAssetManager_o *v88; // x21
  struct ExpeditionAssetManager_o *v89; // x21
  struct ExpeditionAssetManager_o *v90; // x21
  struct ExpeditionAssetManager_o *v91; // x21
  struct ExpeditionAssetManager_o *v92; // x21
  struct ExpeditionAssetManager_o *v93; // x21
  struct ExpeditionAssetManager_o *v94; // x21
  struct ExpeditionAssetManager_o *v95; // x21
  struct ExpeditionAssetManager_o *v96; // x21
  struct ExpeditionAssetManager_o *v97; // x21
  struct ExpeditionAssetManager_o *v98; // x21
  struct ExpeditionAssetManager_o *v99; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v5 = this;
  if ( (byte_42E56B0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&AtlasManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6358/*"ExpeditionConfirmDialog"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_22619/*"stay_dog_10"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17034/*"bit_runningdog_10"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_6361/*"ExpeditionRewardDialog"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_6360/*"ExpeditionPointRewardDialog"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_16962/*"bit_expedition_finish"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22623/*"stay_dog_50"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17039/*"bit_runningdog_60"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_17037/*"bit_runningdog_40"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_17036/*"bit_runningdog_30"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_22626/*"stay_dog_80"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_16966/*"bit_expedition_start"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_22620/*"stay_dog_20"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_22621/*"stay_dog_30"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_22625/*"stay_dog_70"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_17035/*"bit_runningdog_20"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_22622/*"stay_dog_40"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_22624/*"stay_dog_60"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_17041/*"bit_runningdog_80"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_17038/*"bit_runningdog_50"*/, v72, v73, v74);
    this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)sub_B5D5C4(&StringLiteral_17040/*"bit_runningdog_70"*/, v75, v76, v77);
    byte_42E56B0 = 1;
  }
  p_fields = &v5->fields;
  _4__this = v5->fields.__4__this;
  if ( !assetData )
    goto LABEL_31;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22619/*"stay_dog_10"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !_4__this )
    goto LABEL_31;
  _4__this->fields._efStayHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&_4__this->fields);
  v80 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22620/*"stay_dog_20"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v80 )
    goto LABEL_31;
  v80->fields._efStayHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v80->fields._efStayHakkenshi20_k__BackingField);
  v81 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22621/*"stay_dog_30"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v81 )
    goto LABEL_31;
  v81->fields._efStayHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v81->fields._efStayHakkenshi30_k__BackingField);
  v82 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22622/*"stay_dog_40"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v82 )
    goto LABEL_31;
  v82->fields._efStayHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v82->fields._efStayHakkenshi40_k__BackingField);
  v83 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22623/*"stay_dog_50"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v83 )
    goto LABEL_31;
  v83->fields._efStayHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v83->fields._efStayHakkenshi50_k__BackingField);
  v84 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22624/*"stay_dog_60"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v84 )
    goto LABEL_31;
  v84->fields._efStayHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v84->fields._efStayHakkenshi60_k__BackingField);
  v85 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22625/*"stay_dog_70"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v85 )
    goto LABEL_31;
  v85->fields._efStayHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v85->fields._efStayHakkenshi70_k__BackingField);
  v86 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_22626/*"stay_dog_80"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v86 )
    goto LABEL_31;
  v86->fields._efStayHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v86->fields._efStayHakkenshi80_k__BackingField);
  v87 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6358/*"ExpeditionConfirmDialog"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v87 )
    goto LABEL_31;
  v87->fields._expeditionConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v87->fields._expeditionConfirmDialog_k__BackingField);
  v88 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6361/*"ExpeditionRewardDialog"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v88 )
    goto LABEL_31;
  v88->fields._expeditionRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v88->fields._expeditionRewardDialog_k__BackingField);
  v89 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6360/*"ExpeditionPointRewardDialog"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v89 )
    goto LABEL_31;
  v89->fields._expeditionPointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v89->fields._expeditionPointRewardDialog_k__BackingField);
  v90 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16966/*"bit_expedition_start"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v90 )
    goto LABEL_31;
  v90->fields._bitExpeditionStart_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v90->fields._bitExpeditionStart_k__BackingField);
  v91 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16962/*"bit_expedition_finish"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v91 )
    goto LABEL_31;
  v91->fields._bitExpeditionFinish_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v91->fields._bitExpeditionFinish_k__BackingField);
  v92 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17034/*"bit_runningdog_10"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v92 )
    goto LABEL_31;
  v92->fields._efRunHakkenshi10_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v92->fields._efRunHakkenshi10_k__BackingField);
  v93 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17035/*"bit_runningdog_20"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v93 )
    goto LABEL_31;
  v93->fields._efRunHakkenshi20_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v93->fields._efRunHakkenshi20_k__BackingField);
  v94 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17036/*"bit_runningdog_30"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v94 )
    goto LABEL_31;
  v94->fields._efRunHakkenshi30_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v94->fields._efRunHakkenshi30_k__BackingField);
  v95 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17037/*"bit_runningdog_40"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v95 )
    goto LABEL_31;
  v95->fields._efRunHakkenshi40_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v95->fields._efRunHakkenshi40_k__BackingField);
  v96 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17038/*"bit_runningdog_50"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v96 )
    goto LABEL_31;
  v96->fields._efRunHakkenshi50_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v96->fields._efRunHakkenshi50_k__BackingField);
  v97 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17039/*"bit_runningdog_60"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v97 )
    goto LABEL_31;
  v97->fields._efRunHakkenshi60_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v97->fields._efRunHakkenshi60_k__BackingField);
  v98 = p_fields->__4__this;
  this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17040/*"bit_runningdog_70"*/,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !v98
    || (v98->fields._efRunHakkenshi70_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_B5D560(&v98->fields._efRunHakkenshi70_k__BackingField),
        v99 = p_fields->__4__this,
        this = (ExpeditionAssetManager___c__DisplayClass85_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17041/*"bit_runningdog_80"*/,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        !v99) )
  {
LABEL_31:
    sub_B5D69C(this, assetData);
  }
  v99->fields._efRunHakkenshi80_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&v99->fields._efRunHakkenshi80_k__BackingField);
  _9__1 = v5->fields.__9__1;
  eventId = v5->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_ExpeditionAssetManager___c__DisplayClass85_0__GetAssets_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(eventId, _9__1, 1, 0LL);
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