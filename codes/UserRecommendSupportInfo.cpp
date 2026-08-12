void UserRecommendSupportInfo___ctor(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserRecommendSupportInfo__Finalize(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x0
  Il2CppObject *v10; // [xsp+18h] [xbp-18h]

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  v10 = (Il2CppObject *)this;
  if ( userSvtLeaderInfo )
  {
    userSvtLeaderInfo->fields.equipTarget1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&userSvtLeaderInfo->fields.equipTarget1, 0, v2, v3, v4, v5, v6, v7);
  }
  System_Object__Finalize(v10, 0);
}