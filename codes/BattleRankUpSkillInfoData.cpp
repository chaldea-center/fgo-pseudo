void __fastcall BattleRankUpSkillInfoData___ctor(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A5101A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v3);
    byte_4A5101A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.rankUpList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rankUpList, (int32_t)v4, v5, v6);
  this->fields.itemImageId = -1;
  *(_QWORD *)&this->fields.cutInId = -1LL;
  *(_QWORD *)&this->fields.commonReleaseCondId = -1LL;
  this->fields._SelectAddIndex_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleRankUpSkillInfoData__GetLoadArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rankUpList; // x0

  if ( (byte_4A51019 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, method);
    byte_4A51019 = 1;
  }
  rankUpList = (System_Collections_Generic_List_object__o *)this->fields.rankUpList;
  if ( !rankUpList )
    sub_1B86614(0LL, method);
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        rankUpList,
                                        (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleRankUpSkillInfoData__GetRankUpState(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 FixRank; // x0
  __int64 v5; // x1
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
    sub_1B86614(FixRank, v5);
  if ( rankChangeData->fields._IsAddRightAfter_k__BackingField )
    return 1;
  else
    return 2;
}


bool __fastcall BattleRankUpSkillInfoData__IsChangeable(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0
  int32_t v4; // w20

  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    v4 = BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(rankChangeData, 0LL);
  else
    v4 = 0;
  return v4 < BattleRankUpSkillInfoData__get_RankUpLimit(this, method);
}


void __fastcall BattleRankUpSkillInfoData__UseSkill(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0

  if ( this->fields.rankChangeData && BattleRankUpSkillInfoData__get_FixRank(this, method) >= 1 )
  {
    rankChangeData = this->fields.rankChangeData;
    if ( !rankChangeData )
      sub_1B86614(0LL, v3);
    BattleBuffData_SkillRankChangeData__UseBuff(rankChangeData, 0LL);
  }
}


int32_t __fastcall BattleRankUpSkillInfoData__getCutInId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0
  __int64 v5; // x1

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return BattleSkillInfoData__getCutInId((BattleSkillInfoData_o *)this, v3);
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_1B86614(0LL, v5);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._7_getCutInId.method)(
           Current,
           Current->klass->vtable._8_PreLoad.methodPtr);
}


BattleSkillInfoData_o *__fastcall BattleRankUpSkillInfoData__get_Current(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *rankUpList; // x20
  int32_t FixRank; // w1

  if ( (byte_4A51018 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_BattleSkillInfoData___, method);
    byte_4A51018 = 1;
  }
  rankUpList = (System_Collections_Generic_List_T__o *)this->fields.rankUpList;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, method);
  return (BattleSkillInfoData_o *)BasicHelper__IndexValue_object__49661204(
                                    rankUpList,
                                    FixRank,
                                    0LL,
                                    (const MethodInfo_2F5C514 *)Method_BasicHelper_IndexValue_BattleSkillInfoData___);
}


int32_t __fastcall BattleRankUpSkillInfoData__get_CurrentLogicRank(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0

  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    LODWORD(rankChangeData) = BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(rankChangeData, 0LL);
  return (int)rankChangeData;
}


int32_t __fastcall BattleRankUpSkillInfoData__get_CurrentRank(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8

  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    return rankChangeData->fields._RankUpCount_k__BackingField;
  else
    return 0;
}


int32_t __fastcall BattleRankUpSkillInfoData__get_FixRank(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8
  int32_t RankUpCount_k__BackingField; // w20
  int32_t RankUpLimit; // w19

  if ( (byte_4A51017 & 1) == 0 )
  {
    sub_1B863B8(&System_Math_TypeInfo, method);
    byte_4A51017 = 1;
  }
  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    RankUpCount_k__BackingField = rankChangeData->fields._RankUpCount_k__BackingField;
  else
    RankUpCount_k__BackingField = 0;
  RankUpLimit = BattleRankUpSkillInfoData__get_RankUpLimit(this, method);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_63173080(RankUpCount_k__BackingField, RankUpLimit, 0LL);
}


System_Int32_array *__fastcall BattleRankUpSkillInfoData__get_IndividualityArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *Current; // x0
  const MethodInfo *v4; // x1
  System_Int32_array *result; // x0

  Current = BattleRankUpSkillInfoData__get_Current(this, method);
  if ( !Current )
    return BattleSkillInfoData__get_IndividualityArray((BattleSkillInfoData_o *)this, v4);
  result = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._6_get_IndividualityArray.method)(
                                   Current,
                                   Current->klass->vtable._7_getCutInId.methodPtr);
  if ( !result )
    return BattleSkillInfoData__get_IndividualityArray((BattleSkillInfoData_o *)this, v4);
  return result;
}


bool __fastcall BattleRankUpSkillInfoData__get_IsNotShowRankUpIcon(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  SkillEntity_o *SelfSkillEntity; // x0
  __int64 v3; // x1

  SelfSkillEntity = BattleSkillInfoData__GetSelfSkillEntity((BattleSkillInfoData_o *)this, method);
  if ( !SelfSkillEntity )
    sub_1B86614(0LL, v3);
  return SkillEntity__IsNotShowRankUpIcon(SelfSkillEntity, 0LL);
}


int32_t __fastcall BattleRankUpSkillInfoData__get_RankUpLimit(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  BattleRankUpSkillInfoData_o *v2; // x19
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8

  v2 = this;
  if ( (byte_4A51016 & 1) == 0 )
  {
    this = (BattleRankUpSkillInfoData_o *)sub_1B863B8(
                                            &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__,
                                            method);
    byte_4A51016 = 1;
  }
  rankUpList = v2->fields.rankUpList;
  if ( !rankUpList )
    sub_1B86614(this, method);
  return rankUpList->fields._size - 1;
}


int32_t __fastcall BattleRankUpSkillInfoData__get_skillId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0
  __int64 v5; // x1

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return this->fields._skillId;
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_1B86614(0LL, v5);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._5_get_skillId.method)(
           Current,
           Current->klass->vtable._6_get_IndividualityArray.methodPtr);
}