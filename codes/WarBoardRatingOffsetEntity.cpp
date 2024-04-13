void __fastcall WarBoardRatingOffsetEntity___ctor(WarBoardRatingOffsetEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAB21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAB21 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.category = 0LL;
  *(_QWORD *)&this->fields.value2 = 0LL;
}


void __fastcall WarBoardRatingOffsetEntity___ctor_29112216(
        WarBoardRatingOffsetEntity_o *this,
        WarBoardRatingOffsetEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EAB22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42EAB22 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
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