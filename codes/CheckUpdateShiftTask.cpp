void CheckUpdateShiftTask___ctor(CheckUpdateShiftTask_o *this, const MethodInfo *method)
{
  BattleLogicTask___ctor((BattleLogicTask_o *)this, method);
  this->fields.actiontype = 68;
}


BattleLogicTask_array *CheckUpdateShiftTask__MakeActionTask(
        CheckUpdateShiftTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v6; // x1
  BattleLogicTask_o *v7; // x20
  const MethodInfo *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_593BAE7 & 1) == 0 )
  {
    sub_21FFC50(&CheckEnemyShiftAfterTask_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593BAE7 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__taskCheckShiftServants(logicnomal, 55, 0, 0);
  if ( !v4 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v7 = (BattleLogicTask_o *)sub_21FFEBC(CheckEnemyShiftAfterTask_TypeInfo);
  BattleLogicTask___ctor(v7, v8);
  version = v4->fields._version;
  items = v4->fields._items;
  v7->fields.actiontype = 68;
  v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  v4->fields._version = version + 1;
  if ( !items )
LABEL_11:
    sub_21FFECC(logicnomal, v6);
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v7,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v7, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}