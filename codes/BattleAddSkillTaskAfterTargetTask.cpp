void __fastcall BattleAddSkillTaskAfterTargetTask___ctor(
        BattleAddSkillTaskAfterTargetTask_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleAddSkillTaskAfterTargetTask__PrevAddTask(
        BattleAddSkillTaskAfterTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BDB5B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__, taskList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__, v8);
    this = (BattleAddSkillTaskAfterTargetTask_o *)sub_1B4CF90(
                                                    &Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__,
                                                    v9);
    byte_49BDB5B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  BattleAddSkillTaskAroundTargetTask__PrevAddTask(
    (BattleAddSkillTaskAroundTargetTask_o *)this,
    taskList,
    logic,
    arg,
    method);
  if ( !taskList )
    sub_1B4D1EC(v10, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v12 )
      break;
    if ( !v14.fields._current )
      sub_1B4D1EC(v12, v13);
    BYTE3(v14.fields._current[14].monitor) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}