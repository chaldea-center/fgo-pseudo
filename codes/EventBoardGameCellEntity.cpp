void __fastcall EventBoardGameCellEntity___ctor(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2666 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2666 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBoardGameCellEntity__CreatePK(
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  if ( (byte_42B2665 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2665 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           cellId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBoardGameCellEntity__CreatePrimaryKey(
        EventBoardGameCellEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameCellEntity__CreatePK(this->fields.eventId, this->fields.cellId, v2);
}


int32_t __fastcall EventBoardGameCellEntity__GetCellType(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  return this->fields.cellType;
}