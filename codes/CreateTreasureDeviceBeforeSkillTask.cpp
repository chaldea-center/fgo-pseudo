void CreateTreasureDeviceBeforeSkillTask___ctor(CreateTreasureDeviceBeforeSkillTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BuffList_ACTION_array *CreateTreasureDeviceBeforeSkillTask__get_TargetActs(
        CreateTreasureDeviceBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_4C59D48 & 1) == 0 )
  {
    sub_1C3E564(&BuffList_ACTION___TypeInfo);
    byte_4C59D48 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C3E60C(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C3E7C0(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_1C3E7C8(result, v3);
  result->m_Items[0] = 141;
  return result;
}