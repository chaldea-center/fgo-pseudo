void __fastcall AllFieldTargetAggregator___ctor(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall AllFieldTargetAggregator__GetCandidate(
        AllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_Generic_IEnumerable_T__o *IsOpponentTargetOnly; // x0
  const MethodInfo *v13; // x1
  struct TargetAggregator_Args_o *args; // x8
  BattleData_o *battleData_k__BackingField; // x21
  struct TargetAggregator_Args_o *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantIDList; // x0

  if ( (byte_4B18F40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B18F40 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  args = this->fields.args;
  if ( !args
    || (battleData_k__BackingField = args->fields._battleData_k__BackingField,
        IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)TargetAggregator__get_IsOpponentTargetOnly(
                                                                                (TargetAggregator_o *)this,
                                                                                v13),
        !battleData_k__BackingField)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantIDList(
                                                                                battleData_k__BackingField,
                                                                                (unsigned __int8)IsOpponentTargetOnly & 1,
                                                                                0LL),
        !v11)
    || (System_Collections_Generic_List_int___AddRange(
          v11,
          IsOpponentTargetOnly,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__),
        (v16 = this->fields.args) == 0LL)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)v16->fields._battleData_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(IsOpponentTargetOnly, v13);
  }
  FieldPlayerServantIDList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantIDList(
                                                                              (BattleData_o *)IsOpponentTargetOnly,
                                                                              0LL,
                                                                              0LL);
  System_Collections_Generic_List_int___AddRange(
    v11,
    FieldPlayerServantIDList,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}