void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D0FE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
    byte_438D0FE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    246,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_438D0FC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
    byte_438D0FC = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_438D0FD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
    byte_438D0FD = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v20; // x8
  void *v21; // x27
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  const MethodInfo *v25; // x3
  ServantPassiveSkillReleaseEntity_o *v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438D0FF & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&ServantPassiveSkillReleaseEntity_TypeInfo);
    byte_438D0FF = 1;
  }
  v29 = 0LL;
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
      v24 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v24)(
            v21,
            Primarykey,
            &v29,
            *(_QWORD *)(v24 + 8)) & 1) == 0 )
      return v17;
    lookup = (__int64 *)v29;
    if ( !v29 )
      goto LABEL_22;
    v16 = *(&ServantPassiveSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (ServantPassiveSkillReleaseEntity_c *)v29->klass->_2.typeHierarchy[v16 - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      sub_B77990(v29);
LABEL_22:
      sub_B7769C(lookup, v19);
    }
    ++v14;
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