void BattleRankUpSkillInfoData___ctor(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A70C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    byte_4C3A70C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.rankUpList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rankUpList, (int32_t)v3, v4, v5);
  this->fields.itemImageId = -1;
  *(_QWORD *)&this->fields.cutInId = -1;
  *(_QWORD *)&this->fields.commonReleaseCondId = -1;
  this->fields._SelectAddIndex_k__BackingField = -1;
  this->fields.canExecSkill = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleSkillInfoData_array *BattleRankUpSkillInfoData__GetLoadArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rankUpList; // x0

  if ( (byte_4C3A70B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    byte_4C3A70B = 1;
  }
  rankUpList = (System_Collections_Generic_List_object__o *)this->fields.rankUpList;
  if ( !rankUpList )
    sub_1C32E7C(0);
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        rankUpList,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t BattleRankUpSkillInfoData__GetRankUpState(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 FixRank; // x0
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8

  if ( BattleRankUpSkillInfoData__get_IsNotShowRankUpIcon(this, method) )
    return 0;
  if ( !this->fields.rankChangeData )
    return 0;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, v3);
  if ( (int)FixRank < 1 )
    return 0;
  rankChangeData = this->fields.rankChangeData;
  if ( !rankChangeData )
    sub_1C32E7C(FixRank);
  if ( rankChangeData->fields._IsAddRightAfter_k__BackingField )
    return 1;
  else
    return 2;
}


bool BattleRankUpSkillInfoData__IsChangeable(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0
  int32_t v4; // w20

  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    v4 = BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(rankChangeData, 0);
  else
    v4 = 0;
  return v4 < BattleRankUpSkillInfoData__get_RankUpLimit(this, method);
}


void BattleRankUpSkillInfoData__UseSkill(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0

  if ( this->fields.rankChangeData && BattleRankUpSkillInfoData__get_FixRank(this, method) >= 1 )
  {
    rankChangeData = this->fields.rankChangeData;
    if ( !rankChangeData )
      sub_1C32E7C(0);
    BattleBuffData_SkillRankChangeData__UseBuff(rankChangeData, 0);
  }
}


int32_t BattleRankUpSkillInfoData__getCutInId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return BattleSkillInfoData__getCutInId((BattleSkillInfoData_o *)this, v3);
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_1C32E7C(0);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))Current->klass->vtable._9_getCutInId.methodPtr)(
           Current,
           Current->klass->vtable._9_getCutInId.method);
}


BattleSkillInfoData_o *BattleRankUpSkillInfoData__get_Current(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *rankUpList; // x20
  int32_t FixRank; // w1

  if ( (byte_4C3A70A & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleSkillInfoData___);
    byte_4C3A70A = 1;
  }
  rankUpList = (System_Collections_Generic_List_T__o *)this->fields.rankUpList;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, method);
  return (BattleSkillInfoData_o *)BasicHelper__IndexValue_object__51165460(
                                    rankUpList,
                                    FixRank,
                                    0,
                                    (const MethodInfo_30CB914 *)Method_BasicHelper_IndexValue_BattleSkillInfoData___);
}


int32_t BattleRankUpSkillInfoData__get_CurrentLogicRank(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0

  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    LODWORD(rankChangeData) = BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(rankChangeData, 0);
  return (int)rankChangeData;
}


int32_t BattleRankUpSkillInfoData__get_CurrentRank(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8

  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    return rankChangeData->fields._RankUpCount_k__BackingField;
  else
    return 0;
}


int32_t BattleRankUpSkillInfoData__get_FixRank(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8
  int32_t RankUpCount_k__BackingField; // w20
  int32_t RankUpLimit; // w19

  if ( (byte_4C3A709 & 1) == 0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3A709 = 1;
  }
  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    RankUpCount_k__BackingField = rankChangeData->fields._RankUpCount_k__BackingField;
  else
    RankUpCount_k__BackingField = 0;
  RankUpLimit = BattleRankUpSkillInfoData__get_RankUpLimit(this, method);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65042304(RankUpCount_k__BackingField, RankUpLimit, 0);
}


System_Int32_array *BattleRankUpSkillInfoData__get_IndividualityArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *Current; // x0
  const MethodInfo *v4; // x1
  System_Int32_array *result; // x0

  Current = BattleRankUpSkillInfoData__get_Current(this, method);
  if ( !Current )
    return BattleSkillInfoData__get_IndividualityArray((BattleSkillInfoData_o *)this, v4);
  result = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))Current->klass->vtable._8_get_IndividualityArray.methodPtr)(
                                   Current,
                                   Current->klass->vtable._8_get_IndividualityArray.method);
  if ( !result )
    return BattleSkillInfoData__get_IndividualityArray((BattleSkillInfoData_o *)this, v4);
  return result;
}


bool BattleRankUpSkillInfoData__get_IsNotShowRankUpIcon(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  SkillEntity_o *SelfSkillEntity; // x0

  SelfSkillEntity = BattleSkillInfoData__GetSelfSkillEntity((BattleSkillInfoData_o *)this, method);
  if ( !SelfSkillEntity )
    sub_1C32E7C(0);
  return SkillEntity__IsNotShowRankUpIcon(SelfSkillEntity, 0);
}


int32_t BattleRankUpSkillInfoData__get_RankUpLimit(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  BattleRankUpSkillInfoData_o *v2; // x19
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8

  v2 = this;
  if ( (byte_4C3A708 & 1) == 0 )
  {
    this = (BattleRankUpSkillInfoData_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    byte_4C3A708 = 1;
  }
  rankUpList = v2->fields.rankUpList;
  if ( !rankUpList )
    sub_1C32E7C(this);
  return rankUpList->fields._size - 1;
}


int32_t BattleRankUpSkillInfoData__get_skillId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return this->fields._skillId;
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_1C32E7C(0);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))Current->klass->vtable._5_get_skillId.methodPtr)(
           Current,
           Current->klass->vtable._5_get_skillId.method);
}