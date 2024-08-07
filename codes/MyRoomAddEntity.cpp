void __fastcall MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEC3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEEC3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MyRoomAddEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FEEC2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_49FEEC2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}