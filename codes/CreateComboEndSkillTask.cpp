void CreateComboEndSkillTask___ctor(CreateComboEndSkillTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CreateComboEndSkillTask__IsCreatable(
        CreateComboEndSkillTask_o *this,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  if ( !arg )
    goto LABEL_9;
  this = (CreateComboEndSkillTask_o *)arg->fields._ActSvt_k__BackingField;
  if ( !this )
    goto LABEL_9;
  if ( BYTE3(this[31].monitor) )
    return 1;
  this = (CreateComboEndSkillTask_o *)((__int64 (__fastcall *)(CreateComboEndSkillTask_o *, void *))this->klass[1]._1.properties)(
                                        this,
                                        this->klass[1]._1.methods);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  if ( !logic || (this = (CreateComboEndSkillTask_o *)logic->fields.logicnomal) == 0 )
LABEL_9:
    sub_1C3E7C0(this, logic);
  return BattleLogicNomal__IsComboEnd((BattleLogicNomal_o *)this, 0);
}


BuffList_ACTION_array *CreateComboEndSkillTask__get_TargetActs(
        CreateComboEndSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_4C59D47 & 1) == 0 )
  {
    sub_1C3E564(&BuffList_ACTION___TypeInfo);
    byte_4C59D47 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C3E60C(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C3E7C0(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_1C3E7C8(result, v3);
  result->m_Items[0] = 149;
  return result;
}