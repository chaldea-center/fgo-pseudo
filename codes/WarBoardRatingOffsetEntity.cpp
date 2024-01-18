void __fastcall WarBoardRatingOffsetEntity___ctor(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189241 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4189241 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.category = 0LL;
  *(_QWORD *)&this->fields.value2 = 0LL;
}


void __fastcall WarBoardRatingOffsetEntity___ctor_27740632(
        WarBoardRatingOffsetEntity_o *this,
        WarBoardRatingOffsetEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4189242 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4189242 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  this->fields.category = cSrc->fields.category;
  this->fields.type = cSrc->fields.type;
  this->fields.value = cSrc->fields.value;
  this->fields.value2 = cSrc->fields.value2;
  this->fields.addValue = cSrc->fields.addValue;
}


int32_t __fastcall WarBoardRatingOffsetEntity__CreatePrimaryKey(
        WarBoardRatingOffsetEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall WarBoardRatingOffsetEntity__GetCategory(
        WarBoardRatingOffsetEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.category;
}