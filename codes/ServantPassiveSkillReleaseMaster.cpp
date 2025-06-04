void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B029BC & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method);
    byte_4B029BC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    253,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4B029BA & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B029BA = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_32B3B28 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B029BB & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B029BB = 1;
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
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **v23; // x10
  __int64 v24; // x0
  const MethodInfo *v25; // x3
  ServantPassiveSkillReleaseEntity_o *v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B029BD & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__,
      *(_QWORD *)&svtId);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo, v13);
    byte_4B029BD = 1;
  }
  condGroup = 0;
  v15 = 1;
  v29 = 0LL;
  while ( 1 )
  {
    v16 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_32B191C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1BC3264(lookup, v19);
    v20 = *lookup;
    v21 = lookup;
    v22 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v23 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__c **)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo )
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
      v24 = sub_1C13570(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__ServantPassiveSkillReleaseEntity__TypeInfo,
              1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v24)(
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
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v29, dispLimitCount, beforeClearQuestId, v25);
    }
  }
}