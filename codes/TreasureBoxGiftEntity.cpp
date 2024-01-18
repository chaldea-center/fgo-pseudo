void __fastcall TreasureBoxGiftEntity___ctor(TreasureBoxGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41899A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41899A0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureBoxGiftEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_418999F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_418999F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureBoxGiftEntity__CreatePrimaryKey(
        TreasureBoxGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxGiftEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}