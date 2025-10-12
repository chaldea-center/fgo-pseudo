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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v11; // x0

  if ( (byte_4C3A953 & 1) == 0 )
  {
    sub_1C32C20(&CreateComboStartSkillTask_TypeInfo);
    sub_1C32C20(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_1C32C20(&CreateTreasureDeviceBeforeSkillTask_TypeInfo);
    byte_4C3A953 = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C32CC8(CreateSkillTaskFromBuffAction___TypeInfo, 2);
  v3 = (Il2CppObject *)sub_1C32E6C(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C32E7C(v4);
  if ( v3 )
  {
    v4 = sub_1C32D5C(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_12;
  }
  if ( !LODWORD(v2->max_length) )
    goto LABEL_11;
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v5, v6);
  v7 = (Il2CppObject *)sub_1C32E6C(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( v7 )
  {
    v4 = sub_1C32D5C(v7, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_12:
      v11 = sub_1C32EA0(v4);
      sub_1C32D48(v11, 0);
    }
  }
  if ( LODWORD(v2->max_length) <= 1 )
LABEL_11:
    sub_1C32E84(v4);
  v2->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->m_Items[1], (int32_t)v7, v8, v9);
  return v2;
}


int32_t BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}