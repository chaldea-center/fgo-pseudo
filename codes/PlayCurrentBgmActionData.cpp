void __fastcall PlayCurrentBgmActionData__ExecAction(
        PlayCurrentBgmActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x19

  if ( (byte_48E48A0 & 1) == 0 )
  {
    this = (PlayCurrentBgmActionData_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, perf);
    byte_48E48A0 = 1;
  }
  if ( !perf )
    goto LABEL_10;
  logic = (UnityEngine_Object_o *)perf->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PlayCurrentBgmActionData_o *)UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__PlayLoadCurrentBgm((BattleLogic_o *)logic, 0LL, 0.0, 0LL);
      return;
    }
LABEL_10:
    sub_1B00F28(this, perf);
  }
}