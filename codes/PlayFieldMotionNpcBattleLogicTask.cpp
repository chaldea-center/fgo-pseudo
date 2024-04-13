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
  sub_B5D560(
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
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  int32_t TargetId; // w22
  PlayFieldMotionNpcActionData_o *v8; // x21
  const MethodInfo *v9; // x2
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E83E5 & 1) == 0 )
  {
    sub_B5D5C4(&PlayFieldMotionNpcActionData_TypeInfo, (_DWORD)logic, (_DWORD)method, v3);
    byte_42E83E5 = 1;
  }
  if ( (((__int64 (__fastcall *)(PlayFieldMotionNpcBattleLogicTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsMakeAble.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return 0LL;
  TargetId = PlayFieldMotionNpcBattleLogicTask__get_TargetId(this, v6);
  v8 = (PlayFieldMotionNpcActionData_o *)sub_B5D694(PlayFieldMotionNpcActionData_TypeInfo);
  PlayFieldMotionNpcActionData___ctor(v8, TargetId, v9);
  if ( !logic )
    sub_B5D69C(v10, v11);
  return BattleLogic__CreateCommonFieldPlayMotion(logic, (BattleLogicTask_o *)this, (BattleActionData_o *)v8, 0LL);
}


int32_t __fastcall PlayFieldMotionNpcBattleLogicTask__get_TargetId(
        PlayFieldMotionNpcBattleLogicTask_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E83E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, (_DWORD)method, v2, v3);
    byte_42E83E4 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.targetIdlist,
           0,
           -1,
           (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
}