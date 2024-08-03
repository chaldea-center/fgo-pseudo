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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  BattleLogicReaction_o *logicReaction; // x0
  int32_t v9; // w1
  BattleData_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_49FF009 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, logic);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v6);
    byte_49FF009 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      logic,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic
    || (logicReaction = logic->fields.logicReaction) == 0LL
    || (logicReaction = (BattleLogicReaction_o *)BattleLogicReaction__CheckEnemyShiftAfter(logicReaction, v9, v10, v11),
        !v7) )
  {
    sub_1B64324(logicReaction);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)logicReaction,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}