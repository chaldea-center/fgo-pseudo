void __fastcall ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC04 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCC04 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FCBFA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_49FCBFA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  bool IsOpen; // w8
  int32_t result; // w0

  if ( (byte_49FCC03 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCC03 = 1;
  }
  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(this, method);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  v5 = StrengthStatusReleaseId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v5, 0LL, 0, 0LL);
  result = 0;
  if ( IsOpen )
    return this->fields.strengthStatus;
  return result;
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC02 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23477/*"strengthStatusReleaseId"*/, method);
    byte_49FCC02 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23477/*"strengthStatusReleaseId"*/, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *EffectTitle; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x21
  int32_t condLv; // w22
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x21
  int32_t condLimitCount; // w22
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x21
  int32_t condQuestId; // w20
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w1
  LocalizationManager_c *v57; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_49FCBFE & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, title);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v11);
    sub_1B640C8(&StringLiteral_3778/*"COND_TYPE_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_3768/*"COND_TYPE_NONE"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49FCBFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_49F7D6A )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v17);
      byte_49F7D6A = 1;
    }
    v57 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v57->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v18, v19);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v56 = (int)StringLiteral_1/*""*/;
    goto LABEL_37;
  }
  EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  *title = EffectTitle;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v21, v22);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3778/*"COND_TYPE_TITLE"*/, 0LL);
  *explanation = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v23, v24, v25);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v26 = System_String__Concat_61375396(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v26;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v26, v27, v28);
    }
    v29 = *explanation;
    condLv = this->fields.condLv;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v31 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v32 = System_String__Concat_61375396(v29, v31, 0LL);
    *explanation = v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v32, v33, v34);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v35 = System_String__Concat_61375396(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v35, v36, v37);
    }
    v38 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v40 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v41 = System_String__Concat_61375396(v38, v40, 0LL);
    *explanation = v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v41, v42, v43);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v44 = System_String__Concat_61375396(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v44, v45, v46);
    }
    v47 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v49 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v50 = System_String__Concat_61375396(v47, v49, 0LL);
    *explanation = v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v50, v51, v52);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3768/*"COND_TYPE_NONE"*/, 0LL);
    v56 = (int)v53;
    *explanation = v53;
LABEL_37:
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, v56, v54, v55);
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
  Il2CppObject *Entity; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  SkillEntity_o *v22; // x24
  int32_t v23; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v25; // x0
  System_String_o *unknownNameText; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  System_String_o *EffectTitle; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *EffectExplanation; // x0

  if ( (byte_49FCBFD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, charge);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49FCBFD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v22 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v23 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0LL);
      v23 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v22, v23, 0LL);
    *title = EffectTitle;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v31, v32);
    EffectExplanation = SkillEntity__getEffectExplanation(v22, skillLv, 0LL);
    v29 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_49F7D6A )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v19);
      byte_49F7D6A = 1;
    }
    v25 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v25->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v20, v21);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v29 = (int)StringLiteral_1/*""*/;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, v29, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantSkillEntity__getFriendPointUpVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  SkillLvEntity_o *Entity; // x0

  if ( (byte_49FCC00 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCC00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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

  if ( (byte_49FCC01 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCC01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
}


System_String_o *__fastcall ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  __int64 v8; // x1
  LocalizationManager_c *v10; // x0

  if ( (byte_49FCBFF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCBFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    byte_49F7D6A = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  return v10->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FCBFB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, isFinishedAt);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCBFB = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !EventEntity__IsOpen((EventEntity_o *)Entity, isFinishedAt, 0LL) )
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
  int condQuestId; // w25
  int32_t condQuestPhase; // w26
  const MethodInfo *v24; // [xsp+8h] [xbp-58h]

  if ( (byte_49FCBFC & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, userId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49FCBFC = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
           v24);
}