void EventRankingRoundItemInfo___ctor(EventRankingRoundItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRankingRoundItemInfo__get_IsGoal(EventRankingRoundItemInfo_o *this, const MethodInfo *method)
{
  return this->fields.goalPoint <= this->fields.nowPoint;
}