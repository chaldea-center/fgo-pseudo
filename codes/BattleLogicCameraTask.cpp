void __fastcall BattleLogicCameraTask___ctor(
        BattleLogicCameraTask_o *this,
        System_String_o *cameraName,
        const MethodInfo *method)
{
  BattleLogicCameraTask_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)cameraName);
  v4->fields.endCameraName = cameraName;
  v4 = (BattleLogicCameraTask_o *)((char *)v4 + 152);
  LODWORD(v4[-1].fields.motionMessage) = 27;
  sub_1B4CF34((CGThumbnailListItem_o *)v4, (int32_t)cameraName, v5, v6);
}