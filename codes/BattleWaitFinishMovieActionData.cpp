void BattleWaitFinishMovieActionData___ctor(BattleWaitFinishMovieActionData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20

  if ( (byte_4E7A01C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    sub_1D0F0B4(&BattleActionWaitCond_WaitFinishMovie_TypeInfo);
    byte_4E7A01C = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  v3 = (Il2CppObject *)sub_1D0F300(BattleActionWaitCond_WaitFinishMovie_TypeInfo);
  System_Object___ctor(v3, 0);
  BattleActionData__SetWaitCond((BattleActionData_o *)this, (BattleActionWaitCond_Base_o *)v3, 0);
}