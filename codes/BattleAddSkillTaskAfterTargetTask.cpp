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
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593B721 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    this = (BattleAddSkillTaskAfterTargetTask_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    byte_593B721 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  BattleAddSkillTaskAroundTargetTask__PrevAddTask(
    (BattleAddSkillTaskAroundTargetTask_o *)this,
    taskList,
    logic,
    arg,
    method);
  if ( !taskList )
    sub_21FFECC(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_21FFECC(v9, v10);
    *((_BYTE *)&v13.fields._current->klass + (unsigned __int64)&dword_E8 + 3) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}