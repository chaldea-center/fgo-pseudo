void MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E04F6D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E04F6D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyRoomAddEntity__CreatePK(int32_t id, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4E04F67 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E04F67 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_32029C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}


int32_t MyRoomAddEntity__GetForceDispBgPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E04F6C & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_19830/*"forceDispBgPriority"*/);
    byte_4E04F6C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19830/*"forceDispBgPriority"*/, 0, 0);
}


int64_t MyRoomAddEntity__GetScheduleUpdateAt(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E04F68 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_23574/*"scheduleUpdateAt"*/);
    byte_4E04F68 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23574/*"scheduleUpdateAt"*/, 0, 0);
}


int32_t MyRoomAddEntity__GetSortPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E04F69 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_23938/*"sortPriority"*/);
    byte_4E04F69 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23938/*"sortPriority"*/, 0, 0);
}


bool MyRoomAddEntity__IsOpen(MyRoomAddEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int32_t condValue; // w20
  int32_t condType; // w21
  int64_t condValue2; // x19

  if ( (byte_4E04F6B & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    byte_4E04F6B = 1;
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
  if ( (byte_4E04F6A & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_21254/*"isPhotoCampaign"*/);
    byte_4E04F6A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21254/*"isPhotoCampaign"*/, 0, 0) > 0;
}