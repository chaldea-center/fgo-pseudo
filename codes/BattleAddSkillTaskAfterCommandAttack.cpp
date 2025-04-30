void __fastcall BattleAddSkillTaskAfterCommandAttack___ctor(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CreateSkillTaskFromBuffAction_array *__fastcall BattleAddSkillTaskAfterCommandAttack__GetCreateSkillTaskArray(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CreateSkillTaskFromBuffAction_array *v3; // x19
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  if ( (byte_4A51247 & 1) == 0 )
  {
    sub_1B863B8(&CreateComboEndSkillTask_TypeInfo, method);
    sub_1B863B8(&CreateSkillTaskFromBuffAction___TypeInfo, v2);
    byte_4A51247 = 1;
  }
  v3 = (CreateSkillTaskFromBuffAction_array *)sub_1B86460(CreateSkillTaskFromBuffAction___TypeInfo, 1LL);
  v4 = (Il2CppObject *)sub_1B86604(CreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v3 )
    sub_1B86614(v5, v6);
  if ( v4 )
  {
    v5 = sub_1B864F4(v4, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
      v10 = sub_1B86638(0LL);
      sub_1B864E0(v10, 0LL);
    }
  }
  if ( !v3->max_length )
    sub_1B8661C(v5, v6);
  v3->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v4, v7, v8);
  return v3;
}


int32_t __fastcall BattleAddSkillTaskAfterCommandAttack__get_AddTiming(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  return 4;
}