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
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x20
  const MethodInfo *v9; // x3
  __int64 v11; // x0

  if ( (byte_4C2A240 & 1) == 0 )
  {
    sub_1C2D490(&CreateComboStartSkillTask_TypeInfo);
    sub_1C2D490(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_1C2D490(&CreateTreasureDeviceBeforeSkillTask_TypeInfo);
    byte_4C2A240 = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C2D538(CreateSkillTaskFromBuffAction___TypeInfo, 2);
  v3 = (Il2CppObject *)sub_1C2D6DC(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C2D6EC(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C2D5CC(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_12;
  }
  if ( !LODWORD(v2->max_length) )
    goto LABEL_11;
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v6, v7);
  v8 = (Il2CppObject *)sub_1C2D6DC(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( v8 )
  {
    v4 = sub_1C2D5CC(v8, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_12:
      v11 = sub_1C2D710(v4);
      sub_1C2D5B8(v11, 0);
    }
  }
  if ( LODWORD(v2->max_length) <= 1 )
LABEL_11:
    sub_1C2D6F4(v4, v5, v6);
  v2->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->m_Items[1], (int32_t)v8, v6, v9);
  return v2;
}


int32_t BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}