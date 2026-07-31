void CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938465 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
    byte_5938465 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    264,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
}


CommandCodeSkillReleaseEntity_o *CommandCodeSkillReleaseMaster__GetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938463 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
    byte_5938463 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, 0);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_3EE2044 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
}


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

  if ( (byte_5938464 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
    byte_5938464 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
}


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
  char v13; // w19
  System_String_o *Primarykey; // x25
  __int64 *lookup; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  void *v18; // x26
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__c **v20; // x10
  __int64 v21; // x0
  CommandCodeSkillReleaseEntity_o *v24; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5938466 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo);
    byte_5938466 = 1;
  }
  condGroup = 0;
  isUse = 1;
  v12 = 1;
  v24 = 0;
  while ( 1 )
  {
    v13 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(commandCodeId, num, priority, v12, 0);
    lookup = (__int64 *)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3EDFD10 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_20:
      sub_21FFECC(lookup, v16);
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
      v21 = sub_2237E2C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__CommandCodeSkillReleaseEntity__TypeInfo,
              1);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v21)(
            v18,
            Primarykey,
            &v24,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      return v13 & 1;
    lookup = (__int64 *)v24;
    if ( !v24 )
      goto LABEL_20;
    ++v12;
    if ( condGroup == v24->fields.condGroup )
    {
      isUse = 0;
      if ( (v13 & 1) != 0 )
        goto LABEL_17;
    }
    else
    {
      condGroup = v24->fields.condGroup;
      if ( (v13 & 1) != 0 )
      {
        v13 = 1;
        return v13 & 1;
      }
LABEL_17:
      isUse = CommandCodeSkillReleaseEntity__isUse(v24, beforeClearQuestId, 0);
    }
  }
}