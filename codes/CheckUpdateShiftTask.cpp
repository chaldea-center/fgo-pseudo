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
  BattleLogicTask_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4C3AB19 & 1) == 0 )
  {
    sub_1C32C20(&CheckEnemyShiftAfterTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AB19 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v6 = (BattleLogicTask_o *)sub_1C32E6C(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v6, v7),
        v6->fields.actiontype = 68,
        items = v4->fields._items,
        v11 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v4->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C32E7C(logicnomal);
  }
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v6, v8, v9);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}