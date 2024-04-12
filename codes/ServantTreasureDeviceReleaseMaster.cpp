void __fastcall ServantTreasureDeviceReleaseMaster___ctor(
        ServantTreasureDeviceReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B330D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
    byte_42B330D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    247,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
}


System_Collections_Generic_HashSet_int__o *__fastcall ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42B330F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantTreasureDeviceReleaseEntity_TypeInfo);
    byte_42B330F = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_34;
    v22 = *(&ServantTreasureDeviceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
      || *(ServantTreasureDeviceReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_B52D50(v20);
LABEL_34:
      sub_B52A5C(v20, v21);
    }
    if ( v20[4] == svtId && v20[8] == 70 )
    {
      v23 = (unsigned int)v20[10];
      if ( (int)v23 >= 11 )
      {
        if ( !v5 )
          sub_B52A5C(v20, v23);
        System_Collections_Generic_HashSet_int___Add(
          v5,
          v23,
          (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_30:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v5;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceReleaseEntity_o *__fastcall ServantTreasureDeviceReleaseMaster__GetEntity(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B330B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
    byte_42B330B = 1;
  }
  PK = ServantTreasureDeviceReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantTreasureDeviceReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                   PK,
                                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceReleaseMaster__TryGetEntity(
        ServantTreasureDeviceReleaseMaster_o *this,
        ServantTreasureDeviceReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B330C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
    byte_42B330C = 1;
  }
  PK = ServantTreasureDeviceReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceReleaseMaster__isUse(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        bool isBaseResult,
        const MethodInfo *method)
{
  int32_t condGroup; // w28
  int32_t v14; // w25
  __int64 *lookup; // x0
  __int64 v16; // x9
  bool v17; // w20
  System_String_o *Primarykey; // x26
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x8
  void *v22; // x27
  unsigned __int64 v23; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x11
  __int64 v25; // x0
  const MethodInfo *v26; // x3
  ServantTreasureDeviceReleaseEntity_o *v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B330E & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantTreasureDeviceReleaseEntity_TypeInfo);
    byte_42B330E = 1;
  }
  v30 = 0LL;
  condGroup = 0;
  v14 = 1;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v21 = *lookup;
    v22 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v23 = 0LL;
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_17:
      v25 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v20);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantTreasureDeviceReleaseEntity_o **, _QWORD))v25)(
            v22,
            Primarykey,
            &v30,
            *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return v17;
    lookup = (__int64 *)v30;
    if ( !v30 )
      goto LABEL_22;
    v16 = *(&ServantTreasureDeviceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (ServantTreasureDeviceReleaseEntity_c *)v30->klass->_2.typeHierarchy[v16 - 1] != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_B52D50(v30);
LABEL_22:
      sub_B52A5C(lookup, v19);
    }
    ++v14;
    if ( condGroup == v30->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v30->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_11:
      isBaseResult = ServantTreasureDeviceReleaseEntity__isUse(v30, dispLimitCount, beforeClearQuestId, v26);
    }
  }
}