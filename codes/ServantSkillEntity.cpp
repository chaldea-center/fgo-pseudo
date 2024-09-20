void __fastcall ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B973 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B973 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B969 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B969 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool IsOpen; // w8
  int32_t result; // w0

  if ( (byte_4A5B972 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B972 = 1;
  }
  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(this, method);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  v4 = StrengthStatusReleaseId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v4, 0LL, 0, 0LL);
  result = 0;
  if ( IsOpen )
    return this->fields.strengthStatus;
  return result;
}


int32_t __fastcall ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B971 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23574/*"strengthStatusReleaseId"*/);
    byte_4A5B971 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23574/*"strengthStatusReleaseId"*/, 0, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *EffectTitle; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x21
  int32_t condLv; // w22
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x21
  int32_t condLimitCount; // w22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x21
  int32_t condQuestId; // w20
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  LocalizationManager_c *v49; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4A5B96D & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_3801/*"COND_TYPE_TITLE"*/);
    sub_1B885B0(&StringLiteral_3791/*"COND_TYPE_NONE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B96D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
    }
    v49 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v49 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v49->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B88554((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v10, v11);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v48 = (int)StringLiteral_1/*""*/;
    goto LABEL_37;
  }
  EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  *title = EffectTitle;
  sub_1B88554((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v13, v14);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COND_TYPE_TITLE"*/, 0LL);
  *explanation = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v15, v16, v17);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v18 = System_String__Concat_61707032(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v18, v19, v20);
    }
    v21 = *explanation;
    condLv = this->fields.condLv;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v23 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v24 = System_String__Concat_61707032(v21, v23, 0LL);
    *explanation = v24;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v24, v25, v26);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v27 = System_String__Concat_61707032(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v27, v28, v29);
    }
    v30 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v32 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v33 = System_String__Concat_61707032(v30, v32, 0LL);
    *explanation = v33;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v33, v34, v35);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v36 = System_String__Concat_61707032(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *explanation = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v36, v37, v38);
    }
    v39 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v41 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v42 = System_String__Concat_61707032(v39, v41, 0LL);
    *explanation = v42;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, (int32_t)v42, v43, v44);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3791/*"COND_TYPE_NONE"*/, 0LL);
    v48 = (int)v45;
    *explanation = v45;
LABEL_37:
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, v48, v46, v47);
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  SkillEntity_o *v18; // x24
  int32_t v19; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v21; // x0
  System_String_o *unknownNameText; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  System_String_o *EffectTitle; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *EffectExplanation; // x0

  if ( (byte_4A5B96C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B96C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v18 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v19 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0LL);
      v19 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v18, v19, 0LL);
    *title = EffectTitle;
    sub_1B88554((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v27, v28);
    EffectExplanation = SkillEntity__getEffectExplanation(v18, skillLv, 0LL);
    v25 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v21->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B88554((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v16, v17);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v25 = (int)StringLiteral_1/*""*/;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, v25, v23, v24);
}


int32_t __fastcall ServantSkillEntity__getFriendPointUpVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4A5B96F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B96F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5B970 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B970 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
}


System_String_o *__fastcall ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4A5B96E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B96E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


bool __fastcall ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B96A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B96A = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  bool IsQuestPhaseClear; // w24
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int condQuestId; // w25
  int32_t condQuestPhase; // w26
  const MethodInfo *v23; // [xsp+8h] [xbp-58h]

  if ( (byte_4A5B96B & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B96B = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v19);
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
           v23);
}