void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215DAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, method);
    byte_4215DAD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    111,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215DAB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4215DAB = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                           PK,
                           (const MethodInfo_266A024 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CardMaster__TryGetEntity(
        CardMaster_o *this,
        CardEntity_o **entity,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4215DAC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__, entity);
    byte_4215DAC = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  CardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v10; // w20
  const MethodInfo *v11; // x3
  __int64 v13; // x0

  if ( (byte_4215DAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B0D8A4(&long___TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215DAE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (CardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B0D8BC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v13 = sub_B0D9A8(Instance);
    sub_B0D948(v13, 0LL);
  }
  v10 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v10;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase__isEntityExistsFromId(
         (DataMasterBase_o *)MasterData_WarQuestSelectionMaster,
         (System_Int64_array *)Instance,
         0LL) )
  {
    Instance = (DataManager_o *)CardMaster__GetEntity(MasterData_WarQuestSelectionMaster, type, v10, v11);
    if ( Instance )
      return (float)SLODWORD(Instance->fields.datalist) / 1000.0;
LABEL_12:
    sub_B0D97C(Instance);
  }
  return 1.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v10; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v12; // x3
  float result; // s0
  __int64 v14; // x0

  if ( (byte_4215DB0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B0D8A4(&long___TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215DB0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B0D8BC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v14 = sub_B0D9A8(Instance);
    sub_B0D948(v14, 0LL);
  }
  v10 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v10;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v10, v12);
  if ( !Instance )
LABEL_12:
    sub_B0D97C(Instance);
  return (float)SLODWORD(Instance->fields.lookup) / 1000.0;
}


System_Int32_array *__fastcall CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x19
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x22
  __int64 v28; // x9
  __int64 v29; // x28
  __int64 v30; // x8
  unsigned __int64 v31; // x27
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v37; // x0

  if ( (byte_4215DB2 & 1) == 0 )
  {
    sub_B0D8A4(&CardEntity_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CardMaster___, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4215DB2 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
LABEL_7:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_18:
      v25 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( !v26 )
      continue;
    v28 = *(&CardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v28
      || *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v28 - 8) != CardEntity_TypeInfo )
    {
      Instance = (DataManager_o *)sub_B0DC70(v26);
      goto LABEL_46;
    }
    v29 = *(_QWORD *)(v26 + 48);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 24);
      if ( v30 )
      {
        if ( (int)v30 >= 1 )
        {
          v31 = 0LL;
          while ( 1 )
          {
            if ( v31 >= (unsigned int)v30 )
            {
              v37 = sub_B0D9A8(v26);
              sub_B0D948(v37, 0LL);
            }
            if ( *(_DWORD *)(v29 + 32 + 4 * v31) == individuality )
            {
              if ( !v15 )
                sub_B0D97C(v26);
              v26 = System_Collections_Generic_List_int___Contains(
                      v15,
                      *(_DWORD *)(v27 + 16),
                      (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (v26 & 1) == 0 )
              {
                System_Collections_Generic_List_int___Add(
                  v15,
                  *(_DWORD *)(v27 + 16),
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                goto LABEL_7;
              }
              LODWORD(v30) = *(_DWORD *)(v29 + 24);
            }
            if ( (__int64)++v31 >= (int)v30 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_39:
    v35 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                Enumerator,
                                *(_QWORD *)(v35 + 8));
  if ( !v15 )
LABEL_46:
    sub_B0D97C(Instance);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x4
  CardMaster_o *v9; // x21
  const MethodInfo *v10; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215DB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215DB1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v9 = (CardMaster_o *)Instance;
  Instance = (DataManager_o *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v8);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (DataManager_o *)CardMaster__TryGetEntity(v9, &entity, type, 1, v10),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_B0D97C(Instance);
  }
  return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v10; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v12; // x3
  float result; // s0
  __int64 v14; // x0

  if ( (byte_4215DAF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B0D8A4(&long___TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215DAF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B0D8BC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v14 = sub_B0D9A8(Instance);
    sub_B0D948(v14, 0LL);
  }
  v10 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v10;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v10, v12);
  if ( !Instance )
LABEL_12:
    sub_B0D97C(Instance);
  return (float)SHIDWORD(Instance->fields.datalist) / 1000.0;
}