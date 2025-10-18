void BattleAddSkillTaskAfterTargetTask___ctor(BattleAddSkillTaskAfterTargetTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleAddSkillTaskAfterTargetTask__PrevAddTask(
        BattleAddSkillTaskAfterTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x0
  _BOOL8 v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C45F62 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    this = (BattleAddSkillTaskAfterTargetTask_o *)sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    byte_4C45F62 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  BattleAddSkillTaskAroundTargetTask__PrevAddTask(
    (BattleAddSkillTaskAroundTargetTask_o *)this,
    taskList,
    logic,
    arg,
    method);
  if ( !taskList )
    sub_1C372B4(v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v8 )
      break;
    if ( !v9.fields._current )
      sub_1C372B4(v8);
    *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&dword_E8 + 3) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}