void ServantSkillEntity___ctor(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7E55 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7E55 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantSkillEntity__CreatePK(int32_t svtId, int32_t num, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CC7E4A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC7E4A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantSkillEntity__CreatePrimaryKey(ServantSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


System_Nullable_ValueTuple_FuncList_TYPE__int___o ServantSkillEntity__GetFriendPointUpTypeVal(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Nullable_ValueTuple_FuncList_TYPE__int___o v7; // x0

  if ( (byte_4CC7E50 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7E50 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    sub_1C71608(0, v6);
  *(_QWORD *)&v7.fields.hasValue = SkillLvMaster__GetEntity(
                                     (SkillLvMaster_o *)Master_object,
                                     this->fields.skillId,
                                     skillLv,
                                     0);
  v7.fields.value.fields.Item2 = 0;
  if ( *(_QWORD *)&v7.fields.hasValue )
    return SkillLvEntity__GetFriendPointUpTypeVal(*(SkillLvEntity_o **)&v7.fields.hasValue, 0);
  return v7;
}


int32_t ServantSkillEntity__GetStrengthStatus(ServantSkillEntity_o *this, const MethodInfo *method)
{
  int32_t StrengthStatusReleaseId; // w0
  int32_t v4; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool IsOpen; // w8
  int32_t result; // w0

  if ( (byte_4CC7E53 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7E53 = 1;
  }
  StrengthStatusReleaseId = ServantSkillEntity__GetStrengthStatusReleaseId(this, method);
  if ( StrengthStatusReleaseId < 1 )
    return this->fields.strengthStatus;
  v4 = StrengthStatusReleaseId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C71608(Instance, v6);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v4, 0, 0, 0);
  result = 0;
  if ( IsOpen )
    return this->fields.strengthStatus;
  return result;
}


int32_t ServantSkillEntity__GetStrengthStatusReleaseId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7E52 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23848/*"strengthStatusReleaseId"*/);
    byte_4CC7E52 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23848/*"strengthStatusReleaseId"*/, 0, 0);
}


bool ServantSkillEntity__IsFlagOn(ServantSkillEntity_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}


bool ServantSkillEntity__IsForceReleaseSkillRankUp(ServantSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7E54 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21001/*"isForceReleaseSkillRankUp"*/);
    byte_4CC7E54 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21001/*"isForceReleaseSkillRankUp"*/, 0, 0) == 1;
}


void ServantSkillEntity__getAcquisitionMethodExplanation(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *EffectTitle; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_String_o *v37; // x21
  int32_t condLv; // w22
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_String_o *v54; // x21
  int32_t condLimitCount; // w22
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_String_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_String_o *v71; // x21
  int32_t condQuestId; // w20
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  System_String_o *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  int32_t v88; // w1
  LocalizationManager_c *v89; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4CC7E4E & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_3730/*"COND_TYPE_TITLE"*/);
    sub_1C713B0(&StringLiteral_3720/*"COND_TYPE_NONE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7E4E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C71608(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CC26AA )
    {
      sub_1C713B0(&LocalizationManager_TypeInfo);
      byte_4CC26AA = 1;
    }
    v89 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v89 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v89->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C71354((GrandQuestFolderBoardItem_o *)title, (int32_t)unknownNameText, v10, v11, v12, v13, v14, v15);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v88 = StringLiteral_1/*""*/;
    goto LABEL_37;
  }
  EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0);
  *title = EffectTitle;
  sub_1C71354((GrandQuestFolderBoardItem_o *)title, (int32_t)EffectTitle, v17, v18, v19, v20, v21, v22);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"COND_TYPE_TITLE"*/, 0);
  *explanation = v23;
  sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  if ( this->fields.condLv >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v30 = System_String__Concat_64031724(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *explanation = v30;
      sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v30, v31, v32, v33, v34, v35, v36);
    }
    v37 = *explanation;
    condLv = this->fields.condLv;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v39 = CondType__OpenConditionTextServantLevel(condLv, (System_String_o *)StringLiteral_1/*""*/, 0);
    v40 = System_String__Concat_64031724(v37, v39, 0);
    *explanation = v40;
    sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  if ( this->fields.condLimitCount >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v47 = System_String__Concat_64031724(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *explanation = v47;
      sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v47, v48, v49, v50, v51, v52, v53);
    }
    v54 = *explanation;
    condLimitCount = this->fields.condLimitCount;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v56 = CondType__OpenConditionTextServantLimit(condLimitCount, (System_String_o *)StringLiteral_1/*""*/, 0);
    v57 = System_String__Concat_64031724(v54, v56, 0);
    *explanation = v57;
    sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v57, v58, v59, v60, v61, v62, v63);
  }
  if ( this->fields.condQuestId >= 1 )
  {
    if ( System_String__op_Inequality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v64 = System_String__Concat_64031724(*explanation, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *explanation = v64;
      sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v64, v65, v66, v67, v68, v69, v70);
    }
    v71 = *explanation;
    condQuestId = this->fields.condQuestId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v73 = CondType__OpenConditionTextQuestClear(condQuestId, (System_String_o *)StringLiteral_1/*""*/, 0);
    v74 = System_String__Concat_64031724(v71, v73, 0);
    *explanation = v74;
    sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, (int32_t)v74, v75, v76, v77, v78, v79, v80);
  }
  if ( System_String__op_Equality(*explanation, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COND_TYPE_NONE"*/, 0);
    v88 = (int)v81;
    *explanation = v81;
LABEL_37:
    sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, v88, v82, v83, v84, v85, v86, v87);
  }
}


void ServantSkillEntity__getEffectExplanation(
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
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  SkillEntity_o *v22; // x24
  int32_t v23; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v25; // x0
  System_String_o *unknownNameText; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  System_String_o *EffectTitle; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *EffectExplanation; // x0

  if ( (byte_4CC7E4D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7E4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C71608(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0);
      v23 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v22, v23, 0);
    *title = EffectTitle;
    sub_1C71354((GrandQuestFolderBoardItem_o *)title, (int32_t)EffectTitle, v35, v36, v37, v38, v39, v40);
    EffectExplanation = SkillEntity__getEffectExplanation(v22, skillLv, 0);
    v33 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CC26AA )
    {
      sub_1C713B0(&LocalizationManager_TypeInfo);
      byte_4CC26AA = 1;
    }
    v25 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v25->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C71354((GrandQuestFolderBoardItem_o *)title, (int32_t)unknownNameText, v16, v17, v18, v19, v20, v21);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v33 = StringLiteral_1/*""*/;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, v33, v27, v28, v29, v30, v31, v32);
}


int32_t ServantSkillEntity__getServantID(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t ServantSkillEntity__getServantIdx(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int32_t ServantSkillEntity__getSkillId(ServantSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


SkillLvEntity_o *ServantSkillEntity__getSkillLvEntity(
        ServantSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC7E51 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7E51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0 )
  {
    sub_1C71608(Instance, v6);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0);
}


System_String_o *ServantSkillEntity__getSkillName(ServantSkillEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4CC7E4F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7E4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CC26AA )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC26AA = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


bool ServantSkillEntity__isEnable(ServantSkillEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CC7E4B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7E4B = 1;
  }
  if ( this->fields.eventId < 1 )
  {
LABEL_8:
    LOBYTE(Entity) = 1;
    return (char)Entity;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C71608(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !EventEntity__IsSkillRelease((EventEntity_o *)Entity, isFinishedAt, 0) )
    {
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    goto LABEL_8;
  }
  return (char)Entity;
}


bool ServantSkillEntity__isUse(
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

  if ( (byte_4CC7E4C & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7E4C = 1;
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
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___)) == 0 )
  {
    sub_1C71608(Instance, v19);
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