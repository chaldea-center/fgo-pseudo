void UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B15A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_593B15A = 1;
  }
  v3 = (System_Collections_Generic_HashSet_long__o *)sub_21FFEBC(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v3,
    (const MethodInfo_428460C *)Method_System_Collections_Generic_HashSet_long___ctor__);
  this->fields.hashSkillId = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hashSkillId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_593B156 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_long__Clear__);
    byte_593B156 = 1;
  }
  if ( this->fields.waveTurn != waveTurn )
  {
    hashSkillId = this->fields.hashSkillId;
    this->fields.waveTurn = waveTurn;
    if ( !hashSkillId )
      goto LABEL_8;
    System_Collections_Generic_HashSet_long___Clear(
      hashSkillId,
      (const MethodInfo_4284CB0 *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
LABEL_8:
    sub_21FFECC(hashSkillId, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    hashSkillId,
    skillId,
    (const MethodInfo_42857F8 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *UseSkillEachTurn__GetSaveData(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_long__o *hashSkillId; // x0
  const MethodInfo_38685DC *v7; // x1
  System_Int64_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B158 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&UseSkillEachTurn_SaveData_TypeInfo);
    byte_593B158 = 1;
  }
  v3 = sub_21FFEBC(UseSkillEachTurn_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  hashSkillId = this->fields.hashSkillId;
  v7 = (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___;
  *(_QWORD *)(v3 + 16) = this->fields.waveTurn;
  v8 = System_Linq_Enumerable__ToArray_long_((System_Collections_Generic_IEnumerable_TSource__o *)hashSkillId, v7);
  *(_QWORD *)(v3 + 24) = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  return (UseSkillEachTurn_SaveData_o *)v3;
}


bool UseSkillEachTurn__IsUseThisTurn(
        UseSkillEachTurn_o *this,
        BattleData_o *data,
        System_Int64_array *skillIds,
        const MethodInfo *method)
{
  UseSkillEachTurn_o *v6; // x20
  System_Func_long__bool__o *v7; // x21

  v6 = this;
  if ( (byte_593B157 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_long___);
    sub_21FFC50(&System_Func_long__bool__TypeInfo);
    this = (UseSkillEachTurn_o *)sub_21FFC50(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__);
    byte_593B157 = 1;
  }
  if ( !data )
    sub_21FFECC(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0) )
    return 0;
  v7 = (System_Func_long__bool__o *)sub_21FFEBC(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(v7, (Il2CppObject *)v6, Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, 0);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_37DC994 *)Method_BasicHelper_Any_long___);
}


void UseSkillEachTurn__SetSaveData(UseSkillEachTurn_o *this, UseSkillEachTurn_SaveData_o *sv, const MethodInfo *method)
{
  int64_t waveTurn; // x9
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__c *v7; // x0
  System_Collections_Generic_HashSet_long__o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593B159 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_long___ctor___91404128);
    sub_21FFC50(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_593B159 = 1;
  }
  if ( sv )
  {
    waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v7 = System_Collections_Generic_HashSet_long__TypeInfo;
    this->fields.waveTurn = waveTurn;
    v8 = (System_Collections_Generic_HashSet_long__o *)sub_21FFEBC(v7);
    System_Collections_Generic_HashSet_long____ctor_69748476(
      v8,
      skillIds,
      (const MethodInfo_42846FC *)Method_System_Collections_Generic_HashSet_long___ctor___91404128);
    this->fields.hashSkillId = v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hashSkillId, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


bool UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_593B15B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_593B15B = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_21FFECC(0, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_4284D10 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}