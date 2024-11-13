void __fastcall ServantTreasureDeviceReleaseMaster___ctor(
        ServantTreasureDeviceReleaseMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B39 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B16B39 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    248,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_HashSet_int__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  _DWORD *v33; // x0
  __int64 v34; // x1
  __int64 methodPtr_low; // x9
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4B16B3B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantTreasureDeviceReleaseEntity_TypeInfo, v18, v19);
    byte_4B16B3B = 1;
  }
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                      Enumerator,
                      *(_QWORD *)(v32 + 8));
    if ( !v33 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(ServantTreasureDeviceReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDeviceReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_34:
      sub_1BCAA3C(v33, v34);
    }
    if ( v33[4] == svtId && v33[8] == 70 )
    {
      v36 = (unsigned int)v33[10];
      if ( (int)v36 >= 11 )
      {
        if ( !v20 )
          sub_1BCAA3C(v33, v36);
        System_Collections_Generic_HashSet_int___Add(
          v20,
          v36,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_30;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_30:
    v40 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return v20;
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

  if ( (byte_4B16B37 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B16B37 = 1;
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
                                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B16B38 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16B38 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
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
  __int64 v14; // x2
  int32_t condGroup; // w29
  int32_t v16; // w25
  bool v17; // w20
  System_String_o *Primarykey; // x26
  __int64 *lookup; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  void *v22; // x27
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x3
  __int64 methodPtr_low; // x9
  ServantTreasureDeviceReleaseMaster_o *v29; // x0
  int32_t v30; // w1
  const MethodInfo *v31; // x2
  ServantTreasureDeviceReleaseEntity_o *v34; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16B3A & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    sub_1BCA7E0(&ServantTreasureDeviceReleaseEntity_TypeInfo, v13, v14);
    byte_4B16B3A = 1;
  }
  condGroup = 0;
  v16 = 1;
  v34 = 0LL;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v16,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1BCAA3C(lookup, v20);
    v21 = *lookup;
    v22 = lookup;
    v23 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_9;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_9:
      v25 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantTreasureDeviceReleaseEntity_o **, _QWORD))v25)(
            v22,
            Primarykey,
            &v34,
            *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return v17;
    lookup = (__int64 *)v34;
    if ( !v34 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantTreasureDeviceReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantTreasureDeviceReleaseEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDeviceReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v16;
    if ( condGroup == v34->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v34->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_19:
      isBaseResult = ServantTreasureDeviceReleaseEntity__isUse(v34, dispLimitCount, beforeClearQuestId, v26);
    }
  }
  sub_1BCACFC(v34);
  return (unsigned __int8)ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(v29, v30, v31);
}