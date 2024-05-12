void __fastcall TreasureBoxGiftEntity___ctor(TreasureBoxGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D640 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D640 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureBoxGiftEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438D63F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D63F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureBoxGiftEntity__CreatePrimaryKey(
        TreasureBoxGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxGiftEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}