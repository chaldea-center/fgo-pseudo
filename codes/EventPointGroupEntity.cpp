void __fastcall EventPointGroupEntity___ctor(EventPointGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1DE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B1DE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventPointGroupEntity__CreatePK(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  if ( (byte_4A5B1DD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B1DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           groupId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventPointGroupEntity__CreatePrimaryKey(
        EventPointGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventPointGroupEntity__CreatePK(this->fields.eventId, this->fields.groupId, v2);
}