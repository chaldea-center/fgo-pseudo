void CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970574 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
    byte_5970574 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    118,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970572 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
    byte_5970572 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_3F157EC *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_5970573 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
    byte_5970573 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


float CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v9; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v11; // x3
  float result; // s0

  if ( (byte_5970575 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CardMaster___);
    sub_2213A60(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970575 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_2213B20(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_2213CE4(Instance);
  v9 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v9;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_3F14EC4 *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 1.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v9, v11);
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v6);
  return (float)SLODWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}


float CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v9; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v11; // x3
  float result; // s0

  if ( (byte_5970577 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CardMaster___);
    sub_2213A60(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970577 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_2213B20(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_2213CE4(Instance);
  v9 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v9;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_3F14EC4 *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v9, v11);
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v6);
  return (float)*(int *)&Instance->fields._DispLog / 1000.0;
}


System_Int32_array *CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x26
  __int64 v21; // x8
  unsigned __int64 v22; // x27
  struct System_Int32_array *items; // x8
  __int64 v24; // x1
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-58h]

  if ( (byte_5970579 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_CardMaster___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_CardEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970579 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_CardEntity__GetEnumerator__);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v32 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_12;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
                 i,
                 *(_QWORD *)(v12 + 8));
    if ( (Instance & 1) == 0 )
      break;
    if ( !v32 )
      sub_2213CDC(Instance, v5);
    v13 = v32->klass;
    v14 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CardEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_CardEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_20:
      v16 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_CardEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v32,
            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      continue;
    v20 = *(_QWORD *)(v17 + 48);
    if ( !v20 )
      continue;
    v21 = *(_QWORD *)(v20 + 24);
    if ( (int)v21 < 1 )
      continue;
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        sub_2213CE4(v17);
      if ( *(_DWORD *)(v20 + 32 + 4 * v22) != individuality )
        goto LABEL_31;
      if ( !v3 )
        sub_2213CDC(v17, v18);
      v17 = System_Collections_Generic_List_int___Contains(
              v3,
              *(_DWORD *)(v19 + 16),
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (v17 & 1) == 0 )
        break;
      LODWORD(v21) = *(_DWORD *)(v20 + 24);
LABEL_31:
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_37;
    }
    items = v3->fields._items;
    v24 = *(unsigned int *)(v19 + 16);
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_2213CDC(v17, v24);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v24,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = v24;
    }
LABEL_37:
    ;
  }
  if ( v32 )
  {
    v27 = v32->klass;
    v28 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_44;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_44:
      v30 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                 v32,
                 *(_QWORD *)(v30 + 8));
  }
  if ( !v3 )
LABEL_52:
    sub_2213CDC(Instance, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  CardMaster_o *v8; // x21
  const MethodInfo *v9; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970578 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CardMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970578 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CardMaster___);
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
    sub_2213CDC(Instance, v6);
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
}


float CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v9; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v11; // x3
  float result; // s0

  if ( (byte_5970576 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CardMaster___);
    sub_2213A60(&Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970576 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_2213B20(long___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_2213CE4(Instance);
  v9 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v9;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase_object__object__object___isEntityExistsFromId(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           (const MethodInfo_3F14EC4 *)Method_DataMasterBase_CardMaster__CardEntity__string__isEntityExistsFromId__);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v9, v11);
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v6);
  return (float)SHIDWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}