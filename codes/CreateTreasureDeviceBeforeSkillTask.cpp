void __fastcall CreateTreasureDeviceBeforeSkillTask___ctor(
        CreateTreasureDeviceBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BuffList_ACTION_array *__fastcall CreateTreasureDeviceBeforeSkillTask__get_TargetActs(
        CreateTreasureDeviceBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_4BDF179 & 1) == 0 )
  {
    sub_1C21E38(&BuffList_ACTION___TypeInfo);
    byte_4BDF179 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C21EE0(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v3);
  if ( !result->max_length )
    sub_1C2209C(result, v3);
  result->m_Items[1] = 141;
  return result;
}