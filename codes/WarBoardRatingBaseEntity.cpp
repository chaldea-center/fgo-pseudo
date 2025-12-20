void WarBoardRatingBaseEntity___ctor(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA79 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2DA79 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.viewPoint = 0;
  *(_QWORD *)&this->fields.adjustmentValueA2 = 0;
}


void WarBoardRatingBaseEntity___ctor_44111644(
        WarBoardRatingBaseEntity_o *this,
        WarBoardRatingBaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2DA7A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2DA7A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C942F0(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.adjustmentValueA2 = *(_QWORD *)&cSrc->fields.adjustmentValueA2;
}


int32_t WarBoardRatingBaseEntity__CreatePrimaryKey(WarBoardRatingBaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}