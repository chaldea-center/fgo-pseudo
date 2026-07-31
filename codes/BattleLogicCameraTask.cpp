void BattleLogicCameraTask___ctor(BattleLogicCameraTask_o *this, System_String_o *cameraName, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  BattleLogicTask__setCamera((BattleLogicTask_o *)this, 0);
  this->fields.endCameraName = cameraName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCameraName,
    (int32_t)cameraName,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}