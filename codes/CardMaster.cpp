void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E40A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
    byte_438E40A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    112,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438E408 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
    byte_438E408 = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                           PK,
                           (const MethodInfo_21FBCE4 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_438E409 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
    byte_438E409 = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  CardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v9; // w20
  const MethodInfo *v10; // x3
  __int64 v12; // x0

  if ( (byte_438E40B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CardMaster___);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E40B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (CardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B775DC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v6 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v12 = sub_B776C8(Instance);
    sub_B77668(v12, 0LL);
  }
  v9 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v9;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase__isEntityExistsFromId(
         (DataMasterBase_o *)MasterData_WarQuestSelectionMaster,
         (System_Int64_array *)Instance,
         0LL) )
  {
    Instance = (DataManager_o *)CardMaster__GetEntity(MasterData_WarQuestSelectionMaster, type, v9, v10);
    if ( Instance )
      return (float)SLODWORD(Instance->fields.datalist) / 1000.0;
LABEL_12:
    sub_B7769C(Instance, v6);
  }
  return 1.0;
}


float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v9; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v11; // x3
  float result; // s0
  __int64 v13; // x0

  if ( (byte_438E40D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CardMaster___);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E40D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B775DC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v6 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v13 = sub_B776C8(Instance);
    sub_B77668(v13, 0LL);
  }
  v9 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v9;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v9, v11);
  if ( !Instance )
LABEL_12:
    sub_B7769C(Instance, v6);
  return (float)SLODWORD(Instance->fields.lookup) / 1000.0;
}


System_Int32_array *__fastcall CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x22
  CardEntity_c *v18; // x1
  __int64 v19; // x9
  __int64 v20; // x28
  __int64 v21; // x8
  unsigned __int64 v22; // x27
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  __int64 v28; // x0

  if ( (byte_438E40F & 1) == 0 )
  {
    sub_B775C4(&CardEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_CardMaster___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E40F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
LABEL_7:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_18:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( !v16 )
      continue;
    v18 = CardEntity_TypeInfo;
    v19 = *(&CardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v19
      || *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v19 - 8) != CardEntity_TypeInfo )
    {
      sub_B77990(v16);
      goto LABEL_46;
    }
    v20 = *(_QWORD *)(v16 + 48);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 24);
      if ( v21 )
      {
        if ( (int)v21 >= 1 )
        {
          v22 = 0LL;
          while ( 1 )
          {
            if ( v22 >= (unsigned int)v21 )
            {
              v28 = sub_B776C8(v16);
              sub_B77668(v28, 0LL);
            }
            if ( *(_DWORD *)(v20 + 32 + 4 * v22) == individuality )
            {
              if ( !v3 )
                sub_B7769C(v16, v18);
              v16 = System_Collections_Generic_List_int___Contains(
                      v3,
                      *(_DWORD *)(v17 + 16),
                      (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (v16 & 1) == 0 )
              {
                System_Collections_Generic_List_int___Add(
                  v3,
                  *(_DWORD *)(v17 + 16),
                  (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                goto LABEL_7;
              }
              LODWORD(v21) = *(_DWORD *)(v20 + 24);
            }
            if ( (__int64)++v22 >= (int)v21 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_39:
    v26 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                Enumerator,
                                *(_QWORD *)(v26 + 8));
  if ( !v3 )
LABEL_46:
    sub_B7769C(Instance, v5);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  CardMaster_o *v8; // x21
  const MethodInfo *v9; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E40E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CardMaster___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E40E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v8 = (CardMaster_o *)Instance;
  Instance = (DataManager_o *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v7);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (DataManager_o *)CardMaster__TryGetEntity(v8, &entity, type, 1, v9),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
}


float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v9; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v11; // x3
  float result; // s0
  __int64 v13; // x0

  if ( (byte_438E40C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CardMaster___);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E40C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B775DC(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v6 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v13 = sub_B776C8(Instance);
    sub_B77668(v13, 0LL);
  }
  v9 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v9;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v9, v11);
  if ( !Instance )
LABEL_12:
    sub_B7769C(Instance, v6);
  return (float)SHIDWORD(Instance->fields.datalist) / 1000.0;
}