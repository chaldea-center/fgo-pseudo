void __fastcall MapUpdateScheduleEntity___ctor(MapUpdateScheduleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E5BB & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E5BB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MapUpdateScheduleEntity__CreatePK(
        int32_t warId,
        int64_t mapUpdatedAt,
        const MethodInfo *method)
{
  if ( (byte_438E5BA & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__long___);
    byte_438E5BA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           warId,
           mapUpdatedAt,
           (const MethodInfo_1D17254 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *__fastcall MapUpdateScheduleEntity__CreatePrimaryKey(
        MapUpdateScheduleEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapUpdateScheduleEntity__CreatePK(this->fields.warId, this->fields.mapUpdatedAt, v2);
}