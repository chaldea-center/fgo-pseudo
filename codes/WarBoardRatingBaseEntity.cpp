void __fastcall WarBoardRatingBaseEntity___ctor(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBA51 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FBA51 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.viewPoint = 0LL;
  *(_QWORD *)&this->fields.adjustmentValueA2 = 0LL;
}


void __fastcall WarBoardRatingBaseEntity___ctor_28160960(
        WarBoardRatingBaseEntity_o *this,
        WarBoardRatingBaseEntity_o *cSrc,
        const MethodInfo *method)
{
  if ( (byte_40FBA52 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40FBA52 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
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