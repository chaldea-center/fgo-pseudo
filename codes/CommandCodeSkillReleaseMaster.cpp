void __fastcall CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FA5D4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__,
      method);
    byte_40FA5D4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    254,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
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

  if ( (byte_40FA5D2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_40FA5D2 = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&idx);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_266F7D8 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_40FA5D3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40FA5D3 = 1;
  }
  PK = CommandCodeSkillReleaseEntity__CreatePK(commandCodeId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v14; // x9
  bool v15; // w19
  System_String_o *Primarykey; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x26
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v23; // x2
  CommandCodeSkillReleaseEntity_o *v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA5D5 & 1) == 0 )
  {
    sub_B16FFC(&CommandCodeSkillReleaseEntity_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    byte_40FA5D5 = 1;
  }
  v26 = 0LL;
  condGroup = 0;
  isUse = 1;
  v13 = 1;
  while ( 1 )
  {
    v15 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v13,
                   *(const MethodInfo **)&beforeClearQuestId);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    klass = lookup->klass;
    v19 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v20;
        p_offset += 2;
        if ( v20 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_17:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   1LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))p_method)(
            v19,
            Primarykey,
            &v26,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v15;
    if ( !v26 )
      goto LABEL_22;
    v14 = *(&CommandCodeSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (CommandCodeSkillReleaseEntity_c *)v26->klass->_2.typeHierarchy[v14 - 1] != CommandCodeSkillReleaseEntity_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_22:
      sub_B170D4();
    }
    ++v13;
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