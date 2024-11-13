void __fastcall WarBoardSquareIndexGroupEntity___ctor(WarBoardSquareIndexGroupEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17324 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B17324 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardSquareIndexGroupEntity__CreatePK(
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_4B17323 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&stageId, *(_QWORD *)&squareIndex);
    byte_4B17323 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           stageId,
           squareIndex,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardSquareIndexGroupEntity__CreatePrimaryKey(
        WarBoardSquareIndexGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardSquareIndexGroupEntity__CreatePK(this->fields.id, this->fields.stageId, this->fields.squareIndex, v2);
}