void __fastcall ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43539A6 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_43539A6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_435399C & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_435399C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1CA2794 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantSkillEntity__CreatePrimaryKey(ServantSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatus(ServantSkillEntity_o *this, const MethodInfo *method)
{
  int32_t StrengthStatusReleaseId; // w0
  int32_t v4; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  bool IsOpen; // w8
  int32_t result; // w0

  if ( (byte_43539A5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43539A5 = 1;
  }
  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(this, method);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  v4 = StrengthStatusReleaseId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v4, 0LL, 0, 0LL);
  result = 0;
  if ( IsOpen )
    return this->fields.strengthStatus;
  return result;
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43539A4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_22726/*"strengthStatusReleaseId"*/);
    byte_43539A4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22726/*"strengthStatusReleaseId"*/, 0, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  SkillEntity_o *Entity; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *EffectTitle; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x21
  int32_t condLv; // w22
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_o *v54; // x21
  int32_t condLimitCount; // w22
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_o *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_o *v71; // x21
  int32_t condQuestId; // w20
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_o *v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  LocalizationManager_c *v88; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_43539A0 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_3380/*"COND_TYPE_TITLE"*/);
    sub_B70694(&StringLiteral_3370/*"COND_TYPE_NONE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43539A0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_434F6FF )
    {
      sub_B70694(&LocalizationManager_TypeInfo);
      byte_434F6FF = 1;
    }
    v88 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v88->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B70630(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v81 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_44;
  }
  EffectTitle = SkillEntity__getEffectTitle(Entity, 0, 0LL);
  *title = EffectTitle;
  sub_B70630((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v17, v18, v19, v20, v21, v22);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"COND_TYPE_TITLE"*/, 0LL);
  *explanation = v23;
  sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v30 = System_String__Concat_44758168(*explanation, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *explanation = v30;
      sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    }
    v37 = *explanation;
    condLv = this->fields.condLv;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v39 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v40 = System_String__Concat_44758168(v37, v39, 0LL);
    *explanation = v40;
    sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v47 = System_String__Concat_44758168(*explanation, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *explanation = v47;
      sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    }
    v54 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v56 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v57 = System_String__Concat_44758168(v54, v56, 0LL);
    *explanation = v57;
    sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v64 = System_String__Concat_44758168(*explanation, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *explanation = v64;
      sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
    }
    v71 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v73 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v74 = System_String__Concat_44758168(v71, v73, 0LL);
    *explanation = v74;
    sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3370/*"COND_TYPE_NONE"*/, 0LL);
    *explanation = v81;
LABEL_44:
    sub_B70630((BattleServantConfConponent_o *)explanation, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  SkillEntity_o *Entity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  SkillEntity_o *v22; // x24
  int32_t v23; // w1
  LocalizationManager_c *v24; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_435399F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435399F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v14);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v22 = Entity;
    if ( isEquip )
    {
      *charge = -1;
      v23 = 0;
    }
    else
    {
      *charge = SkillEntity__getEffectChargeTurn(Entity, skillLv, 0LL);
      Entity = v22;
      v23 = skillLv;
    }
    EffectTitle = SkillEntity__getEffectTitle(Entity, v23, 0LL);
    *title = EffectTitle;
    sub_B70630((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v34, v35, v36, v37, v38, v39);
    EffectExplanation = SkillEntity__getEffectExplanation(v22, skillLv, 0LL);
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
    if ( !byte_434F6FF )
    {
      sub_B70694(&LocalizationManager_TypeInfo);
      byte_434F6FF = 1;
    }
    v24 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v24->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B70630(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B70630(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


int32_t __fastcall ServantSkillEntity__getFriendPointUpVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_43539A2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43539A2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_43539A3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43539A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
}


System_String_o *__fastcall ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  SkillEntity_o *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_43539A1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43539A1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


bool __fastcall ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventEntity_o *Entity; // x0

  if ( (byte_435399D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435399D = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.eventId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  bool IsQuestPhaseClear; // w24
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  int condQuestId; // w25
  int32_t condQuestPhase; // w26

  if ( (byte_435399E & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435399E = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v19);
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