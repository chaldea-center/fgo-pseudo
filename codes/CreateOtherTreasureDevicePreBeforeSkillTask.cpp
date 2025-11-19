void CreateOtherTreasureDevicePreBeforeSkillTask___ctor(
        CreateOtherTreasureDevicePreBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BuffList_ACTION_array *CreateOtherTreasureDevicePreBeforeSkillTask__get_TargetActs(
        CreateOtherTreasureDevicePreBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_4CB9306 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_ACTION___TypeInfo);
    byte_4CB9306 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C6BAB0(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C6BC60(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_1C6BC68(result);
  result->m_Items[0] = 166;
  return result;
}