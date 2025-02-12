void __fastcall BattleAddSkillTaskAfterCounterTreasureDevice___ctor(
        BattleAddSkillTaskAfterCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CreateSkillTaskFromBuffAction_array *__fastcall BattleAddSkillTaskAfterCounterTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskAfterCounterTreasureDevice_o *this,
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

  if ( (byte_4BCA6C1 & 1) == 0 )
  {
    sub_1C1ABD4(&CreateSkillTaskFromBuffAction___TypeInfo, method);
    sub_1C1ABD4(&ForceCreateComboEndSkillTask_TypeInfo, v2);
    byte_4BCA6C1 = 1;
  }
  v3 = (CreateSkillTaskFromBuffAction_array *)sub_1C1AC7C(CreateSkillTaskFromBuffAction___TypeInfo, 1LL);
  v4 = (Il2CppObject *)sub_1C1AE20(ForceCreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v3 )
    sub_1C1AE30(v5, v6);
  if ( v4 )
  {
    v5 = sub_1C1AD10(v4, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
      v14 = sub_1C1AE54(0LL);
      sub_1C1ACFC(v14, 0LL);
    }
  }
  if ( !v3->max_length )
    sub_1C1AE38(v5, v6);
  v3->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)v3->m_Items, (int64_t)v4, v7, v8, v9, v10, v11, v12);
  return v3;
}