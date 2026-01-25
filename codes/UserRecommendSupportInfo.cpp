void UserRecommendSupportInfo___ctor(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// positive sp value has been detected, the output may be wrong!
void UserRecommendSupportInfo__Finalize(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
  {
    userSvtLeaderInfo->fields.equipTarget1 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&userSvtLeaderInfo->fields.equipTarget1, 0, v2, v3, v4, v5, v6, v7);
  }
  System_Object__Finalize((Il2CppObject *)this, 0);
}