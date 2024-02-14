void __fastcall CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214863 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__,
      method);
    byte_4214863 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    254,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4214861 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_4214861 = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&idx);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_266A024 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4214862 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4214862 = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  int32_t condGroup; // w27
  bool isUse; // w8
  int32_t v13; // w24
  __int64 *lookup; // x0
  __int64 v15; // x9
  bool v16; // w19
  System_String_o *Primarykey; // x25
  __int64 v18; // x8
  void *v19; // x26
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  const MethodInfo *v23; // x2
  CommandCodeSkillReleaseEntity_o *v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214864 & 1) == 0 )
  {
    sub_B0D8A4(&CommandCodeSkillReleaseEntity_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    byte_4214864 = 1;
  }
  v26 = 0LL;
  condGroup = 0;
  isUse = 1;
  v13 = 1;
  while ( 1 )
  {
    v16 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v13,
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
      v22 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v22)(
            v19,
            Primarykey,
            &v26,
            *(_QWORD *)(v22 + 8)) & 1) == 0 )
      return v16;
    lookup = (__int64 *)v26;
    if ( !v26 )
      goto LABEL_22;
    v15 = *(&CommandCodeSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (CommandCodeSkillReleaseEntity_c *)v26->klass->_2.typeHierarchy[v15 - 1] != CommandCodeSkillReleaseEntity_TypeInfo )
    {
      lookup = (__int64 *)sub_B0DC70(v26);
LABEL_22:
      sub_B0D97C(lookup);
    }
    ++v13;
    if ( condGroup == v26->fields.condGroup )
    {
      isUse = 0;
      if ( v16 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v26->fields.condGroup;
      if ( v16 )
        return v16;
LABEL_11:
      isUse = CommandCodeSkillReleaseEntity__isUse(v26, beforeClearQuestId, v23);
    }
  }
}