void WarBoardStageReinforcementsEntity___ctor(WarBoardStageReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A0F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A0F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageReinforcementsEntity__CreatePK(int32_t stageId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5939A0E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A0E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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