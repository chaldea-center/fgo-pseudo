void __fastcall SkillGroupOverwriteMaster___ctor(SkillGroupOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE3F & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__, method);
    byte_49FEE3F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    443,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SkillGroupOverwriteEntity_o *__fastcall SkillGroupOverwriteMaster__GetEntity(
        SkillGroupOverwriteMaster_o *this,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEE40 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&skillGroupId);
    byte_49FEE40 = 1;
  }
  PK = (Il2CppObject *)SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, 0LL);
  return (SkillGroupOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D64D8 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
}


bool __fastcall SkillGroupOverwriteMaster__TryGetEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEE41 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_49FEE41 = 1;
  }
  PK = (Il2CppObject *)SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  SkillGroupOverwriteEntity_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 methodPtr_low; // x10
  bool v29; // w21
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_49FEE3E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_1B64870(&System_IDisposable_TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B64870(&SkillGroupOverwriteEntity_TypeInfo, v12);
    byte_49FEE3E = 1;
  }
  *entity = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)entity, 0, skillGroupId, time);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64ACC(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (SkillGroupOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                           Enumerator,
                                           *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(SkillGroupOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SkillGroupOverwriteEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] == SkillGroupOverwriteEntity_TypeInfo
        && v25->fields.skillGroupId == skillGroupId
        && v25->fields.startedAt <= time
        && v25->fields.endedAt >= time )
      {
        *entity = v25;
        sub_1B64814((ServantStatusBattleListViewItem_o *)entity, (int32_t)v25, v26, v27);
        v29 = 1;
        goto LABEL_26;
      }
    }
  }
  v29 = 0;
LABEL_26:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_30:
    v33 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v29;
}