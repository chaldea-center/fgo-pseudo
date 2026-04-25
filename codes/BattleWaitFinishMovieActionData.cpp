void BattleWaitFinishMovieActionData___ctor(BattleWaitFinishMovieActionData_o *this, const MethodInfo *method)
{
  BattleActionWaitCond_WaitFinishMovie_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E07055 & 1) == 0 )
  {
    sub_1CE6700(&BattleActionData_TypeInfo);
    sub_1CE6700(&BattleActionWaitCond_WaitFinishMovie_TypeInfo);
    byte_4E07055 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  v3 = (BattleActionWaitCond_WaitFinishMovie_o *)sub_1CE694C(BattleActionWaitCond_WaitFinishMovie_TypeInfo);
  BattleActionWaitCond_WaitFinishMovie___ctor(v3, 0);
  this->fields.state = 6;
  this->fields._WaitCond_k__BackingField = (struct BattleActionWaitCond_Base_o *)v3;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._WaitCond_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}