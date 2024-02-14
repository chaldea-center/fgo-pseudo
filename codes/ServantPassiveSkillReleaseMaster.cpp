void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4216A01 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method);
    byte_4216A01 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    245,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_42169FF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_42169FF = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_266A024 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4216A00 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4216A00 = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 *lookup; // x0
  __int64 v17; // x9
  bool v18; // w20
  System_String_o *Primarykey; // x26
  __int64 v20; // x8
  void *v21; // x27
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  const MethodInfo *v25; // x3
  ServantPassiveSkillReleaseEntity_o *v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216A02 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&ServantPassiveSkillReleaseEntity_TypeInfo, v13);
    byte_4216A02 = 1;
  }
  v29 = 0LL;
  condGroup = 0;
  v15 = 1;
  while ( 1 )
  {
    v18 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v15,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v20 = *lookup;
    v21 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v22 = 0LL;
      v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 2;
        if ( v22 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v24 = v20 + 16LL * (*(_DWORD *)v23 + 1) + 312;
    }
    else
    {
LABEL_17:
      v24 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v24)(
            v21,
            Primarykey,
            &v29,
            *(_QWORD *)(v24 + 8)) & 1) == 0 )
      return v18;
    lookup = (__int64 *)v29;
    if ( !v29 )
      goto LABEL_22;
    v17 = *(&ServantPassiveSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (ServantPassiveSkillReleaseEntity_c *)v29->klass->_2.typeHierarchy[v17 - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      sub_B0DC70(v29);
LABEL_22:
      sub_B0D97C(lookup);
    }
    ++v15;
    if ( condGroup == v29->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v18 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v29->fields.condGroup;
      if ( v18 )
        return v18;
LABEL_11:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v29, dispLimitCount, beforeClearQuestId, v25);
    }
  }
}