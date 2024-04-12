void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B1474 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_long___ctor___68489144);
    sub_B52984(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_42B1474 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_long__o *)sub_B52A54(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v3,
    (const MethodInfo_24DDD38 *)Method_System_Collections_Generic_HashSet_long___ctor___68489144);
  this->fields.hashSkillId = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.hashSkillId,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_long__o **p_hashSkillId; // x20
  System_Collections_Generic_HashSet_long__o *v8; // x0
  struct System_Collections_Generic_HashSet_long__o *hashSkillId; // t1

  if ( (byte_42B1470 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_long__Clear__);
    byte_42B1470 = 1;
  }
  if ( this->fields.waveTurn == waveTurn )
  {
    p_hashSkillId = &this->fields.hashSkillId;
  }
  else
  {
    hashSkillId = this->fields.hashSkillId;
    p_hashSkillId = &this->fields.hashSkillId;
    v8 = hashSkillId;
    *(p_hashSkillId - 1) = (struct System_Collections_Generic_HashSet_long__o *)waveTurn;
    if ( !hashSkillId )
      goto LABEL_9;
    System_Collections_Generic_HashSet_long___Clear(
      v8,
      (const MethodInfo_24DE350 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  v8 = *p_hashSkillId;
  if ( !*p_hashSkillId )
LABEL_9:
    sub_B52A5C(v8, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    v8,
    skillId,
    (const MethodInfo_24DEED8 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B1472 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B52984(&UseSkillEachTurn_SaveData_TypeInfo);
    byte_42B1472 = 1;
  }
  v3 = sub_B52A54(UseSkillEachTurn_SaveData_TypeInfo);
  UseSkillEachTurn_SaveData___ctor((UseSkillEachTurn_SaveData_o *)v3, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 16) = this->fields.waveTurn;
  v6 = (System_Int32_array **)System_Linq_Enumerable__ToArray_long_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
                                (const MethodInfo_1B6E584 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v3 + 24) = v6;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), v6, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_42B1471 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_long___);
    sub_B52984(&Method_System_Func_long__bool___ctor__);
    sub_B52984(&System_Func_long__bool__TypeInfo);
    this = (UseSkillEachTurn_o *)sub_B52984(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__);
    byte_42B1471 = 1;
  }
  if ( !data )
    sub_B52A5C(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0LL) )
    return 0;
  v7 = (System_Func_long__bool__o *)sub_B52A54(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v7,
    (Il2CppObject *)v6,
    Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__,
    (const MethodInfo_2BC682C *)Method_System_Func_long__bool___ctor__);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_1A41BC8 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B1473 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_long___ctor___68489152);
    sub_B52984(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_42B1473 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v6 = (System_Collections_Generic_HashSet_long__o *)sub_B52A54(System_Collections_Generic_HashSet_long__TypeInfo);
    System_Collections_Generic_HashSet_long____ctor_38657544(
      v6,
      skillIds,
      (const MethodInfo_24DDE08 *)Method_System_Collections_Generic_HashSet_long___ctor___68489152);
    this->fields.hashSkillId = v6;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.hashSkillId,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_42B1475 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_42B1475 = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_B52A5C(0LL, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_24DE3BC *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}