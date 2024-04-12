void __fastcall EventGroupEntity___ctor(EventGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1DE5 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1DE5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventGroupEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_42B1DE4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B1DE4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventGroupEntity__CreatePrimaryKey(EventGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventGroupEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}