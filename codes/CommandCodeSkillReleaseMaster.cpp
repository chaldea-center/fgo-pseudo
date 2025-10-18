void CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42DA6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
    byte_4C42DA6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    262,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4C42DA4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
    byte_4C42DA4 = 1;
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
                                              (const MethodInfo_33A5B58 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4C42DA5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
    byte_4C42DA5 = 1;
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
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v16; // x8
  void *v17; // x26
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__c **v19; // x10
  __int64 v20; // x0
  const MethodInfo *v21; // x2
  CommandCodeSkillReleaseEntity_o *v24; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C42DA7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__get_lookup__);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo);
    byte_4C42DA7 = 1;
  }
  condGroup = 0;
  isUse = 1;
  v12 = 1;
  v24 = 0;
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
                          (const MethodInfo_33A394C *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_19:
      sub_1C372B4(lookup);
    v16 = *lookup;
    v17 = lookup;
    v18 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v19 = (System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__c **)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_9;
      }
      v20 = v16 + 16LL * (*(_DWORD *)v19 + 1) + 312;
    }
    else
    {
LABEL_9:
      v20 = sub_1C87870(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo,
              1);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v20)(
            v17,
            Primarykey,
            &v24,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      return v13;
    lookup = (__int64 *)v24;
    if ( !v24 )
      goto LABEL_19;
    ++v12;
    if ( condGroup == v24->fields.condGroup )
    {
      isUse = 0;
      if ( v13 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v24->fields.condGroup;
      if ( v13 )
        return v13;
LABEL_17:
      isUse = CommandCodeSkillReleaseEntity__isUse(v24, beforeClearQuestId, v21);
    }
  }
}