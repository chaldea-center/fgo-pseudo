void __fastcall BattleLogicServantAiTask___ctor(
        BattleLogicServantAiTask_o *this,
        int32_t procState,
        BattleServantData_o *svtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct BattleLogicServantAi_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  BattleLogicServantTask___ctor((BattleLogicServantTask_o *)this, 59, svtData, (const MethodInfo *)logic);
  this->fields.svtData = svtData;
  this->fields.procState = procState;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtData,
    (System_Int32_array **)svtData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !svtData )
    sub_B170D4();
  v15 = (struct BattleLogicServantAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, Il2CppMethodPointer))svtData->klass->vtable._20_GetLogicServantAi.method)(
                                           svtData,
                                           logic,
                                           svtData->klass->vtable._21_getThisTurnActCount.methodPtr);
  this->fields.logicAi = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logicAi,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


bool __fastcall BattleLogicServantAiTask__IsActable(
        BattleLogicServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 1;
}


BattleLogicTask_array *__fastcall BattleLogicServantAiTask__MakeActionTask(
        BattleLogicServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x2
  const MethodInfo *v6; // x5
  BattleLogicServantAi_o *logicAi; // x0

  if ( (byte_40FC45D & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, logic);
    byte_40FC45D = 1;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicServantAiTask_o *, BattleLogic_o *, void *))this->klass->vtable._8_IsActable.method)(
          this,
          logic,
          this->klass[1]._1.image) & 1) == 0 )
    return (BattleLogicTask_array *)sub_B17014(BattleLogicTask___TypeInfo, 0LL, v5);
  logicAi = this->fields.logicAi;
  if ( !logicAi )
    sub_B170D4();
  return BattleLogicServantAi__TaskAiTargetAct(
           logicAi,
           this->fields.svtData,
           this->fields.procState,
           this->fields._AiTimingPriority_k__BackingField,
           0,
           v6);
}