void __fastcall SkillGroupOverwriteMaster___ctor(SkillGroupOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C08B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
    byte_438C08B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    442,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
}


SkillGroupOverwriteEntity_o *__fastcall SkillGroupOverwriteMaster__GetEntity(
        SkillGroupOverwriteMaster_o *this,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C08C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
    byte_438C08C = 1;
  }
  PK = SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, (const MethodInfo *)startedAt);
  return (SkillGroupOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_21FBCE4 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillGroupOverwriteMaster__TryGetEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C08D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
    byte_438C08D = 1;
  }
  PK = SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, *(const MethodInfo **)&skillGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t time,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  SkillGroupOverwriteEntity_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x10
  bool v32; // w20
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  int v38; // [xsp+0h] [xbp-50h]

  if ( (byte_438C08A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&SkillGroupOverwriteEntity_TypeInfo);
    byte_438C08A = 1;
  }
  *entity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)entity,
    0LL,
    *(System_String_array ***)&skillGroupId,
    (System_String_array **)time,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (SkillGroupOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                           Enumerator,
                                           *(_QWORD *)(v23 + 8));
    if ( v24 )
    {
      v31 = *(&SkillGroupOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v24->klass->_2.bitflags2 + 1) >= (unsigned int)v31
        && (SkillGroupOverwriteEntity_c *)v24->klass->_2.typeHierarchy[v31 - 1] == SkillGroupOverwriteEntity_TypeInfo
        && v24->fields.skillGroupId == skillGroupId
        && v24->fields.startedAt <= time
        && v24->fields.endedAt >= time )
      {
        *entity = v24;
        sub_B77560((BattleServantConfConponent_o *)entity, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
        v38 = 88;
        v32 = 1;
        goto LABEL_26;
      }
    }
  }
  v32 = 0;
  v38 = 86;
LABEL_26:
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_30:
    v36 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( v38 == 86 )
    return 0;
  return v32;
}