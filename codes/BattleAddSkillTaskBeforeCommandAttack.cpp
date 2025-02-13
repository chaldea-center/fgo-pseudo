void __fastcall BattleAddSkillTaskBeforeCommandAttack___ctor(
        BattleAddSkillTaskBeforeCommandAttack_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CreateSkillTaskFromBuffAction_array *__fastcall BattleAddSkillTaskBeforeCommandAttack__GetCreateSkillTaskArray(
        BattleAddSkillTaskBeforeCommandAttack_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v13; // x0

  if ( (byte_4BDF173 & 1) == 0 )
  {
    sub_1C21E38(&CreateComboStartSkillTask_TypeInfo);
    sub_1C21E38(&CreateSkillTaskFromBuffAction___TypeInfo);
    byte_4BDF173 = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C21EE0(CreateSkillTaskFromBuffAction___TypeInfo, 1LL);
  v3 = (Il2CppObject *)sub_1C22084(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v2 )
    sub_1C22094(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C21F74(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v13 = sub_1C220B8(0LL);
      sub_1C21F60(v13, 0LL);
    }
  }
  if ( !v2->max_length )
    sub_1C2209C(v4, v5);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)v2->m_Items, (int64_t)v3, v6, v7, v8, v9, v10, v11);
  return v2;
}


int32_t __fastcall BattleAddSkillTaskBeforeCommandAttack__get_AddTiming(
        BattleAddSkillTaskBeforeCommandAttack_o *this,
        const MethodInfo *method)
{
  return 3;
}