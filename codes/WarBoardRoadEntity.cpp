void __fastcall WarBoardRoadEntity___ctor(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17219 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B17219 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardRoadEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  if ( (byte_4B17218 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int___,
      *(_QWORD *)&squareIndex1,
      *(_QWORD *)&squareIndex2);
    byte_4B17218 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warBoardId,
           squareIndex1,
           squareIndex2,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardRoadEntity__CreatePrimaryKey(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardRoadEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex1, this->fields.squareIndex2, v2);
}