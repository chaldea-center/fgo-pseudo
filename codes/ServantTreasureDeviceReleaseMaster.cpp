void ServantTreasureDeviceReleaseMaster___ctor(ServantTreasureDeviceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27D4F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
    byte_4C27D4F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    254,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
}


System_Collections_Generic_HashSet_int__o *ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C27D51 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27D51 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo,
              0);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( v18[4] == svtId && v18[8] == 70 )
    {
      v20 = (unsigned int)v18[10];
      if ( (int)v20 >= 11 )
      {
        if ( !v5 )
          sub_1C2D6EC(v18, v20);
        System_Collections_Generic_HashSet_int___Add(
          v5,
          v20,
          (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_28:
    v24 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v5;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDeviceReleaseEntity_o *ServantTreasureDeviceReleaseMaster__GetEntity(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27D4D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
    byte_4C27D4D = 1;
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
                                                   (const MethodInfo_338C850 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantTreasureDeviceReleaseMaster__TryGetEntity(
        ServantTreasureDeviceReleaseMaster_o *this,
        ServantTreasureDeviceReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27D4E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
    byte_4C27D4E = 1;
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
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantTreasureDeviceReleaseMaster__isUse(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        bool isBaseResult,
        const MethodInfo *method)
{
  int32_t condGroup; // w29
  int32_t v14; // w25
  bool v15; // w20
  System_String_o *Primarykey; // x26
  __int64 *lookup; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  void *v20; // x27
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__c **v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  ServantTreasureDeviceReleaseEntity_o *v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C27D50 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo);
    byte_4C27D50 = 1;
  }
  condGroup = 0;
  v14 = 1;
  v28 = 0;
  while ( 1 )
  {
    v15 = isBaseResult;
    Primarykey = ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C2D6EC(lookup, v18);
    v19 = *lookup;
    v20 = lookup;
    v21 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v22 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__c **)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = v19 + 16LL * (*(_DWORD *)v22 + 1) + 312;
    }
    else
    {
LABEL_9:
      v23 = sub_1C7DCA8(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo,
              1);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantTreasureDeviceReleaseEntity_o **, _QWORD))v23)(
            v20,
            Primarykey,
            &v28,
            *(_QWORD *)(v23 + 8))
        & 1) == 0 )
      return v15;
    lookup = (__int64 *)v28;
    if ( !v28 )
      goto LABEL_19;
    ++v14;
    if ( condGroup == v28->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v15 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v28->fields.condGroup;
      if ( v15 )
        return v15;
LABEL_17:
      isBaseResult = ServantTreasureDeviceReleaseEntity__isUse(v28, dispLimitCount, beforeClearQuestId, v24);
    }
  }
}