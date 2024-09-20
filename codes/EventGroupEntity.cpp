void __fastcall EventGroupEntity___ctor(EventGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B11F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B11F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventGroupEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4A5B11E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B11E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventGroupEntity__CreatePrimaryKey(EventGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventGroupEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}