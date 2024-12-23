void __fastcall TreasureBoxTalkEntity___ctor(TreasureBoxTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67763 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67763 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureBoxTalkEntity__CreatePK(
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B67762 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B67762 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           treasureBoxId,
           idx,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TreasureBoxTalkEntity__CreatePrimaryKey(
        TreasureBoxTalkEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TreasureBoxTalkEntity__CreatePK(this->fields.treasureBoxId, this->fields.idx, v2);
}