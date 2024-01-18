void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_long__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188A87 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_long___ctor___67288016, method);
    sub_B2C35C(&System_Collections_Generic_HashSet_long__TypeInfo, v3);
    byte_4188A87 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_long__o *)sub_B2C42C(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v4,
    (const MethodInfo_2D89770 *)Method_System_Collections_Generic_HashSet_long___ctor___67288016);
  this->fields.hashSkillId = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.hashSkillId,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4188A83 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_long__Clear__, v7);
    byte_4188A83 = 1;
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
      (const MethodInfo_2D89D88 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  v9 = *p_hashSkillId;
  if ( !*p_hashSkillId )
LABEL_9:
    sub_B2C434(v9, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    v9,
    skillId,
    (const MethodInfo_2D8A910 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4188A85 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_long___, method);
    sub_B2C35C(&UseSkillEachTurn_SaveData_TypeInfo, v3);
    byte_4188A85 = 1;
  }
  v4 = sub_B2C42C(UseSkillEachTurn_SaveData_TypeInfo);
  UseSkillEachTurn_SaveData___ctor((UseSkillEachTurn_SaveData_o *)v4, 0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  *(_QWORD *)(v4 + 16) = this->fields.waveTurn;
  v7 = (System_Int32_array **)System_Linq_Enumerable__ToArray_long_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
                                (const MethodInfo_1A9AF3C *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v4 + 24) = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 24), v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v9; // x1
  System_Func_long__bool__o *v10; // x21

  v6 = this;
  if ( (byte_4188A84 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_long___, data);
    sub_B2C35C(&Method_System_Func_long__bool___ctor__, v7);
    sub_B2C35C(&System_Func_long__bool__TypeInfo, v8);
    this = (UseSkillEachTurn_o *)sub_B2C35C(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v9);
    byte_4188A84 = 1;
  }
  if ( !data )
    sub_B2C434(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v10 = (System_Func_long__bool__o *)sub_B2C42C(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__,
    (const MethodInfo_270F374 *)Method_System_Func_long__bool___ctor__);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_1726608 *)Method_BasicHelper_Any_long___);
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

  if ( (byte_4188A86 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_long___ctor___67288024, sv);
    sub_B2C35C(&System_Collections_Generic_HashSet_long__TypeInfo, v5);
    byte_4188A86 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v7 = (System_Collections_Generic_HashSet_long__o *)sub_B2C42C(System_Collections_Generic_HashSet_long__TypeInfo);
    System_Collections_Generic_HashSet_long____ctor_47749184(
      v7,
      skillIds,
      (const MethodInfo_2D89840 *)Method_System_Collections_Generic_HashSet_long___ctor___67288024);
    this->fields.hashSkillId = v7;
    sub_B2C2F8(
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

  if ( (byte_4188A88 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_long__Contains__, id);
    byte_4188A88 = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_B2C434(0LL, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_2D89DF4 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}