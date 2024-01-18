void __fastcall ServantTreasureDeviceReleaseMaster___ctor(
        ServantTreasureDeviceReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_418B0D7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__,
      method);
    byte_418B0D7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    246,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  _DWORD *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_418B0D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v6);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&ServantTreasureDeviceReleaseEntity_TypeInfo, v11);
    byte_418B0D9 = 1;
  }
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v12,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                      Enumerator,
                      *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_34;
    v29 = *(&ServantTreasureDeviceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v29
      || *(ServantTreasureDeviceReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v29 - 8) != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_B2C728(v27);
LABEL_34:
      sub_B2C434(v27, v28);
    }
    if ( v27[4] == svtId && v27[8] == 70 )
    {
      v30 = (unsigned int)v27[10];
      if ( (int)v30 >= 11 )
      {
        if ( !v12 )
          sub_B2C434(v27, v30);
        System_Collections_Generic_HashSet_int___Add(
          v12,
          v30,
          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_30:
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v12;
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

  if ( (byte_418B0D5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418B0D5 = 1;
  }
  PK = ServantTreasureDeviceReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantTreasureDeviceReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                   PK,
                                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
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

  if ( (byte_418B0D6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__,
      entity);
    byte_418B0D6 = 1;
  }
  PK = ServantTreasureDeviceReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
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
  __int64 v13; // x1
  int32_t condGroup; // w28
  int32_t v15; // w25
  __int64 *lookup; // x0
  __int64 v17; // x9
  bool v18; // w20
  System_String_o *Primarykey; // x26
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x8
  void *v23; // x27
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  const MethodInfo *v27; // x3
  ServantTreasureDeviceReleaseEntity_o *v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B0D8 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantTreasureDeviceReleaseEntity_TypeInfo, v13);
    byte_418B0D8 = 1;
  }
  v31 = 0LL;
  condGroup = 0;
  v15 = 1;
  while ( 1 )
  {
    v18 = isBaseResult;
    Primarykey = ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v22 = *lookup;
    v23 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v24 = 0LL;
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v26 = v22 + 16LL * (*(_DWORD *)v25 + 1) + 312;
    }
    else
    {
LABEL_17:
      v26 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v21);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantTreasureDeviceReleaseEntity_o **, _QWORD))v26)(
            v23,
            Primarykey,
            &v31,
            *(_QWORD *)(v26 + 8)) & 1) == 0 )
      return v18;
    lookup = (__int64 *)v31;
    if ( !v31 )
      goto LABEL_22;
    v17 = *(&ServantTreasureDeviceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (ServantTreasureDeviceReleaseEntity_c *)v31->klass->_2.typeHierarchy[v17 - 1] != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_B2C728(v31);
LABEL_22:
      sub_B2C434(lookup, v20);
    }
    ++v15;
    if ( condGroup == v31->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v18 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v31->fields.condGroup;
      if ( v18 )
        return v18;
LABEL_11:
      isBaseResult = ServantTreasureDeviceReleaseEntity__isUse(v31, dispLimitCount, beforeClearQuestId, v27);
    }
  }
}