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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B39EBD & 1) == 0 )
  {
    sub_1BD3458(&CheckEnemyShiftAfterTask_TypeInfo, logic);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BD3458(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4B39EBD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
          (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v13 = (BattleLogicTask_o *)sub_1BD36A4(CheckEnemyShiftAfterTask_TypeInfo),
        BattleLogicTask___ctor(v13, 0LL),
        v13->fields.actiontype = 68,
        items = v9->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BD36B4(logicnomal, v11);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v13;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}