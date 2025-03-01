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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v14; // x0

  if ( (byte_4C003F7 & 1) == 0 )
  {
    sub_1C2E12C(&CreateComboEndSkillTask_TypeInfo, method);
    sub_1C2E12C(&CreateSkillTaskFromBuffAction___TypeInfo, v2);
    byte_4C003F7 = 1;
  }
  v3 = (CreateSkillTaskFromBuffAction_array *)sub_1C2E1D4(CreateSkillTaskFromBuffAction___TypeInfo, 1LL);
  v4 = (Il2CppObject *)sub_1C2E378(CreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v3 )
    sub_1C2E388(v5, v6);
  if ( v4 )
  {
    v5 = sub_1C2E268(v4, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
      v14 = sub_1C2E3AC(0LL);
      sub_1C2E254(v14, 0LL);
    }
  }
  if ( !v3->max_length )
    sub_1C2E390(v5, v6);
  v3->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v3->m_Items, (int64_t)v4, v7, v8, v9, v10, v11, v12);
  return v3;
}


int32_t __fastcall BattleAddSkillTaskAfterCommandAttack__get_AddTiming(
        BattleAddSkillTaskAfterCommandAttack_o *this,
        const MethodInfo *method)
{
  return 4;
}