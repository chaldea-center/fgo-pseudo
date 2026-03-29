void BattleLoadMovieActionData___ctor(
        BattleLoadMovieActionData_o *this,
        System_String_o *movieName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D32FF1 & 1) == 0 )
  {
    sub_1C93AD4(&BattleActionData_TypeInfo);
    sub_1C93AD4(&BattleActionWaitCond_WaitLoadMovieComplete_TypeInfo);
    byte_4D32FF1 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, (const MethodInfo *)movieName);
  v5 = sub_1C93D20(BattleActionWaitCond_WaitLoadMovieComplete_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 1092616192;
  *(_QWORD *)(v5 + 24) = movieName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)movieName, v6, v7, v8, v9, v10, v11);
  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = (struct BattleActionWaitCond_Base_o *)v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._WaitCond_k__BackingField, v5, v12, v13, v14, v15, v16, v17);
}