void CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56B4F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
    byte_4C56B4F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    262,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillReleaseEntity_o *CommandCodeSkillReleaseMaster__GetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C56B4D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
    byte_4C56B4D = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillReleaseEntity__CreatePK(
                         commandCodeId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&idx);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_33B7A10 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CommandCodeSkillReleaseMaster__TryGetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        CommandCodeSkillReleaseEntity_o **entity,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C56B4E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
    byte_4C56B4E = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillReleaseEntity__CreatePK(
                         commandCodeId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CommandCodeSkillReleaseMaster__isUse(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t condGroup; // w29
  bool isUse; // w8
  int32_t v12; // w24
  bool v13; // w19
  System_String_o *Primarykey; // x25
  __int64 *lookup; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  void *v18; // x26
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__c **v20; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x2
  CommandCodeSkillReleaseEntity_o *v25; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C56B50 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo);
    byte_4C56B50 = 1;
  }
  condGroup = 0;
  isUse = 1;
  v12 = 1;
  v25 = 0;
  while ( 1 )
  {
    v13 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v12,
                   *(const MethodInfo **)&beforeClearQuestId);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33B5804 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C3E7C0(lookup, v16);
    v17 = *lookup;
    v18 = lookup;
    v19 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v20 = (System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__c **)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = v17 + 16LL * (*(_DWORD *)v20 + 1) + 312;
    }
    else
    {
LABEL_9:
      v21 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo,
              1);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v21)(
            v18,
            Primarykey,
            &v25,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      return v13;
    lookup = (__int64 *)v25;
    if ( !v25 )
      goto LABEL_19;
    ++v12;
    if ( condGroup == v25->fields.condGroup )
    {
      isUse = 0;
      if ( v13 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v25->fields.condGroup;
      if ( v13 )
        return v13;
LABEL_17:
      isUse = CommandCodeSkillReleaseEntity__isUse(v25, beforeClearQuestId, v22);
    }
  }
}