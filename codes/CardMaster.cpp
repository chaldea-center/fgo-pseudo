void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A0B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, method);
    byte_418A0B2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    111,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A0B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418A0B0 = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                           PK,
                           (const MethodInfo_24E4520 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_418A0B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__, entity);
    byte_418A0B1 = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x1
  CardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v11; // w20
  const MethodInfo *v12; // x3
  __int64 v14; // x0

  if ( (byte_418A0B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B2C35C(&long___TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A0B3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (CardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B2C374(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v8 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v14 = sub_B2C460(Instance);
    sub_B2C400(v14, 0LL);
  }
  v11 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v11;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase__isEntityExistsFromId(
         (DataMasterBase_o *)MasterData_WarQuestSelectionMaster,
         (System_Int64_array *)Instance,
         0LL) )
  {
    Instance = (DataManager_o *)CardMaster__GetEntity(MasterData_WarQuestSelectionMaster, type, v11, v12);
    if ( Instance )
      return (float)SLODWORD(Instance->fields.datalist) / 1000.0;
LABEL_12:
    sub_B2C434(Instance, v8);
  }
  return 1.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v11; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v13; // x3
  float result; // s0
  __int64 v15; // x0

  if ( (byte_418A0B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B2C35C(&long___TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A0B5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B2C374(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v8 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v15 = sub_B2C460(Instance);
    sub_B2C400(v15, 0LL);
  }
  v11 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v11;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v11, v13);
  if ( !Instance )
LABEL_12:
    sub_B2C434(Instance, v8);
  return (float)SLODWORD(Instance->fields.lookup) / 1000.0;
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
  System_Collections_Generic_List_int__o *v14; // x19
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x22
  CardEntity_c *v31; // x1
  __int64 v32; // x9
  __int64 v33; // x28
  __int64 v34; // x8
  unsigned __int64 v35; // x27
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  __int64 v41; // x0

  if ( (byte_418A0B7 & 1) == 0 )
  {
    sub_B2C35C(&CardEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_CardMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418A0B7 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
LABEL_7:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_18:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v30 = v29;
    if ( !v29 )
      continue;
    v31 = CardEntity_TypeInfo;
    v32 = *(&CardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) < (unsigned int)v32
      || *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v32 - 8) != CardEntity_TypeInfo )
    {
      sub_B2C728(v29);
      goto LABEL_46;
    }
    v33 = *(_QWORD *)(v29 + 48);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 24);
      if ( v34 )
      {
        if ( (int)v34 >= 1 )
        {
          v35 = 0LL;
          while ( 1 )
          {
            if ( v35 >= (unsigned int)v34 )
            {
              v41 = sub_B2C460(v29);
              sub_B2C400(v41, 0LL);
            }
            if ( *(_DWORD *)(v33 + 32 + 4 * v35) == individuality )
            {
              if ( !v14 )
                sub_B2C434(v29, v31);
              v29 = System_Collections_Generic_List_int___Contains(
                      v14,
                      *(_DWORD *)(v30 + 16),
                      (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (v29 & 1) == 0 )
              {
                System_Collections_Generic_List_int___Add(
                  v14,
                  *(_DWORD *)(v30 + 16),
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                goto LABEL_7;
              }
              LODWORD(v34) = *(_DWORD *)(v33 + 24);
            }
            if ( (__int64)++v35 >= (int)v34 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_39:
    v39 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                Enumerator,
                                *(_QWORD *)(v39 + 8));
  if ( !v14 )
LABEL_46:
    sub_B2C434(Instance, v16);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  CardMaster_o *v10; // x21
  const MethodInfo *v11; // x4
  CardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A0B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A0B6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !Instance )
    goto LABEL_10;
  v10 = (CardMaster_o *)Instance;
  Instance = (DataManager_o *)CardMaster__TryGetEntity((CardMaster_o *)Instance, &entity, type, num + 1, v9);
  if ( ((unsigned __int8)Instance & 1) != 0
    || (Instance = (DataManager_o *)CardMaster__TryGetEntity(v10, &entity, type, 1, v11),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_B2C434(Instance, v8);
  }
  return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int datalist; // w8
  int32_t v11; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v13; // x3
  float result; // s0
  __int64 v15; // x0

  if ( (byte_418A0B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B2C35C(&long___TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A0B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CardMaster___);
  Instance = (DataManager_o *)sub_B2C374(long___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_12;
  datalist = (int)Instance->fields.datalist;
  v8 = Instance;
  if ( !datalist
    || (Instance->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)type,
        datalist == 1) )
  {
    v15 = sub_B2C460(Instance);
    sub_B2C400(v15, 0LL);
  }
  v11 = num + 1;
  Instance->fields.masterDataBytes = (struct System_Byte_array *)v11;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)Instance,
                           0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Instance = (DataManager_o *)CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v11, v13);
  if ( !Instance )
LABEL_12:
    sub_B2C434(Instance, v8);
  return (float)SHIDWORD(Instance->fields.datalist) / 1000.0;
}