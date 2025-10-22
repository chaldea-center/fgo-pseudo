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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C5A005 & 1) == 0 )
  {
    sub_1C3E564(&CheckEnemyShiftAfterTask_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C5A005 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__taskCheckShiftServants(logicnomal, 55, 0, 0);
  if ( !v4
    || (System_Collections_Generic_List_object___AddRange(
          v4,
          (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v7 = (BattleLogicTask_o *)sub_1C3E7B0(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v7, v8),
        v7->fields.actiontype = 68,
        items = v4->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v4->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C3E7C0(logicnomal, v6);
  }
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v7,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v7;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v7, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}