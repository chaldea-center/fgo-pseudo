void __fastcall EventPointUpperEntity___ctor(EventPointUpperEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41878FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41878FA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointUpperEntity__CreatePK(
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_41878F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id);
    byte_41878F9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           version,
           id,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventPointUpperEntity__CreatePrimaryKey(
        EventPointUpperEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventPointUpperEntity__CreatePK(this->fields.version, this->fields.id, this->fields.priority, v2);
}