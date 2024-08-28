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
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int32_t v23; // w4
  System_Int32_array *TargetIds; // x0
  const MethodInfo_34B3448 *v25; // x2
  BattleData_o *v26; // x1
  int v27; // w23
  int v28; // w21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v32; // x1
  BattleServantData_o *v33; // x22
  int v34; // w21
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-60h] BYREF

  v10 = data;
  if ( (byte_4A2269F & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&actorId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    data = (BattleData_o *)sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4A2269F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v19 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_29:
    sub_1B71828(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v19 )
        goto LABEL_29;
      items = v19->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          targetId,
          *(const MethodInfo_34B323C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = targetId;
      }
      goto LABEL_17;
    case 1:
      v23 = 3;
      goto LABEL_14;
    case 2:
      v23 = 6;
LABEL_14:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v23, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_29;
      v26 = data;
      v25 = (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__;
      break;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_29;
      System_Collections_Generic_List_int___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v25 = (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__;
      v26 = (BattleData_o *)TargetIds;
      break;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 113, 0, 0LL);
      if ( v19 )
        goto LABEL_19;
      goto LABEL_29;
  }
  System_Collections_Generic_List_int___AddRange(v19, (System_Collections_Generic_IEnumerable_T__o *)v26, v25);
LABEL_17:
  LODWORD(data) = DataVals__GetParam(baseVals, 113, 0, 0LL);
LABEL_19:
  v27 = (int)data;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v19,
    (const MethodInfo_34B3D10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = 0;
  v37 = v36;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v37,
            (const MethodInfo_324B7EC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v10 )
      sub_1B71828(v29, v30);
    ServantData = BattleData__getServantData(v10, v37.fields._current, 0LL);
    v33 = ServantData;
    if ( !ServantData )
      sub_1B71828(0LL, v32);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
    {
      v34 = BattleServantData__getSameIndiualityServantSum(v33, vals, 0LL) + v28;
      v28 = BattleServantData__getSameIndiualityBuffSum(v33, vals, v27 < 1, 0, 0, 0LL) + v34;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v37,
    (const MethodInfo_324B7E8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v28;
}