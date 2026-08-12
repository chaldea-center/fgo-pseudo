void WarBoardRatingBaseEntity___ctor(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971A93 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5971A93 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.viewPoint = 0;
  *(_QWORD *)&this->fields.adjustmentValueA2 = 0;
}


int32_t WarBoardRatingBaseEntity__CreatePrimaryKey(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}