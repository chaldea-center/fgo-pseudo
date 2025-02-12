void __fastcall WarBoardRoadEntity___ctor(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5742 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB5742 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardRoadEntity__CreatePK(
        int32_t warBoardId,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  if ( (byte_4BB5741 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&squareIndex1);
    byte_4BB5741 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warBoardId,
           squareIndex1,
           squareIndex2,
           (const MethodInfo_2F8DB20 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardRoadEntity__CreatePrimaryKey(WarBoardRoadEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardRoadEntity__CreatePK(this->fields.warBoardId, this->fields.squareIndex1, this->fields.squareIndex2, v2);
}