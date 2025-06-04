void __fastcall WarBoardRatingBaseEntity___ctor(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0317B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B0317B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.viewPoint = 0LL;
  *(_QWORD *)&this->fields.adjustmentValueA2 = 0LL;
}


void __fastcall WarBoardRatingBaseEntity___ctor_42296692(
        WarBoardRatingBaseEntity_o *this,
        WarBoardRatingBaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B0317C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4B0317C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BC3264(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.adjustmentValueA2 = *(_QWORD *)&cSrc->fields.adjustmentValueA2;
}


int32_t __fastcall WarBoardRatingBaseEntity__CreatePrimaryKey(
        WarBoardRatingBaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}