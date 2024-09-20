void __fastcall EventAddEntity___ctor(EventAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B005 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B005 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventAddEntity__CreatePK(
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B004 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B004 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           overwriteType,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventAddEntity__CreatePrimaryKey(EventAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventAddEntity__CreatePK(this->fields.eventId, this->fields.overwriteType, this->fields.priority, v2);
}