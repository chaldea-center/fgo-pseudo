void WarBoardStageReinforcementsEntity___ctor(WarBoardStageReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF878 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF878 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageReinforcementsEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4CEF877 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF877 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardStageReinforcementsEntity__CreatePrimaryKey(
        WarBoardStageReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageReinforcementsEntity__CreatePK(this->fields.warBoardStageId, this->fields.id, v2);
}


bool WarBoardStageReinforcementsEntity__IsOnce(WarBoardStageReinforcementsEntity_o *this, const MethodInfo *method)
{
  return this->fields.repeatType == 0;
}