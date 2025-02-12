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

  if ( (byte_4BCA6C8 & 1) == 0 )
  {
    sub_1C1ABD4(&BuffList_ACTION___TypeInfo, method);
    byte_4BCA6C8 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C1AC7C(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1C1AE30(0LL, v3);
  if ( !result->max_length )
    sub_1C1AE38(result, v3);
  result->m_Items[1] = 141;
  return result;
}