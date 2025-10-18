void CreateTreasureDeviceBeforeSkillTask___ctor(CreateTreasureDeviceBeforeSkillTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BuffList_ACTION_array *CreateTreasureDeviceBeforeSkillTask__get_TargetActs(
        CreateTreasureDeviceBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0

  if ( (byte_4C45F6B & 1) == 0 )
  {
    sub_1C37058(&BuffList_ACTION___TypeInfo);
    byte_4C45F6B = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C37100(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C372B4(0);
  if ( !LODWORD(result->max_length) )
    sub_1C372BC(result);
  result->m_Items[0] = 141;
  return result;
}