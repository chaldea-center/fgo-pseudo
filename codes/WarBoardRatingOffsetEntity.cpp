void WarBoardRatingOffsetEntity___ctor(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB74BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB74BD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.category = 0;
  *(_QWORD *)&this->fields.value2 = 0;
}


void WarBoardRatingOffsetEntity___ctor_43570888(
        WarBoardRatingOffsetEntity_o *this,
        WarBoardRatingOffsetEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB74BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB74BE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C6BC60(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.value2 = *(_QWORD *)&cSrc->fields.value2;
}


int32_t WarBoardRatingOffsetEntity__CreatePrimaryKey(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t WarBoardRatingOffsetEntity__GetCategory(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  return this->fields.category;
}