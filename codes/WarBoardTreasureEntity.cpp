void WarBoardTreasureEntity___ctor(WarBoardTreasureEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8656 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC8656 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t WarBoardTreasureEntity__CreatePrimaryKey(WarBoardTreasureEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}