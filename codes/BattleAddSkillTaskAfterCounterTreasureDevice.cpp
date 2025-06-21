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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  if ( (byte_4B1F3A9 & 1) == 0 )
  {
    sub_1BCAFF8(&CreateSkillTaskFromBuffAction___TypeInfo, method);
    sub_1BCAFF8(&ForceCreateComboEndSkillTask_TypeInfo, v2);
    byte_4B1F3A9 = 1;
  }
  v3 = (CreateSkillTaskFromBuffAction_array *)sub_1BCB0A0(CreateSkillTaskFromBuffAction___TypeInfo, 1LL);
  v4 = (Il2CppObject *)sub_1BCB244(ForceCreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v3 )
    sub_1BCB254(v5, v6);
  if ( v4 )
  {
    v5 = sub_1BCB134(v4, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
      v10 = sub_1BCB278(0LL);
      sub_1BCB120(v10, 0LL);
    }
  }
  if ( !v3->max_length )
    sub_1BCB25C(v5, v6, v7);
  v3->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v4, v7, v8);
  return v3;
}