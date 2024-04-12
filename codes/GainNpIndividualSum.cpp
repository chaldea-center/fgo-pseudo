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
  System_Int32_array *vals; // x20
  System_Collections_Generic_List_int__o *v12; // x22
  int32_t v13; // w4
  System_Int32_array *TargetIds; // x0
  const MethodInfo_3057204 *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *v16; // x1
  int v17; // w23
  int v18; // w21
  BattleServantData_o *ServantData; // x0
  __int64 v20; // x1
  BattleServantData_o *v21; // x22
  int v22; // w21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+20h] [xbp-50h] BYREF

  v10 = data;
  if ( (byte_42B3B4F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B3B4F = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v12 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v12,
          (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_24:
    sub_B52A5C(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v12 )
        goto LABEL_24;
      System_Collections_Generic_List_int___Add(
        v12,
        targetId,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_15;
    case 1:
      v13 = 3;
      goto LABEL_12;
    case 2:
      v13 = 6;
LABEL_12:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v13, 0LL, 0LL);
      if ( !v12 )
        goto LABEL_24;
      v16 = (System_Collections_Generic_IEnumerable_T__o *)data;
      v15 = (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v12 )
        goto LABEL_24;
      System_Collections_Generic_List_int___AddRange(
        v12,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v15 = (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__;
      v16 = (System_Collections_Generic_IEnumerable_T__o *)TargetIds;
      break;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 114, 0, 0LL);
      if ( !v12 )
        goto LABEL_24;
      goto LABEL_16;
  }
  System_Collections_Generic_List_int___AddRange(v12, v16, v15);
LABEL_15:
  LODWORD(data) = DataVals__GetParam(baseVals, 114, 0, 0LL);
LABEL_16:
  v17 = (int)data;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v12,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = 0;
  v27 = v26;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v23 )
      break;
    if ( !v10 )
      sub_B52A5C(v23, v24);
    ServantData = BattleData__getServantData(v10, v27.fields.current, 0LL);
    v21 = ServantData;
    if ( !ServantData )
      sub_B52A5C(0LL, v20);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v22 = BattleServantData__getSameIndiualityServantSum(v21, vals, 0LL) + v18;
      v18 = BattleServantData__getSameIndiualityBuffSum(v21, vals, v17 < 1, 0, 0, 0LL) + v22;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v18;
}