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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v12; // x0

  if ( (byte_4C59D3D & 1) == 0 )
  {
    sub_1C3E564(&CreateComboStartSkillTask_TypeInfo);
    sub_1C3E564(&CreateSkillTaskFromBuffAction___TypeInfo);
    sub_1C3E564(&CreateTreasureDeviceBeforeSkillTask_TypeInfo);
    byte_4C59D3D = 1;
  }
  v2 = (CreateSkillTaskFromBuffAction_array *)sub_1C3E60C(CreateSkillTaskFromBuffAction___TypeInfo, 2);
  v3 = (Il2CppObject *)sub_1C3E7B0(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v2 )
    sub_1C3E7C0(v4, v5);
  if ( v3 )
  {
    v4 = sub_1C3E6A0(v3, v2->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_12;
  }
  if ( !LODWORD(v2->max_length) )
    goto LABEL_11;
  v2->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)v2->m_Items, (int32_t)v3, v6, v7);
  v8 = (Il2CppObject *)sub_1C3E7B0(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( v8 )
  {
    v4 = sub_1C3E6A0(v8, v2->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_12:
      v12 = sub_1C3E7E4(v4);
      sub_1C3E68C(v12, 0);
    }
  }
  if ( LODWORD(v2->max_length) <= 1 )
LABEL_11:
    sub_1C3E7C8(v4, v5);
  v2->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->m_Items[1], (int32_t)v8, v9, v10);
  return v2;
}


int32_t BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}