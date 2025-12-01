void AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6FA9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC6FA9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CC6FA8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC6FA8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *AssistEntity__CreatePrimaryKey(AssistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


System_String_o *AssistEntity__GetDetail(AssistEntity_o *this, bool isShort, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4CC6FA0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC6FA0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, this->fields.skillId, this->fields.skillLv, 0);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_43166404(Entity, this->fields.skillLv, isShort, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_object )
LABEL_13:
    sub_1C71608(Master_object, v6);
  return SkillDetailMaster__getDetail((SkillDetailMaster_o *)Master_object, this->fields.skillId, isShort, 0);
}


int32_t AssistEntity__GetMaxLevel(AssistEntity_o *this, const MethodInfo *method)
{
  AssistMaster_o *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CC6FA4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC6FA4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMaxLevelEntity(Master_object, this->fields.id, v5)) == 0 )
  {
    sub_1C71608(Master_object, v4);
  }
  return Master_object->fields.revision;
}


int32_t AssistEntity__GetMinLevel(AssistEntity_o *this, const MethodInfo *method)
{
  AssistMaster_o *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CC6FA3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC6FA3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMinLevelEntity(Master_object, this->fields.id, v5)) == 0 )
  {
    sub_1C71608(Master_object, v4);
  }
  return Master_object->fields.revision;
}


int32_t AssistEntity__GetOverBoostQuestId(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6FA6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10079/*"OverBoostQuestId"*/);
    byte_4CC6FA6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_10079/*"OverBoostQuestId"*/, 0, 0);
}


System_String_o *AssistEntity__GetReleaseConditionMessage(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6FA1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11297/*"ReleaseConditionMessage"*/);
    byte_4CC6FA1 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11297/*"ReleaseConditionMessage"*/, 0, 0);
}


System_String_o *AssistEntity__GetRenoDetailDialogText(AssistEntity_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x9

  if ( (byte_4CC6FA5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11337/*"RenoDetailDialogText"*/);
    sub_1C713B0(&StringLiteral_15152/*"UnreleasedRenoDetailDialogText"*/);
    byte_4CC6FA5 = 1;
  }
  if ( AssistEntity__IsOpen(this, method) )
    v3 = (System_String_o **)&StringLiteral_11337/*"RenoDetailDialogText"*/;
  else
    v3 = (System_String_o **)&StringLiteral_15152/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v3, 0, 0);
}


bool AssistEntity__IsClearOverBoostQuest(AssistEntity_o *this, const MethodInfo *method)
{
  int32_t OverBoostQuestId; // w19

  if ( (byte_4CC6FA7 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    byte_4CC6FA7 = 1;
  }
  OverBoostQuestId = AssistEntity__GetOverBoostQuestId(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40596552(OverBoostQuestId, -1, 1, 0);
}


bool AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC6F9F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6F9F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C71608(Instance, v6);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0);
}


bool AssistEntity__IsStateUpIconDisp(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6FA2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_13086/*"StateUpIconDisp"*/);
    byte_4CC6FA2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13086/*"StateUpIconDisp"*/, 0, 0) == 1;
}