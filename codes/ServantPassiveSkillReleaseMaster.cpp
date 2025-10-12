void ServantPassiveSkillReleaseMaster___ctor(ServantPassiveSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C383B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
    byte_4C383B2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4C383B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
    byte_4C383B0 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4C383B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
    byte_4C383B1 = 1;
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
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  int32_t condGroup; // w29
  int32_t v14; // w25
  bool v15; // w20
  System_String_o *Primarykey; // x26
  __int64 *lookup; // x0
  __int64 v18; // x8
  void *v19; // x27
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **v21; // x10
  __int64 v22; // x0
  const MethodInfo *v23; // x3
  ServantPassiveSkillReleaseEntity_o *v27; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C383B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo);
    byte_4C383B3 = 1;
  }
  condGroup = 0;
  v14 = 1;
  v27 = 0;
  while ( 1 )
  {
    v15 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C32E7C(lookup);
    v18 = *lookup;
    v19 = lookup;
    v20 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v21 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_9;
      }
      v22 = v18 + 16LL * (*(_DWORD *)v21 + 1) + 312;
    }
    else
    {
LABEL_9:
      v22 = sub_1C83438(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo,
              1);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v22)(
            v19,
            Primarykey,
            &v27,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      return v15;
    lookup = (__int64 *)v27;
    if ( !v27 )
      goto LABEL_19;
    ++v14;
    if ( condGroup == v27->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v15 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v27->fields.condGroup;
      if ( v15 )
        return v15;
LABEL_17:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v27, dispLimitCount, beforeClearQuestId, v23);
    }
  }
}