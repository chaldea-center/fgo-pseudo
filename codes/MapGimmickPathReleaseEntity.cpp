void __fastcall MapGimmickPathReleaseEntity___ctor(MapGimmickPathReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CE9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67CE9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapGimmickPathReleaseEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B67CE8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B67CE8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapGimmickId,
           priority,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapGimmickPathReleaseEntity__CreatePrimaryKey(
        MapGimmickPathReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapGimmickPathReleaseEntity__CreatePK(this->fields.mapGimmickId, this->fields.priority, v2);
}