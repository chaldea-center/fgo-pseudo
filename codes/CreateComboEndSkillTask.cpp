void __fastcall CreateComboEndSkillTask___ctor(CreateComboEndSkillTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CreateComboEndSkillTask__IsCreatable(
        CreateComboEndSkillTask_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x8

  if ( !arg )
    goto LABEL_8;
  ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    goto LABEL_8;
  if ( ActSvt_k__BackingField->fields.isEnemy )
    return 1;
  if ( !logic || (this = (CreateComboEndSkillTask_o *)logic->fields.logicnomal) == 0LL )
LABEL_8:
    sub_1BDBAD4(this, logic);
  return BattleLogicNomal__IsComboEnd((BattleLogicNomal_o *)this, 0LL);
}


BuffList_ACTION_array *__fastcall CreateComboEndSkillTask__get_TargetActs(
        CreateComboEndSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B478A8 & 1) == 0 )
  {
    sub_1BDB878(&BuffList_ACTION___TypeInfo, method);
    byte_4B478A8 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1BDB920(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1BDBAD4(0LL, v3);
  if ( !result->max_length )
    sub_1BDBADC(result, v3, v4);
  result->m_Items[1] = 149;
  return result;
}