void __fastcall PlayCurrentBgmActionData___ctor(PlayCurrentBgmActionData_o *this, const MethodInfo *method)
{
  ExecInActionData___ctor((ExecInActionData_o *)this, 0LL);
}


void __fastcall PlayCurrentBgmActionData__ExecAction(
        PlayCurrentBgmActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x19

  if ( (byte_438B32A & 1) == 0 )
  {
    this = (PlayCurrentBgmActionData_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B32A = 1;
  }
  if ( !perf )
    goto LABEL_11;
  logic = (UnityEngine_Object_o *)perf->fields.logic;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PlayCurrentBgmActionData_o *)UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__PlayLoadCurrentBgm((BattleLogic_o *)logic, 0LL, 0.0, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(this, perf);
  }
}