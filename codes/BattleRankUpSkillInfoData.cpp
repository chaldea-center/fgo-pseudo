void __fastcall BattleRankUpSkillInfoData___ctor(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9622 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v5, v6, v7);
    byte_42E9622 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.rankUpList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rankUpList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleRankUpSkillInfoData__GetLoadArray(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x0

  if ( (byte_42E9621 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, (_DWORD)method, v2, v3);
    byte_42E9621 = 1;
  }
  rankUpList = this->fields.rankUpList;
  if ( !rankUpList )
    sub_B5D69C(0LL, method);
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)rankUpList,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleRankUpSkillInfoData__GetRankUpState(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 FixRank; // x0
  __int64 v4; // x1
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8

  if ( !this->fields.rankChangeData )
    return 0;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, method);
  if ( (int)FixRank < 1 )
    return 0;
  rankChangeData = this->fields.rankChangeData;
  if ( !rankChangeData )
    sub_B5D69C(FixRank, v4);
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
      sub_B5D69C(0LL, v3);
    BattleBuffData_SkillRankChangeData__UseBuff(rankChangeData, 0LL);
  }
}


int32_t __fastcall BattleRankUpSkillInfoData__getCutInId(BattleRankUpSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleSkillInfoData_o *Current; // x0
  __int64 v5; // x1

  if ( !BattleRankUpSkillInfoData__get_Current(this, method) )
    return BattleSkillInfoData__getCutInId((BattleSkillInfoData_o *)this, 0LL);
  Current = BattleRankUpSkillInfoData__get_Current(this, v3);
  if ( !Current )
    sub_B5D69C(0LL, v5);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._7_getCutInId.method)(
           Current,
           Current->klass->vtable._8_PreLoad.methodPtr);
}


BattleSkillInfoData_o *__fastcall BattleRankUpSkillInfoData__get_Current(
        BattleRankUpSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_T__o *rankUpList; // x20
  int32_t FixRank; // w1

  if ( (byte_42E9620 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_BattleSkillInfoData___, (_DWORD)method, v2, v3);
    byte_42E9620 = 1;
  }
  rankUpList = (System_Collections_Generic_List_T__o *)this->fields.rankUpList;
  FixRank = BattleRankUpSkillInfoData__get_FixRank(this, method);
  return (BattleSkillInfoData_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                    rankUpList,
                                    FixRank,
                                    0LL,
                                    (const MethodInfo_1AD901C *)Method_BasicHelper_IndexValue_BattleSkillInfoData___);
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
  int v2; // w2
  __int64 v3; // x3
  struct BattleBuffData_SkillRankChangeData_o *rankChangeData; // x8
  int32_t RankUpCount_k__BackingField; // w19
  int32_t RankUpLimit; // w20

  if ( (byte_42E961F & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E961F = 1;
  }
  rankChangeData = this->fields.rankChangeData;
  if ( rankChangeData )
    RankUpCount_k__BackingField = rankChangeData->fields._RankUpCount_k__BackingField;
  else
    RankUpCount_k__BackingField = 0;
  RankUpLimit = BattleRankUpSkillInfoData__get_RankUpLimit(this, method);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45104456(RankUpCount_k__BackingField, RankUpLimit, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleRankUpSkillInfoData_o *v4; // x19
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8

  v4 = this;
  if ( (byte_42E961E & 1) == 0 )
  {
    this = (BattleRankUpSkillInfoData_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42E961E = 1;
  }
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, v5);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))Current->klass->vtable._5_get_skillId.method)(
           Current,
           Current->klass->vtable._6_get_IndividualityArray.methodPtr);
}