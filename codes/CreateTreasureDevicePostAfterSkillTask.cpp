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

  if ( (byte_4E07ADF & 1) == 0 )
  {
    sub_1CE6700(&BuffList_ACTION___TypeInfo);
    byte_4E07ADF = 1;
  }
  result = (BuffList_ACTION_array *)sub_1CE67A8(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_1CE6958(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_1CE6960(result);
  result->m_Items[0] = 168;
  return result;
}