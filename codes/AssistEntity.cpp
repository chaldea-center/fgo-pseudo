void __fastcall AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C10E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C10E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4B1C10D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B1C10D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AssistEntity__CreatePrimaryKey(AssistEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AssistEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AssistEntity__GetDetail(AssistEntity_o *this, bool isShort, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B1C105 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillDetailMaster___, isShort);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    byte_4B1C105 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, this->fields.skillId, this->fields.skillLv, 0LL);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_42023016(Entity, this->fields.skillLv, isShort, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_object )
LABEL_13:
    sub_1BCB254(Master_object, v8);
  return SkillDetailMaster__getDetail((SkillDetailMaster_o *)Master_object, this->fields.skillId, isShort, 0LL);
}


int32_t __fastcall AssistEntity__GetMaxLevel(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssistMaster_o *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1C109 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_AssistMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1C109 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMaxLevelEntity(Master_object, this->fields.id, v6)) == 0LL )
  {
    sub_1BCB254(Master_object, v5);
  }
  return Master_object->fields.revision;
}


int32_t __fastcall AssistEntity__GetMinLevel(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssistMaster_o *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1C108 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_AssistMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1C108 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMinLevelEntity(Master_object, this->fields.id, v6)) == 0LL )
  {
    sub_1BCB254(Master_object, v5);
  }
  return Master_object->fields.revision;
}


int32_t __fastcall AssistEntity__GetOverBoostQuestId(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C10B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9999/*"OverBoostQuestId"*/, method);
    byte_4B1C10B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_9999/*"OverBoostQuestId"*/, 0, 0LL);
}


System_String_o *__fastcall AssistEntity__GetReleaseConditionMessage(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C106 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11188/*"ReleaseConditionMessage"*/, method);
    byte_4B1C106 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11188/*"ReleaseConditionMessage"*/, 0LL, 0LL);
}


System_String_o *__fastcall AssistEntity__GetRenoDetailDialogText(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **v4; // x9

  if ( (byte_4B1C10A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11228/*"RenoDetailDialogText"*/, method);
    sub_1BCAFF8(&StringLiteral_15028/*"UnreleasedRenoDetailDialogText"*/, v3);
    byte_4B1C10A = 1;
  }
  if ( AssistEntity__IsOpen(this, method) )
    v4 = (System_String_o **)&StringLiteral_11228/*"RenoDetailDialogText"*/;
  else
    v4 = (System_String_o **)&StringLiteral_15028/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v4, 0LL, 0LL);
}


bool __fastcall AssistEntity__IsClearOverBoostQuest(AssistEntity_o *this, const MethodInfo *method)
{
  int32_t OverBoostQuestId; // w19

  if ( (byte_4B1C10C & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C10C = 1;
  }
  OverBoostQuestId = AssistEntity__GetOverBoostQuestId(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39516796(OverBoostQuestId, -1, 1, 0LL);
}


bool __fastcall AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4B1C104 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1C104 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, v9);
}


bool __fastcall AssistEntity__IsStateUpIconDisp(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C107 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12963/*"StateUpIconDisp"*/, method);
    byte_4B1C107 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12963/*"StateUpIconDisp"*/, 0, 0LL) == 1;
}