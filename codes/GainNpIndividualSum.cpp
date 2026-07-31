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
  if ( (byte_593BA67 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    battleData = (BattleData_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_593BA67 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !functionEntity
    || !baseVals
    || (vals = functionEntity->fields.vals,
        Param = DataVals__GetParam(baseVals, 4, 0, 0),
        TargetUniqueIdList = GainNpIndividualSum__GetTargetUniqueIdList(Param, v10, actorId, targetId, v13),
        battleData = (BattleData_o *)DataVals__GetParam(baseVals, 117, 0, 0),
        !TargetUniqueIdList) )
  {
    sub_21FFECC(battleData, *(_QWORD *)&actorId);
  }
  v15 = (int)battleData;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    TargetUniqueIdList,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v16 = 0;
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v10 )
      sub_21FFECC(v17, v18);
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
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  BattleData_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w4
  BattleData_o *v16; // x1
  const MethodInfo_4433344 *v17; // x2
  System_Int32_array *TargetIds; // x0
  int v19; // w23
  int v20; // w21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  BattleServantData_o *ServantData; // x0
  __int64 v24; // x1
  BattleServantData_o *v25; // x22
  int v26; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+20h] [xbp-60h] BYREF

  v10 = data;
  if ( (byte_593BA65 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    data = (BattleData_o *)sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593BA65 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !funcEnt )
    goto LABEL_32;
  vals = funcEnt->fields.vals;
  v12 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_32;
  data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0);
  if ( (int)data <= 1 )
  {
    if ( !(_DWORD)data )
    {
      if ( v12 )
      {
        items = v12->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( items )
        {
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              targetId,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size] = targetId;
          }
          goto LABEL_19;
        }
      }
      goto LABEL_32;
    }
    if ( (_DWORD)data != 1 )
    {
LABEL_31:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 117, 0, 0);
      if ( v12 )
        goto LABEL_20;
      goto LABEL_32;
    }
    v13 = v10;
    v14 = actorId;
    v15 = 3;
  }
  else
  {
    if ( (_DWORD)data != 2 )
    {
      if ( (_DWORD)data != 3 )
      {
        if ( (_DWORD)data == 4 )
        {
          v13 = v10;
          v14 = actorId;
          v15 = 26;
          goto LABEL_14;
        }
        goto LABEL_31;
      }
      data = (BattleData_o *)Target__getTargetIds(v10, actorId, -1, -1, 3, 0, 0);
      if ( v12 )
      {
        System_Collections_Generic_List_int___AddRange(
          v12,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
        TargetIds = Target__getTargetIds(v10, actorId, -1, -1, 6, 0, 0);
        v17 = (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__;
        v16 = (BattleData_o *)TargetIds;
        goto LABEL_18;
      }
LABEL_32:
      sub_21FFECC(data, *(_QWORD *)&actorId);
    }
    v13 = v10;
    v14 = actorId;
    v15 = 6;
  }
LABEL_14:
  data = (BattleData_o *)Target__getTargetIds(v13, v14, -1, -1, v15, 0, 0);
  if ( !v12 )
    goto LABEL_32;
  v16 = data;
  v17 = (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_18:
  System_Collections_Generic_List_int___AddRange(v12, (System_Collections_Generic_IEnumerable_T__o *)v16, v17);
LABEL_19:
  LODWORD(data) = DataVals__GetParam(baseVals, 117, 0, 0);
LABEL_20:
  v19 = (int)data;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v12,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = 0;
  v32 = v31;
  v31.fields._list = 0;
  *(_QWORD *)&v31.fields._index = &v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v32,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v21 )
      break;
    if ( !v10 )
      sub_21FFECC(v21, v22);
    ServantData = BattleData__getServantData(v10, v32.fields._current, 0);
    v25 = ServantData;
    if ( !ServantData )
      sub_21FFECC(0, v24);
    if ( !BattleServantData__isLogicDeadAndNoRevive(ServantData, 0) )
    {
      v26 = BattleServantData__getSameIndiualityServantSum(v25, vals, 0) + v20;
      v20 = BattleServantData__getSameIndiualityBuffSum(v25, vals, v19 < 1, 0, 0, 0) + v26;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v32,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v20;
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
  BattleData_o *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w4
  System_Collections_Generic_IEnumerable_T__o *v15; // x1
  const MethodInfo_4433344 *v16; // x2
  System_Int32_array *v17; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_593BA66 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593BA66 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( individualityTargetType <= 1 )
  {
    if ( !individualityTargetType )
    {
      if ( !v9 )
        goto LABEL_23;
      items = v9->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_23;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          targetId,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size] = targetId;
      }
      return v9;
    }
    if ( individualityTargetType != 1 )
      return v9;
    v12 = battleData;
    v13 = actorId;
    v14 = 3;
LABEL_12:
    TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(v12, v13, -1, -1, v14, 0, 0);
    if ( v9 )
    {
      v15 = TargetIds;
      v16 = (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_16:
      System_Collections_Generic_List_int___AddRange(v9, v15, v16);
      return v9;
    }
    goto LABEL_23;
  }
  switch ( individualityTargetType )
  {
    case 2:
      v12 = battleData;
      v13 = actorId;
      v14 = 6;
      goto LABEL_12;
    case 3:
      TargetIds = (System_Collections_Generic_IEnumerable_T__o *)Target__getTargetIds(
                                                                   battleData,
                                                                   actorId,
                                                                   -1,
                                                                   -1,
                                                                   3,
                                                                   0,
                                                                   0);
      if ( v9 )
      {
        System_Collections_Generic_List_int___AddRange(
          v9,
          TargetIds,
          (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
        v17 = Target__getTargetIds(battleData, actorId, -1, -1, 6, 0, 0);
        v16 = (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__;
        v15 = (System_Collections_Generic_IEnumerable_T__o *)v17;
        goto LABEL_16;
      }
LABEL_23:
      sub_21FFECC(TargetIds, v11);
    case 4:
      v12 = battleData;
      v13 = actorId;
      v14 = 26;
      goto LABEL_12;
  }
  return v9;
}