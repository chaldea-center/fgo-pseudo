void CheckEnemyShiftAfterTask___ctor(CheckEnemyShiftAfterTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 68;
}


BattleLogicTask_array *CheckEnemyShiftAfterTask__MakeActionTask(
        CheckEnemyShiftAfterTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  BattleLogicReaction_o *logicReaction; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_593BAE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BAE8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicReaction = logic->fields.logicReaction) == 0
    || (logicReaction = (BattleLogicReaction_o *)BattleLogicReaction__CheckEnemyShiftAfter(logicReaction, v6, 0, v7), !v4) )
  {
    sub_21FFECC(logicReaction, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)logicReaction,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}