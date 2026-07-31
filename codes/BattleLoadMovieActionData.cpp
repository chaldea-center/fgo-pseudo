void BattleLoadMovieActionData___ctor(
        BattleLoadMovieActionData_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593AF1B & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&BattleActionWaitCond_WaitLoadMovieComplete_TypeInfo);
    byte_593AF1B = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, movieName);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  v5 = sub_21FFEBC(BattleActionWaitCond_WaitLoadMovieComplete_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 1092616192;
  *(_QWORD *)(v5 + 24) = movieName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)movieName, v6, v7, v8, v9, v10, v11);
  BattleActionData__SetWaitCond((BattleActionData_o *)this, (BattleActionWaitCond_Base_o *)v5, 0);
}