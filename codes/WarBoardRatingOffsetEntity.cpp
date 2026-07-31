void WarBoardRatingOffsetEntity___ctor(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59398D4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59398D4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.category = 0;
  *(_QWORD *)&this->fields.value2 = 0;
}


int32_t WarBoardRatingOffsetEntity__CreatePrimaryKey(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t WarBoardRatingOffsetEntity__GetCategory(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  return this->fields.category;
}