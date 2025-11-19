void BattleLogicCameraTask___ctor(BattleLogicCameraTask_o *this, System_String_o *cameraName, const MethodInfo *method)
{
  CGThumbnailListItem_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = (CGThumbnailListItem_o *)this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)cameraName);
  v4[1].monitor = cameraName;
  v4 = (CGThumbnailListItem_o *)((char *)v4 + 152);
  LODWORD(v4[-1].fields.sortValue0B) = 27;
  sub_1C6B9AC(v4, (int32_t)cameraName, v5, v6);
}