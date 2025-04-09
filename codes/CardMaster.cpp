void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BABCE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, method);
    byte_49BABCE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    117,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BABCC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49BABCC = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_31A2454 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CardMaster__TryGetEntity(
        CardMaster_o *this,
        CardEntity_o **entity,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BABCD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__, entity);
    byte_49BABCD = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v9; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v12; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v14; // x3
  float result; // s0

  if ( (byte_49BABCF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1B4CF90(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__, v5);
    sub_1B4CF90(&long___TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49BABCF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1B4D038(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v9 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1B4D1F4(Instance, Instance);
  v12 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v12;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_31A1A30 *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 1.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v12, v14);
  if ( !Instance )
LABEL_12:
    sub_1B4D1EC(Instance, v9);
  return (float)SLODWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v9; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v12; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v14; // x3
  float result; // s0

  if ( (byte_49BABD1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1B4CF90(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__, v5);
    sub_1B4CF90(&long___TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49BABD1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1B4D038(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v9 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1B4D1F4(Instance, Instance);
  v12 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v12;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_31A1A30 *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v12, v14);
  if ( !Instance )
LABEL_12:
    sub_1B4D1EC(Instance, v9);
  return (float)*(int *)&Instance->fields._DispLog / 1000.0;
}


System_Int32_array *__fastcall CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x20
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 v29; // x28
  __int64 v30; // x8
  unsigned __int64 v31; // x29
  __int64 v32; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49BABD3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CardMaster___, v3);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v4);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_CardEntity__TypeInfo, v5);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49BABD3 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.datalist;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v16);
LABEL_7:
  while ( 2 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v22 = Enumerator->klass;
      v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v24 = &v22->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_CardEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_CardEntity__TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_18;
        }
        v25 = (__int64)&v22->vtable[*v24].method;
      }
      else
      {
LABEL_18:
        v25 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_CardEntity__TypeInfo, 0LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
              Enumerator,
              *(_QWORD *)(v25 + 8));
      v28 = v26;
      if ( !v26 )
        continue;
      v29 = *(_QWORD *)(v26 + 48);
      if ( !v29 )
        continue;
      v30 = *(_QWORD *)(v29 + 24);
      if ( !v30 || (int)v30 < 1 )
        continue;
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v30 )
          sub_1B4D1F4(v26, v27);
        if ( *(_DWORD *)(v29 + 32 + 4 * v31) == individuality )
        {
          if ( !v13 )
            sub_1B4D1EC(v26, v27);
          v26 = System_Collections_Generic_List_int___Contains(
                  v13,
                  *(_DWORD *)(v28 + 16),
                  (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (v26 & 1) == 0 )
          {
            v32 = *(unsigned int *)(v28 + 16);
            items = v13->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1B4D1EC(v26, v32);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                v32,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = size + 1;
              items->m_Items[size + 1] = v32;
            }
            goto LABEL_7;
          }
          LODWORD(v30) = *(_DWORD *)(v29 + 24);
        }
        if ( (__int64)++v31 >= (int)v30 )
          goto LABEL_7;
      }
    }
    break;
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_40;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_40:
    v39 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                Enumerator,
                                *(_QWORD *)(v39 + 8));
  if ( !v13 )
LABEL_46:
    sub_1B4D1EC(Instance, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  CardMaster_o *v10; // x21
  const MethodInfo *v11; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BABD2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1B4CF90(&int___TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49BABD2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v10 = (CardMaster_o *)Instance;
  Instance = (Il2CppObject *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v9);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (Il2CppObject *)CardMaster__TryGetEntity(v10, &entity, type, 1, v11),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_1B4D1EC(Instance, v8);
  }
  return (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v9; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v12; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v14; // x3
  float result; // s0

  if ( (byte_49BABD0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1B4CF90(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__, v5);
    sub_1B4CF90(&long___TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49BABD0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1B4D038(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v9 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1B4D1F4(Instance, Instance);
  v12 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v12;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_31A1A30 *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v12, v14);
  if ( !Instance )
LABEL_12:
    sub_1B4D1EC(Instance, v9);
  return (float)SHIDWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}