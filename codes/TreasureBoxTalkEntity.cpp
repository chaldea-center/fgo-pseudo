void __fastcall TreasureBoxTalkEntity___ctor(TreasureBoxTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41899A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41899A8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureBoxTalkEntity__CreatePK(
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_41899A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_41899A7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treasureBoxId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureBoxTalkEntity__CreatePrimaryKey(
        TreasureBoxTalkEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxTalkEntity__CreatePK(this->fields.treasureBoxId, this->fields.idx, v2);
}