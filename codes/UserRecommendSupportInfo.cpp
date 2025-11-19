void UserRecommendSupportInfo___ctor(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// positive sp value has been detected, the output may be wrong!
void UserRecommendSupportInfo__Finalize(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = (CGThumbnailListItem_o *)this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
  {
    userSvtLeaderInfo[1].klass = 0;
    sub_1C6B9AC(userSvtLeaderInfo + 1, 0, v2, v3);
  }
  System_Object__Finalize((Il2CppObject *)this, 0);
}


EquipTargetInfo_o *UserRecommendSupportInfo__GetEquipTarget(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.equipTarget1;
  else
    return 0;
}


int64_t UserRecommendSupportInfo__GetUserServantId(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.userSvtId;
  else
    return 0;
}