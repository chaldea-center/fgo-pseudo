void __fastcall EventPointGroupEntity___ctor(EventPointGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B565 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B565 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventPointGroupEntity__CreatePK(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  if ( (byte_438B564 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B564 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           groupId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventPointGroupEntity__CreatePrimaryKey(
        EventPointGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventPointGroupEntity__CreatePK(this->fields.eventId, this->fields.groupId, v2);
}