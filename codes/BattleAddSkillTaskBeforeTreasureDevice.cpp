void BattleAddSkillTaskBeforeTreasureDevice___ctor(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskBeforeTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction_array *v2; // x19
  CreateComboStartSkillTask_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  CreateTreasureDeviceBeforeSkillTask_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v21; // x0

  if ( (byte_593B71E & 1) == 0 )
  {
    sub_21FFC50(&CreateComboStartSkillTask_TypeInfo);
    sub_21FFC50(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_21FFC50(&CreateTreasureDeviceBeforeSkillTask_TypeInfo);
    byte_593B71E = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_21FFD10(CreateSkillTaskFromBuffAction___TypeInfo, 2);
  v3 = (CreateComboStartSkillTask_o *)sub_21FFEBC(CreateComboStartSkillTask_TypeInfo);
  CreateComboStartSkillTask___ctor(v3, 0);
  if ( !v2 )
    sub_21FFECC(v4, v5);
  if ( v3 )
  {
    v4 = sub_21FFDA4(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_12;
  }
  if ( !LODWORD(v2->max_length) )
    goto LABEL_11;
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v2->m_Items, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  v13 = (CreateTreasureDeviceBeforeSkillTask_o *)sub_21FFEBC(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  CreateTreasureDeviceBeforeSkillTask___ctor(v13, 0);
  if ( v13 )
  {
    v4 = sub_21FFDA4(v13, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_12:
      v21 = sub_21FFEF0(v4, v12);
      sub_21FFD90(v21, 0);
    }
  }
  if ( (v2->max_length & 0xFFFFFFFE) == 0 )
LABEL_11:
    sub_21FFED4(v4);
  v2->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->m_Items[1], (int32_t)v13, v14, v15, v16, v17, v18, v19);
  return v2;
}


int32_t BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}