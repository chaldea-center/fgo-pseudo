void UseSkillEachTurn___ctor(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF0FF7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_4CF0FF7 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_long__o *)sub_1C7BD34(System_Collections_Generic_HashSet_long__TypeInfo);
  System_Collections_Generic_HashSet_long____ctor(
    v3,
    (const MethodInfo_36EDC48 *)Method_System_Collections_Generic_HashSet_long___ctor__);
  this->fields.hashSkillId = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.hashSkillId, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UseSkillEachTurn__AddUseSkillId(
        UseSkillEachTurn_o *this,
        int64_t waveTurn,
        int32_t skillId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4CF0FF3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_long__Clear__);
    byte_4CF0FF3 = 1;
  }
  if ( this->fields.waveTurn != waveTurn )
  {
    hashSkillId = this->fields.hashSkillId;
    this->fields.waveTurn = waveTurn;
    if ( !hashSkillId )
      goto LABEL_8;
    System_Collections_Generic_HashSet_long___Clear(
      hashSkillId,
      (const MethodInfo_36EE2DC *)Method_System_Collections_Generic_HashSet_long__Clear__);
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
LABEL_8:
    sub_1C7BD40(hashSkillId, waveTurn);
  System_Collections_Generic_HashSet_long___Add(
    hashSkillId,
    skillId,
    (const MethodInfo_36EEE28 *)Method_System_Collections_Generic_HashSet_long__Add__);
}


UseSkillEachTurn_SaveData_o *UseSkillEachTurn__GetSaveData(UseSkillEachTurn_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Int64_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF0FF5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C7BAE8(&UseSkillEachTurn_SaveData_TypeInfo);
    byte_4CF0FF5 = 1;
  }
  v3 = sub_1C7BD34(UseSkillEachTurn_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 16) = this->fields.waveTurn;
  v6 = System_Linq_Enumerable__ToArray_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.hashSkillId,
         (const MethodInfo_31AF15C *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v3 + 24) = v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4CF0FF4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_long___);
    sub_1C7BAE8(&System_Func_long__bool__TypeInfo);
    this = (UseSkillEachTurn_o *)sub_1C7BAE8(&Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__);
    byte_4CF0FF4 = 1;
  }
  if ( !data )
    sub_1C7BD40(this, data);
  if ( !BattleData__EqualCurrentUniqueWaveTurn(data, v6->fields.waveTurn, 0) )
    return 0;
  v7 = (System_Func_long__bool__o *)sub_1C7BD34(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(v7, (Il2CppObject *)v6, Method_UseSkillEachTurn__IsUseThisTurn_b__3_0__, 0);
  return BasicHelper__Any_long_(
           skillIds,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_315968C *)Method_BasicHelper_Any_long___);
}


void UseSkillEachTurn__SetSaveData(UseSkillEachTurn_o *this, UseSkillEachTurn_SaveData_o *sv, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *skillIds; // x20
  System_Collections_Generic_HashSet_long__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF0FF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_long___ctor___78721032);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_long__TypeInfo);
    byte_4CF0FF6 = 1;
  }
  if ( sv )
  {
    this->fields.waveTurn = sv->fields.waveTurn;
    skillIds = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.skillIds;
    v6 = (System_Collections_Generic_HashSet_long__o *)sub_1C7BD34(System_Collections_Generic_HashSet_long__TypeInfo);
    System_Collections_Generic_HashSet_long____ctor_57597240(
      v6,
      skillIds,
      (const MethodInfo_36EDD38 *)Method_System_Collections_Generic_HashSet_long___ctor___78721032);
    this->fields.hashSkillId = v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.hashSkillId, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
}


bool UseSkillEachTurn___IsUseThisTurn_b__3_0(UseSkillEachTurn_o *this, int64_t id, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_long__o *hashSkillId; // x0

  if ( (byte_4CF0FF8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_4CF0FF8 = 1;
  }
  hashSkillId = this->fields.hashSkillId;
  if ( !hashSkillId )
    sub_1C7BD40(0, id);
  return System_Collections_Generic_HashSet_long___Contains(
           hashSkillId,
           id,
           (const MethodInfo_36EE33C *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void UseSkillEachTurn_SaveData___ctor(UseSkillEachTurn_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}