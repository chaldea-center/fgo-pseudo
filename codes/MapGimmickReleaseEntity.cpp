void __fastcall MapGimmickReleaseEntity___ctor(MapGimmickReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E591 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E591 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MapGimmickReleaseEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438E590 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E590 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           mapGimmickId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapGimmickReleaseEntity__CreatePrimaryKey(
        MapGimmickReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapGimmickReleaseEntity__CreatePK(this->fields.mapGimmickId, this->fields.priority, v2);
}