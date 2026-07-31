void CreateComboEndSkillTask___ctor(CreateComboEndSkillTask_o *this, const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction___ctor((CreateSkillTaskFromBuffAction_o *)this, 0);
}


bool CreateComboEndSkillTask__IsCreatable(
        CreateComboEndSkillTask_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    goto LABEL_8;
  if ( BattleAddSkillTaskAroundTargetTask_Argument__get_IsActorEnemy(arg, 0) )
    return 1;
  this = (CreateComboEndSkillTask_o *)BattleAddSkillTaskAroundTargetTask_Argument__get_IsAiNpc(arg, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  if ( !logic || (this = (CreateComboEndSkillTask_o *)logic->fields.logicnomal) == 0 )
LABEL_8:
    sub_21FFECC(this, logic);
  return BattleLogicNomal__IsComboEnd((BattleLogicNomal_o *)this, 0);
}


BuffList_ACTION_array *CreateComboEndSkillTask__get_TargetActs(
        CreateComboEndSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_593B8E4 & 1) == 0 )
  {
    sub_21FFC50(&BuffList_ACTION___TypeInfo);
    byte_593B8E4 = 1;
  }
  result = (BuffList_ACTION_array *)sub_21FFD10(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  result->m_Items[0] = 149;
  return result;
}