void __fastcall EventBoardGameCellEntity___ctor(EventBoardGameCellEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB885 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB885 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBoardGameCellEntity__CreatePK(
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EB884 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, cellId, (_DWORD)method, v3);
    byte_42EB884 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           cellId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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