void __fastcall ServantTreasureDeviceReleaseMaster___ctor(
        ServantTreasureDeviceReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB83F & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__,
      method);
    byte_49BB83F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    254,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
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
  System_Collections_Generic_HashSet_int__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_49BB841 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_49BB841 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1B9D724(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo,
              0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_1B4D1EC(0LL, v25);
    if ( v24[4] == svtId && v24[8] == 70 )
    {
      v26 = (unsigned int)v24[10];
      if ( (int)v26 >= 11 )
      {
        if ( !v11 )
          sub_1B4D1EC(v24, v26);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          v26,
          (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_28:
    v30 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v11;
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
  Il2CppObject *PK; // x1

  if ( (byte_49BB83D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49BB83D = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceReleaseEntity__CreatePK(
                         svtId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&idx);
  return (ServantTreasureDeviceReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_49BB83E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49BB83E = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDeviceReleaseEntity__CreatePK(
                         svtId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
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
  int32_t condGroup; // w29
  int32_t v15; // w25
  bool v16; // w20
  System_String_o *Primarykey; // x26
  __int64 *lookup; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  void *v21; // x27
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__c **v23; // x10
  __int64 v24; // x0
  const MethodInfo *v25; // x3
  ServantTreasureDeviceReleaseEntity_o *v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BB840 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__,
      *(_QWORD *)&svtId);
    sub_1B4CF90(
      &System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo,
      v13);
    byte_49BB840 = 1;
  }
  condGroup = 0;
  v15 = 1;
  v29 = 0LL;
  while ( 1 )
  {
    v16 = isBaseResult;
    Primarykey = ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_31A0248 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1B4D1EC(lookup, v19);
    v20 = *lookup;
    v21 = lookup;
    v22 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v23 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__c **)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_9;
      }
      v24 = v20 + 16LL * (*(_DWORD *)v23 + 1) + 312;
    }
    else
    {
LABEL_9:
      v24 = sub_1B9D724(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo,
              1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantTreasureDeviceReleaseEntity_o **, _QWORD))v24)(
            v21,
            Primarykey,
            &v29,
            *(_QWORD *)(v24 + 8)) & 1) == 0 )
      return v16;
    lookup = (__int64 *)v29;
    if ( !v29 )
      goto LABEL_19;
    ++v15;
    if ( condGroup == v29->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v16 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v29->fields.condGroup;
      if ( v16 )
        return v16;
LABEL_17:
      isBaseResult = ServantTreasureDeviceReleaseEntity__isUse(v29, dispLimitCount, beforeClearQuestId, v25);
    }
  }
}