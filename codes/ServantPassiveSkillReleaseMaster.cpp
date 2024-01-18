void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189BAF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      method);
    byte_4189BAF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    245,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4189BAD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189BAD = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4189BAE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4189BAE = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x8
  void *v23; // x27
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  const MethodInfo *v27; // x3
  ServantPassiveSkillReleaseEntity_o *v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189BB0 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantPassiveSkillReleaseEntity_TypeInfo, v13);
    byte_4189BB0 = 1;
  }
  v31 = 0LL;
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
      v26 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v21);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v26)(
            v23,
            Primarykey,
            &v31,
            *(_QWORD *)(v26 + 8)) & 1) == 0 )
      return v18;
    lookup = (__int64 *)v31;
    if ( !v31 )
      goto LABEL_22;
    v17 = *(&ServantPassiveSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (ServantPassiveSkillReleaseEntity_c *)v31->klass->_2.typeHierarchy[v17 - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      sub_B2C728(v31);
LABEL_22:
      sub_B2C434(lookup, v20);
    }
    ++v15;
    if ( condGroup == v31->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v18 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v31->fields.condGroup;
      if ( v18 )
        return v18;
LABEL_11:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v31, dispLimitCount, beforeClearQuestId, v27);
    }
  }
}