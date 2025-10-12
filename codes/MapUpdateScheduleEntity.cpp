void MapUpdateScheduleEntity___ctor(MapUpdateScheduleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38C7C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38C7C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapUpdateScheduleEntity__CreatePK(int32_t warId, int64_t mapUpdatedAt, const MethodInfo *method)
{
  if ( (byte_4C38C7B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__long___);
    byte_4C38C7B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__long_(
           warId,
           mapUpdatedAt,
           (const MethodInfo_30DB5FC *)Method_DataEntityBase_CreateMultiplePK_int__long___);
}


System_String_o *MapUpdateScheduleEntity__CreatePrimaryKey(MapUpdateScheduleEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapUpdateScheduleEntity__CreatePK(this->fields.warId, this->fields.mapUpdatedAt, v2);
}