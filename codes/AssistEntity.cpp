void __fastcall AssistEntity___ctor(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01C14 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B01C14 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AssistEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4B01C13 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B01C13 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B01C0B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_SkillDetailMaster___, isShort);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    byte_4B01C0B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, this->fields.skillId, this->fields.skillLv, 0LL);
  if ( Entity && Entity->fields.skillDetailId > 1 )
    return SkillLvEntity__getDetail_41860604(Entity, this->fields.skillLv, isShort, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillDetailMaster___);
  if ( !Master_object )
LABEL_13:
    sub_1BC3264(Master_object, v8);
  return SkillDetailMaster__getDetail((SkillDetailMaster_o *)Master_object, this->fields.skillId, isShort, 0LL);
}


int32_t __fastcall AssistEntity__GetMaxLevel(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssistMaster_o *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B01C0F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AssistMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B01C0F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMaxLevelEntity(Master_object, this->fields.id, v6)) == 0LL )
  {
    sub_1BC3264(Master_object, v5);
  }
  return Master_object->fields.revision;
}


int32_t __fastcall AssistEntity__GetMinLevel(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssistMaster_o *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B01C0E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AssistMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B01C0E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object
    || (Master_object = (AssistMaster_o *)AssistMaster__GetMinLevelEntity(Master_object, this->fields.id, v6)) == 0LL )
  {
    sub_1BC3264(Master_object, v5);
  }
  return Master_object->fields.revision;
}


int32_t __fastcall AssistEntity__GetOverBoostQuestId(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01C11 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_9988/*"OverBoostQuestId"*/, method);
    byte_4B01C11 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_9988/*"OverBoostQuestId"*/, 0, 0LL);
}


System_String_o *__fastcall AssistEntity__GetReleaseConditionMessage(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01C0C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11177/*"ReleaseConditionMessage"*/, method);
    byte_4B01C0C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11177/*"ReleaseConditionMessage"*/, 0LL, 0LL);
}


System_String_o *__fastcall AssistEntity__GetRenoDetailDialogText(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **v4; // x9

  if ( (byte_4B01C10 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11217/*"RenoDetailDialogText"*/, method);
    sub_1BC3008(&StringLiteral_15016/*"UnreleasedRenoDetailDialogText"*/, v3);
    byte_4B01C10 = 1;
  }
  if ( AssistEntity__IsOpen(this, method) )
    v4 = (System_String_o **)&StringLiteral_11217/*"RenoDetailDialogText"*/;
  else
    v4 = (System_String_o **)&StringLiteral_15016/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v4, 0LL, 0LL);
}


bool __fastcall AssistEntity__IsClearOverBoostQuest(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  int64_t userIdNumber; // x21
  __int64 OverBoostQuestId; // x0
  __int64 v10; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B01C12 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserQuestMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    byte_4B01C12 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    byte_4AFC1F1 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  userIdNumber = v7->static_fields->userIdNumber;
  OverBoostQuestId = AssistEntity__GetOverBoostQuestId(this, v5);
  if ( !Master_object )
    goto LABEL_16;
  OverBoostQuestId = UserQuestMaster__TryGetEntity(
                       (UserQuestMaster_o *)Master_object,
                       &entity,
                       userIdNumber,
                       OverBoostQuestId,
                       0LL);
  if ( (OverBoostQuestId & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum > 0;
LABEL_16:
    sub_1BC3264(OverBoostQuestId, v10);
  }
  return 0;
}


bool __fastcall AssistEntity__IsOpen(AssistEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4B01C0A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B01C0A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v8);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, v9);
}


bool __fastcall AssistEntity__IsStateUpIconDisp(AssistEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B01C0D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12951/*"StateUpIconDisp"*/, method);
    byte_4B01C0D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12951/*"StateUpIconDisp"*/, 0, 0LL) == 1;
}