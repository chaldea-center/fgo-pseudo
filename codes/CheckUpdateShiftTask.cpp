void __fastcall CheckUpdateShiftTask___ctor(CheckUpdateShiftTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 68;
}


BattleLogicTask_array *__fastcall CheckUpdateShiftTask__MakeActionTask(
        CheckUpdateShiftTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v11; // x1
  BattleLogicTask_o *v12; // x20
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_48E532D & 1) == 0 )
  {
    sub_1B00CCC(&CheckEnemyShiftAfterTask_TypeInfo, logic);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_48E532D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__taskCheckShiftServants(logicnomal, 55, 0LL, 0LL);
  if ( !v9
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
          (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v12 = (BattleLogicTask_o *)sub_1B00F18(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v12, v13),
        v12->fields.actiontype = 68,
        items = v9->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B00F28(logicnomal, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v12,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v12;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}