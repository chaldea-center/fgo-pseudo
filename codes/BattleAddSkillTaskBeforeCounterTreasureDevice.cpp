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
  const MethodInfo *v7; // x3
  __int64 v9; // x0

  if ( (byte_4C59D3E & 1) == 0 )
  {
    sub_1C3E564(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_1C3E564(&ForceCreateComboStartSkillTask_TypeInfo);
    byte_4C59D3E = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C3E60C(CreateSkillTaskFromBuffAction___TypeInfo, 1);
  v3 = (Il2CppObject *)sub_1C3E7B0(ForceCreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C3E7C0(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C3E6A0(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v9 = sub_1C3E7E4(0);
      sub_1C3E68C(v9, 0);
    }
  }
  if ( !LODWORD(v2->max_length) )
    sub_1C3E7C8(v4, v5);
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v6, v7);
  return v2;
}