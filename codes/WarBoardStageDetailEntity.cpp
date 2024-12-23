void __fastcall WarBoardStageDetailEntity___ctor(WarBoardStageDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C35 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67C35 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageDetailEntity__CreatePK(
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_4B67C34 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&warBoardCommonReleaseId);
    byte_4B67C34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           warBoardCommonReleaseId,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageDetailEntity__CreatePrimaryKey(
        WarBoardStageDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageDetailEntity__CreatePK(this->fields.stageId, this->fields.warBoardCommonReleaseId, v2);
}