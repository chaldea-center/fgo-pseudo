void __fastcall ServantPassiveSkillReleaseMaster___ctor(
        ServantPassiveSkillReleaseMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA1C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAA1C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    246,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string___ctor__);
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

  if ( (byte_42EAA1A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42EAA1A = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantPassiveSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                 PK,
                                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_42EAA1B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42EAA1B = 1;
  }
  PK = ServantPassiveSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantPassiveSkillReleaseMaster__ServantPassiveSkillReleaseEntity__string__TryGetEntity__);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t condGroup; // w28
  int32_t v17; // w25
  __int64 *lookup; // x0
  __int64 v19; // x9
  bool v20; // w20
  System_String_o *Primarykey; // x26
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x8
  void *v25; // x27
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x11
  __int64 v28; // x0
  const MethodInfo *v29; // x3
  ServantPassiveSkillReleaseEntity_o *v33; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EAA1D & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      svtId,
      num,
      *(_QWORD *)&priority);
    sub_B5D5C4(&ServantPassiveSkillReleaseEntity_TypeInfo, v13, v14, v15);
    byte_42EAA1D = 1;
  }
  v33 = 0LL;
  condGroup = 0;
  v17 = 1;
  while ( 1 )
  {
    v20 = isBaseResult;
    Primarykey = ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v17,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v24 = *lookup;
    v25 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v26 = 0LL;
      v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 2;
        if ( v26 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v28 = v24 + 16LL * (*(_DWORD *)v27 + 1) + 312;
    }
    else
    {
LABEL_17:
      v28 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v23);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantPassiveSkillReleaseEntity_o **, _QWORD))v28)(
            v25,
            Primarykey,
            &v33,
            *(_QWORD *)(v28 + 8)) & 1) == 0 )
      return v20;
    lookup = (__int64 *)v33;
    if ( !v33 )
      goto LABEL_22;
    v19 = *(&ServantPassiveSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantPassiveSkillReleaseEntity_c *)v33->klass->_2.typeHierarchy[v19 - 1] != ServantPassiveSkillReleaseEntity_TypeInfo )
    {
      sub_B5D990(v33);
LABEL_22:
      sub_B5D69C(lookup, v22);
    }
    ++v17;
    if ( condGroup == v33->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v20 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v33->fields.condGroup;
      if ( v20 )
        return v20;
LABEL_11:
      isBaseResult = ServantPassiveSkillReleaseEntity__isUse(v33, dispLimitCount, beforeClearQuestId, v29);
    }
  }
}