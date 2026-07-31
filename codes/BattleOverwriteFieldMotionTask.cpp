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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( !aiEnt )
    sub_21FFECC(this, aiActEnt);
  MotionIds = AiBaseEntity__GetMotionIds(aiEnt, 0);
  this->fields.overwriteMotionIds = MotionIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteMotionIds,
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

  if ( (byte_593BB44 & 1) == 0 )
  {
    sub_21FFC50(&BattleOverwriteFieldMotionActionData_TypeInfo);
    byte_593BB44 = 1;
  }
  overwriteMotionIds = this->fields.overwriteMotionIds;
  v5 = (BattleOverwriteFieldMotionActionData_o *)sub_21FFEBC(BattleOverwriteFieldMotionActionData_TypeInfo);
  BattleOverwriteFieldMotionActionData___ctor(v5, overwriteMotionIds, 0);
  return (BattleActionData_o *)v5;
}