void __fastcall BattleRankUpSkillInfoData___ctor(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215216 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v4);
    byte_4215216 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.rankUpList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rankUpList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleRankUpSkillInfoData__GetLoadArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x0

  if ( (byte_4215215 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, method);
    byte_4215215 = 1;
  }
  rankUpList = this->fields.rankUpList;
  if ( !rankUpList )
    sub_B0D97C(0LL);
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)rankUpList,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleRankUpSkillInfoData__GetRankUpState(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 FixRank; // x0
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8

  if ( !this->fields.rankChangeData )
    return 0;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, method);
  if ( (int)FixRank < 1 )
    return 0;
  rankChangeData = this->fields.rankChangeData;
  if ( !rankChangeData )
    sub_B0D97C(FixRank);
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
  BattleBuffData_SkillRankChangeData_o *rankChangeData; // x0

  if ( this->fields.rankChangeData && BattleRankUpSkillInfoData__get_FixRank(this, method) >= 1 )
  {
    rankChangeData = this->fields.rankChangeData;
    if ( !rankChangeData )
      sub_B0D97C(0LL);
    BattleBuffData_SkillRankChangeData__UseBuff(rankChangeData, 0LL);
  }
}


int32_t __fastcall BattleRankUpSkillInfoData__getCutInId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return BattleSkillInfoData__getCutInId((BattleSkillInfoData_o *)this, 0LL);
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_B0D97C(0LL);
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

  if ( (byte_4215214 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_BattleSkillInfoData___, method);
    byte_4215214 = 1;
  }
  rankUpList = (System_Collections_Generic_List_T__o *)this->fields.rankUpList;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, method);
  return (BattleSkillInfoData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                    rankUpList,
                                    FixRank,
                                    0LL,
                                    (const MethodInfo_1709420 *)Method_BasicHelper_IndexValue_BattleSkillInfoData___);
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
  int32_t RankUpCount_k__BackingField; // w19
  int32_t RankUpLimit; // w20

  if ( (byte_4215213 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, method);
    byte_4215213 = 1;
  }
  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    RankUpCount_k__BackingField = rankChangeData->fields._RankUpCount_k__BackingField;
  else
    RankUpCount_k__BackingField = 0;
  RankUpLimit = BattleRankUpSkillInfoData__get_RankUpLimit(this, method);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_44514512(RankUpCount_k__BackingField, RankUpLimit, 0LL);
}


System_Int32_array *__fastcall BattleRankUpSkillInfoData__get_IndividualityArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *Current; // x0
  System_Int32_array *result; // x0

  Current = BattleRankUpSkillInfoData__get_Current(this, method);
  if ( !Current )
    return BattleSkillInfoData__get_IndividualityArray((BattleSkillInfoData_o *)this, 0LL);
  result = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._6_get_IndividualityArray.method)(
                                   Current,
                                   Current->klass->vtable._7_getCutInId.methodPtr);
  if ( !result )
    return BattleSkillInfoData__get_IndividualityArray((BattleSkillInfoData_o *)this, 0LL);
  return result;
}


int32_t __fastcall BattleRankUpSkillInfoData__get_RankUpLimit(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  BattleRankUpSkillInfoData_o *v2; // x19
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8

  v2 = this;
  if ( (byte_4215212 & 1) == 0 )
  {
    this = (BattleRankUpSkillInfoData_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__,
                                            method);
    byte_4215212 = 1;
  }
  rankUpList = v2->fields.rankUpList;
  if ( !rankUpList )
    sub_B0D97C(this);
  return rankUpList->fields._size - 1;
}


int32_t __fastcall BattleRankUpSkillInfoData__get_skillId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return this->fields._skillId;
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._5_get_skillId.method)(
           Current,
           Current->klass->vtable._6_get_IndividualityArray.methodPtr);
}