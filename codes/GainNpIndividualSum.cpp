void __fastcall GainNpIndividualSum___ctor(GainNpIndividualSum_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GainNpIndividualSum__GetIndividualityIncludeTargetSum(
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        FunctionEntity_o *functionEntity,
        const MethodInfo *method)
{
  BattleData_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int32_array *vals; // x21
  int32_t Param; // w0
  const MethodInfo *v19; // x4
  System_Collections_Generic_List_int__o *TargetUniqueIdList; // x23
  int v21; // w22
  int32_t v22; // w19
  _BOOL8 v23; // x0
  __int64 v24; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v26; // x23
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+20h] [xbp-60h] BYREF

  v10 = battleData;
  if ( (byte_4B18E6E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_int__Dispose__,
      *(_QWORD *)&actorId,
      *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13, v14);
    battleData = (BattleData_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16);
    byte_4B18E6E = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !functionEntity
    || !baseVals
    || (vals = functionEntity->fields.vals,
        Param = DataVals__GetParam(baseVals, 4, 0, 0LL),
        TargetUniqueIdList = GainNpIndividualSum__GetTargetUniqueIdList(Param, v10, actorId, targetId, v19),
        battleData = (BattleData_o *)DataVals__GetParam(baseVals, 113, 0, 0LL),
        !TargetUniqueIdList) )
  {
    sub_1BCAA3C(battleData, *(_QWORD *)&actorId);
  }
  v21 = (int)battleData;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    TargetUniqueIdList,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = 0;
  v29 = v28;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v29,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v23 )
      break;
    if ( !v10 )
      sub_1BCAA3C(v23, v24);
    ServantData = BattleData__getServantData(v10, v29.fields._current, 0LL);
    v26 = ServantData;
    if ( ServantData
      && !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL)
      && (BattleServantData__checkIndividualities(v26, vals, 0LL)
       || BattleServantData__checkBuffIndividualities(v26, vals, v21 < 1, 0, 0, 0LL)) )
    {
      ++v22;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v29,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v22;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Int32_array *vals; // x20
  System_Collections_Generic_List_int__o *v26; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int32_t v30; // w4
  System_Int32_array *TargetIds; // x0
  const MethodInfo_3584E44 *v32; // x2
  BattleData_o *v33; // x1
  int v34; // w23
  int v35; // w21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v39; // x1
  BattleServantData_o *v40; // x22
  int v41; // w21
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+20h] [xbp-60h] BYREF

  v10 = data;
  if ( (byte_4B18E6C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_int__Dispose__,
      *(_QWORD *)&actorId,
      *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    data = (BattleData_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    byte_4B18E6C = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v26 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          *(_QWORD *)&actorId,
                                                          *(_QWORD *)&targetId,
                                                          baseVals),
        System_Collections_Generic_List_int____ctor(
          v26,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_27:
    sub_1BCAA3C(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v26 )
        goto LABEL_27;
      items = v26->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v26,
          targetId,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = size + 1;
        items->m_Items[size + 1] = targetId;
      }
      goto LABEL_18;
    case 1:
      v30 = 3;
      goto LABEL_15;
    case 2:
      v30 = 6;
      goto LABEL_15;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v26 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v26,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v32 = (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__;
      v33 = (BattleData_o *)TargetIds;
      goto LABEL_17;
    case 4:
      v30 = 26;
LABEL_15:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v30, 0LL, 0LL);
      if ( !v26 )
        goto LABEL_27;
      v33 = data;
      v32 = (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_17:
      System_Collections_Generic_List_int___AddRange(v26, (System_Collections_Generic_IEnumerable_T__o *)v33, v32);
LABEL_18:
      LODWORD(data) = DataVals__GetParam(baseVals, 113, 0, 0LL);
LABEL_19:
      v34 = (int)data;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        v26,
        (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v35 = 0;
      v44 = v43;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v44,
                (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v36 )
          break;
        if ( !v10 )
          sub_1BCAA3C(v36, v37);
        ServantData = BattleData__getServantData(v10, v44.fields._current, 0LL);
        v40 = ServantData;
        if ( !ServantData )
          sub_1BCAA3C(0LL, v39);
        if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
        {
          v41 = BattleServantData__getSameIndiualityServantSum(v40, vals, 0LL) + v35;
          v35 = BattleServantData__getSameIndiualityBuffSum(v40, vals, v34 < 1, 0, 0, 0LL) + v41;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v44,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return v35;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 113, 0, 0LL);
      if ( !v26 )
        goto LABEL_27;
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall GainNpIndividualSum__GetTargetUniqueIdList(
        int32_t individualityTargetType,
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x19
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x0
  __int64 v17; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t v21; // w4
  System_Int32_array *v22; // x0
  const MethodInfo_3584E44 *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *v24; // x1

  if ( (byte_4B18E6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, battleData, *(_QWORD *)&actorId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    byte_4B18E6D = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    battleData,
                                                    *(_QWORD *)&actorId,
                                                    *(_QWORD *)&targetId);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( individualityTargetType )
  {
    case 0:
      if ( !v15 )
        goto LABEL_18;
      items = v15->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          targetId,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = targetId;
      }
      return v15;
    case 1:
      v21 = 3;
      goto LABEL_13;
    case 2:
      v21 = 6;
      goto LABEL_13;
    case 3:
      TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(
                                                                   battleData,
                                                                   actorId,
                                                                   -1,
                                                                   -1,
                                                                   3,
                                                                   0LL,
                                                                   0LL);
      if ( !v15 )
        goto LABEL_18;
      System_Collections_Generic_List_int___AddRange(
        v15,
        TargetIds,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      v22 = Target__getTargetIds(battleData, actorId, -1, -1, 6, 0LL, 0LL);
      v23 = (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__;
      v24 = (System_Collections_Generic_IEnumerable_T__o *)v22;
      goto LABEL_15;
    case 4:
      v21 = 26;
LABEL_13:
      TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(
                                                                   battleData,
                                                                   actorId,
                                                                   -1,
                                                                   -1,
                                                                   v21,
                                                                   0LL,
                                                                   0LL);
      if ( !v15 )
LABEL_18:
        sub_1BCAA3C(TargetIds, v17);
      v24 = TargetIds;
      v23 = (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_15:
      System_Collections_Generic_List_int___AddRange(v15, v24, v23);
      break;
    default:
      return v15;
  }
  return v15;
}