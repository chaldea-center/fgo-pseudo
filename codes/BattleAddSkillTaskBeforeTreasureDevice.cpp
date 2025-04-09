void __fastcall BattleAddSkillTaskBeforeTreasureDevice___ctor(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CreateSkillTaskFromBuffAction_array *__fastcall BattleAddSkillTaskBeforeTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CreateSkillTaskFromBuffAction_array *v4; // x19
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v14; // x0

  if ( (byte_49BDB59 & 1) == 0 )
  {
    sub_1B4CF90(&CreateComboStartSkillTask_TypeInfo, method);
    sub_1B4CF90(&CreateSkillTaskFromBuffAction___TypeInfo, v2);
    sub_1B4CF90(&CreateTreasureDeviceBeforeSkillTask_TypeInfo, v3);
    byte_49BDB59 = 1;
  }
  v4 = (CreateSkillTaskFromBuffAction_array *)sub_1B4D038(CreateSkillTaskFromBuffAction___TypeInfo, 2LL);
  v5 = (Il2CppObject *)sub_1B4D1DC(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v4 )
    sub_1B4D1EC(v6, v7);
  if ( v5 )
  {
    v6 = sub_1B4D0CC(v5, v4->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v4->max_length )
    goto LABEL_11;
  v4->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v5;
  sub_1B4CF34((CGThumbnailListItem_o *)v4->m_Items, (int32_t)v5, v8, v9);
  v10 = (Il2CppObject *)sub_1B4D1DC(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( v10 )
  {
    v6 = sub_1B4D0CC(v10, v4->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v14 = sub_1B4D210(v6);
      sub_1B4D0B8(v14, 0LL);
    }
  }
  if ( v4->max_length <= 1 )
LABEL_11:
    sub_1B4D1F4(v6, v7);
  v4->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->m_Items[1], (int32_t)v10, v11, v12);
  return v4;
}


int32_t __fastcall BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}