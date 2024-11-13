void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AB1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B16AB1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    247,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4B16AAF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B16AAF = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 PK,
                                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B16AB0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16AB0 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  bool result; // w0
  ServantPassiveSkillEntity_o *v29; // x0
  int32_t *v30; // x1
  System_String_o **v31; // x2
  System_String_o **v32; // x3
  int32_t v33; // w4
  bool v34; // w5
  const MethodInfo *v35; // x6
  ServantPassiveSkillReleaseEntity_o *v38; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16AB2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    sub_1BCA7E0(&ServantPassiveSkillReleaseEntity_TypeInfo, v13, v14);
    byte_4B16AB2 = 1;
  }
  condGroup = 0;
  v16 = 1;
  v38 = 0LL;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
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
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v25)(
            v22,
            Primarykey,
            &v38,
            *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return v17;
    lookup = (__int64 *)v38;
    if ( !v38 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(ServantPassiveSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantPassiveSkillReleaseEntity_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v16;
    if ( condGroup == v38->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v38->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_19:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v38, dispLimitCount, beforeClearQuestId, v26);
    }
  }
  sub_1BCACFC(v38);
  ServantPassiveSkillEntity__getEffectExplanation(v29, v30, v31, v32, v33, v34, v35);
  return result;
}