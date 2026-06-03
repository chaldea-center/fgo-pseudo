void MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BF6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E77BF6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyRoomAddEntity__CreatePK(int32_t id, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4E77BF0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E77BF0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_324D7D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}


int32_t MyRoomAddEntity__GetForceDispBgPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BF5 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19917/*"forceDispBgPriority"*/);
    byte_4E77BF5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19917/*"forceDispBgPriority"*/, 0, 0);
}


int64_t MyRoomAddEntity__GetScheduleUpdateAt(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BF1 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23676/*"scheduleUpdateAt"*/);
    byte_4E77BF1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23676/*"scheduleUpdateAt"*/, 0, 0);
}


int32_t MyRoomAddEntity__GetSortPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BF2 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24040/*"sortPriority"*/);
    byte_4E77BF2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24040/*"sortPriority"*/, 0, 0);
}


bool MyRoomAddEntity__IsOpen(MyRoomAddEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int32_t condValue; // w20
  int32_t condType; // w21
  int64_t condValue2; // x19

  if ( (byte_4E77BF4 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    byte_4E77BF4 = 1;
  }
  if ( this->fields.startedAt > nowTime || this->fields.endedAt < nowTime )
    return 0;
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  condValue2 = this->fields.condValue2;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
}


bool MyRoomAddEntity__IsPhotoCampaign(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BF3 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21345/*"isPhotoCampaign"*/);
    byte_4E77BF3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21345/*"isPhotoCampaign"*/, 0, 0) > 0;
}