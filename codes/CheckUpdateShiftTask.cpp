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
  System_Collections_Generic_List_object__o *v4; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleLogicTask_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5DDCD & 1) == 0 )
  {
    sub_1B885B0(&CheckEnemyShiftAfterTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDCD = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__shiftServantTaskReaction(
                                       logicnomal,
                                       logicnomal->fields.tmpShiftTask,
                                       v7);
  if ( !v4
    || (System_Collections_Generic_List_object___AddRange(
          v4,
          (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (BattleLogicTask_o *)sub_1B887FC(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v8, 0LL),
        v8->fields.actiontype = 68,
        items = v4->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v4->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B8880C(logicnomal, v6);
  }
  size = v4->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}