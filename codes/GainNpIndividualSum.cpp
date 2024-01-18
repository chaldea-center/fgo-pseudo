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
  System_Int32_array *TargetIds; // x0
  const MethodInfo_2F6724C *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *v23; // x1
  int v24; // w23
  int v25; // w21
  BattleServantData_o *ServantData; // x0
  __int64 v27; // x1
  BattleServantData_o *v28; // x22
  int v29; // w21
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+20h] [xbp-50h] BYREF

  v10 = data;
  if ( (byte_418B01B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&actorId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    data = (BattleData_o *)sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_418B01B = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_24:
    sub_B2C434(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v19 )
        goto LABEL_24;
      System_Collections_Generic_List_int___Add(
        v19,
        targetId,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_15;
    case 1:
      v20 = 3;
      goto LABEL_12;
    case 2:
      v20 = 6;
LABEL_12:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v20, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_24;
      v23 = (System_Collections_Generic_IEnumerable_T__o *)data;
      v22 = (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_24;
      System_Collections_Generic_List_int___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v22 = (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__;
      v23 = (System_Collections_Generic_IEnumerable_T__o *)TargetIds;
      break;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 114, 0, 0LL);
      if ( !v19 )
        goto LABEL_24;
      goto LABEL_16;
  }
  System_Collections_Generic_List_int___AddRange(v19, v23, v22);
LABEL_15:
  LODWORD(data) = DataVals__GetParam(baseVals, 114, 0, 0LL);
LABEL_16:
  v24 = (int)data;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v19,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v25 = 0;
  v34 = v33;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v30 )
      break;
    if ( !v10 )
      sub_B2C434(v30, v31);
    ServantData = BattleData__getServantData(v10, v34.fields.current, 0LL);
    v28 = ServantData;
    if ( !ServantData )
      sub_B2C434(0LL, v27);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v29 = BattleServantData__getSameIndiualityServantSum(v28, vals, 0LL) + v25;
      v25 = BattleServantData__getSameIndiualityBuffSum(v28, vals, v24 < 1, 0, 0, 0LL) + v29;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v25;
}