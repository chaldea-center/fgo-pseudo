void AllFieldTargetAggregator___ctor(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0);
}


System_Int32_array *AllFieldTargetAggregator__GetCandidate(AllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  BattleData_o *battleData; // x21
  System_Collections_Generic_IEnumerable_T__o *IsOpponentTargetOnly; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantIDList; // x0

  if ( (byte_4CB9703 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB9703 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0);
  IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)TargetAggregator__get_IsOpponentTargetOnly(
                                                                          (TargetAggregator_o *)this,
                                                                          0);
  if ( !battleData
    || (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantIDList(
                                                                                battleData,
                                                                                (unsigned __int8)IsOpponentTargetOnly
                                                                              & 1,
                                                                                0),
        !v3)
    || (System_Collections_Generic_List_int___AddRange(
          v3,
          IsOpponentTargetOnly,
          (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__),
        (IsOpponentTargetOnly = (System_Collections_Generic_IEnumerable_T__o *)TargetAggregator__get_battleData(
                                                                                 (TargetAggregator_o *)this,
                                                                                 0)) == 0) )
  {
    sub_1C6BC60(IsOpponentTargetOnly, v6);
  }
  FieldPlayerServantIDList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantIDList(
                                                                              (BattleData_o *)IsOpponentTargetOnly,
                                                                              0,
                                                                              0);
  System_Collections_Generic_List_int___AddRange(
    v3,
    FieldPlayerServantIDList,
    (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}