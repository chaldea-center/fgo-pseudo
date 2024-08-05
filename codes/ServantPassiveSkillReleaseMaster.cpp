void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FECAE & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method);
    byte_49FECAE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    247,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_49FECAC & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FECAC = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, 0LL);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_30D64D8 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
}


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

  if ( (byte_49FECAD & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FECAD = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x10
  __int64 v24; // x0
  __int64 methodPtr_low; // x9
  ServantPhotoEntity_o *v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  ServantPassiveSkillReleaseEntity_o *v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FECAF & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&ServantPassiveSkillReleaseEntity_TypeInfo, v13);
    byte_49FECAF = 1;
  }
  condGroup = 0;
  v15 = 1;
  v32 = 0LL;
  while ( 1 )
  {
    v16 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(svtId, num, priority, v15, 0LL);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1B64ACC(lookup, v19);
    v20 = *lookup;
    v21 = lookup;
    v22 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v24 = sub_1BB6850(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v24)(
            v21,
            Primarykey,
            &v32,
            *(_QWORD *)(v24 + 8)) & 1) == 0 )
      return v16;
    lookup = (__int64 *)v32;
    if ( !v32 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantPassiveSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantPassiveSkillReleaseEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v15;
    if ( condGroup == v32->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v16 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v32->fields.condGroup;
      if ( v16 )
        return v16;
LABEL_19:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v32, dispLimitCount, beforeClearQuestId, 0LL);
    }
  }
  sub_1B64D8C(v32);
  return (unsigned __int8)ServantPhotoEntity__GetFaceList(v27, v28, v29);
}