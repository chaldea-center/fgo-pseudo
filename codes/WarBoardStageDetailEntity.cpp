void __fastcall WarBoardStageDetailEntity___ctor(WarBoardStageDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C17C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C17C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardStageDetailEntity__CreatePK(
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_4A5C17B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C17B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           warBoardCommonReleaseId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageDetailEntity__CreatePrimaryKey(
        WarBoardStageDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageDetailEntity__CreatePK(this->fields.stageId, this->fields.warBoardCommonReleaseId, v2);
}