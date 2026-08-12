void BattleAddSkillTaskAfterTargetTask___ctor(BattleAddSkillTaskAfterTargetTask_o *this, const MethodInfo *method)
{
  BattleAddSkillTaskAroundTargetTask___ctor((BattleAddSkillTaskAroundTargetTask_o *)this, 0);
}


void BattleAddSkillTaskAfterTargetTask__PrevAddTask(
        BattleAddSkillTaskAfterTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973A13 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    byte_5973A13 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  BattleAddSkillTaskAroundTargetTask__PrevAddTask((BattleAddSkillTaskAroundTargetTask_o *)this, taskList, logic, arg, 0);
  if ( !taskList )
    sub_2213CDC(v9, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  v13 = 0;
  v14 = &v15;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v11 )
      break;
    if ( !v15.fields._current )
      sub_2213CDC(v11, v12);
    *((_BYTE *)&v15.fields._current->klass + (unsigned __int64)&dword_E8 + 3) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}