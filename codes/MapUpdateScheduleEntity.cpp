void __fastcall MapUpdateScheduleEntity___ctor(MapUpdateScheduleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BC02C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BC02C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MapUpdateScheduleEntity__CreatePK(
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  if ( (byte_49BC02B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__long___, mapUpdatedAt);
    byte_49BC02B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           warId,
           mapUpdatedAt,
           (const MethodInfo_2EFFD30 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall MapUpdateScheduleEntity__CreatePrimaryKey(
        MapUpdateScheduleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapUpdateScheduleEntity__CreatePK(this->fields.warId, this->fields.mapUpdatedAt, v2);
}