void TreasureBoxGiftEntity___ctor(TreasureBoxGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59393E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59393E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TreasureBoxGiftEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_59393E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59393E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *TreasureBoxGiftEntity__CreatePrimaryKey(TreasureBoxGiftEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxGiftEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}