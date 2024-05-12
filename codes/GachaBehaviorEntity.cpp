void __fastcall GachaBehaviorEntity___ctor(GachaBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F132 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438F132 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaBehaviorEntity__CreatePK(int32_t gachaId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_438F131 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438F131 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           svtId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaBehaviorEntity__CreatePrimaryKey(
        GachaBehaviorEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaBehaviorEntity__CreatePK(this->fields.gachaId, this->fields.svtId, v2);
}