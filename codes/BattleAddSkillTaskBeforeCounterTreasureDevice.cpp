void BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(
        BattleAddSkillTaskBeforeCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskBeforeCounterTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskBeforeCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  ForceCreateComboStartSkillTask_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v14; // x0

  if ( (byte_593B71F & 1) == 0 )
  {
    sub_21FFC50(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_21FFC50(&ForceCreateComboStartSkillTask_TypeInfo);
    byte_593B71F = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_21FFD10(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (ForceCreateComboStartSkillTask_o *)sub_21FFEBC(ForceCreateComboStartSkillTask_TypeInfo);
  ForceCreateComboStartSkillTask___ctor(v3, 0);
  if ( !v2 )
    sub_21FFECC(v4, v5);
  if ( v3 )
  {
    v4 = sub_21FFDA4(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v14 = sub_21FFEF0(0, v12);
      sub_21FFD90(v14, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_21FFED4(v4);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v2->m_Items, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  return v2;
}