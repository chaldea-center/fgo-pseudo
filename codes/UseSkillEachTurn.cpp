void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_HashSet_long__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE863 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_long___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_HashSet_long__TypeInfo, v4);
    byte_49FE863 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_long__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_long__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_long____ctor(
    v5,
    (const MethodInfo_3367CB4 *)Method_System_Collections_Generic_HashSet_long___ctor__);
  this->fields.hashSkillId = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hashSkillId, (int32_t)v5, v6, v7);
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

  if ( (byte_49FE85F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_long__Clear__, v7);
    byte_49FE85F = 1;
  }
  if ( this->fields.waveTurn != waveTurn )
  {
    hashSkillId = this->fields.hashSkillId;
    this->fields.waveTurn = waveTurn;
    if ( !hashSkillId )
      goto LABEL_8;
    System_Collections_Generic_HashSet_long___Clear(
      hashSkillId,
      (const MethodInfo_3368348 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
LABEL_8:
    sub_1B64324(hashSkillId);
  System_Collections_Generic_HashSet_long___Add(
    hashSkillId,
    skillId,
    (const MethodInfo_3368E94 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x0
  System_Int64_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE861 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_long___, method);
    sub_1B640C8(&UseSkillEachTurn_SaveData_TypeInfo, v4);
    byte_49FE861 = 1;
  }
  v5 = sub_1B64314(UseSkillEachTurn_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 16) = this->fields.waveTurn;
  v7 = System_Linq_Enumerable__ToArray_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
         (const MethodInfo_2E7133C *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v5 + 24) = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v7, v8, v9);
  return (UseSkillEachTurn_SaveData_o *)v5;
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_long__bool__o *v11; // x21

  v6 = this;
  if ( (byte_49FE860 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_long___, data);
    sub_1B640C8(&System_Func_long__bool__TypeInfo, v7);
    this = (UseSkillEachTurn_o *)sub_1B640C8(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v8);
    byte_49FE860 = 1;
  }
  if ( !data )
    sub_1B64324(this);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v11 = (System_Func_long__bool__o *)sub_1B64314(System_Func_long__bool__TypeInfo, v9, v10);
  System_Func_long__bool____ctor(v11, (Il2CppObject *)v6, Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, 0LL);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2E247D4 *)Method_BasicHelper_Any_long___);
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

  if ( (byte_49FE862 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_long___ctor___75637304, sv);
    sub_1B640C8(&System_Collections_Generic_HashSet_long__TypeInfo, v5);
    byte_49FE862 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v7 = (System_Collections_Generic_HashSet_long__o *)sub_1B64314(
                                                         System_Collections_Generic_HashSet_long__TypeInfo,
                                                         sv,
                                                         method);
    System_Collections_Generic_HashSet_long____ctor_53902756(
      v7,
      skillIds,
      (const MethodInfo_3367DA4 *)Method_System_Collections_Generic_HashSet_long___ctor___75637304);
    this->fields.hashSkillId = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hashSkillId, (int32_t)v7, v8, v9);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_49FE864 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_long__Contains__, id);
    byte_49FE864 = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_33683A8 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}