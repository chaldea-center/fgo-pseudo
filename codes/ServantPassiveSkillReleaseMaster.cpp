void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B37A66 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method);
    byte_4B37A66 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    247,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4B37A64 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B37A64 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_31D2248 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B37A65 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B37A65 = 1;
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
           (const MethodInfo_31D2298 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  const MethodInfo *v25; // x3
  __int64 methodPtr_low; // x9
  bool result; // w0
  ServantPassiveSkillEntity_o *v28; // x0
  int32_t *v29; // x1
  System_String_o **v30; // x2
  System_String_o **v31; // x3
  int32_t v32; // w4
  bool v33; // w5
  const MethodInfo *v34; // x6
  ServantPassiveSkillReleaseEntity_o *v37; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B37A67 & 1) == 0 )
  {
    sub_1BD3458(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1BD3458(&ServantPassiveSkillReleaseEntity_TypeInfo, v13);
    byte_4B37A67 = 1;
  }
  condGroup = 0;
  v15 = 1;
  v37 = 0LL;
  while ( 1 )
  {
    v16 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1BD36B4(lookup, v19);
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
      v24 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v24)(
            v21,
            Primarykey,
            &v37,
            *(_QWORD *)(v24 + 8)) & 1) == 0 )
      return v16;
    lookup = (__int64 *)v37;
    if ( !v37 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantPassiveSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantPassiveSkillReleaseEntity_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v15;
    if ( condGroup == v37->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v16 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v37->fields.condGroup;
      if ( v16 )
        return v16;
LABEL_19:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v37, dispLimitCount, beforeClearQuestId, v25);
    }
  }
  sub_1BD3974(v37);
  ServantPassiveSkillEntity__getEffectExplanation(v28, v29, v30, v31, v32, v33, v34);
  return result;
}