void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FBB6B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method);
    byte_40FBB6B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    245,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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
  System_String_o *PK; // x1

  if ( (byte_40FBB69 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FBB69 = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_40FBB6A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40FBB6A = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  int32_t condGroup; // w28
  int32_t v15; // w25
  __int64 v16; // x9
  bool v17; // w20
  System_String_o *Primarykey; // x26
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x27
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v25; // x3
  ServantPassiveSkillReleaseEntity_o *v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FBB6C & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&ServantPassiveSkillReleaseEntity_TypeInfo, v13);
    byte_40FBB6C = 1;
  }
  v29 = 0LL;
  condGroup = 0;
  v15 = 1;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    klass = lookup->klass;
    v21 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v22;
        p_offset += 2;
        if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
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
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))p_method)(
            v21,
            Primarykey,
            &v29,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v17;
    if ( !v29 )
      goto LABEL_22;
    v16 = *(&ServantPassiveSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (ServantPassiveSkillReleaseEntity_c *)v29->klass->_2.typeHierarchy[v16 - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      sub_B173C8(v29);
LABEL_22:
      sub_B170D4();
    }
    ++v15;
    if ( condGroup == v29->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v29->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_11:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v29, dispLimitCount, beforeClearQuestId, v25);
    }
  }
}