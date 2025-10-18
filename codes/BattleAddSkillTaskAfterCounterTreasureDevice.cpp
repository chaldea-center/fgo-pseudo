void BattleAddSkillTaskAfterCounterTreasureDevice___ctor(
        BattleAddSkillTaskAfterCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskAfterCounterTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskAfterCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v8; // x0

  if ( (byte_4C45F64 & 1) == 0 )
  {
    sub_1C37058(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_1C37058(&ForceCreateComboEndSkillTask_TypeInfo);
    byte_4C45F64 = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C37100(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (Il2CppObject *)sub_1C372A4(ForceCreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C372B4(v4);
  if ( v3 )
  {
    v4 = sub_1C37194(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v8 = sub_1C372D8(0);
      sub_1C37180(v8, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_1C372BC(v4);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v5, v6);
  return v2;
}