void WarBoardActionTrendGroupEntity___ctor(WarBoardActionTrendGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28402 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C28402 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t WarBoardActionTrendGroupEntity__CreatePrimaryKey(
        WarBoardActionTrendGroupEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}