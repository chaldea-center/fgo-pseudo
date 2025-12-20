void AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C41C & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C41C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D2C41B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2C41B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4D2C413 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C413 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, this->fields.skillId, this->fields.skillLv, 0);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_43660652(Entity, this->fields.skillLv, isShort, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_object )
LABEL_13:
    sub_1C942F0(Master_object, v6);
  return SkillDetailMaster__getDetail((SkillDetailMaster_o *)Master_object, this->fields.skillId, isShort, 0);
}


int32_t AssistEntity__GetMaxLevel(AssistEntity_o *this, const MethodInfo *method)
{
  AssistMaster_o *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2C417 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C417 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMaxLevelEntity(Master_object, this->fields.id, v5)) == 0 )
  {
    sub_1C942F0(Master_object, v4);
  }
  return Master_object->fields.revision;
}


int32_t AssistEntity__GetMinLevel(AssistEntity_o *this, const MethodInfo *method)
{
  AssistMaster_o *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2C416 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C416 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMinLevelEntity(Master_object, this->fields.id, v5)) == 0 )
  {
    sub_1C942F0(Master_object, v4);
  }
  return Master_object->fields.revision;
}


int32_t AssistEntity__GetOverBoostQuestId(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C419 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10100/*"OverBoostQuestId"*/);
    byte_4D2C419 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_10100/*"OverBoostQuestId"*/, 0, 0);
}


System_String_o *AssistEntity__GetReleaseConditionMessage(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C414 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_11338/*"ReleaseConditionMessage"*/);
    byte_4D2C414 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11338/*"ReleaseConditionMessage"*/, 0, 0);
}


System_String_o *AssistEntity__GetRenoDetailDialogText(AssistEntity_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x9

  if ( (byte_4D2C418 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_11378/*"RenoDetailDialogText"*/);
    sub_1C94098(&StringLiteral_15205/*"UnreleasedRenoDetailDialogText"*/);
    byte_4D2C418 = 1;
  }
  if ( AssistEntity__IsOpen(this, method) )
    v3 = (System_String_o **)&StringLiteral_11378/*"RenoDetailDialogText"*/;
  else
    v3 = (System_String_o **)&StringLiteral_15205/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v3, 0, 0);
}


bool AssistEntity__IsClearOverBoostQuest(AssistEntity_o *this, const MethodInfo *method)
{
  int32_t OverBoostQuestId; // w19

  if ( (byte_4D2C41A & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2C41A = 1;
  }
  OverBoostQuestId = AssistEntity__GetOverBoostQuestId(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_41072884(OverBoostQuestId, -1, 1, 0);
}


bool AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2C412 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C412 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v6);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0);
}


bool AssistEntity__IsStateUpIconDisp(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C415 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_13130/*"StateUpIconDisp"*/);
    byte_4D2C415 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13130/*"StateUpIconDisp"*/, 0, 0) == 1;
}