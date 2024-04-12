void __fastcall TreasureBoxTalkEntity___ctor(TreasureBoxTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2346 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2346 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureBoxTalkEntity__CreatePK(
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42B2345 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2345 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treasureBoxId,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureBoxTalkEntity__CreatePrimaryKey(
        TreasureBoxTalkEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxTalkEntity__CreatePK(this->fields.treasureBoxId, this->fields.idx, v2);
}