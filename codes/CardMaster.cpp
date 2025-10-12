void CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3770C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
    byte_4C3770C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    117,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3770A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
    byte_4C3770A = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_339B2F0 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CardMaster__TryGetEntity(
        CardMaster_o *this,
        CardEntity_o **entity,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C3770B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
    byte_4C3770B = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


float CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v8; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v10; // x3
  float result; // s0

  if ( (byte_4C3770D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C32C20(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3770D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1C32CC8(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1C32E84(Instance);
  v8 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v8;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_339A8CC *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 1.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v8, v10);
  if ( !Instance )
LABEL_12:
    sub_1C32E7C(Instance);
  return (float)SLODWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}


float CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v8; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v10; // x3
  float result; // s0

  if ( (byte_4C3770F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C32C20(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3770F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1C32CC8(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1C32E84(Instance);
  v8 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v8;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_339A8CC *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v8, v10);
  if ( !Instance )
LABEL_12:
    sub_1C32E7C(Instance);
  return (float)*(int *)&Instance->fields._DispLog / 1000.0;
}


System_Int32_array *CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x22
  __int64 v16; // x28
  __int64 v17; // x8
  unsigned __int64 v18; // x29
  int32_t v19; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C37711 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_CardEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37711 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
LABEL_7:
  while ( 2 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) != 0 )
    {
      v10 = Enumerator->klass;
      v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v12 = &v10->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_CardEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_CardEntity__TypeInfo )
        {
          --v11;
          v12 += 4;
          if ( !v11 )
            goto LABEL_18;
        }
        v13 = (__int64)&v10->vtable[*v12];
      }
      else
      {
LABEL_18:
        v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_CardEntity__TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
              Enumerator,
              *(_QWORD *)(v13 + 8));
      v15 = v14;
      if ( !v14 )
        continue;
      v16 = *(_QWORD *)(v14 + 48);
      if ( !v16 )
        continue;
      v17 = *(_QWORD *)(v16 + 24);
      if ( !v17 || (int)v17 < 1 )
        continue;
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v17 )
          sub_1C32E84(v14);
        if ( *(_DWORD *)(v16 + 32 + 4 * v18) == individuality )
        {
          if ( !v3 )
            sub_1C32E7C(v14);
          v14 = System_Collections_Generic_List_int___Contains(
                  v3,
                  *(_DWORD *)(v15 + 16),
                  (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (v14 & 1) == 0 )
          {
            v19 = *(_DWORD *)(v15 + 16);
            items = v3->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              sub_1C32E7C(v14);
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                v19,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = v19;
            }
            goto LABEL_7;
          }
          LODWORD(v17) = *(_DWORD *)(v16 + 24);
        }
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_7;
      }
    }
    break;
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_40;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_40:
    v26 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                Enumerator,
                                *(_QWORD *)(v26 + 8));
  if ( !v3 )
LABEL_46:
    sub_1C32E7C(Instance);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x4
  CardMaster_o *v7; // x21
  const MethodInfo *v8; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37710 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37710 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v7 = (CardMaster_o *)Instance;
  Instance = (Il2CppObject *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v6);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (Il2CppObject *)CardMaster__TryGetEntity(v7, &entity, type, 1, v8),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_1C32E7C(Instance);
  }
  return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
}


float CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v8; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v10; // x3
  float result; // s0

  if ( (byte_4C3770E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C32C20(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3770E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1C32CC8(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1C32E84(Instance);
  v8 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v8;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_339A8CC *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v8, v10);
  if ( !Instance )
LABEL_12:
    sub_1C32E7C(Instance);
  return (float)SHIDWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}