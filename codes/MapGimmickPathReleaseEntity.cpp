void __fastcall MapGimmickPathReleaseEntity___ctor(MapGimmickPathReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E588 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E588 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MapGimmickPathReleaseEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438E587 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E587 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapGimmickId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapGimmickPathReleaseEntity__CreatePrimaryKey(
        MapGimmickPathReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapGimmickPathReleaseEntity__CreatePK(this->fields.mapGimmickId, this->fields.priority, v2);
}