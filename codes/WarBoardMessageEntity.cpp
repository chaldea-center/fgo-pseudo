void __fastcall WarBoardMessageEntity___ctor(WarBoardMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438AE90 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438AE90 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardMessageEntity__CreatePK(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_438AE8F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438AE8F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           sceneType,
           idx,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardMessageEntity__CreatePrimaryKey(
        WarBoardMessageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardMessageEntity__CreatePK(this->fields.stageId, this->fields.sceneType, this->fields.idx, v2);
}