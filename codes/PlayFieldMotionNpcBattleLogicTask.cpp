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
  sub_B2C2F8(
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
  PlayFieldMotionNpcActionData_o *v7; // x21
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4186B09 & 1) == 0 )
  {
    sub_B2C35C(&PlayFieldMotionNpcActionData_TypeInfo, logic);
    byte_4186B09 = 1;
  }
  if ( (((__int64 (__fastcall *)(PlayFieldMotionNpcBattleLogicTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsMakeAble.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return 0LL;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId(this, v5);
  v7 = (PlayFieldMotionNpcActionData_o *)sub_B2C42C(PlayFieldMotionNpcActionData_TypeInfo);
  PlayFieldMotionNpcActionData___ctor(v7, TargetId, v8);
  if ( !logic )
    sub_B2C434(v9, v10);
  return BattleLogic__CreateCommonFieldPlayMotion(logic, (BattleLogicTask_o *)this, (BattleActionData_o *)v7, 0LL);
}


int32_t __fastcall PlayFieldMotionNpcBattleLogicTask__get_TargetId(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186B08 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, method);
    byte_4186B08 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.targetIdlist,
           0,
           -1,
           (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
}