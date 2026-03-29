void WarBoardItemEntity___ctor(WarBoardItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31B74 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D31B74 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t WarBoardItemEntity__CreatePrimaryKey(WarBoardItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}