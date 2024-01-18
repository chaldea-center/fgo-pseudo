void __fastcall MapGimmickPathReleaseEntity___ctor(MapGimmickPathReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41858B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41858B0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapGimmickPathReleaseEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_41858AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_41858AF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapGimmickId,
           priority,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapGimmickPathReleaseEntity__CreatePrimaryKey(
        MapGimmickPathReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapGimmickPathReleaseEntity__CreatePK(this->fields.mapGimmickId, this->fields.priority, v2);
}