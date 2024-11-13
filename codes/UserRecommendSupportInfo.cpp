void __fastcall UserRecommendSupportInfo___ctor(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserRecommendSupportInfo__ChangeLimitCountBySpoilerProtection(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(userSvtLeaderInfo, 0LL);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall UserRecommendSupportInfo__Finalize(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = (PartyOrganizationUtility_o *)this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
  {
    userSvtLeaderInfo[1].klass = 0LL;
    sub_1BCA784(userSvtLeaderInfo + 1, 0LL, v2, v3, v4, v5, v6, v7);
  }
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


EquipTargetInfo_o *__fastcall UserRecommendSupportInfo__GetEquipTarget(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.equipTarget1;
  else
    return 0LL;
}


int32_t __fastcall UserRecommendSupportInfo__GetExceedCount(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.exceedCount;
  else
    return 0;
}


int32_t __fastcall UserRecommendSupportInfo__GetFriendNpNameDispLimitCount(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return ServantLeaderInfo__GetFriendNpNameDispLimitCount(userSvtLeaderInfo, 0LL);
  else
    return -1;
}


int32_t __fastcall UserRecommendSupportInfo__GetIconLimitCount(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return ServantLeaderInfo__getIconLimitCount(userSvtLeaderInfo, 0LL);
  else
    return -1;
}


int32_t __fastcall UserRecommendSupportInfo__GetLimitCount(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.limitCount;
  else
    return 0;
}


int32_t __fastcall UserRecommendSupportInfo__GetLv(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.lv;
  else
    return 1;
}


System_String_o *__fastcall UserRecommendSupportInfo__GetOverWriteServantName(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *userSvtLeaderInfo; // x9

  if ( (byte_4B174A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B174A4 = 1;
  }
  userSvtLeaderInfo = (System_String_o *)this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (System_String_o *)userSvtLeaderInfo[10].monitor;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall UserRecommendSupportInfo__GetRandomLimitCountTargets(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  System_Int32_array *result; // x0

  if ( (byte_4B174A6 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B174A6 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( !userSvtLeaderInfo )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  result = userSvtLeaderInfo->fields.randomLimitCountTargets;
  if ( !result )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall UserRecommendSupportInfo__GetServantId(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B174A3 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B174A3 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
  {
    v5 = *(_QWORD *)&userSvtLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtLeaderInfo->fields.svtId.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    method = *(const MethodInfo **)&v7.fields.fakeValue;
    v6 = *(_QWORD *)&v7.fields.fakeValue;
    v5 = *(_QWORD *)&v7.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
}


bool __fastcall UserRecommendSupportInfo__GetTreasureDeviceInfo(
        UserRecommendSupportInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TreasureDvcInfo_o *v6; // x21
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  if ( (byte_4B174A5 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B174A5 = 1;
  }
  v6 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
  TreasureDvcInfo___ctor(v6, v7);
  *tdInfo = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LOBYTE(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceInfo(userSvtLeaderInfo, tdInfo, 0LL);
  return (char)userSvtLeaderInfo;
}


bool __fastcall UserRecommendSupportInfo__GetTreasureDeviceInfo_41297536(
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
    LOBYTE(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceInfo_41235708(userSvtLeaderInfo, tdLv, tdMaxLv, 0LL);
  return (char)userSvtLeaderInfo;
}


int32_t __fastcall UserRecommendSupportInfo__GetTreasureDeviceLevelIcon(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LODWORD(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceLevelIcon(userSvtLeaderInfo, 0LL);
  return (int)userSvtLeaderInfo;
}


int64_t __fastcall UserRecommendSupportInfo__GetUserServantId(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    return userSvtLeaderInfo->fields.userSvtId;
  else
    return 0LL;
}