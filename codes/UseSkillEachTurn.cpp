void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_HashSet_long__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215B48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_long___ctor___67861488, method);
    sub_B0D8A4(&System_Collections_Generic_HashSet_long__TypeInfo, v4);
    byte_4215B48 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_long__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_long__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_long____ctor(
    v5,
    (const MethodInfo_2C796EC *)Method_System_Collections_Generic_HashSet_long___ctor___67861488);
  this->fields.hashSkillId = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.hashSkillId,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_HashSet_long__o **p_hashSkillId; // x20
  System_Collections_Generic_HashSet_long__o *v9; // x0
  struct System_Collections_Generic_HashSet_long__o *hashSkillId; // t1

  if ( (byte_4215B44 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_long__Clear__, v7);
    byte_4215B44 = 1;
  }
  if ( this->fields.waveTurn == waveTurn )
  {
    p_hashSkillId = &this->fields.hashSkillId;
  }
  else
  {
    hashSkillId = this->fields.hashSkillId;
    p_hashSkillId = &this->fields.hashSkillId;
    v9 = hashSkillId;
    *(p_hashSkillId - 1) = (struct System_Collections_Generic_HashSet_long__o *)waveTurn;
    if ( !hashSkillId )
      goto LABEL_9;
    System_Collections_Generic_HashSet_long___Clear(
      v9,
      (const MethodInfo_2C79D04 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  v9 = *p_hashSkillId;
  if ( !*p_hashSkillId )
LABEL_9:
    sub_B0D97C(v9);
  System_Collections_Generic_HashSet_long___Add(
    v9,
    skillId,
    (const MethodInfo_2C7A88C *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x0
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4215B46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_long___, method);
    sub_B0D8A4(&UseSkillEachTurn_SaveData_TypeInfo, v4);
    byte_4215B46 = 1;
  }
  v5 = sub_B0D974(UseSkillEachTurn_SaveData_TypeInfo, method, v2);
  UseSkillEachTurn_SaveData___ctor((UseSkillEachTurn_SaveData_o *)v5, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 16) = this->fields.waveTurn;
  v7 = (System_Int32_array **)System_Linq_Enumerable__ToArray_long_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
                                (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v5 + 24) = v7;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 24), v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_long__bool__o *v12; // x21

  v6 = this;
  if ( (byte_4215B45 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_long___, data);
    sub_B0D8A4(&Method_System_Func_long__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_long__bool__TypeInfo, v8);
    this = (UseSkillEachTurn_o *)sub_B0D8A4(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v9);
    byte_4215B45 = 1;
  }
  if ( !data )
    sub_B0D97C(this);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v12 = (System_Func_long__bool__o *)sub_B0D974(System_Func_long__bool__TypeInfo, v10, v11);
  System_Func_long__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__,
    (const MethodInfo_2616128 *)Method_System_Func_long__bool___ctor__);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_1707094 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4215B47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_long___ctor___67861496, sv);
    sub_B0D8A4(&System_Collections_Generic_HashSet_long__TypeInfo, v5);
    byte_4215B47 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v7 = (System_Collections_Generic_HashSet_long__o *)sub_B0D974(
                                                         System_Collections_Generic_HashSet_long__TypeInfo,
                                                         sv,
                                                         method);
    System_Collections_Generic_HashSet_long____ctor_46634940(
      v7,
      skillIds,
      (const MethodInfo_2C797BC *)Method_System_Collections_Generic_HashSet_long___ctor___67861496);
    this->fields.hashSkillId = v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.hashSkillId,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4215B49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_long__Contains__, id);
    byte_4215B49 = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_B0D97C(0LL);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_2C79D70 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}