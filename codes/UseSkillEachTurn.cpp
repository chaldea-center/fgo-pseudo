void __fastcall UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_HashSet_long__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FAAA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_long___ctor___66714136, method);
    sub_B16FFC(&System_Collections_Generic_HashSet_long__TypeInfo, v6);
    byte_40FAAA9 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_long__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_long__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_long____ctor(
    v7,
    (const MethodInfo_21DC670 *)Method_System_Collections_Generic_HashSet_long___ctor___66714136);
  this->fields.hashSkillId = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hashSkillId,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_HashSet_long__o **p_hashSkillId; // x20
  System_Collections_Generic_HashSet_long__o *v9; // x0
  struct System_Collections_Generic_HashSet_long__o *hashSkillId; // t1

  if ( (byte_40FAAA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_long__Add__, waveTurn);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_long__Clear__, v7);
    byte_40FAAA5 = 1;
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
    *(p_hashSkillId - 1) = (System_Collections_Generic_HashSet_long__o *)waveTurn;
    if ( !hashSkillId )
      goto LABEL_9;
    System_Collections_Generic_HashSet_long___Clear(
      v9,
      (const MethodInfo_21DCC88 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  if ( !*p_hashSkillId )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_HashSet_long___Add(
    *p_hashSkillId,
    skillId,
    (const MethodInfo_21DD810 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *__fastcall UseSkillEachTurn__GetSaveData(
        UseSkillEachTurn_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x20
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FAAA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_long___, method);
    sub_B16FFC(&UseSkillEachTurn_SaveData_TypeInfo, v6);
    byte_40FAAA7 = 1;
  }
  v7 = sub_B170CC(UseSkillEachTurn_SaveData_TypeInfo, method, v2, v3, v4);
  UseSkillEachTurn_SaveData___ctor((UseSkillEachTurn_SaveData_o *)v7, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 16) = this->fields.waveTurn;
  v8 = (System_Int32_array **)System_Linq_Enumerable__ToArray_long_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
                                (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v7 + 24) = v8;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 24), v8, v9, v10, v11, v12, v13, v14);
  return (UseSkillEachTurn_SaveData_o *)v7;
}


bool __fastcall UseSkillEachTurn__IsUseThisTurn(
        UseSkillEachTurn_o *this,
        BattleData_o *data,
        System_Int64_array *skillIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Func_long__bool__o *v14; // x21

  if ( (byte_40FAAA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_long___, data);
    sub_B16FFC(&Method_System_Func_long__bool___ctor__, v7);
    sub_B16FFC(&System_Func_long__bool__TypeInfo, v8);
    sub_B16FFC(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, v9);
    byte_40FAAA6 = 1;
  }
  if ( !data )
    sub_B170D4();
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, this->fields.waveTurn, 0LL) )
    return 0;
  v14 = (System_Func_long__bool__o *)sub_B170CC(System_Func_long__bool__TypeInfo, v10, v11, v12, v13);
  System_Func_long__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__,
    (const MethodInfo_2B682B0 *)Method_System_Func_long__bool___ctor__);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_18B5F24 *)Method_BasicHelper_Any_long___);
}


void __fastcall UseSkillEachTurn__SetSaveData(
        UseSkillEachTurn_o *this,
        UseSkillEachTurn_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FAAA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_long___ctor___66714144, sv);
    sub_B16FFC(&System_Collections_Generic_HashSet_long__TypeInfo, v7);
    byte_40FAAA8 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v9 = (System_Collections_Generic_HashSet_long__o *)sub_B170CC(
                                                         System_Collections_Generic_HashSet_long__TypeInfo,
                                                         sv,
                                                         method,
                                                         v3,
                                                         v4);
    System_Collections_Generic_HashSet_long____ctor_35505984(
      v9,
      skillIds,
      (const MethodInfo_21DC740 *)Method_System_Collections_Generic_HashSet_long___ctor___66714144);
    this->fields.hashSkillId = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.hashSkillId,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}


bool __fastcall UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_40FAAAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_long__Contains__, id);
    byte_40FAAAA = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_B170D4();
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_21DCCF4 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}