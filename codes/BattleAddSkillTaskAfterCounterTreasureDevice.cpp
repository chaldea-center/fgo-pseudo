void BattleAddSkillTaskAfterCounterTreasureDevice___ctor(
        BattleAddSkillTaskAfterCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  BattleAddSkillTaskAroundTargetTask___ctor((BattleAddSkillTaskAroundTargetTask_o *)this, 0);
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskAfterCounterTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskAfterCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  Il2CppObject *v3; // x20
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

  if ( (byte_5973A15 & 1) == 0 )
  {
    sub_2213A60(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_2213A60(&ForceCreateComboEndSkillTask_TypeInfo);
    byte_5973A15 = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_2213B20(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (Il2CppObject *)sub_2213CCC(ForceCreateComboEndSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_2213CDC(v4, v5);
  if ( v3 )
  {
    v4 = sub_2213BB4(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v14 = sub_2213D00(0, v12);
      sub_2213BA0(v14, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_2213CE4(v4);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v2->m_Items, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  return v2;
}