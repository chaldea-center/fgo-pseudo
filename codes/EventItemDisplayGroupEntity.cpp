void __fastcall EventItemDisplayGroupEntity___ctor(EventItemDisplayGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188D40 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188D40 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventItemDisplayGroupEntity__CreatePK(
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  if ( (byte_4188D3F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&groupIndex);
    byte_4188D3F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           groupIndex,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventItemDisplayGroupEntity__CreatePrimaryKey(
        EventItemDisplayGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventItemDisplayGroupEntity__CreatePK(this->fields.eventId, this->fields.groupIndex, v2);
}