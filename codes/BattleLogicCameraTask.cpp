void BattleLogicCameraTask___ctor(BattleLogicCameraTask_o *this, System_String_o *cameraName, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0);
  BattleLogicTask__setCamera((BattleLogicTask_o *)this, 0);
  this->fields.endCameraName = cameraName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.endCameraName, (int32_t)cameraName, v5, v6, v7, v8, v9, v10);
}