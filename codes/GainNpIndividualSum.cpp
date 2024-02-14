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
  const MethodInfo_2FB0154 *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *v23; // x1
  int v24; // w23
  int v25; // w21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v27; // x22
  int v28; // w21
  _BOOL8 v29; // x0
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+20h] [xbp-50h] BYREF

  v10 = data;
  if ( (byte_4218092 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&actorId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    data = (BattleData_o *)sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4218092 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          *(_QWORD *)&actorId,
                                                          *(_QWORD *)&targetId),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_24:
    sub_B0D97C(data);
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
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
      v22 = (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_24;
      System_Collections_Generic_List_int___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v22 = (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v19,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v25 = 0;
  v32 = v31;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v32,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v10 )
      sub_B0D97C(v29);
    ServantData = BattleData__getServantData(v10, v32.fields.current, 0LL);
    v27 = ServantData;
    if ( !ServantData )
      sub_B0D97C(0LL);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v28 = BattleServantData__getSameIndiualityServantSum(v27, vals, 0LL) + v25;
      v25 = BattleServantData__getSameIndiualityBuffSum(v27, vals, v24 < 1, 0, 0, 0LL) + v28;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v32,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v25;
}