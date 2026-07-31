void WarBoardStageDetailEntity___ctor(WarBoardStageDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59399E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59399E1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageDetailEntity__CreatePK(
        int32_t stageId,
        int32_t warBoardCommonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_59399E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59399E0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           warBoardCommonReleaseId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardStageDetailEntity__CreatePrimaryKey(
        WarBoardStageDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageDetailEntity__CreatePK(this->fields.stageId, this->fields.warBoardCommonReleaseId, v2);
}