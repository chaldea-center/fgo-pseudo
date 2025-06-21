void __fastcall BattleAddSkillTaskBeforeTargetTask___ctor(
        BattleAddSkillTaskBeforeTargetTask_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAddSkillTaskBeforeTargetTask__PrevAddTask(
        BattleAddSkillTaskBeforeTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x0
  Il2CppObject *Task_k__BackingField; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4B1F3A4 & 1) == 0 )
  {
    this = (BattleAddSkillTaskBeforeTargetTask_o *)sub_1BCAFF8(
                                                     &Method_System_Collections_Generic_List_BattleLogicTask__Add__,
                                                     taskList);
    byte_4B1F3A4 = 1;
  }
  BattleAddSkillTaskAroundTargetTask__PrevAddTask(
    (BattleAddSkillTaskAroundTargetTask_o *)this,
    taskList,
    logic,
    arg,
    method);
  if ( !arg
    || !taskList
    || (Task_k__BackingField = (Il2CppObject *)arg->fields._Task_k__BackingField,
        items = taskList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++taskList->fields._version,
        !items) )
  {
    sub_1BCB254(v7, Task_k__BackingField);
  }
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      Task_k__BackingField,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    taskList->fields._size = size + 1;
    v14 = &items->obj.klass + size;
    v14[4] = (Il2CppClass *)Task_k__BackingField;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 4), (int32_t)Task_k__BackingField, v9, v10);
  }
}