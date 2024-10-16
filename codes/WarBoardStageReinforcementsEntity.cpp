void __fastcall WarBoardStageReinforcementsEntity___ctor(
        WarBoardStageReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB6DB0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6DB0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageReinforcementsEntity__CreatePK(
        int32_t stageId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4AB6DAF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4AB6DAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           id,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageReinforcementsEntity__CreatePrimaryKey(
        WarBoardStageReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageReinforcementsEntity__CreatePK(this->fields.warBoardStageId, this->fields.id, v2);
}


bool __fastcall WarBoardStageReinforcementsEntity__IsOnce(
        WarBoardStageReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.repeatType == 0;
}