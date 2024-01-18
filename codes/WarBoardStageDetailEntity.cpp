void __fastcall WarBoardStageDetailEntity___ctor(WarBoardStageDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41892EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41892EB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageDetailEntity__CreatePK(
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_41892EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&warBoardCommonReleaseId);
    byte_41892EA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           warBoardCommonReleaseId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageDetailEntity__CreatePrimaryKey(
        WarBoardStageDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageDetailEntity__CreatePK(this->fields.stageId, this->fields.warBoardCommonReleaseId, v2);
}