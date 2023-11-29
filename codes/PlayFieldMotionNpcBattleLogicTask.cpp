void __fastcall PlayFieldMotionNpcBattleLogicTask___ctor(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        System_String_o *motionName,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 44;
  this->fields.motionName = motionName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.motionName,
    (System_Int32_array **)motionName,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.isForcedSpeedOne = isForcedSpeedOne;
  this->fields.actiontype = 61;
  BattleLogicTask__setTarget((BattleLogicTask_o *)this, targetId, 0LL);
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
  __int64 v10; // x4
  PlayFieldMotionNpcActionData_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F8F6E & 1) == 0 )
  {
    sub_B16FFC(&PlayFieldMotionNpcActionData_TypeInfo, logic);
    byte_40F8F6E = 1;
  }
  if ( (((__int64 (__fastcall *)(PlayFieldMotionNpcBattleLogicTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsMakeAble.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return 0LL;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId(this, v5);
  v11 = (PlayFieldMotionNpcActionData_o *)sub_B170CC(PlayFieldMotionNpcActionData_TypeInfo, v7, v8, v9, v10);
  PlayFieldMotionNpcActionData___ctor(v11, TargetId, v12);
  if ( !logic )
    sub_B170D4();
  return BattleLogic__CreateCommonFieldPlayMotion(logic, (BattleLogicTask_o *)this, (BattleActionData_o *)v11, 0LL);
}


int32_t __fastcall PlayFieldMotionNpcBattleLogicTask__get_TargetId(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8F6D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, method);
    byte_40F8F6D = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.targetIdlist,
           0,
           -1,
           (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
}