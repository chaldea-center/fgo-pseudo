void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_HashSet_long__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EA14F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_long___ctor___68716416, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_long__TypeInfo, v5, v6, v7);
    byte_42EA14F = 1;
  }
  v8 = (System_Collections_Generic_HashSet_long__o *)sub_B5D694(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v8,
    (const MethodInfo_2503B68 *)Method_System_Collections_Generic_HashSet_long___ctor___68716416);
  this->fields.hashSkillId = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.hashSkillId,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_HashSet_long__o **p_hashSkillId; // x20
  System_Collections_Generic_HashSet_long__o *v11; // x0
  struct System_Collections_Generic_HashSet_long__o *hashSkillId; // t1

  if ( (byte_42EA14B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn, skillId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_long__Clear__, v7, v8, v9);
    byte_42EA14B = 1;
  }
  if ( this->fields.waveTurn == waveTurn )
  {
    p_hashSkillId = &this->fields.hashSkillId;
  }
  else
  {
    hashSkillId = this->fields.hashSkillId;
    p_hashSkillId = &this->fields.hashSkillId;
    v11 = hashSkillId;
    *(p_hashSkillId - 1) = (struct System_Collections_Generic_HashSet_long__o *)waveTurn;
    if ( !hashSkillId )
      goto LABEL_9;
    System_Collections_Generic_HashSet_long___Clear(
      v11,
      (const MethodInfo_2504180 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  v11 = *p_hashSkillId;
  if ( !*p_hashSkillId )
LABEL_9:
    sub_B5D69C(v11, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    v11,
    skillId,
    (const MethodInfo_2504D08 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EA14D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_long___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UseSkillEachTurn_SaveData_TypeInfo, v5, v6, v7);
    byte_42EA14D = 1;
  }
  v8 = sub_B5D694(UseSkillEachTurn_SaveData_TypeInfo);
  UseSkillEachTurn_SaveData___ctor((UseSkillEachTurn_SaveData_o *)v8, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_QWORD *)(v8 + 16) = this->fields.waveTurn;
  v11 = (System_Int32_array **)System_Linq_Enumerable__ToArray_long_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
                                 (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v8 + 24) = v11;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 24), v11, v12, v13, v14, v15, v16, v17);
  return (UseSkillEachTurn_SaveData_o *)v8;
}


bool __fastcall UseSkillEachTurn__IsUseThisTurn(
        UseSkillEachTurn_o *this,
        BattleData_o *data,
        System_Int64_array *skillIds,
        const MethodInfo *method)
{
  UseSkillEachTurn_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Func_long__bool__o *v16; // x21

  v6 = this;
  if ( (byte_42EA14C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_long___, (_DWORD)data, (_DWORD)skillIds, method);
    sub_B5D5C4(&Method_System_Func_long__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_long__bool__TypeInfo, v10, v11, v12);
    this = (UseSkillEachTurn_o *)sub_B5D5C4(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v13, v14, v15);
    byte_42EA14C = 1;
  }
  if ( !data )
    sub_B5D69C(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v16 = (System_Func_long__bool__o *)sub_B5D694(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__,
    (const MethodInfo_2C2C440 *)Method_System_Func_long__bool___ctor__);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_1AD6C90 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42EA14E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_long___ctor___68716424, (_DWORD)sv, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_long__TypeInfo, v6, v7, v8);
    byte_42EA14E = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v10 = (System_Collections_Generic_HashSet_long__o *)sub_B5D694(System_Collections_Generic_HashSet_long__TypeInfo);
    System_Collections_Generic_HashSet_long____ctor_38812728(
      v10,
      skillIds,
      (const MethodInfo_2503C38 *)Method_System_Collections_Generic_HashSet_long___ctor___68716424);
    this->fields.hashSkillId = v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.hashSkillId,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_42EA150 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_long__Contains__, id, (_DWORD)method, v3);
    byte_42EA150 = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_B5D69C(0LL, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_25041EC *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}