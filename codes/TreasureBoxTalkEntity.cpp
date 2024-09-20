void __fastcall TreasureBoxTalkEntity___ctor(TreasureBoxTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCBA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BCBA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TreasureBoxTalkEntity__CreatePK(
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A5BCB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5BCB9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treasureBoxId,
           idx,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureBoxTalkEntity__CreatePrimaryKey(
        TreasureBoxTalkEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxTalkEntity__CreatePK(this->fields.treasureBoxId, this->fields.idx, v2);
}