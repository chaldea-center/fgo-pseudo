void __fastcall CreateComboStartSkillTask___ctor(CreateComboStartSkillTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CreateComboStartSkillTask__IsCreatable(
        CreateComboStartSkillTask_o *this,
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
  if ( !logic || (this = (CreateComboStartSkillTask_o *)logic->fields.logicnomal) == 0LL )
LABEL_8:
    sub_1C1AE30(this, logic);
  return BattleLogicNomal__IsComboStart((BattleLogicNomal_o *)this, 0LL);
}


BuffList_ACTION_array *__fastcall CreateComboStartSkillTask__get_TargetActs(
        CreateComboStartSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_4BCA6C6 & 1) == 0 )
  {
    sub_1C1ABD4(&BuffList_ACTION___TypeInfo, method);
    byte_4BCA6C6 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C1AC7C(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1C1AE30(0LL, v3);
  if ( !result->max_length )
    sub_1C1AE38(result, v3);
  result->m_Items[1] = 148;
  return result;
}