void PlayFieldMotionNpcBattleLogicTask___ctor(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        System_String_o *motionName,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  bool v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  v8 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  this->fields.actiontype = 44;
  this->fields.motionName = motionName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.motionName, (int32_t)motionName, v9, v10, v11, v12, v13, v14);
  this->fields.isForcedSpeedOne = v8;
  this->fields.actiontype = 61;
  BattleLogicTask__setTarget((BattleLogicTask_o *)this, targetId, v15);
}


bool PlayFieldMotionNpcBattleLogicTask__IsMakeAble(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 1;
}


BattleActionData_o *PlayFieldMotionNpcBattleLogicTask__MakeActionData(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t TargetId; // w22
  PlayFieldMotionNpcActionData_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CCA761 & 1) == 0 )
  {
    sub_1C713B0(&PlayFieldMotionNpcActionData_TypeInfo);
    byte_4CCA761 = 1;
  }
  if ( (((__int64 (__fastcall *)(PlayFieldMotionNpcBattleLogicTask_o *, BattleLogic_o *, const MethodInfo *))this->klass->vtable._11_IsMakeAble.methodPtr)(
          this,
          logic,
          this->klass->vtable._11_IsMakeAble.method)
      & 1) == 0 )
    return 0;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId(this, v5);
  v7 = (PlayFieldMotionNpcActionData_o *)sub_1C715FC(PlayFieldMotionNpcActionData_TypeInfo);
  PlayFieldMotionNpcActionData___ctor(v7, TargetId, 0);
  if ( !logic )
    sub_1C71608(v8, v9);
  return BattleLogic__CreateCommonFieldPlayMotion(logic, (BattleLogicTask_o *)this, (BattleActionData_o *)v7, 0);
}


int32_t PlayFieldMotionNpcBattleLogicTask__get_TargetId(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CCA760 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_int____78642256);
    byte_4CCA760 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.targetIdlist,
           0,
           -1,
           (const MethodInfo_31392F0 *)Method_BasicHelper_IndexValue_int____78642256);
}