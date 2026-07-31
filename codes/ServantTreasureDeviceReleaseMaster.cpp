void ServantTreasureDeviceReleaseMaster___ctor(ServantTreasureDeviceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593918B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
    byte_593918B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    256,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void ServantTreasureDeviceReleaseMaster__AddHashCorrespondsCostume(
        System_Collections_Generic_HashSet_int__o *hash,
        int32_t condType,
        int32_t condNum,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v6; // x20

  v6 = hash;
  if ( (byte_593918E & 1) == 0 )
  {
    hash = (System_Collections_Generic_HashSet_int__o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_593918E = 1;
  }
  if ( condType == 70 && condNum >= 11 )
  {
    if ( !v6 )
      sub_21FFECC(hash, *(_QWORD *)&condType);
    System_Collections_Generic_HashSet_int___Add(
      v6,
      condNum,
      (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x19
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  CommonReleaseEntity_array *v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  CommonReleaseEntity_array *v29; // x22
  int max_length; // w8
  __int64 v31; // x25
  CommonReleaseEntity_o *v32; // x8
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-48h]

  if ( (byte_593918D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593918D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v10);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v13 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            i,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v38 )
      sub_21FFECC(v16, v17);
    v18 = v38->klass;
    v19 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_20:
      v21 = sub_2237E2C(v38, System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo, 0);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v38,
                      *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    if ( v22[4] == svtId )
    {
      v25 = (unsigned int)v22[8];
      if ( (_DWORD)v25 == 113 )
      {
        if ( !Master_object )
          sub_21FFECC(v22, v25);
        v26 = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, v22[9], 0);
        v29 = v26;
        if ( !v26 )
          sub_21FFECC(0, v27);
        max_length = v26->max_length;
        if ( max_length >= 1 )
        {
          v31 = 0;
          do
          {
            if ( (unsigned int)v31 >= max_length )
              sub_21FFED4(v26);
            v32 = v29->m_Items[v31];
            if ( !v32 )
              sub_21FFECC(v26, v27);
            ServantTreasureDeviceReleaseMaster__AddHashCorrespondsCostume(
              v6,
              v32->fields.condType,
              v32->fields.condNum,
              v28);
            max_length = v29->max_length;
            ++v31;
          }
          while ( (int)v31 < max_length );
        }
      }
      else
      {
        ServantTreasureDeviceReleaseMaster__AddHashCorrespondsCostume(v6, v25, v22[10], v24);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_41;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_41:
      v36 = sub_2237E2C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  return v6;
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

  if ( (byte_5939189 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
    byte_5939189 = 1;
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
                                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
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

  if ( (byte_593918A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
    byte_593918A = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
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
  int32_t v13; // w29
  int32_t v14; // w25
  bool v15; // w20
  System_String_o *Primarykey; // x26
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v18; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v20; // x27
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__c **p_offset; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x5
  int32_t *v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593918C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo);
    byte_593918C = 1;
  }
  v13 = 0;
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
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_3EDFD10 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_20:
      sub_21FFECC(lookup, v18);
    klass = lookup->klass;
    v20 = lookup;
    v21 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
    }
    else
    {
LABEL_9:
      v23 = sub_2237E2C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo,
              1);
    }
    lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, int32_t **, _QWORD))v23)(
                                                                                    v20,
                                                                                    Primarykey,
                                                                                    &v28,
                                                                                    *(_QWORD *)(v23 + 8));
    if ( ((unsigned __int8)lookup & 1) == 0 )
      return v15;
    if ( !v28 )
      goto LABEL_20;
    ++v14;
    if ( v13 == v28[11] )
    {
      isBaseResult = 0;
      if ( v15 )
        goto LABEL_17;
    }
    else
    {
      v13 = v28[11];
      if ( v15 )
        return 1;
LABEL_17:
      isBaseResult = ServantTreasureDeviceReleaseEntity__IsUseInternal(
                       dispLimitCount,
                       beforeClearQuestId,
                       v28[8],
                       v28[9],
                       v28[10],
                       v24);
    }
  }
}