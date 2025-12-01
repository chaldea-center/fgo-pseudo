void BattleLogicCameraTask___ctor(BattleLogicCameraTask_o *this, System_String_o *cameraName, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v4 = (GrandQuestFolderBoardItem_o *)this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)cameraName);
  v4->fields._ClosedMessage_k__BackingField = cameraName;
  v4 = (GrandQuestFolderBoardItem_o *)((char *)v4 + 152);
  LODWORD(v4[-1].fields.sortStr1) = 27;
  sub_1C71354(v4, (int32_t)cameraName, v5, v6, v7, v8, v9, v10);
}