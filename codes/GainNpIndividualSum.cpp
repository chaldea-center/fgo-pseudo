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
  BattleData_o *v10; // x19
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Int32_array *vals; // x20
  System_Collections_Generic_List_int__o *v33; // x22
  int32_t v34; // w4
  System_Int32_array *TargetIds; // x0
  const MethodInfo_3084660 *v36; // x2
  System_Collections_Generic_IEnumerable_T__o *v37; // x1
  int v38; // w23
  int v39; // w21
  BattleServantData_o *ServantData; // x0
  __int64 v41; // x1
  BattleServantData_o *v42; // x22
  int v43; // w21
  _BOOL8 v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+20h] [xbp-50h] BYREF

  v10 = data;
  if ( (byte_42EC63F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, actorId, targetId, baseVals);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    data = (BattleData_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    byte_42EC63F = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v33 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v33,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224),
        !baseVals) )
  {
LABEL_24:
    sub_B5D69C(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v33 )
        goto LABEL_24;
      System_Collections_Generic_List_int___Add(
        v33,
        targetId,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_15;
    case 1:
      v34 = 3;
      goto LABEL_12;
    case 2:
      v34 = 6;
LABEL_12:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v34, 0LL, 0LL);
      if ( !v33 )
        goto LABEL_24;
      v37 = (System_Collections_Generic_IEnumerable_T__o *)data;
      v36 = (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v33 )
        goto LABEL_24;
      System_Collections_Generic_List_int___AddRange(
        v33,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v36 = (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__;
      v37 = (System_Collections_Generic_IEnumerable_T__o *)TargetIds;
      break;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 114, 0, 0LL);
      if ( !v33 )
        goto LABEL_24;
      goto LABEL_16;
  }
  System_Collections_Generic_List_int___AddRange(v33, v37, v36);
LABEL_15:
  LODWORD(data) = DataVals__GetParam(baseVals, 114, 0, 0LL);
LABEL_16:
  v38 = (int)data;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v33,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v39 = 0;
  v48 = v47;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v48,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v44 )
      break;
    if ( !v10 )
      sub_B5D69C(v44, v45);
    ServantData = BattleData__getServantData(v10, v48.fields.current, 0LL);
    v42 = ServantData;
    if ( !ServantData )
      sub_B5D69C(0LL, v41);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v43 = BattleServantData__getSameIndiualityServantSum(v42, vals, 0LL) + v39;
      v39 = BattleServantData__getSameIndiualityBuffSum(v42, vals, v38 < 1, 0, 0, 0LL) + v43;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v48,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v39;
}