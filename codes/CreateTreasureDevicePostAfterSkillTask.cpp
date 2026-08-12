void CreateTreasureDevicePostAfterSkillTask___ctor(
        CreateTreasureDevicePostAfterSkillTask_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BuffList_ACTION_array *CreateTreasureDevicePostAfterSkillTask__get_TargetActs(
        CreateTreasureDevicePostAfterSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_5973A1F & 1) == 0 )
  {
    sub_2213A60(&BuffList_ACTION___TypeInfo);
    byte_5973A1F = 1;
  }
  result = (BuffList_ACTION_array *)sub_2213B20(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_2213CDC(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
  result->m_Items[0] = 168;
  return result;
}