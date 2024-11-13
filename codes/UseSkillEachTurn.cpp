void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_HashSet_long__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B186EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_long___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_long__TypeInfo, v5, v6);
    byte_4B186EA = 1;
  }
  v7 = (System_Collections_Generic_HashSet_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_long__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_long____ctor(
    v7,
    (const MethodInfo_3458EAC *)Method_System_Collections_Generic_HashSet_long___ctor__);
  this->fields.hashSkillId = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hashSkillId, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4B186E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn, *(_QWORD *)&skillId);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_long__Clear__, v7, v8);
    byte_4B186E6 = 1;
  }
  if ( this->fields.waveTurn != waveTurn )
  {
    hashSkillId = this->fields.hashSkillId;
    this->fields.waveTurn = waveTurn;
    if ( !hashSkillId )
      goto LABEL_8;
    System_Collections_Generic_HashSet_long___Clear(
      hashSkillId,
      (const MethodInfo_3459540 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
LABEL_8:
    sub_1BCAA3C(hashSkillId, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    hashSkillId,
    skillId,
    (const MethodInfo_345A08C *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Int64_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B186E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_long___, method, v2);
    sub_1BCA7E0(&UseSkillEachTurn_SaveData_TypeInfo, v5, v6);
    byte_4B186E8 = 1;
  }
  v7 = sub_1BCAA2C(UseSkillEachTurn_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 16) = this->fields.waveTurn;
  v10 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
          (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v7 + 24) = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)v10, v11, v12, v13, v14, v15, v16);
  return (UseSkillEachTurn_SaveData_o *)v7;
}


bool __fastcall UseSkillEachTurn__IsUseThisTurn(
        UseSkillEachTurn_o *this,
        BattleData_o *data,
        System_Int64_array *skillIds,
        const MethodInfo *method)
{
  UseSkillEachTurn_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Func_long__bool__o *v14; // x21

  v6 = this;
  if ( (byte_4B186E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_long___, data, skillIds);
    sub_1BCA7E0(&System_Func_long__bool__TypeInfo, v7, v8);
    this = (UseSkillEachTurn_o *)sub_1BCA7E0(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v9, v10);
    byte_4B186E7 = 1;
  }
  if ( !data )
    sub_1BCAA3C(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v14 = (System_Func_long__bool__o *)sub_1BCAA2C(System_Func_long__bool__TypeInfo, v11, v12, v13);
  System_Func_long__bool____ctor(v14, (Il2CppObject *)v6, Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, 0LL);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2EFDBF8 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B186E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_long___ctor___76767336, sv, method);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_long__TypeInfo, v6, v7);
    byte_4B186E9 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v9 = (System_Collections_Generic_HashSet_long__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_HashSet_long__TypeInfo,
                                                         sv,
                                                         method,
                                                         v3);
    System_Collections_Generic_HashSet_long____ctor_54890396(
      v9,
      skillIds,
      (const MethodInfo_3458F9C *)Method_System_Collections_Generic_HashSet_long___ctor___76767336);
    this->fields.hashSkillId = v9;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hashSkillId, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4B186EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_long__Contains__, id, method);
    byte_4B186EB = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_1BCAA3C(0LL, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_34595A0 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}