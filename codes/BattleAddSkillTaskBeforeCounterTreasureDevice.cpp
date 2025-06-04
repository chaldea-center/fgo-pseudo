void __fastcall BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(
        BattleAddSkillTaskBeforeCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


CreateSkillTaskFromBuffAction_array *__fastcall BattleAddSkillTaskBeforeCounterTreasureDevice__GetCreateSkillTaskArray(
        BattleAddSkillTaskBeforeCounterTreasureDevice_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CreateSkillTaskFromBuffAction_array *v3; // x19
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  if ( (byte_4B04E6D & 1) == 0 )
  {
    sub_1BC3008(&CreateSkillTaskFromBuffAction___TypeInfo, method);
    sub_1BC3008(&ForceCreateComboStartSkillTask_TypeInfo, v2);
    byte_4B04E6D = 1;
  }
  v3 = (CreateSkillTaskFromBuffAction_array *)sub_1BC30B0(CreateSkillTaskFromBuffAction___TypeInfo, 1LL);
  v4 = (Il2CppObject *)sub_1BC3254(ForceCreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v4, 0LL);
  if ( !v3 )
    sub_1BC3264(v5, v6);
  if ( v4 )
  {
    v5 = sub_1BC3144(v4, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
      v10 = sub_1BC3288(0LL);
      sub_1BC3130(v10, 0LL);
    }
  }
  if ( !v3->max_length )
    sub_1BC326C(v5, v6, v7);
  v3->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v4, v7, v8);
  return v3;
}