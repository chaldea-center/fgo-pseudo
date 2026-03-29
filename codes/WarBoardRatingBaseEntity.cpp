void WarBoardRatingBaseEntity___ctor(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31B9D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D31B9D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.viewPoint = 0;
  *(_QWORD *)&this->fields.adjustmentValueA2 = 0;
}


int32_t WarBoardRatingBaseEntity__CreatePrimaryKey(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}