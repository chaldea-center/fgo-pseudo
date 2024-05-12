void __fastcall EventItemDisplayGroupEntity___ctor(EventItemDisplayGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C651 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C651 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventItemDisplayGroupEntity__CreatePK(
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  if ( (byte_438C650 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438C650 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           groupIndex,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventItemDisplayGroupEntity__CreatePrimaryKey(
        EventItemDisplayGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventItemDisplayGroupEntity__CreatePK(this->fields.eventId, this->fields.groupIndex, v2);
}