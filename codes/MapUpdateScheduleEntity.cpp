void MapUpdateScheduleEntity___ctor(MapUpdateScheduleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31C85 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31C85 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapUpdateScheduleEntity__CreatePK(int32_t warId, int64_t mapUpdatedAt, const MethodInfo *method)
{
  if ( (byte_4D31C84 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__long___);
    byte_4D31C84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           warId,
           mapUpdatedAt,
           (const MethodInfo_31A2C48 *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *MapUpdateScheduleEntity__CreatePrimaryKey(MapUpdateScheduleEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapUpdateScheduleEntity__CreatePK(this->fields.warId, this->fields.mapUpdatedAt, v2);
}