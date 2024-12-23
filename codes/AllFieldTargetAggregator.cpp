void __fastcall AllFieldTargetAggregator___ctor(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall AllFieldTargetAggregator__GetCandidate(
        AllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  System_Collections_Generic_IEnumerable_T__o *IsOpponentTargetOnly; // x0
  const MethodInfo *v8; // x1
  struct TargetAggregator_Args_o *args; // x8
  BattleData_o *battleData_k__BackingField; // x21
  struct TargetAggregator_Args_o *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantIDList; // x0

  if ( (byte_4B699A3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4B699A3 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  args = this->fields.args;
  if ( !args
    || (battleData_k__BackingField = args->fields._battleData_k__BackingField,
        IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)TargetAggregator__get_IsOpponentTargetOnly(
                                                                                (TargetAggregator_o *)this,
                                                                                v8),
        !battleData_k__BackingField)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantIDList(
                                                                                battleData_k__BackingField,
                                                                                (unsigned __int8)IsOpponentTargetOnly & 1,
                                                                                0LL),
        !v6)
    || (System_Collections_Generic_List_int___AddRange(
          v6,
          IsOpponentTargetOnly,
          (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__),
        (v11 = this->fields.args) == 0LL)
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)v11->fields._battleData_k__BackingField) == 0LL )
  {
    sub_1BE4D28(IsOpponentTargetOnly, v8);
  }
  FieldPlayerServantIDList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantIDList(
                                                                              (BattleData_o *)IsOpponentTargetOnly,
                                                                              0LL,
                                                                              0LL);
  System_Collections_Generic_List_int___AddRange(
    v6,
    FieldPlayerServantIDList,
    (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}