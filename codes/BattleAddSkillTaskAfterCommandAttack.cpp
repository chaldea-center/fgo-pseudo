void BattleAddSkillTaskAfterCommandAttack___ctor(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskAfterCommandAttack__GetCreateSkillTaskArray(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v9; // x0

  if ( (byte_4C2A246 & 1) == 0 )
  {
    sub_1C2D490(&CreateComboEndSkillTask_TypeInfo);
    sub_1C2D490(&CreateSkillTaskFromBuffAction___TypeInfo);
    byte_4C2A246 = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C2D538(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (Il2CppObject *)sub_1C2D6DC(CreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C2D6EC(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C2D5CC(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v9 = sub_1C2D710(0);
      sub_1C2D5B8(v9, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_1C2D6F4(v4, v5, v6);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v6, v7);
  return v2;
}


int32_t BattleAddSkillTaskAfterCommandAttack__get_AddTiming(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  return 4;
}