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
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v13; // x0

  if ( (byte_4CCA43B & 1) == 0 )
  {
    sub_1C713B0(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_1C713B0(&ForceCreateComboStartSkillTask_TypeInfo);
    byte_4CCA43B = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C71458(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (Il2CppObject *)sub_1C715FC(ForceCreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C71608(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C714EC(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v13 = sub_1C7162C(0);
      sub_1C714D8(v13, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_1C71610(v4);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v2->m_Items, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  return v2;
}