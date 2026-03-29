void BattleOverwriteFieldMotionTask___ctor(BattleOverwriteFieldMotionTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 76;
}


void BattleOverwriteFieldMotionTask__Init(
        BattleOverwriteFieldMotionTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_Int32_array *MotionIds; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( !aiEnt )
    sub_1C93D2C(this, aiActEnt);
  MotionIds = AiBaseEntity__GetMotionIds(aiEnt, 0);
  this->fields.overwriteMotionIds = MotionIds;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteMotionIds,
    (int32_t)MotionIds,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


BattleActionData_o *BattleOverwriteFieldMotionTask__MakeActionData(
        BattleOverwriteFieldMotionTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Int32_array *overwriteMotionIds; // x19
  BattleOverwriteFieldMotionActionData_o *v5; // x20

  if ( (byte_4D33D83 & 1) == 0 )
  {
    sub_1C93AD4(&BattleOverwriteFieldMotionActionData_TypeInfo);
    byte_4D33D83 = 1;
  }
  overwriteMotionIds = this->fields.overwriteMotionIds;
  v5 = (BattleOverwriteFieldMotionActionData_o *)sub_1C93D20(BattleOverwriteFieldMotionActionData_TypeInfo);
  BattleOverwriteFieldMotionActionData___ctor(v5, overwriteMotionIds, 0);
  return (BattleActionData_o *)v5;
}