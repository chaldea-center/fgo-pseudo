void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B20BD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
    byte_42B20BD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    246,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_42B20BB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
    byte_42B20BB = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_42B20BC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
    byte_42B20BC = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  int32_t condGroup; // w28
  int32_t v14; // w25
  __int64 *lookup; // x0
  __int64 v16; // x9
  bool v17; // w20
  System_String_o *Primarykey; // x26
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x8
  void *v22; // x27
  unsigned __int64 v23; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x11
  __int64 v25; // x0
  const MethodInfo *v26; // x3
  ServantPassiveSkillReleaseEntity_o *v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B20BE & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantPassiveSkillReleaseEntity_TypeInfo);
    byte_42B20BE = 1;
  }
  v30 = 0LL;
  condGroup = 0;
  v14 = 1;
  while ( 1 )
  {
    v17 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v21 = *lookup;
    v22 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v23 = 0LL;
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v25 = v21 + 16LL * (*(_DWORD *)v24 + 1) + 312;
    }
    else
    {
LABEL_17:
      v25 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v20);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v25)(
            v22,
            Primarykey,
            &v30,
            *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return v17;
    lookup = (__int64 *)v30;
    if ( !v30 )
      goto LABEL_22;
    v16 = *(&ServantPassiveSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (ServantPassiveSkillReleaseEntity_c *)v30->klass->_2.typeHierarchy[v16 - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      sub_B52D50(v30);
LABEL_22:
      sub_B52A5C(lookup, v19);
    }
    ++v14;
    if ( condGroup == v30->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v17 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v30->fields.condGroup;
      if ( v17 )
        return v17;
LABEL_11:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v30, dispLimitCount, beforeClearQuestId, v26);
    }
  }
}