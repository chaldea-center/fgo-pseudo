void ServantPassiveSkillReleaseMaster___ctor(ServantPassiveSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6CCC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
    byte_4CB6CCC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillReleaseEntity_o *ServantPassiveSkillReleaseMaster__GetEntity(
        ServantPassiveSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6CCA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
    byte_4CB6CCA = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantPassiveSkillReleaseMaster__TryGetEntity(
        ServantPassiveSkillReleaseMaster_o *this,
        ServantPassiveSkillReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6CCB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
    byte_4CB6CCB = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(
                         svtId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantPassiveSkillReleaseMaster__isUse(
        ServantPassiveSkillReleaseMaster_o *this,
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
  System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **p_offset; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x5
  int32_t *v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB6CCD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo);
    byte_4CB6CCD = 1;
  }
  v13 = 0;
  v14 = 1;
  v28 = 0;
  while ( 1 )
  {
    v15 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = DataMasterBase_object__object__object___get_lookup(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               (const MethodInfo_33FB988 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C6BC60(lookup, v18);
    klass = lookup->klass;
    v20 = lookup;
    v21 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo )
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
      v23 = sub_1C41D90(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo,
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
      isBaseResult = ServantPassiveSkillReleaseEntity__IsUseInternal(
                       dispLimitCount,
                       beforeClearQuestId,
                       v28[8],
                       v28[9],
                       v28[10],
                       v24);
    }
  }
}