void __fastcall WarBoardStageDetailEntity___ctor(WarBoardStageDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D2AD & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D2AD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardStageDetailEntity__CreatePK(
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_438D2AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D2AC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           warBoardCommonReleaseId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageDetailEntity__CreatePrimaryKey(
        WarBoardStageDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageDetailEntity__CreatePK(this->fields.stageId, this->fields.warBoardCommonReleaseId, v2);
}