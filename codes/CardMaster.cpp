void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, method, v2);
    byte_4B15F66 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    113,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15F64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, *(_QWORD *)&id, *(_QWORD *)&num);
    byte_4B15F64 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_31B3198 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_4B15F65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B15F65 = 1;
  }
  PK = (Il2CppObject *)CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  DataManager_o *v10; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v13; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v15; // x3
  float result; // s0

  if ( (byte_4B15F67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15F67 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1BCA888(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v10 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1BCAA44(Instance, Instance);
  v13 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v13;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           (DataMasterBase_o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 1.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v13, v15);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  return (float)SLODWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  DataManager_o *v10; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v13; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v15; // x3
  float result; // s0

  if ( (byte_4B15F69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15F69 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1BCA888(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v10 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1BCAA44(Instance, Instance);
  v13 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v13;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           (DataMasterBase_o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v13, v15);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  return (float)*(int *)&Instance->fields._DispLog / 1000.0;
}


System_Int32_array *__fastcall CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x20
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x22
  CardEntity_c *v42; // x1
  __int64 methodPtr_low; // x9
  __int64 v44; // x29
  __int64 v45; // x8
  unsigned __int64 v46; // x23
  __int64 v47; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4B15F6B & 1) == 0 )
  {
    sub_1BCA7E0(&CardEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CardMaster___, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B15F6B = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_49;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_49;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v30);
LABEL_7:
  while ( 2 )
  {
    klass = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v36 = Enumerator->klass;
      v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_18;
        }
        v39 = (__int64)&v36->vtable[*v38].method;
      }
      else
      {
LABEL_18:
        v39 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
              Enumerator,
              *(_QWORD *)(v39 + 8));
      v41 = v40;
      if ( !v40 )
        continue;
      v42 = CardEntity_TypeInfo;
      methodPtr_low = LOBYTE(CardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v40 + 304LL) >= (unsigned int)methodPtr_low
        && *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v40 + 200LL) + 8 * methodPtr_low - 8) == CardEntity_TypeInfo )
      {
        v44 = *(_QWORD *)(v40 + 48);
        if ( !v44 )
          continue;
        v45 = *(_QWORD *)(v44 + 24);
        if ( !v45 || (int)v45 < 1 )
          continue;
        v46 = 0LL;
        while ( 1 )
        {
          if ( v46 >= (unsigned int)v45 )
            sub_1BCAA44(v40, v42);
          if ( *(_DWORD *)(v44 + 32 + 4 * v46) == individuality )
          {
            if ( !v27 )
              sub_1BCAA3C(v40, v42);
            v40 = System_Collections_Generic_List_int___Contains(
                    v27,
                    *(_DWORD *)(v41 + 16),
                    (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (v40 & 1) == 0 )
            {
              v47 = *(unsigned int *)(v41 + 16);
              items = v27->fields._items;
              v49 = Method_System_Collections_Generic_List_int__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1BCAA3C(v40, v47);
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v27,
                  v47,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                v27->fields._size = size + 1;
                items->m_Items[size + 1] = v47;
              }
              goto LABEL_7;
            }
            LODWORD(v45) = *(_DWORD *)(v44 + 24);
          }
          if ( (__int64)++v46 >= (int)v45 )
            goto LABEL_7;
        }
      }
      sub_1BCACFC(v40);
      goto LABEL_49;
    }
    break;
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_42;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_42:
    v54 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                               Enumerator,
                               *(_QWORD *)(v54 + 8));
  if ( !v27 )
LABEL_49:
    sub_1BCAA3C(Instance, v29);
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  CardMaster_o *v12; // x21
  const MethodInfo *v13; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15F6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15F6A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v12 = (CardMaster_o *)Instance;
  Instance = (Il2CppObject *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v11);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (Il2CppObject *)CardMaster__TryGetEntity(v12, &entity, type, 1, v13),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  DataManager_o *v10; // x1
  Il2CppObject *MasterData_object; // x21
  int m_CancellationTokenSource; // w8
  int32_t v13; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v15; // x3
  float result; // s0

  if ( (byte_4B15F68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15F68 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_1BCA888(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v10 = Instance;
  if ( !m_CancellationTokenSource || (*(_QWORD *)&Instance->fields._DispLog = type, m_CancellationTokenSource == 1) )
    sub_1BCAA44(Instance, Instance);
  v13 = num + 1;
  Instance->fields.datalist = (struct DataMasterBase_array *)v13;
  if ( !MasterData_object )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           (DataMasterBase_o *)MasterData_object,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_object, type, v13, v15);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  return (float)SHIDWORD(Instance->fields.m_CancellationTokenSource) / 1000.0;
}