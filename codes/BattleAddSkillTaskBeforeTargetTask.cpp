void BattleAddSkillTaskBeforeTargetTask___ctor(BattleAddSkillTaskBeforeTargetTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleAddSkillTaskBeforeTargetTask__PrevAddTask(
        BattleAddSkillTaskBeforeTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Task_k__BackingField; // x1
  struct BattleLogicTask_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3A952 & 1) == 0 )
  {
    this = (BattleAddSkillTaskBeforeTargetTask_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4C3A952 = 1;
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
    sub_1C32E7C(v7);
  }
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      Task_k__BackingField,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    taskList->fields._size = size + 1;
    v14 = &items->obj.klass + size;
    v14[4] = (Il2CppClass *)Task_k__BackingField;
    sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)Task_k__BackingField, v8, v9);
  }
}