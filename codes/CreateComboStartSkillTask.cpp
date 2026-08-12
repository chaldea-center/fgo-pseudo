void CreateComboStartSkillTask___ctor(CreateComboStartSkillTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CreateComboStartSkillTask__IsCreatable(
        CreateComboStartSkillTask_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    goto LABEL_8;
  if ( BattleAddSkillTaskAroundTargetTask_Argument__get_IsActorEnemy(arg, 0) )
    return 1;
  this = (CreateComboStartSkillTask_o *)BattleAddSkillTaskAroundTargetTask_Argument__get_IsAiNpc(arg, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  if ( !logic || (this = (CreateComboStartSkillTask_o *)logic->fields.logicnomal) == 0 )
LABEL_8:
    sub_2213CDC(this, logic);
  return BattleLogicNomal__IsComboStart((BattleLogicNomal_o *)this, 0);
}


BuffList_ACTION_array *CreateComboStartSkillTask__get_TargetActs(
        CreateComboStartSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_5973A1B & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    byte_5973A1B = 1;
  }
  result = (BuffList_ACTION_array *)sub_2213B20(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_2213CDC(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
  result->m_Items[0] = 148;
  return result;
}