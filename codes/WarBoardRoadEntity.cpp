void __fastcall WarBoardRoadEntity___ctor(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189261 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189261 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardRoadEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  if ( (byte_4189260 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&squareIndex1);
    byte_4189260 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warBoardId,
           squareIndex1,
           squareIndex2,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardRoadEntity__CreatePrimaryKey(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardRoadEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex1, this->fields.squareIndex2, v2);
}