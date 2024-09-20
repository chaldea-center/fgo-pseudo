void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D60A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_4A5D60A = 1;
  }
  v3 = (System_Collections_Generic_HashSet_long__o *)sub_1B887FC(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v3,
    (const MethodInfo_33B7068 *)Method_System_Collections_Generic_HashSet_long___ctor__);
  this->fields.hashSkillId = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hashSkillId, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4A5D606 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_long__Clear__);
    byte_4A5D606 = 1;
  }
  if ( this->fields.waveTurn != waveTurn )
  {
    hashSkillId = this->fields.hashSkillId;
    this->fields.waveTurn = waveTurn;
    if ( !hashSkillId )
      goto LABEL_8;
    System_Collections_Generic_HashSet_long___Clear(
      hashSkillId,
      (const MethodInfo_33B76FC *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
LABEL_8:
    sub_1B8880C(hashSkillId, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    hashSkillId,
    skillId,
    (const MethodInfo_33B8248 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Int64_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D608 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1B885B0(&UseSkillEachTurn_SaveData_TypeInfo);
    byte_4A5D608 = 1;
  }
  v3 = sub_1B887FC(UseSkillEachTurn_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 16) = this->fields.waveTurn;
  v6 = System_Linq_Enumerable__ToArray_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
         (const MethodInfo_2EB865C *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v3 + 24) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v6, v7, v8);
  return (UseSkillEachTurn_SaveData_o *)v3;
}


bool __fastcall UseSkillEachTurn__IsUseThisTurn(
        UseSkillEachTurn_o *this,
        BattleData_o *data,
        System_Int64_array *skillIds,
        const MethodInfo *method)
{
  UseSkillEachTurn_o *v6; // x20
  System_Func_long__bool__o *v7; // x21

  v6 = this;
  if ( (byte_4A5D607 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_long___);
    sub_1B885B0(&System_Func_long__bool__TypeInfo);
    this = (UseSkillEachTurn_o *)sub_1B885B0(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__);
    byte_4A5D607 = 1;
  }
  if ( !data )
    sub_1B8880C(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v7 = (System_Func_long__bool__o *)sub_1B887FC(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(v7, (Il2CppObject *)v6, Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, 0LL);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_2E6AC34 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D609 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_long___ctor___76016560);
    sub_1B885B0(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_4A5D609 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v6 = (System_Collections_Generic_HashSet_long__o *)sub_1B887FC(System_Collections_Generic_HashSet_long__TypeInfo);
    System_Collections_Generic_HashSet_long____ctor_54227288(
      v6,
      skillIds,
      (const MethodInfo_33B7158 *)Method_System_Collections_Generic_HashSet_long___ctor___76016560);
    this->fields.hashSkillId = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hashSkillId, (int32_t)v6, v7, v8);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4A5D60B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_4A5D60B = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_1B8880C(0LL, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_33B775C *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}