void __fastcall CardMaster___ctor(CardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FCF2A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CardMaster__CardEntity__string___ctor__, method);
    byte_40FCF2A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    111,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CardMaster__CardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CardEntity_o *__fastcall CardMaster__GetEntity(CardMaster_o *this, int32_t id, int32_t num, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FCF28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FCF28 = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&num);
  return (CardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                           PK,
                           (const MethodInfo_266F7D8 *)Method_DataMasterBase_CardMaster__CardEntity__string__GetEntity__);
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

  if ( (byte_40FCF29 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__, entity);
    byte_40FCF29 = 1;
  }
  PK = CardEntity__CreatePK(id, num, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CardMaster__CardEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getAtk(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  CardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v9; // x2
  System_Int64_array *v10; // x0
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // w8
  int32_t v13; // w20
  const MethodInfo *v14; // x3
  CardEntity_o *Entity; // x0

  if ( (byte_40FCF2B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B16FFC(&long___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCF2B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (CardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CardMaster___);
  v10 = (System_Int64_array *)sub_B17014(long___TypeInfo, 2LL, v9);
  if ( !v10 )
    goto LABEL_12;
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[0] = type, max_length == 1) )
  {
    sub_B17100(v10, v10, v11);
    sub_B170A0();
  }
  v13 = num + 1;
  v10->m_Items[1] = v13;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)MasterData_WarQuestSelectionMaster, v10, 0LL) )
  {
    Entity = CardMaster__GetEntity(MasterData_WarQuestSelectionMaster, type, v13, v14);
    if ( Entity )
      return (float)Entity->fields.adjustAtk / 1000.0;
LABEL_12:
    sub_B170D4();
  }
  return 1.0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getCritical(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v9; // x2
  System_Int64_array *v10; // x0
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // w8
  int32_t v13; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v15; // x3
  float result; // s0
  CardEntity_o *Entity; // x0

  if ( (byte_40FCF2D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B16FFC(&long___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCF2D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CardMaster___);
  v10 = (System_Int64_array *)sub_B17014(long___TypeInfo, 2LL, v9);
  if ( !v10 )
    goto LABEL_12;
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[0] = type, max_length == 1) )
  {
    sub_B17100(v10, v10, v11);
    sub_B170A0();
  }
  v13 = num + 1;
  v10->m_Items[1] = v13;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(MasterData_WarQuestSelectionMaster, v10, 0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Entity = CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v13, v15);
  if ( !Entity )
LABEL_12:
    sub_B170D4();
  return (float)Entity->fields.adjustCritical / 1000.0;
}


System_Int32_array *__fastcall CardMaster__getIdArrayFromIndividuality(int32_t individuality, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *v17; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x2
  __int64 v32; // x22
  CardEntity_c *v33; // x1
  __int64 v34; // x9
  __int64 v35; // x28
  __int64 v36; // x8
  unsigned __int64 v37; // x27
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_40FCF2F & 1) == 0 )
  {
    sub_B16FFC(&CardEntity_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_CardMaster___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FCF2F = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_46;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
LABEL_7:
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_18:
      v29 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      continue;
    v33 = CardEntity_TypeInfo;
    v34 = *(&CardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v34
      || *(CardEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v34 - 8) != CardEntity_TypeInfo )
    {
      sub_B173C8(v30);
      goto LABEL_46;
    }
    v35 = *(_QWORD *)(v30 + 48);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 24);
      if ( v36 )
      {
        if ( (int)v36 >= 1 )
        {
          v37 = 0LL;
          while ( 1 )
          {
            if ( v37 >= (unsigned int)v36 )
            {
              sub_B17100(v30, v33, v31);
              sub_B170A0();
            }
            if ( *(_DWORD *)(v35 + 32 + 4 * v37) == individuality )
            {
              if ( !v17 )
                sub_B170D4();
              v30 = System_Collections_Generic_List_int___Contains(
                      v17,
                      *(_DWORD *)(v32 + 16),
                      (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (v30 & 1) == 0 )
              {
                System_Collections_Generic_List_int___Add(
                  v17,
                  *(_DWORD *)(v32 + 16),
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                goto LABEL_7;
              }
              LODWORD(v36) = *(_DWORD *)(v35 + 24);
            }
            if ( (__int64)++v37 >= (int)v36 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_39:
    v41 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( !v17 )
LABEL_46:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall CardMaster__getIndividualities(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  CardMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x4
  CardMaster_o *v10; // x21
  const MethodInfo *v11; // x4
  __int64 v12; // x2
  CardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCF2E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B16FFC(&int___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCF2E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (CardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  v10 = MasterData_WarQuestSelectionMaster;
  if ( CardMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, type, num + 1, v9)
    || CardMaster__TryGetEntity(v10, &entity, type, 1, v11) )
  {
    if ( entity )
      return entity->fields.individuality;
LABEL_10:
    sub_B170D4();
  }
  return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v12);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CardMaster__getTdGauge(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v9; // x2
  System_Int64_array *v10; // x0
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // w8
  int32_t v13; // w20
  bool isEntityExistsFromId; // w0
  const MethodInfo *v15; // x3
  float result; // s0
  CardEntity_o *Entity; // x0

  if ( (byte_40FCF2C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CardMaster___, *(_QWORD *)&num);
    sub_B16FFC(&long___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCF2C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CardMaster___);
  v10 = (System_Int64_array *)sub_B17014(long___TypeInfo, 2LL, v9);
  if ( !v10 )
    goto LABEL_12;
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[0] = type, max_length == 1) )
  {
    sub_B17100(v10, v10, v11);
    sub_B170A0();
  }
  v13 = num + 1;
  v10->m_Items[1] = v13;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(MasterData_WarQuestSelectionMaster, v10, 0LL);
  result = 0.0;
  if ( !isEntityExistsFromId )
    return result;
  Entity = CardMaster__GetEntity((CardMaster_o *)MasterData_WarQuestSelectionMaster, type, v13, v15);
  if ( !Entity )
LABEL_12:
    sub_B170D4();
  return (float)Entity->fields.adjustTdGauge / 1000.0;
}