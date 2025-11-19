void PlayCurrentBgmActionData__ExecAction(
        PlayCurrentBgmActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  UnityEngine_Object_o *logic; // x19

  if ( (byte_4CB89B2 & 1) == 0 )
  {
    this = (PlayCurrentBgmActionData_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB89B2 = 1;
  }
  if ( !perf )
    goto LABEL_10;
  logic = (UnityEngine_Object_o *)perf->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PlayCurrentBgmActionData_o *)UnityEngine_Object__op_Inequality(logic, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__PlayLoadCurrentBgm((BattleLogic_o *)logic, 0, 0.0, 0);
      return;
    }
LABEL_10:
    sub_1C6BC60(this, perf);
  }
}