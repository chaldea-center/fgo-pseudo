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
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2F8FF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    this = (BattleAddSkillTaskAfterTargetTask_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    byte_4D2F8FF = 1;
  }
  memset(&v11, 0, sizeof(v11));
  BattleAddSkillTaskAroundTargetTask__PrevAddTask(
    (BattleAddSkillTaskAroundTargetTask_o *)this,
    taskList,
    logic,
    arg,
    method);
  if ( !taskList )
    sub_1C942F0(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields._current )
      sub_1C942F0(v9, v10);
    *((_BYTE *)&v11.fields._current->klass + (unsigned __int64)&dword_E8 + 3) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}