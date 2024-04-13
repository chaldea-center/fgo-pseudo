void __fastcall ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAAFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAAFA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42EAAF0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, num, priority, method);
    byte_42EAAF0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantSkillEntity__CreatePrimaryKey(ServantSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatus(ServantSkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t StrengthStatusReleaseId; // w0
  int32_t v9; // w20
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  bool IsOpen; // w8
  int32_t result; // w0

  if ( (byte_42EAAF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EAAF9 = 1;
  }
  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(this, method);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  v9 = StrengthStatusReleaseId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v9, 0LL, 0, 0LL);
  result = 0;
  if ( IsOpen )
    return this->fields.strengthStatus;
  return result;
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAAF8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22656/*"strengthStatusReleaseId"*/, (_DWORD)method, v2, v3);
    byte_42EAAF8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22656/*"strengthStatusReleaseId"*/, 0, 0LL);
}


bool __fastcall ServantSkillEntity__IsFlagOn(ServantSkillEntity_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}


void __fastcall ServantSkillEntity__getAcquisitionMethodExplanation(
        ServantSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  SkillEntity_o *Entity; // x0
  int v34; // w1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *EffectTitle; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_o *v62; // x21
  int32_t condLv; // w22
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_o *v79; // x21
  int32_t condLimitCount; // w22
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_o *v96; // x21
  int32_t condQuestId; // w20
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_o *v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  LocalizationManager_c *v113; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_42EAAF4 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)title, (_DWORD)explanation, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3371/*"COND_TYPE_TITLE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3361/*"COND_TYPE_NONE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42EAAF4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v32);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v34, (_DWORD)v35, v36);
      byte_42E6772 = 1;
    }
    v113 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v113->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B5D560(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v106 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_44;
  }
  EffectTitle = SkillEntity__getEffectTitle(Entity, 0, 0LL);
  *title = EffectTitle;
  sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v42, v43, v44, v45, v46, v47);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"COND_TYPE_TITLE"*/, 0LL);
  *explanation = v48;
  sub_B5D560((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v55 = System_String__Concat_44577788(*explanation, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *explanation = v55;
      sub_B5D560((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
    }
    v62 = *explanation;
    condLv = this->fields.condLv;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v64 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v65 = System_String__Concat_44577788(v62, v64, 0LL);
    *explanation = v65;
    sub_B5D560((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v72 = System_String__Concat_44577788(*explanation, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *explanation = v72;
      sub_B5D560((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
    }
    v79 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v81 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v82 = System_String__Concat_44577788(v79, v81, 0LL);
    *explanation = v82;
    sub_B5D560((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v89 = System_String__Concat_44577788(*explanation, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *explanation = v89;
      sub_B5D560((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v89, v90, v91, v92, v93, v94, v95);
    }
    v96 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v98 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v99 = System_String__Concat_44577788(v96, v98, 0LL);
    *explanation = v99;
    sub_B5D560(
      (BattleServantConfConponent_o *)explanation,
      (System_Int32_array **)v99,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_3361/*"COND_TYPE_NONE"*/, 0LL);
    *explanation = v106;
LABEL_44:
    sub_B5D560(
      (BattleServantConfConponent_o *)explanation,
      (System_Int32_array **)v106,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112);
  }
}


void __fastcall ServantSkillEntity__getEffectExplanation(
        ServantSkillEntity_o *this,
        int32_t *charge,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        bool isEquip,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  SkillEntity_o *Entity; // x0
  int v28; // w1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SkillEntity_o *v35; // x24
  int32_t v36; // w1
  LocalizationManager_c *v37; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42EAAF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)charge, (_DWORD)title, explanation);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EAAF3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v26);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v35 = Entity;
    if ( isEquip )
    {
      *charge = -1;
      v36 = 0;
    }
    else
    {
      *charge = SkillEntity__getEffectChargeTurn(Entity, skillLv, 0LL);
      Entity = v35;
      v36 = skillLv;
    }
    EffectTitle = SkillEntity__getEffectTitle(Entity, v36, 0LL);
    *title = EffectTitle;
    sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v47, v48, v49, v50, v51, v52);
    EffectExplanation = SkillEntity__getEffectExplanation(v35, skillLv, 0LL);
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v28, (_DWORD)v29, v30);
      byte_42E6772 = 1;
    }
    v37 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v37->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B5D560(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B5D560(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


int32_t __fastcall ServantSkillEntity__getFriendPointUpVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_42EAAF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EAAF6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
  if ( Entity )
    LODWORD(Entity) = SkillLvEntity__getFriendPointUpVal(Entity, 0LL);
  return (int)Entity;
}


int32_t __fastcall ServantSkillEntity__getServantID(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall ServantSkillEntity__getServantIdx(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int32_t __fastcall ServantSkillEntity__getSkillId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


SkillLvEntity_o *__fastcall ServantSkillEntity__getSkillLvEntity(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EAAF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EAAF7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
}


System_String_o *__fastcall ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  SkillEntity_o *Entity; // x0
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  LocalizationManager_c *v21; // x0

  if ( (byte_42EAAF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EAAF5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    byte_42E6772 = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}


bool __fastcall ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  EventEntity_o *Entity; // x0

  if ( (byte_42EAAF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, isFinishedAt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EAAF1 = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !EventEntity__IsOpen(Entity, isFinishedAt, 0LL) )
    {
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    goto LABEL_8;
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillEntity__isUse(
        ServantSkillEntity_o *this,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  bool IsQuestPhaseClear; // w24
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  int condQuestId; // w25
  int32_t condQuestPhase; // w26

  if ( (byte_42EAAF2 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, userId, svtLv, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EAAF2 = 1;
  }
  if ( this->fields.condLv <= svtLv && this->fields.condLimitCount <= limitCount )
  {
    condQuestId = this->fields.condQuestId;
    if ( condQuestId < 1 )
    {
      IsQuestPhaseClear = 1;
    }
    else
    {
      condQuestPhase = this->fields.condQuestPhase;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v25);
  }
  return ServantSkillReleaseMaster__isUse(
           (ServantSkillReleaseMaster_o *)Instance,
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           dispLimitCount,
           beforeClearQuestId,
           IsQuestPhaseClear,
           specificLimitCount,
           userSvtId,
           0LL);
}