void __fastcall WarBoardMessageEntity___ctor(WarBoardMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418651F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418651F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardMessageEntity__CreatePK(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418651E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&sceneType);
    byte_418651E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           sceneType,
           idx,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardMessageEntity__CreatePrimaryKey(
        WarBoardMessageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardMessageEntity__CreatePK(this->fields.stageId, this->fields.sceneType, this->fields.idx, v2);
}