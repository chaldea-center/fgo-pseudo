void EventInfoJobLevelSnapshot___ctor(EventInfoJobLevelSnapshot_o *this, const MethodInfo *method)
{
  struct EventInfoJobLevelSnapshot_JobEntry_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971CFD & 1) == 0 )
  {
    sub_2213A60(&EventInfoJobLevelSnapshot_JobEntry___TypeInfo);
    byte_5971CFD = 1;
  }
  v3 = (struct EventInfoJobLevelSnapshot_JobEntry_array *)sub_2213B20(EventInfoJobLevelSnapshot_JobEntry___TypeInfo, 0);
  this->fields.jobs = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jobs, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJobLevelSnapshot_JobEntry___ctor(EventInfoJobLevelSnapshot_JobEntry_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}