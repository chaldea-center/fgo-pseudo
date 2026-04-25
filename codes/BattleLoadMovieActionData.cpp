void BattleLoadMovieActionData___ctor(
        BattleLoadMovieActionData_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  BattleActionWaitCond_WaitLoadMovieComplete_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E07054 & 1) == 0 )
  {
    sub_1CE6700(&BattleActionData_TypeInfo);
    sub_1CE6700(&BattleActionWaitCond_WaitLoadMovieComplete_TypeInfo);
    byte_4E07054 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, (const MethodInfo *)movieName);
  v5 = (BattleActionWaitCond_WaitLoadMovieComplete_o *)sub_1CE694C(BattleActionWaitCond_WaitLoadMovieComplete_TypeInfo);
  BattleActionWaitCond_WaitLoadMovieComplete___ctor(v5, movieName, 0);
  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = (struct BattleActionWaitCond_Base_o *)v5;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._WaitCond_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}