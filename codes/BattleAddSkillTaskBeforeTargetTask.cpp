void BattleAddSkillTaskBeforeTargetTask___ctor(BattleAddSkillTaskBeforeTargetTask_o *this, const MethodInfo *method)
{
  BattleAddSkillTaskAroundTargetTask___ctor((BattleAddSkillTaskAroundTargetTask_o *)this, 0);
}


void BattleAddSkillTaskBeforeTargetTask__PrevAddTask(
        BattleAddSkillTaskBeforeTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v9; // x0
  Il2CppObject *Task_k__BackingField; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A0F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A0F = 1;
  }
  BattleAddSkillTaskAroundTargetTask__PrevAddTask((BattleAddSkillTaskAroundTargetTask_o *)this, taskList, logic, arg, 0);
  if ( !arg
    || !taskList
    || (items = taskList->fields._items,
        Task_k__BackingField = (Il2CppObject *)arg->fields._Task_k__BackingField,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++taskList->fields._version,
        !items) )
  {
    sub_2213CDC(v9, Task_k__BackingField);
  }
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      Task_k__BackingField,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)Task_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v20 + 4),
      (int32_t)Task_k__BackingField,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}