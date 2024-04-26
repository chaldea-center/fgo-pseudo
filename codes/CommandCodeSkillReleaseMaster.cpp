void __fastcall CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43546B3 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
    byte_43546B3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    255,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillReleaseEntity_o *__fastcall CommandCodeSkillReleaseMaster__GetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43546B1 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
    byte_43546B1 = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&idx);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_21C0890 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillReleaseMaster__TryGetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        CommandCodeSkillReleaseEntity_o **entity,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43546B2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
    byte_43546B2 = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillReleaseMaster__isUse(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t condGroup; // w27
  bool isUse; // w8
  int32_t v12; // w24
  __int64 *lookup; // x0
  __int64 v14; // x9
  bool v15; // w19
  System_String_o *Primarykey; // x25
  __int64 v17; // x1
  __int64 v18; // x8
  void *v19; // x26
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  const MethodInfo *v23; // x2
  CommandCodeSkillReleaseEntity_o *v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43546B4 & 1) == 0 )
  {
    sub_B70694(&CommandCodeSkillReleaseEntity_TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_43546B4 = 1;
  }
  v26 = 0LL;
  condGroup = 0;
  isUse = 1;
  v12 = 1;
  while ( 1 )
  {
    v15 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v12,
                   *(const MethodInfo **)&beforeClearQuestId);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v18 = *lookup;
    v19 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v20 = 0LL;
      v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 2;
        if ( v20 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v22 = v18 + 16LL * (*(_DWORD *)v21 + 1) + 312;
    }
    else
    {
LABEL_17:
      v22 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v22)(
            v19,
            Primarykey,
            &v26,
            *(_QWORD *)(v22 + 8)) & 1) == 0 )
      return v15;
    lookup = (__int64 *)v26;
    if ( !v26 )
      goto LABEL_22;
    v14 = *(&CommandCodeSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (CommandCodeSkillReleaseEntity_c *)v26->klass->_2.typeHierarchy[v14 - 1] != CommandCodeSkillReleaseEntity_TypeInfo )
    {
      sub_B70A60(v26);
LABEL_22:
      sub_B7076C(lookup, v17);
    }
    ++v12;
    if ( condGroup == v26->fields.condGroup )
    {
      isUse = 0;
      if ( v15 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v26->fields.condGroup;
      if ( v15 )
        return v15;
LABEL_11:
      isUse = CommandCodeSkillReleaseEntity__isUse(v26, beforeClearQuestId, v23);
    }
  }
}