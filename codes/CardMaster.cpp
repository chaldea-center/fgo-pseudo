void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66925 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, method);
    byte_4B66925 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    117,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66923 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B66923 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_31FDB1C *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_4B66924 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__, entity);
    byte_4B66924 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v11; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v13; // x3
  float result; // s0

  if ( (byte_4B66926 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1BE4ACC(&long___TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B66926 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1BE4B74(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1BE4D30(Instance, Instance);
  v11 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v11;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           (DataMasterBase_o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 1.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v11, v13);
  if ( !Instance )
LABEL_12:
    sub_1BE4D28(Instance, v8);
  return (float)SLODWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v11; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v13; // x3
  float result; // s0

  if ( (byte_4B66928 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1BE4ACC(&long___TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B66928 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1BE4B74(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1BE4D30(Instance, Instance);
  v11 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v11;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           (DataMasterBase_o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v11, v13);
  if ( !Instance )
LABEL_12:
    sub_1BE4D28(Instance, v8);
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
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x22
  CardEntity_c *v29; // x1
  __int64 methodPtr_low; // x9
  __int64 v31; // x29
  __int64 v32; // x8
  unsigned __int64 v33; // x23
  __int64 v34; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4B6692A & 1) == 0 )
  {
    sub_1BE4ACC(&CardEntity_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CardMaster___, v4);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B6692A = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_49;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v17);
LABEL_7:
  while ( 2 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v23 = Enumerator->klass;
      v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v25 = &v23->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_18;
        }
        v26 = (__int64)&v23->vtable[*v25].method;
      }
      else
      {
LABEL_18:
        v26 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
              Enumerator,
              *(_QWORD *)(v26 + 8));
      v28 = v27;
      if ( !v27 )
        continue;
      v29 = CardEntity_TypeInfo;
      methodPtr_low = LOBYTE(CardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
        && *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) == CardEntity_TypeInfo )
      {
        v31 = *(_QWORD *)(v27 + 48);
        if ( !v31 )
          continue;
        v32 = *(_QWORD *)(v31 + 24);
        if ( !v32 || (int)v32 < 1 )
          continue;
        v33 = 0LL;
        while ( 1 )
        {
          if ( v33 >= (unsigned int)v32 )
            sub_1BE4D30(v27, v29);
          if ( *(_DWORD *)(v31 + 32 + 4 * v33) == individuality )
          {
            if ( !v14 )
              sub_1BE4D28(v27, v29);
            v27 = System_Collections_Generic_List_int___Contains(
                    v14,
                    *(_DWORD *)(v28 + 16),
                    (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (v27 & 1) == 0 )
            {
              v34 = *(unsigned int *)(v28 + 16);
              items = v14->fields._items;
              v36 = Method_System_Collections_Generic_List_int__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1BE4D28(v27, v34);
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v14,
                  v34,
                  *(const MethodInfo_35CF200 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v14->fields._size = size + 1;
                items->m_Items[size + 1] = v34;
              }
              goto LABEL_7;
            }
            LODWORD(v32) = *(_DWORD *)(v31 + 24);
          }
          if ( (__int64)++v33 >= (int)v32 )
            goto LABEL_7;
        }
      }
      sub_1BE4FE8(v27);
      goto LABEL_49;
    }
    break;
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_42;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_42:
    v41 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                               Enumerator,
                               *(_QWORD *)(v41 + 8));
  if ( !v14 )
LABEL_49:
    sub_1BE4D28(Instance, v16);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B66929 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B66929 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CardMaster___);
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
    sub_1BE4D28(Instance, v8);
  }
  return (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v11; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v13; // x3
  float result; // s0

  if ( (byte_4B66927 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_1BE4ACC(&long___TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B66927 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1BE4B74(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1BE4D30(Instance, Instance);
  v11 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v11;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           (DataMasterBase_o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v11, v13);
  if ( !Instance )
LABEL_12:
    sub_1BE4D28(Instance, v8);
  return (float)SHIDWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}