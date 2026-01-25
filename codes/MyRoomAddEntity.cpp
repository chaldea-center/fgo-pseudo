void MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEBB9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEBB9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyRoomAddEntity__CreatePK(int32_t id, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CEEBB5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEEBB5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}


int64_t MyRoomAddEntity__GetScheduleUpdateAt(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEBB6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23428/*"scheduleUpdateAt"*/);
    byte_4CEEBB6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23428/*"scheduleUpdateAt"*/, 0, 0);
}


int32_t MyRoomAddEntity__GetSortPriority(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEBB7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23788/*"sortPriority"*/);
    byte_4CEEBB7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23788/*"sortPriority"*/, 0, 0);
}


bool MyRoomAddEntity__IsOpen(MyRoomAddEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int32_t condValue; // w20
  int32_t condType; // w21
  int64_t condValue2; // x19

  if ( (byte_4CEEBB8 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEEBB8 = 1;
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