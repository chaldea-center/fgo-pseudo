void __fastcall ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B674EF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B674EF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B674E4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4B674E4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantSkillEntity__CreatePrimaryKey(ServantSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatus(ServantSkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t StrengthStatusReleaseId; // w0
  int32_t v5; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool IsOpen; // w8
  int32_t result; // w0

  if ( (byte_4B674ED & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B674ED = 1;
  }
  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(this, method);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  v5 = StrengthStatusReleaseId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v5, 0LL, 0, 0LL);
  result = 0;
  if ( IsOpen )
    return this->fields.strengthStatus;
  return result;
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B674EC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23909/*"strengthStatusReleaseId"*/, method);
    byte_4B674EC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23909/*"strengthStatusReleaseId"*/, 0, 0LL);
}


bool __fastcall ServantSkillEntity__IsFlagOn(ServantSkillEntity_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}


bool __fastcall ServantSkillEntity__IsForceReleaseSkillRankUp(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B674EE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21090/*"isForceReleaseSkillRankUp"*/, method);
    byte_4B674EE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21090/*"isForceReleaseSkillRankUp"*/, 0, 0LL) == 1;
}


void __fastcall ServantSkillEntity__getAcquisitionMethodExplanation(
        ServantSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *EffectTitle; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x21
  int32_t condLv; // w22
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x21
  int32_t condLimitCount; // w22
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_String_o *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_String_o *v80; // x21
  int32_t condQuestId; // w20
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_String_o *v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  LocalizationManager_c *v97; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4B674E8 & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, title);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, v7);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BE4ACC(&StringLiteral_43/*"\n"*/, v11);
    sub_1BE4ACC(&StringLiteral_3843/*"COND_TYPE_TITLE"*/, v12);
    sub_1BE4ACC(&StringLiteral_3833/*"COND_TYPE_NONE"*/, v13);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v14);
    byte_4B674E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v16);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B622AA )
    {
      sub_1BE4ACC(&LocalizationManager_TypeInfo, v18);
      byte_4B622AA = 1;
    }
    v97 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v97->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1BE4A70((PartyOrganizationUtility_o *)title, (int64_t)unknownNameText, v19, v20, v21, v22, v23, v24);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v90 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_37;
  }
  EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  *title = EffectTitle;
  sub_1BE4A70((PartyOrganizationUtility_o *)title, (int64_t)EffectTitle, v26, v27, v28, v29, v30, v31);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"COND_TYPE_TITLE"*/, 0LL);
  *explanation = v32;
  sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v39 = System_String__Concat_62698808(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v39;
      sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v39, v40, v41, v42, v43, v44, v45);
    }
    v46 = *explanation;
    condLv = this->fields.condLv;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v48 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v49 = System_String__Concat_62698808(v46, v48, 0LL);
    *explanation = v49;
    sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v56 = System_String__Concat_62698808(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v56;
      sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v56, v57, v58, v59, v60, v61, v62);
    }
    v63 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v65 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v66 = System_String__Concat_62698808(v63, v65, 0LL);
    *explanation = v66;
    sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v66, v67, v68, v69, v70, v71, v72);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v73 = System_String__Concat_62698808(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v73;
      sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v73, v74, v75, v76, v77, v78, v79);
    }
    v80 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v82 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v83 = System_String__Concat_62698808(v80, v82, 0LL);
    *explanation = v83;
    sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v83, v84, v85, v86, v87, v88, v89);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"COND_TYPE_NONE"*/, 0LL);
    *explanation = v90;
LABEL_37:
    sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)v90, v91, v92, v93, v94, v95, v96);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  SkillEntity_o *v27; // x24
  int32_t v28; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v30; // x0
  System_String_o *unknownNameText; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B674E7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, charge);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v16);
    byte_4B674E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v18);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v27 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v28 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0LL);
      v28 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v27, v28, 0LL);
    *title = EffectTitle;
    sub_1BE4A70((PartyOrganizationUtility_o *)title, (int64_t)EffectTitle, v40, v41, v42, v43, v44, v45);
    EffectExplanation = SkillEntity__getEffectExplanation(v27, skillLv, 0LL);
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B622AA )
    {
      sub_1BE4ACC(&LocalizationManager_TypeInfo, v20);
      byte_4B622AA = 1;
    }
    v30 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v30->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1BE4A70((PartyOrganizationUtility_o *)title, (int64_t)unknownNameText, v21, v22, v23, v24, v25, v26);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)explanation, (int64_t)EffectExplanation, v32, v33, v34, v35, v36, v37);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantSkillEntity__getFriendPointUpVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B674EA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B674EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
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


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *__fastcall ServantSkillEntity__getSkillLvEntity(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B674EB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B674EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
}


System_String_o *__fastcall ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  LocalizationManager_c *v11; // x0

  if ( (byte_4B674E9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B674E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B622AA )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    byte_4B622AA = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B674E5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, isFinishedAt);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B674E5 = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !EventEntity__IsSkillRelease((EventEntity_o *)Entity, isFinishedAt, 0LL) )
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
  __int64 v17; // x1
  __int64 v18; // x1
  bool IsQuestPhaseClear; // w24
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  int condQuestId; // w25
  int32_t condQuestPhase; // w26
  const MethodInfo *v25; // [xsp+8h] [xbp-58h]

  if ( (byte_4B674E6 & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, userId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B674E6 = 1;
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
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v21);
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
           v25);
}