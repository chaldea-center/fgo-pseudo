void __fastcall ServantTransformEntity___ctor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DCCA & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DCCA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantTransformEntity__CreatePK(
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  if ( (byte_438DCC9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438DCC9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           befSvtId,
           befDispLimitCount,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantTransformEntity__CreatePrimaryKey(
        ServantTransformEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTransformEntity__CreatePK(this->fields.befSvtId, this->fields.befDispLimitCount, v2);
}