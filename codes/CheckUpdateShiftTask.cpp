void __fastcall CheckUpdateShiftTask___ctor(CheckUpdateShiftTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
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
  const MethodInfo *v12; // x2
  BattleLogicTask_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A30B7F & 1) == 0 )
  {
    sub_1B761C0(&CheckEnemyShiftAfterTask_TypeInfo, logic);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B761C0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4A30B7F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__shiftServantTaskReaction(
                                       logicnomal,
                                       logicnomal->fields.tmpShiftTask,
                                       v12);
  if ( !v9
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
          (const MethodInfo_34D77E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v13 = (BattleLogicTask_o *)sub_1B7640C(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v13, 0LL),
        v13->fields.actiontype = 68,
        items = v9->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B7641C(logicnomal, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v13;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}