void __fastcall WarBoardSquareIndexGroupEntity___ctor(WarBoardSquareIndexGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB585E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB585E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardSquareIndexGroupEntity__CreatePK(
        int32_t id,
        int32_t stageId,
        int32_t squareIndex,
        const MethodInfo *method)
{
  if ( (byte_4BB585D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&stageId);
    byte_4BB585D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           stageId,
           squareIndex,
           (const MethodInfo_2F8DB20 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardSquareIndexGroupEntity__CreatePrimaryKey(
        WarBoardSquareIndexGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardSquareIndexGroupEntity__CreatePK(this->fields.id, this->fields.stageId, this->fields.squareIndex, v2);
}