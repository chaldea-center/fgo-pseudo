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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x20
  const MethodInfo *v11; // x3
  __int64 v13; // x0

  if ( (byte_4B04E6C & 1) == 0 )
  {
    sub_1BC3008(&CreateComboStartSkillTask_TypeInfo, method);
    sub_1BC3008(&CreateSkillTaskFromBuffAction___TypeInfo, v2);
    sub_1BC3008(&CreateTreasureDeviceBeforeSkillTask_TypeInfo, v3);
    byte_4B04E6C = 1;
  }
  v4 = (CreateSkillTaskFromBuffAction_array *)sub_1BC30B0(CreateSkillTaskFromBuffAction___TypeInfo, 2LL);
  v5 = (Il2CppObject *)sub_1BC3254(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v4 )
    sub_1BC3264(v6, v7);
  if ( v5 )
  {
    v6 = sub_1BC3144(v5, v4->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v4->max_length )
    goto LABEL_11;
  v4->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)v4->m_Items, (int32_t)v5, v8, v9);
  v10 = (Il2CppObject *)sub_1BC3254(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( v10 )
  {
    v6 = sub_1BC3144(v10, v4->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v13 = sub_1BC3288(v6);
      sub_1BC3130(v13, 0LL);
    }
  }
  if ( v4->max_length <= 1 )
LABEL_11:
    sub_1BC326C(v6, v7, v8);
  v4->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->m_Items[1], (int32_t)v10, v8, v11);
  return v4;
}


int32_t __fastcall BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}