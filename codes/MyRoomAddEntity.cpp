void MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DC6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970DC6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyRoomAddEntity__CreatePK(int32_t id, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5970DC0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970DC0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}


int32_t MyRoomAddEntity__GetForceDispBgPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DC5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20481/*"forceDispBgPriority"*/);
    byte_5970DC5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20481/*"forceDispBgPriority"*/, 0, 0);
}


int64_t MyRoomAddEntity__GetScheduleUpdateAt(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DC1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24414/*"scheduleUpdateAt"*/);
    byte_5970DC1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24414/*"scheduleUpdateAt"*/, 0, 0);
}


int32_t MyRoomAddEntity__GetSortPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DC2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24814/*"sortPriority"*/);
    byte_5970DC2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24814/*"sortPriority"*/, 0, 0);
}


bool MyRoomAddEntity__IsOpen(MyRoomAddEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condValue; // w21
  int64_t condValue2; // x19

  if ( (byte_5970DC4 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5970DC4 = 1;
  }
  if ( this->fields.startedAt > nowTime || this->fields.endedAt < nowTime )
    return 0;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValue2 = this->fields.condValue2;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, nowTime);
  return CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
}


bool MyRoomAddEntity__IsPhotoCampaign(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970DC3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21964/*"isPhotoCampaign"*/);
    byte_5970DC3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21964/*"isPhotoCampaign"*/, 0, 0) > 0;
}