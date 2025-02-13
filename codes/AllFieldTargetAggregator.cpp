void __fastcall AllFieldTargetAggregator___ctor(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall AllFieldTargetAggregator__GetCandidate(
        AllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_IEnumerable_T__o *IsOpponentTargetOnly; // x0
  const MethodInfo *v5; // x1
  struct TargetAggregator_Args_o *args; // x8
  BattleData_o *battleData_k__BackingField; // x21
  struct TargetAggregator_Args_o *v8; // x8
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantIDList; // x0

  if ( (byte_4BDF36B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDF36B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  args = this->fields.args;
  if ( !args
    || (battleData_k__BackingField = args->fields._battleData_k__BackingField,
        IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)TargetAggregator__get_IsOpponentTargetOnly(
                                                                                (TargetAggregator_o *)this,
                                                                                v5),
        !battleData_k__BackingField)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantIDList(
                                                                                battleData_k__BackingField,
                                                                                (unsigned __int8)IsOpponentTargetOnly & 1,
                                                                                0LL),
        !v3)
    || (System_Collections_Generic_List_int___AddRange(
          v3,
          IsOpponentTargetOnly,
          (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__),
        (v8 = this->fields.args) == 0LL)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._battleData_k__BackingField) == 0LL )
  {
    sub_1C22094(IsOpponentTargetOnly, v5);
  }
  FieldPlayerServantIDList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantIDList(
                                                                              (BattleData_o *)IsOpponentTargetOnly,
                                                                              0LL,
                                                                              0LL);
  System_Collections_Generic_List_int___AddRange(
    v3,
    FieldPlayerServantIDList,
    (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}