void __fastcall WarBoardRatingBaseEntity___ctor(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418923E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418923E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.viewPoint = 0LL;
  *(_QWORD *)&this->fields.adjustmentValueA2 = 0LL;
}


void __fastcall WarBoardRatingBaseEntity___ctor_27740300(
        WarBoardRatingBaseEntity_o *this,
        WarBoardRatingBaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_418923F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_418923F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  this->fields.type = cSrc->fields.type;
  this->fields.viewPoint = cSrc->fields.viewPoint;
  this->fields.adjustmentValueA1 = cSrc->fields.adjustmentValueA1;
  this->fields.adjustmentValueA2 = cSrc->fields.adjustmentValueA2;
  this->fields.adjustmentValueB = cSrc->fields.adjustmentValueB;
}


int32_t __fastcall WarBoardRatingBaseEntity__CreatePrimaryKey(
        WarBoardRatingBaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}