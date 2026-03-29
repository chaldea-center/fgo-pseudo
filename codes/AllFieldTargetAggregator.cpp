void AllFieldTargetAggregator___ctor(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *AllFieldTargetAggregator__GetCandidate(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_IEnumerable_T__o *IsOpponentTargetOnly; // x0
  const MethodInfo *v5; // x1
  struct TargetAggregator_Args_o *args; // x8
  BattleData_o *battleData_k__BackingField; // x21
  struct TargetAggregator_Args_o *v8; // x8
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantIDList; // x0

  if ( (byte_4D33E6D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D33E6D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  args = this->fields.args;
  if ( !args
    || (battleData_k__BackingField = args->fields._battleData_k__BackingField,
        IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)TargetAggregator__get_IsOpponentTargetOnly(
                                                                                (TargetAggregator_o *)this,
                                                                                v5),
        !battleData_k__BackingField)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantIDList(
                                                                                battleData_k__BackingField,
                                                                                (unsigned __int8)IsOpponentTargetOnly
                                                                              & 1,
                                                                                0),
        !v3)
    || (System_Collections_Generic_List_int___AddRange(
          v3,
          IsOpponentTargetOnly,
          (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__),
        (v8 = this->fields.args) == 0)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._battleData_k__BackingField) == 0 )
  {
    sub_1C93D2C(IsOpponentTargetOnly, v5);
  }
  FieldPlayerServantIDList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantIDList(
                                                                              (BattleData_o *)IsOpponentTargetOnly,
                                                                              0,
                                                                              0);
  System_Collections_Generic_List_int___AddRange(
    v3,
    FieldPlayerServantIDList,
    (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}