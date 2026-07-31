void AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593824C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593824C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_593824B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593824B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *AssistEntity__CreatePrimaryKey(AssistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *AssistEntity__GetDetail(AssistEntity_o *this, bool isShort, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  SkillLvEntity_o *Entity; // x0
  __int64 v8; // x1

  if ( (byte_5938245 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938245 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isShort);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, this->fields.skillId, this->fields.skillLv, 0);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_49837896(Entity, this->fields.skillLv, isShort, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_object )
LABEL_13:
    sub_21FFECC(Master_object, v6);
  return SkillDetailMaster__getDetail((SkillDetailMaster_o *)Master_object, this->fields.skillId, isShort, 0);
}


int32_t AssistEntity__GetOverBoostQuestId(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938249 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10468/*"OverBoostQuestId"*/);
    byte_5938249 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_10468/*"OverBoostQuestId"*/, 0, 0);
}


System_String_o *AssistEntity__GetReleaseConditionMessage(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938246 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11764/*"ReleaseConditionMessage"*/);
    byte_5938246 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11764/*"ReleaseConditionMessage"*/, 0, 0);
}


System_String_o *AssistEntity__GetRenoDetailDialogText(AssistEntity_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x9

  if ( (byte_5938248 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11805/*"RenoDetailDialogText"*/);
    sub_21FFC50(&StringLiteral_15721/*"UnreleasedRenoDetailDialogText"*/);
    byte_5938248 = 1;
  }
  if ( AssistEntity__IsOpen(this, method) )
    v3 = (System_String_o **)&StringLiteral_11805/*"RenoDetailDialogText"*/;
  else
    v3 = (System_String_o **)&StringLiteral_15721/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v3, 0, 0);
}


bool AssistEntity__IsClearOverBoostQuest(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t OverBoostQuestId; // w19

  if ( (byte_593824A & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_593824A = 1;
  }
  OverBoostQuestId = AssistEntity__GetOverBoostQuestId(this, method);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v3);
  return CondType__IsQuestClear_47254560(OverBoostQuestId, -1, 1, 0);
}


bool AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5938244 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938244 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0);
}


bool AssistEntity__IsStateUpIconDisp(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938247 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13598/*"StateUpIconDisp"*/);
    byte_5938247 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13598/*"StateUpIconDisp"*/, 0, 0) == 1;
}