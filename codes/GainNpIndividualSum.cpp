void GainNpIndividualSum___ctor(GainNpIndividualSum_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t GainNpIndividualSum__GetIndividualityIncludeTargetSum(
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        FunctionEntity_o *functionEntity,
        const MethodInfo *method)
{
  BattleData_o *v10; // x20
  System_Int32_array *vals; // x21
  int32_t Param; // w0
  const MethodInfo *v13; // x4
  System_Collections_Generic_List_int__o *TargetUniqueIdList; // x23
  int v15; // w22
  int32_t v16; // w19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v20; // x23
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-60h] BYREF

  v10 = battleData;
  if ( (byte_4C2A385 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    battleData = (BattleData_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4C2A385 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !functionEntity
    || !baseVals
    || (vals = functionEntity->fields.vals,
        Param = DataVals__GetParam(baseVals, 4, 0, 0),
        TargetUniqueIdList = GainNpIndividualSum__GetTargetUniqueIdList(Param, v10, actorId, targetId, v13),
        battleData = (BattleData_o *)DataVals__GetParam(baseVals, 114, 0, 0),
        !TargetUniqueIdList) )
  {
    sub_1C2D6EC(battleData, *(_QWORD *)&actorId);
  }
  v15 = (int)battleData;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    TargetUniqueIdList,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v16 = 0;
  v23 = v22;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v10 )
      sub_1C2D6EC(v17, v18);
    ServantData = BattleData__getServantData(v10, v23.fields._current, 0);
    v20 = ServantData;
    if ( ServantData
      && !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0)
      && (BattleServantData__checkIndividualities(v20, vals, 0)
       || BattleServantData__checkBuffIndividualities(v20, vals, v15 < 1, 0, 0, 0)) )
    {
      ++v16;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
int32_t GainNpIndividualSum__GetSameIndiualitySum(
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
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  int32_t v16; // w4
  System_Int32_array *TargetIds; // x0
  const MethodInfo_376CD6C *v18; // x2
  BattleData_o *v19; // x1
  int v20; // w23
  int v21; // w21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v25; // x1
  BattleServantData_o *v26; // x22
  int v27; // w21
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF

  v10 = data;
  if ( (byte_4C2A383 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2A383 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v12 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v12,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_27:
    sub_1C2D6EC(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
  switch ( (int)data )
  {
    case 0:
      if ( !v12 )
        goto LABEL_27;
      items = v12->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          targetId,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size] = targetId;
      }
      goto LABEL_18;
    case 1:
      v16 = 3;
      goto LABEL_15;
    case 2:
      v16 = 6;
      goto LABEL_15;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0, 0);
      if ( !v12 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v12,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0, 0);
      v18 = (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__;
      v19 = (BattleData_o *)TargetIds;
      goto LABEL_17;
    case 4:
      v16 = 26;
LABEL_15:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v16, 0, 0);
      if ( !v12 )
        goto LABEL_27;
      v19 = data;
      v18 = (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_17:
      System_Collections_Generic_List_int___AddRange(v12, (System_Collections_Generic_IEnumerable_T__o *)v19, v18);
LABEL_18:
      LODWORD(data) = DataVals__GetParam(baseVals, 114, 0, 0);
LABEL_19:
      v20 = (int)data;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        v12,
        (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v21 = 0;
      v30 = v29;
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v30,
                (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v22 )
          break;
        if ( !v10 )
          sub_1C2D6EC(v22, v23);
        ServantData = BattleData__getServantData(v10, v30.fields._current, 0);
        v26 = ServantData;
        if ( !ServantData )
          sub_1C2D6EC(0, v25);
        if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0) )
        {
          v27 = BattleServantData__getSameIndiualityServantSum(v26, vals, 0) + v21;
          v21 = BattleServantData__getSameIndiualityBuffSum(v26, vals, v20 < 1, 0, 0, 0) + v27;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v30,
        (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return v21;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 114, 0, 0);
      if ( !v12 )
        goto LABEL_27;
      goto LABEL_19;
  }
}


System_Collections_Generic_List_int__o *GainNpIndividualSum__GetTargetUniqueIdList(
        int32_t individualityTargetType,
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x0
  __int64 v11; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  int32_t v15; // w4
  System_Int32_array *v16; // x0
  const MethodInfo_376CD6C *v17; // x2
  System_Collections_Generic_IEnumerable_T__o *v18; // x1

  if ( (byte_4C2A384 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2A384 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( individualityTargetType )
  {
    case 0:
      if ( !v9 )
        goto LABEL_18;
      items = v9->fields._items;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          targetId,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size] = targetId;
      }
      return v9;
    case 1:
      v15 = 3;
      goto LABEL_13;
    case 2:
      v15 = 6;
      goto LABEL_13;
    case 3:
      TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(
                                                                   battleData,
                                                                   actorId,
                                                                   -1,
                                                                   -1,
                                                                   3,
                                                                   0,
                                                                   0);
      if ( !v9 )
        goto LABEL_18;
      System_Collections_Generic_List_int___AddRange(
        v9,
        TargetIds,
        (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
      v16 = Target__getTargetIds(battleData, actorId, -1, -1, 6, 0, 0);
      v17 = (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__;
      v18 = (System_Collections_Generic_IEnumerable_T__o *)v16;
      goto LABEL_15;
    case 4:
      v15 = 26;
LABEL_13:
      TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(
                                                                   battleData,
                                                                   actorId,
                                                                   -1,
                                                                   -1,
                                                                   v15,
                                                                   0,
                                                                   0);
      if ( !v9 )
LABEL_18:
        sub_1C2D6EC(TargetIds, v11);
      v18 = TargetIds;
      v17 = (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_15:
      System_Collections_Generic_List_int___AddRange(v9, v18, v17);
      break;
    default:
      return v9;
  }
  return v9;
}