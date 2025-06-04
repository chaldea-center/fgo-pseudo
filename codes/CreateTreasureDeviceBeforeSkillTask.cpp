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
  __int64 v4; // x2

  if ( (byte_4B04E77 & 1) == 0 )
  {
    sub_1BC3008(&BuffList_ACTION___TypeInfo, method);
    byte_4B04E77 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1BC30B0(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1BC3264(0LL, v3);
  if ( !result->max_length )
    sub_1BC326C(result, v3, v4);
  result->m_Items[1] = 141;
  return result;
}