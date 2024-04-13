void __fastcall CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8C0C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8C0C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    255,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
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

  if ( (byte_42E8C0A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__,
      commandCodeId,
      num,
      *(_QWORD *)&priority);
    byte_42E8C0A = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&idx);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_23FB260 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_42E8C0B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      commandCodeId,
      *(_QWORD *)&num);
    byte_42E8C0B = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t condGroup; // w27
  bool isUse; // w8
  int32_t v15; // w24
  __int64 *lookup; // x0
  __int64 v17; // x9
  bool v18; // w19
  System_String_o *Primarykey; // x25
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x8
  void *v23; // x26
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  CommandCodeSkillReleaseEntity_o *v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8C0D & 1) == 0 )
  {
    sub_B5D5C4(&CommandCodeSkillReleaseEntity_TypeInfo, commandCodeId, num, *(_QWORD *)&priority);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11, v12);
    byte_42E8C0D = 1;
  }
  v30 = 0LL;
  condGroup = 0;
  isUse = 1;
  v15 = 1;
  while ( 1 )
  {
    v18 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&beforeClearQuestId);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v22 = *lookup;
    v23 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v24 = 0LL;
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v26 = v22 + 16LL * (*(_DWORD *)v25 + 1) + 312;
    }
    else
    {
LABEL_17:
      v26 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v21);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v26)(
            v23,
            Primarykey,
            &v30,
            *(_QWORD *)(v26 + 8)) & 1) == 0 )
      return v18;
    lookup = (__int64 *)v30;
    if ( !v30 )
      goto LABEL_22;
    v17 = *(&CommandCodeSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (CommandCodeSkillReleaseEntity_c *)v30->klass->_2.typeHierarchy[v17 - 1] != CommandCodeSkillReleaseEntity_TypeInfo )
    {
      lookup = (__int64 *)sub_B5D990(v30);
LABEL_22:
      sub_B5D69C(lookup, v20);
    }
    ++v15;
    if ( condGroup == v30->fields.condGroup )
    {
      isUse = 0;
      if ( v18 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v30->fields.condGroup;
      if ( v18 )
        return v18;
LABEL_11:
      isUse = CommandCodeSkillReleaseEntity__isUse(v30, beforeClearQuestId, v27);
    }
  }
}