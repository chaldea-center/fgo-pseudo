void __fastcall GainNpIndividualSum___ctor(GainNpIndividualSum_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GainNpIndividualSum__GetSameIndiualitySum(
        BattleData_o *data,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Int32_array *vals; // x20
  System_Collections_Generic_List_int__o *v19; // x22
  int32_t v20; // w4
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Int32_array *v22; // x0
  const MethodInfo_2F10744 *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *v24; // x1
  System_Int32_array *TargetIds; // x0
  int32_t Param; // w0
  int v27; // w23
  int v28; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v30; // x22
  int v31; // w21
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FB3AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&actorId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_40FB3AC = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          *(_QWORD *)&actorId,
                                                          *(_QWORD *)&targetId,
                                                          baseVals,
                                                          funcEnt),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_24:
    sub_B170D4();
  }
  switch ( DataVals__GetParam(baseVals, 4, 0, 0LL) )
  {
    case 0:
      if ( !v19 )
        goto LABEL_24;
      System_Collections_Generic_List_int___Add(
        v19,
        targetId,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_15;
    case 1:
      v20 = 3;
      goto LABEL_12;
    case 2:
      v20 = 6;
LABEL_12:
      TargetIds = Target__getTargetIds(data, actorId, -1, -1, v20, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_24;
      v24 = (System_Collections_Generic_IEnumerable_T__o *)TargetIds;
      v23 = (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      v21 = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(data, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_24;
      System_Collections_Generic_List_int___AddRange(
        v19,
        v21,
        (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      v22 = Target__getTargetIds(data, actorId, -1, -1, 6, 0LL, 0LL);
      v23 = (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__;
      v24 = (System_Collections_Generic_IEnumerable_T__o *)v22;
      break;
    default:
      Param = DataVals__GetParam(baseVals, 114, 0, 0LL);
      if ( !v19 )
        goto LABEL_24;
      goto LABEL_16;
  }
  System_Collections_Generic_List_int___AddRange(v19, v24, v23);
LABEL_15:
  Param = DataVals__GetParam(baseVals, 114, 0, 0LL);
LABEL_16:
  v27 = Param;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v19,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = 0;
  v34 = v33;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !data )
      sub_B170D4();
    ServantData = BattleData__getServantData(data, v34.fields.current, 0LL);
    v30 = ServantData;
    if ( !ServantData )
      sub_B170D4();
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v31 = BattleServantData__getSameIndiualityServantSum(v30, vals, 0LL) + v28;
      v28 = BattleServantData__getSameIndiualityBuffSum(v30, vals, v27 < 1, 0, 0, 0LL) + v31;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v28;
}