void __fastcall MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2233B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2233B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MyRoomAddEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C22339 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4C22339 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_2FEE81C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}


int64_t __fastcall MyRoomAddEntity__GetScheduleUpdateAt(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2233A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23519/*"targetGroupId"*/, method);
    byte_4C2233A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23519/*"targetGroupId"*/, 0, 0LL);
}