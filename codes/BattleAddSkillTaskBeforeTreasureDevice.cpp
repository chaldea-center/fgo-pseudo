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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v22; // x0

  if ( (byte_4BCA6BD & 1) == 0 )
  {
    sub_1C1ABD4(&CreateComboStartSkillTask_TypeInfo, method);
    sub_1C1ABD4(&CreateSkillTaskFromBuffAction___TypeInfo, v2);
    sub_1C1ABD4(&CreateTreasureDeviceBeforeSkillTask_TypeInfo, v3);
    byte_4BCA6BD = 1;
  }
  v4 = (CreateSkillTaskFromBuffAction_array *)sub_1C1AC7C(CreateSkillTaskFromBuffAction___TypeInfo, 2LL);
  v5 = (Il2CppObject *)sub_1C1AE20(CreateComboStartSkillTask_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v4 )
    sub_1C1AE30(v6, v7);
  if ( v5 )
  {
    v6 = sub_1C1AD10(v5, v4->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_12;
  }
  if ( !v4->max_length )
    goto LABEL_11;
  v4->m_Items[0] = (CreateSkillTaskFromBuffAction_o *)v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)v4->m_Items, (int64_t)v5, v8, v9, v10, v11, v12, v13);
  v14 = (Il2CppObject *)sub_1C1AE20(CreateTreasureDeviceBeforeSkillTask_TypeInfo);
  System_Object___ctor(v14, 0LL);
  if ( v14 )
  {
    v6 = sub_1C1AD10(v14, v4->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_12:
      v22 = sub_1C1AE54(v6);
      sub_1C1ACFC(v22, 0LL);
    }
  }
  if ( v4->max_length <= 1 )
LABEL_11:
    sub_1C1AE38(v6, v7);
  v4->m_Items[1] = (CreateSkillTaskFromBuffAction_o *)v14;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v4->m_Items[1], (int64_t)v14, v15, v16, v17, v18, v19, v20);
  return v4;
}


int32_t __fastcall BattleAddSkillTaskBeforeTreasureDevice__get_AddTiming(
        BattleAddSkillTaskBeforeTreasureDevice_o *this,
        const MethodInfo *method)
{
  return 1;
}