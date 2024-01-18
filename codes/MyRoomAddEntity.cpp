void __fastcall MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185C59 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185C59 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MyRoomAddEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4185C58 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4185C58 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}