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
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(userSvtLeaderInfo, method);
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
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
  {
    userSvtLeaderInfo->fields.equipTarget1 = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&userSvtLeaderInfo->fields.equipTarget1, 0LL, v2, v3, v4, v5, v6, v7);
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
    return ServantLeaderInfo__GetFriendNpNameDispLimitCount(userSvtLeaderInfo, method);
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
    return ServantLeaderInfo__getIconLimitCount(userSvtLeaderInfo, method);
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
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x9

  if ( (byte_4BFEAA1 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFEAA1 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    userSvtLeaderInfo = (struct ServantLeaderInfo_o *)userSvtLeaderInfo->fields.overwriteServantName;
  if ( userSvtLeaderInfo )
    return (System_String_o *)userSvtLeaderInfo;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall UserRecommendSupportInfo__GetRandomLimitCountTargets(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  System_Int32_array *result; // x0

  if ( (byte_4BFEAA3 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, method);
    byte_4BFEAA3 = 1;
  }
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( !userSvtLeaderInfo )
    return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  result = userSvtLeaderInfo->fields.randomLimitCountTargets;
  if ( !result )
    return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall UserRecommendSupportInfo__GetServantId(UserRecommendSupportInfo_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *userSvtLeaderInfo; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4BFEAA0 & 1) == 0 )
  {
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BFEAA0 = 1;
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
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v5 = *(_QWORD *)&v6.fields.fakeValue;
    v4 = *(_QWORD *)&v6.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v8, 0LL);
}


bool __fastcall UserRecommendSupportInfo__GetTreasureDeviceInfo(
        UserRecommendSupportInfo_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v5; // x21
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  if ( (byte_4BFEAA2 & 1) == 0 )
  {
    sub_1C2E12C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4BFEAA2 = 1;
  }
  v5 = (TreasureDvcInfo_o *)sub_1C2E378(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v5, v6);
  *tdInfo = v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)tdInfo, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LOBYTE(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceInfo(userSvtLeaderInfo, tdInfo, v13);
  return (char)userSvtLeaderInfo;
}


bool __fastcall UserRecommendSupportInfo__GetTreasureDeviceInfo_41928008(
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
    LOBYTE(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceInfo_41865692(
                                  userSvtLeaderInfo,
                                  tdLv,
                                  tdMaxLv,
                                  method);
  return (char)userSvtLeaderInfo;
}


int32_t __fastcall UserRecommendSupportInfo__GetTreasureDeviceLevelIcon(
        UserRecommendSupportInfo_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userSvtLeaderInfo; // x0

  userSvtLeaderInfo = this->fields.userSvtLeaderInfo;
  if ( userSvtLeaderInfo )
    LODWORD(userSvtLeaderInfo) = ServantLeaderInfo__getTreasureDeviceLevelIcon(userSvtLeaderInfo, method);
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