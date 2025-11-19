void BattleAddSkillTaskBeforeCommandAttack___ctor(
        BattleAddSkillTaskBeforeCommandAttack_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskBeforeCommandAttack__GetCreateSkillTaskArray(
        BattleAddSkillTaskBeforeCommandAttack_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v9; // x0

  if ( (byte_4CB92FF & 1) == 0 )
  {
    sub_1C6BA08(&CreateComboStartSkillTask_TypeInfo);
    sub_1C6BA08(&CreateSkillTaskFromBuffAction___TypeInfo);
    byte_4CB92FF = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C6BAB0(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (Il2CppObject *)sub_1C6BC54(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C6BC60(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C6BB44(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v9 = sub_1C6BC84(0);
      sub_1C6BB30(v9, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_1C6BC68(v4);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v6, v7);
  return v2;
}


int32_t BattleAddSkillTaskBeforeCommandAttack__get_AddTiming(
        BattleAddSkillTaskBeforeCommandAttack_o *this,
        const MethodInfo *method)
{
  return 3;
}