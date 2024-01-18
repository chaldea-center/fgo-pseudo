void __fastcall SkillGroupOverwriteMaster___ctor(SkillGroupOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186D9D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__, method);
    byte_4186D9D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    441,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SkillGroupOverwriteEntity_o *__fastcall SkillGroupOverwriteMaster__GetEntity(
        SkillGroupOverwriteMaster_o *this,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186D9E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&skillGroupId);
    byte_4186D9E = 1;
  }
  PK = SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, (const MethodInfo *)startedAt);
  return (SkillGroupOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
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

  if ( (byte_4186D9F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4186D9F = 1;
  }
  PK = SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, *(const MethodInfo **)&skillGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  System_String_array **v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  SkillGroupOverwriteEntity_o *v30; // x0
  System_String_array **v31; // x2
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x10
  bool v37; // w20
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  int v43; // [xsp+0h] [xbp-50h]

  if ( (byte_4186D9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&SkillGroupOverwriteEntity_TypeInfo, v15);
    byte_4186D9C = 1;
  }
  *entity = 0LL;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v30 = (SkillGroupOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                           Enumerator,
                                           *(_QWORD *)(v29 + 8));
    if ( v30 )
    {
      v36 = *(&SkillGroupOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v36
        && (SkillGroupOverwriteEntity_c *)v30->klass->_2.typeHierarchy[v36 - 1] == SkillGroupOverwriteEntity_TypeInfo
        && v30->fields.skillGroupId == skillGroupId
        && v30->fields.startedAt <= time
        && v30->fields.endedAt >= time )
      {
        *entity = v30;
        sub_B2C2F8((BattleServantConfConponent_o *)entity, (System_Int32_array **)v30, v31, v19, v32, v33, v34, v35);
        v43 = 88;
        v37 = 1;
        goto LABEL_26;
      }
    }
  }
  v37 = 0;
  v43 = 86;
LABEL_26:
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_30:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( v43 == 86 )
    return 0;
  return v37;
}