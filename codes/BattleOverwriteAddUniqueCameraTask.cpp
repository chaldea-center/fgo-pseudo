void BattleOverwriteAddUniqueCameraTask___ctor(BattleOverwriteAddUniqueCameraTask_o *this, const MethodInfo *method)
{
  BaseAiActBattleLogicTask___ctor((BaseAiActBattleLogicTask_o *)this, 80, 0);
}


void BattleOverwriteAddUniqueCameraTask__Init(
        BattleOverwriteAddUniqueCameraTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_Int32_array *CameraIds; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( !aiEnt )
    sub_21FFECC(this, aiActEnt);
  CameraIds = AiBaseEntity__GetCameraIds(aiEnt, 0);
  this->fields.overwriteAddUniqueCameraIds = CameraIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteAddUniqueCameraIds,
    (int32_t)CameraIds,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


BattleActionData_o *BattleOverwriteAddUniqueCameraTask__MakeActionData(
        BattleOverwriteAddUniqueCameraTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Int32_array *overwriteAddUniqueCameraIds; // x20
  BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *v5; // x19
  BattleActionData_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_593BC20 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_TypeInfo);
    byte_593BC20 = 1;
  }
  overwriteAddUniqueCameraIds = this->fields.overwriteAddUniqueCameraIds;
  v5 = (BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *)sub_21FFEBC(BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_TypeInfo);
  BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___ctor(v5, overwriteAddUniqueCameraIds, 0);
  v6 = (BattleActionData_o *)sub_21FFEBC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v6, 0);
  if ( !v6 )
    sub_21FFECC(v7, v8);
  return BattleActionData__SetWaitCond(v6, (BattleActionWaitCond_Base_o *)v5, 0);
}