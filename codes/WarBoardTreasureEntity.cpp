void __fastcall WarBoardTreasureEntity___ctor(WarBoardTreasureEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70ECB & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_int___ctor__, method);
    byte_4A70ECB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_312C3A8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall WarBoardTreasureEntity__CreatePrimaryKey(WarBoardTreasureEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}