void __fastcall EventEquipSkillReleaseMaster___ctor(EventEquipSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
    byte_4A5B0E1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    267,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventEquipSkillReleaseEntity_o *__fastcall EventEquipSkillReleaseMaster__GetEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B0DF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
    byte_4A5B0DF = 1;
  }
  PK = (Il2CppObject *)EventEquipSkillReleaseEntity__CreatePK(
                         eventId,
                         type,
                         targetId,
                         value,
                         *(const MethodInfo **)&value);
  return (EventEquipSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_311DC8C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEquipSkillReleaseMaster__TryGetEntity(
        EventEquipSkillReleaseMaster_o *this,
        EventEquipSkillReleaseEntity_o **entity,
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B0E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
    byte_4A5B0E0 = 1;
  }
  PK = (Il2CppObject *)EventEquipSkillReleaseEntity__CreatePK(
                         eventId,
                         type,
                         targetId,
                         value,
                         *(const MethodInfo **)&targetId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
}


bool __fastcall EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        EventEquipSkillReleaseEntity_o **outEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int priority; // w27
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  EventEquipSkillReleaseEntity_o *v20; // x0
  __int64 v21; // x1
  EventEquipSkillReleaseEntity_o *v22; // x22
  __int64 methodPtr_low; // x9
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5B0E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventEquipSkillReleaseEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B0E2 = 1;
  }
  *outEnt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)outEnt, 0, (int32_t)outEnt, (int32_t)method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  priority = -1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventEquipSkillReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                              Enumerator,
                                              *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(EventEquipSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventEquipSkillReleaseEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEquipSkillReleaseEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_34:
      sub_1B8880C(v20, v21);
    }
    if ( v20->fields.eventId == eventId
      && EventEquipSkillReleaseEntity__isOpen(v20, (const MethodInfo *)EventEquipSkillReleaseEntity_TypeInfo)
      && priority < v22->fields.priority )
    {
      *outEnt = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)outEnt, (int32_t)v22, v24, v25);
      priority = v22->fields.priority;
    }
  }
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
  return *outEnt != 0LL;
}