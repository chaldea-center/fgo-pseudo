void __fastcall PlayFieldMotionNpcBattleLogicTask___ctor(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        System_String_o *motionName,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  bool v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  v8 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  this->fields.actiontype = 44;
  this->fields.motionName = motionName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.motionName, (int64_t)motionName, v9, v10, v11, v12, v13, v14);
  this->fields.isForcedSpeedOne = v8;
  this->fields.actiontype = 61;
  BattleLogicTask__setTarget((BattleLogicTask_o *)this, targetId, v15);
}


bool __fastcall PlayFieldMotionNpcBattleLogicTask__IsMakeAble(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 1;
}


BattleActionData_o *__fastcall PlayFieldMotionNpcBattleLogicTask__MakeActionData(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t TargetId; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  PlayFieldMotionNpcActionData_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B18F1F & 1) == 0 )
  {
    sub_1BCA7E0(&PlayFieldMotionNpcActionData_TypeInfo, logic, method);
    byte_4B18F1F = 1;
  }
  if ( (((__int64 (__fastcall *)(PlayFieldMotionNpcBattleLogicTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsMakeAble.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return 0LL;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId(this, v5);
  v10 = (PlayFieldMotionNpcActionData_o *)sub_1BCAA2C(PlayFieldMotionNpcActionData_TypeInfo, v7, v8, v9);
  PlayFieldMotionNpcActionData___ctor(v10, TargetId, 0LL);
  if ( !logic )
    sub_1BCAA3C(v11, v12);
  return BattleLogic__CreateCommonFieldPlayMotion(logic, (BattleLogicTask_o *)this, (BattleActionData_o *)v10, 0LL);
}


int32_t __fastcall PlayFieldMotionNpcBattleLogicTask__get_TargetId(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18F1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, method, v2);
    byte_4B18F1E = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.targetIdlist,
           0,
           -1,
           (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
}