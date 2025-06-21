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
  if ( !arg )
    goto LABEL_9;
  this = (CreateComboStartSkillTask_o *)arg->fields._ActSvt_k__BackingField;
  if ( !this )
    goto LABEL_9;
  if ( BYTE3(this[31].klass) )
    return 1;
  this = (CreateComboStartSkillTask_o *)((__int64 (__fastcall *)(CreateComboStartSkillTask_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                          this,
                                          this->klass[1]._1.nestedTypes);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  if ( !logic || (this = (CreateComboStartSkillTask_o *)logic->fields.logicnomal) == 0LL )
LABEL_9:
    sub_1BCB254(this, logic);
  return BattleLogicNomal__IsComboStart((BattleLogicNomal_o *)this, 0LL);
}


BuffList_ACTION_array *__fastcall CreateComboStartSkillTask__get_TargetActs(
        CreateComboStartSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B1F3AE & 1) == 0 )
  {
    sub_1BCAFF8(&BuffList_ACTION___TypeInfo, method);
    byte_4B1F3AE = 1;
  }
  result = (BuffList_ACTION_array *)sub_1BCB0A0(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1BCB254(0LL, v3);
  if ( !result->max_length )
    sub_1BCB25C(result, v3, v4);
  result->m_Items[1] = 148;
  return result;
}