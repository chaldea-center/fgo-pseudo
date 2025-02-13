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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDF305 & 1) == 0 )
  {
    sub_1C21E38(&CheckEnemyShiftAfterTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF305 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (BattleLogicTask_o *)sub_1C22084(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v8, 0LL),
        v8->fields.actiontype = 68,
        items = v4->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v4->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C22094(logicnomal, v6);
  }
  size = v4->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v8,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}