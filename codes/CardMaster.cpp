void CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27015 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
    byte_4C27015 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    117,
    (const MethodInfo_338A52C *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27013 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
    byte_4C27013 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_338C850 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_4C27014 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
    byte_4C27014 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


float CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v8; // x2
  int m_CancellationTokenSource; // w8
  int32_t v10; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v12; // x3
  float result; // s0

  if ( (byte_4C27016 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C2D490(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27016 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1C2D538(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1C2D6F4(Instance, Instance, v8);
  v10 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v10;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_338BE2C *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 1.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v10, v12);
  if ( !Instance )
LABEL_12:
    sub_1C2D6EC(Instance, v6);
  return (float)SLODWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}


float CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v8; // x2
  int m_CancellationTokenSource; // w8
  int32_t v10; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v12; // x3
  float result; // s0

  if ( (byte_4C27018 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C2D490(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27018 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1C2D538(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1C2D6F4(Instance, Instance, v8);
  v10 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v10;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_338BE2C *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v10, v12);
  if ( !Instance )
LABEL_12:
    sub_1C2D6EC(Instance, v6);
  return (float)*(int *)&Instance->fields._DispLog / 1000.0;
}


System_Int32_array *CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x28
  __int64 v21; // x8
  unsigned __int64 v22; // x29
  __int64 v23; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C2701A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_CardEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2701A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v6);
LABEL_7:
  while ( 2 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) != 0 )
    {
      v12 = Enumerator->klass;
      v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_CardEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_CardEntity__TypeInfo )
        {
          --v13;
          v14 += 4;
          if ( !v13 )
            goto LABEL_18;
        }
        v15 = (__int64)&v12->vtable[*v14];
      }
      else
      {
LABEL_18:
        v15 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_CardEntity__TypeInfo, 0);
      }
      v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
              Enumerator,
              *(_QWORD *)(v15 + 8));
      v19 = v16;
      if ( !v16 )
        continue;
      v20 = *(_QWORD *)(v16 + 48);
      if ( !v20 )
        continue;
      v21 = *(_QWORD *)(v20 + 24);
      if ( !v21 || (int)v21 < 1 )
        continue;
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)v21 )
          sub_1C2D6F4(v16, v17, v18);
        if ( *(_DWORD *)(v20 + 32 + 4 * v22) == individuality )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          v16 = System_Collections_Generic_List_int___Contains(
                  v3,
                  *(_DWORD *)(v19 + 16),
                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (v16 & 1) == 0 )
          {
            v23 = *(unsigned int *)(v19 + 16);
            items = v3->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v3->fields._version;
            if ( !items )
              sub_1C2D6EC(v16, v23);
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v3,
                v23,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = v23;
            }
            goto LABEL_7;
          }
          LODWORD(v21) = *(_DWORD *)(v20 + 24);
        }
        if ( (__int64)++v22 >= (int)v21 )
          goto LABEL_7;
      }
    }
    break;
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_40;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_40:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                Enumerator,
                                *(_QWORD *)(v30 + 8));
  if ( !v3 )
LABEL_46:
    sub_1C2D6EC(Instance, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  CardMaster_o *v8; // x21
  const MethodInfo *v9; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27019 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27019 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v8 = (CardMaster_o *)Instance;
  Instance = (Il2CppObject *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v7);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (Il2CppObject *)CardMaster__TryGetEntity(v8, &entity, type, 1, v9),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_1C2D6EC(Instance, v6);
  }
  return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
}


float CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v8; // x2
  int m_CancellationTokenSource; // w8
  int32_t v10; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v12; // x3
  float result; // s0

  if ( (byte_4C27017 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CardMaster___);
    sub_1C2D490(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27017 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1C2D538(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1C2D6F4(Instance, Instance, v8);
  v10 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v10;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_338BE2C *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v10, v12);
  if ( !Instance )
LABEL_12:
    sub_1C2D6EC(Instance, v6);
  return (float)SHIDWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}