void CreateOtherTreasureDevicePreBeforeSkillTask___ctor(
        CreateOtherTreasureDevicePreBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  CreateSkillTaskFromBuffAction___ctor((CreateSkillTaskFromBuffAction_o *)this, 0);
}


BuffList_ACTION_array *CreateOtherTreasureDevicePreBeforeSkillTask__get_TargetActs(
        CreateOtherTreasureDevicePreBeforeSkillTask_o *this,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v3; // x1

  if ( (byte_593B8E6 & 1) == 0 )
  {
    sub_21FFC50(&BuffList_ACTION___TypeInfo);
    byte_593B8E6 = 1;
  }
  result = (BuffList_ACTION_array *)sub_21FFD10(BuffList_ACTION___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v3);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  result->m_Items[0] = 166;
  return result;
}