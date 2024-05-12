void __fastcall GachaAppendEntity___ctor(GachaAppendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F126 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438F126 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaAppendEntity__CreatePK(int32_t gachaId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438F125 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438F125 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaAppendEntity__CreatePrimaryKey(GachaAppendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaAppendEntity__CreatePK(this->fields.gachaId, this->fields.idx, v2);
}