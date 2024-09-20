void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B924 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
    byte_4A5B924 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    247,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4A5B922 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
    byte_4A5B922 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A5B923 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
    byte_4A5B923 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  __int64 methodPtr_low; // x9
  ServantPhotoEntity_o *v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  ServantPassiveSkillReleaseEntity_o *v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B925 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantPassiveSkillReleaseEntity_TypeInfo);
    byte_4A5B925 = 1;
  }
  condGroup = 0;
  v14 = 1;
  v32 = 0LL;
  while ( 1 )
  {
    v15 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1B8880C(lookup, v18);
    v19 = *lookup;
    v20 = lookup;
    v21 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v23 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v23)(
            v20,
            Primarykey,
            &v32,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
      return v15;
    lookup = (__int64 *)v32;
    if ( !v32 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantPassiveSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantPassiveSkillReleaseEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v14;
    if ( condGroup == v32->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v15 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v32->fields.condGroup;
      if ( v15 )
        return v15;
LABEL_19:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v32, dispLimitCount, beforeClearQuestId, v24);
    }
  }
  sub_1B88ACC(v32);
  return (unsigned __int8)ServantPhotoEntity__GetFaceList(v27, v28, v29);
}