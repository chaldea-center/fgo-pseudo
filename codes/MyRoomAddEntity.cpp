void MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C13 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938C13 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyRoomAddEntity__CreatePK(int32_t id, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5938C0D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938C0D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}


int32_t MyRoomAddEntity__GetForceDispBgPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C12 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20440/*"forceDispBgPriority"*/);
    byte_5938C12 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20440/*"forceDispBgPriority"*/, 0, 0);
}


int64_t MyRoomAddEntity__GetScheduleUpdateAt(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C0E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24366/*"scheduleUpdateAt"*/);
    byte_5938C0E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24366/*"scheduleUpdateAt"*/, 0, 0);
}


int32_t MyRoomAddEntity__GetSortPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C0F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24766/*"sortPriority"*/);
    byte_5938C0F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24766/*"sortPriority"*/, 0, 0);
}


bool MyRoomAddEntity__IsOpen(MyRoomAddEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condValue; // w21
  int64_t condValue2; // x19

  if ( (byte_5938C11 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938C11 = 1;
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
  if ( (byte_5938C10 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21922/*"isPhotoCampaign"*/);
    byte_5938C10 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21922/*"isPhotoCampaign"*/, 0, 0) > 0;
}