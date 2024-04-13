void __fastcall ServantTreasureDeviceReleaseMaster___ctor(
        ServantTreasureDeviceReleaseMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF2F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBF2F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    247,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
}


System_Collections_Generic_HashSet_int__o *__fastcall ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_HashSet_int__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  _DWORD *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x9
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42EBF31 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantTreasureDeviceReleaseEntity_TypeInfo, v24, v25, v26);
    byte_42EBF31 = 1;
  }
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                      Enumerator,
                      *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_34;
    v44 = *(&ServantTreasureDeviceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v44
      || *(ServantTreasureDeviceReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v44 - 8) != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_B5D990(v42);
LABEL_34:
      sub_B5D69C(v42, v43);
    }
    if ( v42[4] == svtId && v42[8] == 70 )
    {
      v45 = (unsigned int)v42[10];
      if ( (int)v45 >= 11 )
      {
        if ( !v27 )
          sub_B5D69C(v42, v45);
        System_Collections_Generic_HashSet_int___Add(
          v27,
          v45,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_30:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return v27;
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

  if ( (byte_42EBF2D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42EBF2D = 1;
  }
  PK = ServantTreasureDeviceReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantTreasureDeviceReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                   PK,
                                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
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

  if ( (byte_42EBF2E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42EBF2E = 1;
  }
  PK = ServantTreasureDeviceReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t condGroup; // w28
  int32_t v17; // w25
  __int64 *lookup; // x0
  __int64 v19; // x9
  bool v20; // w20
  System_String_o *Primarykey; // x26
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x8
  void *v25; // x27
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x11
  __int64 v28; // x0
  const MethodInfo *v29; // x3
  ServantTreasureDeviceReleaseEntity_o *v33; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EBF30 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      svtId,
      num,
      *(_QWORD *)&priority);
    sub_B5D5C4(&ServantTreasureDeviceReleaseEntity_TypeInfo, v13, v14, v15);
    byte_42EBF30 = 1;
  }
  v33 = 0LL;
  condGroup = 0;
  v17 = 1;
  while ( 1 )
  {
    v20 = isBaseResult;
    Primarykey = ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v17,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v24 = *lookup;
    v25 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v26 = 0LL;
      v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 2;
        if ( v26 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v28 = v24 + 16LL * (*(_DWORD *)v27 + 1) + 312;
    }
    else
    {
LABEL_17:
      v28 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v23);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantTreasureDeviceReleaseEntity_o **, _QWORD))v28)(
            v25,
            Primarykey,
            &v33,
            *(_QWORD *)(v28 + 8)) & 1) == 0 )
      return v20;
    lookup = (__int64 *)v33;
    if ( !v33 )
      goto LABEL_22;
    v19 = *(&ServantTreasureDeviceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantTreasureDeviceReleaseEntity_c *)v33->klass->_2.typeHierarchy[v19 - 1] != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_B5D990(v33);
LABEL_22:
      sub_B5D69C(lookup, v22);
    }
    ++v17;
    if ( condGroup == v33->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v20 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v33->fields.condGroup;
      if ( v20 )
        return v20;
LABEL_11:
      isBaseResult = ServantTreasureDeviceReleaseEntity__isUse(v33, dispLimitCount, beforeClearQuestId, v29);
    }
  }
}