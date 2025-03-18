void __fastcall WarBoardRatingOffsetEntity___ctor(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C23011 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C23011 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.category = 0LL;
  *(_QWORD *)&this->fields.value2 = 0LL;
}


void __fastcall WarBoardRatingOffsetEntity___ctor_41825576(
        WarBoardRatingOffsetEntity_o *this,
        WarBoardRatingOffsetEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C23012 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4C23012 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C3B9C0(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.value2 = *(_QWORD *)&cSrc->fields.value2;
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