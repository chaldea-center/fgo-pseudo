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
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array *vals; // x21
  int32_t Param; // w0
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_int__o *TargetUniqueIdList; // x23
  int v18; // w22
  int32_t v19; // w19
  _BOOL8 v20; // x0
  __int64 v21; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v23; // x23
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-60h] BYREF

  v10 = battleData;
  if ( (byte_4B39E4A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&actorId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    battleData = (BattleData_o *)sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    byte_4B39E4A = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !functionEntity
    || !baseVals
    || (vals = functionEntity->fields.vals,
        Param = DataVals__GetParam(baseVals, 4, 0, 0LL),
        TargetUniqueIdList = GainNpIndividualSum__GetTargetUniqueIdList(Param, v10, actorId, targetId, v16),
        battleData = (BattleData_o *)DataVals__GetParam(baseVals, 113, 0, 0LL),
        !TargetUniqueIdList) )
  {
    sub_1BD36B4(battleData, *(_QWORD *)&actorId);
  }
  v18 = (int)battleData;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    TargetUniqueIdList,
    (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v19 = 0;
  v26 = v25;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v20 )
      break;
    if ( !v10 )
      sub_1BD36B4(v20, v21);
    ServantData = BattleData__getServantData(v10, v26.fields._current, 0LL);
    v23 = ServantData;
    if ( ServantData
      && !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL)
      && (BattleServantData__checkIndividualities(v23, vals, 0LL)
       || BattleServantData__checkBuffIndividualities(v23, vals, v18 < 1, 0, 0, 0LL)) )
    {
      ++v19;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v19;
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
  const MethodInfo_35A3F78 *v25; // x2
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
  if ( (byte_4B39E48 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&actorId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v16);
    data = (BattleData_o *)sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4B39E48 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !funcEnt
    || (vals = funcEnt->fields.vals,
        v19 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v19,
          (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__),
        !baseVals) )
  {
LABEL_27:
    sub_1BD36B4(data, *(_QWORD *)&actorId);
  }
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
  switch ( (int)data )
  {
    case 0:
      if ( !v19 )
        goto LABEL_27;
      items = v19->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          targetId,
          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = targetId;
      }
      goto LABEL_18;
    case 1:
      v23 = 3;
      goto LABEL_15;
    case 2:
      v23 = 6;
      goto LABEL_15;
    case 3:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_27;
      System_Collections_Generic_List_int___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)data,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
      TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0LL, 0LL);
      v25 = (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__;
      v26 = (BattleData_o *)TargetIds;
      goto LABEL_17;
    case 4:
      v23 = 26;
LABEL_15:
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, v23, 0LL, 0LL);
      if ( !v19 )
        goto LABEL_27;
      v26 = data;
      v25 = (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_17:
      System_Collections_Generic_List_int___AddRange(v19, (System_Collections_Generic_IEnumerable_T__o *)v26, v25);
LABEL_18:
      LODWORD(data) = DataVals__GetParam(baseVals, 113, 0, 0LL);
LABEL_19:
      v27 = (int)data;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v36,
        v19,
        (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v28 = 0;
      v37 = v36;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v37,
                (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v29 )
          break;
        if ( !v10 )
          sub_1BD36B4(v29, v30);
        ServantData = BattleData__getServantData(v10, v37.fields._current, 0LL);
        v33 = ServantData;
        if ( !ServantData )
          sub_1BD36B4(0LL, v32);
        if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0LL) )
        {
          v34 = BattleServantData__getSameIndiualityServantSum(v33, vals, 0LL) + v28;
          v28 = BattleServantData__getSameIndiualityBuffSum(v33, vals, v27 < 1, 0, 0, 0LL) + v34;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v37,
        (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return v28;
    default:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 113, 0, 0LL);
      if ( !v19 )
        goto LABEL_27;
      goto LABEL_19;
  }
}


System_Collections_Generic_List_int__o *__fastcall GainNpIndividualSum__GetTargetUniqueIdList(
        int32_t individualityTargetType,
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x0
  __int64 v14; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int32_t v18; // w4
  System_Int32_array *v19; // x0
  const MethodInfo_35A3F78 *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *v21; // x1

  if ( (byte_4B39E49 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, battleData);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4B39E49 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  switch ( individualityTargetType )
  {
    case 0:
      if ( !v12 )
        goto LABEL_18;
      items = v12->fields._items;
      v16 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          targetId,
          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = targetId;
      }
      return v12;
    case 1:
      v18 = 3;
      goto LABEL_13;
    case 2:
      v18 = 6;
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
      if ( !v12 )
        goto LABEL_18;
      System_Collections_Generic_List_int___AddRange(
        v12,
        TargetIds,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
      v19 = Target__getTargetIds(battleData, actorId, -1, -1, 6, 0LL, 0LL);
      v20 = (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__;
      v21 = (System_Collections_Generic_IEnumerable_T__o *)v19;
      goto LABEL_15;
    case 4:
      v18 = 26;
LABEL_13:
      TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(
                                                                   battleData,
                                                                   actorId,
                                                                   -1,
                                                                   -1,
                                                                   v18,
                                                                   0LL,
                                                                   0LL);
      if ( !v12 )
LABEL_18:
        sub_1BD36B4(TargetIds, v14);
      v21 = TargetIds;
      v20 = (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_15:
      System_Collections_Generic_List_int___AddRange(v12, v21, v20);
      break;
    default:
      return v12;
  }
  return v12;
}