void __fastcall SkillGroupOverwriteMaster___ctor(SkillGroupOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0D4B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
    byte_42B0D4B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    442,
    (const MethodInfo_23E268C *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
}


SkillGroupOverwriteEntity_o *__fastcall SkillGroupOverwriteMaster__GetEntity(
        SkillGroupOverwriteMaster_o *this,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0D4C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
    byte_42B0D4C = 1;
  }
  PK = SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, (const MethodInfo *)startedAt);
  return (SkillGroupOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
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

  if ( (byte_42B0D4D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
    byte_42B0D4D = 1;
  }
  PK = SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, *(const MethodInfo **)&skillGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
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
  System_String_array **v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  SkillGroupOverwriteEntity_o *v26; // x0
  System_String_array **v27; // x2
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x10
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0D4A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&SkillGroupOverwriteEntity_TypeInfo);
    byte_42B0D4A = 1;
  }
  *entity = 0LL;
  sub_B52920(
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
    sub_B52A5C(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (SkillGroupOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                           Enumerator,
                                           *(_QWORD *)(v25 + 8));
    if ( v26 )
    {
      v32 = *(&SkillGroupOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v32
        && (SkillGroupOverwriteEntity_c *)v26->klass->_2.typeHierarchy[v32 - 1] == SkillGroupOverwriteEntity_TypeInfo
        && v26->fields.skillGroupId == skillGroupId
        && v26->fields.startedAt <= time
        && v26->fields.endedAt >= time )
      {
        *entity = v26;
        sub_B52920((BattleServantConfConponent_o *)entity, (System_Int32_array **)v26, v27, v15, v28, v29, v30, v31);
        v39 = 88;
        v33 = 1;
        goto LABEL_26;
      }
    }
  }
  v33 = 0;
  v39 = 86;
LABEL_26:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_30:
    v37 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 86 )
    return 0;
  return v33;
}