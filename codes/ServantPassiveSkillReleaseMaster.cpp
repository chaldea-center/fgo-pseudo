void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDCE45 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
    byte_4BDCE45 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    251,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillReleaseEntity_o *__fastcall ServantPassiveSkillReleaseMaster__GetEntity(
        ServantPassiveSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDCE43 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
    byte_4BDCE43 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_3260880 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillReleaseMaster__TryGetEntity(
        ServantPassiveSkillReleaseMaster_o *this,
        ServantPassiveSkillReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDCE44 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
    byte_4BDCE44 = 1;
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
           (const MethodInfo_32608CC *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillReleaseMaster__isUse(
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
  __int64 v18; // x1
  __int64 v19; // x8
  void *v20; // x27
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  ServantPassiveSkillReleaseEntity_o *v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDCE46 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo);
    byte_4BDCE46 = 1;
  }
  condGroup = 0;
  v14 = 1;
  v28 = 0LL;
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
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C22094(lookup, v18);
    v19 = *lookup;
    v20 = lookup;
    v21 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v22 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo )
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
      v23 = sub_1C73E18(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo,
              1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v23)(
            v20,
            Primarykey,
            &v28,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
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
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v28, dispLimitCount, beforeClearQuestId, v24);
    }
  }
}