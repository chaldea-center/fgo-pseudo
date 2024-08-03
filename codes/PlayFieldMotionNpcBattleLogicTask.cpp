void __fastcall PlayFieldMotionNpcBattleLogicTask___ctor(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        System_String_o *motionName,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  bool v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  v8 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  this->fields.actiontype = 44;
  this->fields.motionName = motionName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.motionName, (int32_t)motionName, v9, v10);
  this->fields.isForcedSpeedOne = v8;
  this->fields.actiontype = 61;
  BattleLogicTask__setTarget((BattleLogicTask_o *)this, targetId, v11);
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
  PlayFieldMotionNpcActionData_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FF044 & 1) == 0 )
  {
    sub_1B640C8(&PlayFieldMotionNpcActionData_TypeInfo, logic);
    byte_49FF044 = 1;
  }
  if ( (((__int64 (__fastcall *)(PlayFieldMotionNpcBattleLogicTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsMakeAble.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return 0LL;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId(this, v5);
  v9 = (PlayFieldMotionNpcActionData_o *)sub_1B64314(PlayFieldMotionNpcActionData_TypeInfo, v7, v8);
  PlayFieldMotionNpcActionData___ctor(v9, TargetId, 0LL);
  if ( !logic )
    sub_1B64324(v10);
  return BattleLogic__CreateCommonFieldPlayMotion(logic, (BattleLogicTask_o *)this, (BattleActionData_o *)v9, 0LL);
}


int32_t __fastcall PlayFieldMotionNpcBattleLogicTask__get_TargetId(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF043 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, method);
    byte_49FF043 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.targetIdlist,
           0,
           -1,
           (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
}