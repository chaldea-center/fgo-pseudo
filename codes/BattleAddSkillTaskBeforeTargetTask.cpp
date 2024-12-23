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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4B697A8 & 1) == 0 )
  {
    this = (BattleAddSkillTaskBeforeTargetTask_o *)sub_1BE4ACC(
                                                     &Method_System_Collections_Generic_List_BattleLogicTask__Add__,
                                                     taskList);
    byte_4B697A8 = 1;
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
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++taskList->fields._version,
        !items) )
  {
    sub_1BE4D28(v7, Task_k__BackingField);
  }
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      Task_k__BackingField,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    taskList->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)Task_k__BackingField;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)Task_k__BackingField, v9, v10, v11, v12, v13, v14);
  }
}