void __fastcall SkillGroupOverwriteMaster___ctor(SkillGroupOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB97 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
    byte_4A5BB97 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    443,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
}


SkillGroupOverwriteEntity_o *__fastcall SkillGroupOverwriteMaster__GetEntity(
        SkillGroupOverwriteMaster_o *this,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BB98 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
    byte_4A5BB98 = 1;
  }
  PK = (Il2CppObject *)SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, 0LL);
  return (SkillGroupOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
}


bool __fastcall SkillGroupOverwriteMaster__TryGetEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BB99 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
    byte_4A5BB99 = 1;
  }
  PK = (Il2CppObject *)SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  SkillGroupOverwriteEntity_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 methodPtr_low; // x10
  bool v25; // w21
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5BB96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&SkillGroupOverwriteEntity_TypeInfo);
    byte_4A5BB96 = 1;
  }
  *entity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)entity, 0, skillGroupId, time);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (SkillGroupOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                           Enumerator,
                                           *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      methodPtr_low = LOBYTE(SkillGroupOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (SkillGroupOverwriteEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == SkillGroupOverwriteEntity_TypeInfo
        && v21->fields.skillGroupId == skillGroupId
        && v21->fields.startedAt <= time
        && v21->fields.endedAt >= time )
      {
        *entity = v21;
        sub_1B88554((ServantStatusBattleListViewItem_o *)entity, (int32_t)v21, v22, v23);
        v25 = 1;
        goto LABEL_26;
      }
    }
  }
  v25 = 0;
LABEL_26:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v25;
}