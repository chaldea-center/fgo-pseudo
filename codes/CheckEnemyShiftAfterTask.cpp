void __fastcall CheckEnemyShiftAfterTask___ctor(CheckEnemyShiftAfterTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 68;
}


BattleLogicTask_array *__fastcall CheckEnemyShiftAfterTask__MakeActionTask(
        CheckEnemyShiftAfterTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  BattleLogicReaction_o *logicReaction; // x0
  __int64 v6; // x1
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4A5DDCE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDCE = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicReaction = logic->fields.logicReaction) == 0LL
    || (logicReaction = (BattleLogicReaction_o *)BattleLogicReaction__CheckEnemyShiftAfter(logicReaction, v6, v7, v8),
        !v4) )
  {
    sub_1B8880C(logicReaction, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)logicReaction,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}