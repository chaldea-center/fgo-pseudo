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
  __int64 v4; // x2

  if ( (byte_4C2A24B & 1) == 0 )
  {
    sub_1C2D490(&BuffList_ACTION___TypeInfo);
    byte_4C2A24B = 1;
  }
  result = (BuffList_ACTION_array *)sub_1C2D538(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1C2D6EC(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v3, v4);
  result->m_Items[0] = 141;
  return result;
}