void ServantTreasureDeviceReleaseMaster___ctor(ServantTreasureDeviceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7E95 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
    byte_4CC7E95 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    254,
    (const MethodInfo_340B614 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string___ctor__);
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
  if ( (byte_4CC7E98 & 1) == 0 )
  {
    hash = (System_Collections_Generic_HashSet_int__o *)sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CC7E98 = 1;
  }
  if ( condType == 70 && condNum >= 11 )
  {
    if ( !v6 )
      sub_1C71608(hash, *(_QWORD *)&condType);
    System_Collections_Generic_HashSet_int___Add(
      v6,
      condNum,
      (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
}


System_Collections_Generic_HashSet_int__o *ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
        ServantTreasureDeviceReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_HashSet_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  CommonReleaseEntity_array *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  CommonReleaseEntity_array *v26; // x23
  int max_length; // w8
  int i; // w27
  CommonReleaseEntity_o *v29; // x8
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4CC7E97 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7E97 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDeviceReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_1C47738(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantTreasureDeviceReleaseEntity__TypeInfo,
              0);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C71608(0, v20);
    if ( v19[4] == svtId )
    {
      v22 = (unsigned int)v19[8];
      if ( (_DWORD)v22 == 113 )
      {
        if ( !Master_object )
          sub_1C71608(v19, v22);
        v23 = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, v19[9], 0);
        v26 = v23;
        if ( !v23 )
          sub_1C71608(0, v24);
        max_length = v23->max_length;
        if ( max_length >= 1 )
        {
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              sub_1C71610(v23);
            v29 = v26->m_Items[i];
            if ( !v29 )
              sub_1C71608(v23, v24);
            ServantTreasureDeviceReleaseMaster__AddHashCorrespondsCostume(
              v6,
              v29->fields.condType,
              v29->fields.condNum,
              v25);
            max_length = v26->max_length;
          }
        }
      }
      else
      {
        ServantTreasureDeviceReleaseMaster__AddHashCorrespondsCostume(v6, v22, v19[10], v21);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_36:
    v33 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
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

  if ( (byte_4CC7E93 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
    byte_4CC7E93 = 1;
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
                                                   (const MethodInfo_340D938 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__GetEntity__);
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

  if ( (byte_4CC7E94 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
    byte_4CC7E94 = 1;
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
           (const MethodInfo_340D984 *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__TryGetEntity__);
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

  if ( (byte_4CC7E96 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantTreasureDeviceReleaseEntity__TypeInfo);
    byte_4CC7E96 = 1;
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
               (const MethodInfo_340B72C *)Method_DataMasterBase_ServantTreasureDeviceReleaseMaster__ServantTreasureDeviceReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C71608(lookup, v18);
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
      v23 = sub_1C47738(
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
      goto LABEL_19;
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
        return v15;
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