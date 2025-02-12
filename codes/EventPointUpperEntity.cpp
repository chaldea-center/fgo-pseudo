void __fastcall EventPointUpperEntity___ctor(EventPointUpperEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7B29 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7B29 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointUpperEntity__CreatePK(
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4BC7B28 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id);
    byte_4BC7B28 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           version,
           id,
           priority,
           (const MethodInfo_2F9DB44 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventPointUpperEntity__CreatePrimaryKey(
        EventPointUpperEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventPointUpperEntity__CreatePK(this->fields.version, this->fields.id, this->fields.priority, v2);
}