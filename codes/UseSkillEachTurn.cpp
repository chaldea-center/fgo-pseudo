void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_long__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A21F5C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_long___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_HashSet_long__TypeInfo, v3);
    byte_4A21F5C = 1;
  }
  v4 = (System_Collections_Generic_HashSet_long__o *)sub_1B71818(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v4,
    (const MethodInfo_338CD18 *)Method_System_Collections_Generic_HashSet_long___ctor__);
  this->fields.hashSkillId = v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.hashSkillId, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4A21F58 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_long__Clear__, v7);
    byte_4A21F58 = 1;
  }
  if ( this->fields.waveTurn != waveTurn )
  {
    hashSkillId = this->fields.hashSkillId;
    this->fields.waveTurn = waveTurn;
    if ( !hashSkillId )
      goto LABEL_8;
    System_Collections_Generic_HashSet_long___Clear(
      hashSkillId,
      (const MethodInfo_338D3AC *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
LABEL_8:
    sub_1B71828(hashSkillId, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    hashSkillId,
    skillId,
    (const MethodInfo_338DEF8 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Int64_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A21F5A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_long___, method);
    sub_1B715CC(&UseSkillEachTurn_SaveData_TypeInfo, v3);
    byte_4A21F5A = 1;
  }
  v4 = sub_1B71818(UseSkillEachTurn_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B71828(v5, v6);
  *(_QWORD *)(v4 + 16) = this->fields.waveTurn;
  v7 = System_Linq_Enumerable__ToArray_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
         (const MethodInfo_2E93DFC *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v4 + 24) = v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v7, v8, v9);
  return (UseSkillEachTurn_SaveData_o *)v4;
}


bool __fastcall UseSkillEachTurn__IsUseThisTurn(
        UseSkillEachTurn_o *this,
        BattleData_o *data,
        System_Int64_array *skillIds,
        const MethodInfo *method)
{
  UseSkillEachTurn_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_long__bool__o *v9; // x21

  v6 = this;
  if ( (byte_4A21F59 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_long___, data);
    sub_1B715CC(&System_Func_long__bool__TypeInfo, v7);
    this = (UseSkillEachTurn_o *)sub_1B715CC(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v8);
    byte_4A21F59 = 1;
  }
  if ( !data )
    sub_1B71828(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v9 = (System_Func_long__bool__o *)sub_1B71818(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(v9, (Il2CppObject *)v6, Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, 0LL);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_2E46714 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A21F5B & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_long___ctor___75778256, sv);
    sub_1B715CC(&System_Collections_Generic_HashSet_long__TypeInfo, v5);
    byte_4A21F5B = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v7 = (System_Collections_Generic_HashSet_long__o *)sub_1B71818(System_Collections_Generic_HashSet_long__TypeInfo);
    System_Collections_Generic_HashSet_long____ctor_54054408(
      v7,
      skillIds,
      (const MethodInfo_338CE08 *)Method_System_Collections_Generic_HashSet_long___ctor___75778256);
    this->fields.hashSkillId = v7;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.hashSkillId, (int32_t)v7, v8, v9);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4A21F5D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_long__Contains__, id);
    byte_4A21F5D = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_1B71828(0LL, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_338D40C *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}