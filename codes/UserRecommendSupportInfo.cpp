void UserRecommendSupportInfo___ctor(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserRecommendSupportInfo__ChangeLimitCountBySpoilerProtection(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(userSvtLeaderInfo, method);
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
    sub_1C2D434(userSvtLeaderInfo + 1, 0, v2, v3);
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


int32_t UserRecommendSupportInfo__GetExceedCount(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.exceedCount;
  else
    return 0;
}


int32_t UserRecommendSupportInfo__GetFriendNpNameDispLimitCount(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return ServantLeaderInfo__GetFriendNpNameDispLimitCount(userSvtLeaderInfo, method);
  else
    return -1;
}


int32_t UserRecommendSupportInfo__GetIconLimitCount(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return ServantLeaderInfo__getIconLimitCount(userSvtLeaderInfo, method);
  else
    return -1;
}


int32_t UserRecommendSupportInfo__GetLimitCount(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.limitCount;
  else
    return 0;
}


int32_t UserRecommendSupportInfo__GetLv(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.lv;
  else
    return 1;
}


System_String_o *UserRecommendSupportInfo__GetOverWriteServantName(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *userSvtLeaderInfo; // x9

  if ( (byte_4C28756 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28756 = 1;
  }
  userSvtLeaderInfo = (System_String_o *)this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (System_String_o *)userSvtLeaderInfo[12].klass;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *UserRecommendSupportInfo__GetRandomLimitCountTargets(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  System_Int32_array *result; // x0

  if ( (byte_4C28758 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C28758 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( !userSvtLeaderInfo )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  result = userSvtLeaderInfo->fields.randomLimitCountTargets;
  if ( !result )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return result;
}


int32_t UserRecommendSupportInfo__GetServantId(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4C28755 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28755 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
  {
    v4 = *(_QWORD *)&userSvtLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userSvtLeaderInfo->fields.svtId.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v4 = *(_QWORD *)&v6.fields.currentCryptoKey;
    v5 = *(_QWORD *)&v6.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v8, 0);
}


bool UserRecommendSupportInfo__GetTreasureDeviceInfo(
        UserRecommendSupportInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v5; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  if ( (byte_4C28757 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    byte_4C28757 = 1;
  }
  v5 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v5, v6);
  *tdInfo = v5;
  sub_1C2D434((CGThumbnailListItem_o *)tdInfo, (int32_t)v5, v7, v8);
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LOBYTE(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceInfo(userSvtLeaderInfo, tdInfo, v9);
  return (char)userSvtLeaderInfo;
}


bool UserRecommendSupportInfo__GetTreasureDeviceInfo_43317648(
        UserRecommendSupportInfo_o *this,
        int32_t *tdLv,
        int32_t *tdMaxLv,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  *tdLv = 1;
  *tdMaxLv = 1;
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LOBYTE(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceInfo_43254296(
                                  userSvtLeaderInfo,
                                  tdLv,
                                  tdMaxLv,
                                  method);
  return (char)userSvtLeaderInfo;
}


int32_t UserRecommendSupportInfo__GetTreasureDeviceLevelIcon(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LODWORD(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceLevelIcon(userSvtLeaderInfo, method);
  return (int)userSvtLeaderInfo;
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