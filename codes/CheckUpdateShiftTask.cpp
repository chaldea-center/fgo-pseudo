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
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogicTask_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FF008 & 1) == 0 )
  {
    sub_1B640C8(&CheckEnemyShiftAfterTask_TypeInfo, logic);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FF008 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      logic,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__shiftServantTaskReaction(
                                       logicnomal,
                                       logicnomal->fields.tmpShiftTask,
                                       v11);
  if ( !v9
    || (System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v14 = (BattleLogicTask_o *)sub_1B64314(CheckEnemyShiftAfterTask_TypeInfo, v12, v13),
        BattleLogicTask___ctor(v14, 0LL),
        v14->fields.actiontype = 68,
        items = v9->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B64324(logicnomal);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v14,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}