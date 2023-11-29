void __fastcall EventRankingRoundItemInfo___ctor(EventRankingRoundItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRankingRoundItemInfo__get_IsGoal(EventRankingRoundItemInfo_o *this, const MethodInfo *method)
{
  return this->fields.goalPoint <= this->fields.nowPoint;
}


bool __fastcall EventRankingRoundItemInfo__get_IsMostSupport(
        EventRankingRoundItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mostSupportGroupId == this->fields.groupId;
}