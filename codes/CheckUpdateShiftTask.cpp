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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x19
  BattleLogicNomal_o *logicnomal; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleLogicTask_o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B18EE1 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckEnemyShiftAfterTask_TypeInfo, logic, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13, v14);
    byte_4B18EE1 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       logic,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !logic )
    goto LABEL_11;
  logicnomal = logic->fields.logicnomal;
  if ( !logicnomal )
    goto LABEL_11;
  logicnomal = (BattleLogicNomal_o *)BattleLogicNomal__shiftServantTaskReaction(
                                       logicnomal,
                                       logicnomal->fields.tmpShiftTask,
                                       v18);
  if ( !v15
    || (System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)logicnomal,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v22 = (BattleLogicTask_o *)sub_1BCAA2C(CheckEnemyShiftAfterTask_TypeInfo, v19, v20, v21),
        BattleLogicTask___ctor(v22, 0LL),
        v22->fields.actiontype = 68,
        items = v15->fields._items,
        v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v15->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCAA3C(logicnomal, v17);
  }
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v22,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}