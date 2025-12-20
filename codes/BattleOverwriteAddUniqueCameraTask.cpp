void BattleOverwriteAddUniqueCameraTask___ctor(BattleOverwriteAddUniqueCameraTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 80;
}


void BattleOverwriteAddUniqueCameraTask__Init(
        BattleOverwriteAddUniqueCameraTask_o *this,
        AiActEntity_o *aiActEnt,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  struct System_Int32_array *CameraIds; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( !aiEnt )
    sub_1C942F0(this, aiActEnt);
  CameraIds = AiBaseEntity__GetCameraIds(aiEnt, 0);
  this->fields.overwriteAddUniqueCameraIds = CameraIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteAddUniqueCameraIds,
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

  if ( (byte_4D2FC1E & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_TypeInfo);
    byte_4D2FC1E = 1;
  }
  overwriteAddUniqueCameraIds = this->fields.overwriteAddUniqueCameraIds;
  v5 = (BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *)sub_1C942E4(BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_TypeInfo);
  BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___ctor(v5, overwriteAddUniqueCameraIds, 0);
  v6 = (BattleActionData_o *)sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v6, 0);
  if ( !v6 )
    sub_1C942F0(v7, v8);
  return BattleActionData__SetWaitCond(v6, (BattleActionWaitCond_Base_o *)v5, 0);
}