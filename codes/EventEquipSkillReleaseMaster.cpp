void EventEquipSkillReleaseMaster___ctor(EventEquipSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2724D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
    byte_4C2724D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    273,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventEquipSkillReleaseEntity_o *EventEquipSkillReleaseMaster__GetEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2724B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
    byte_4C2724B = 1;
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
                                             (const MethodInfo_338C850 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventEquipSkillReleaseMaster__TryGetEntity(
        EventEquipSkillReleaseMaster_o *this,
        EventEquipSkillReleaseEntity_o **entity,
        int32_t eventId,
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2724C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
    byte_4C2724C = 1;
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
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
}


bool EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        EventEquipSkillReleaseEntity_o **outEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int priority; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  EventEquipSkillReleaseEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  EventEquipSkillReleaseEntity_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4C2724E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventEquipSkillReleaseEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C2724E = 1;
  }
  *outEnt = 0;
  sub_1C2D434((CGThumbnailListItem_o *)outEnt, 0, (int32_t)outEnt, method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
  priority = -1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_17:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo, 0);
    }
    v20 = (EventEquipSkillReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                              Enumerator,
                                              *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
    if ( v20->fields.eventId == eventId
      && EventEquipSkillReleaseEntity__isOpen(v20, v21)
      && priority < v22->fields.priority )
    {
      *outEnt = v22;
      sub_1C2D434((CGThumbnailListItem_o *)outEnt, (int32_t)v22, v23, v24);
      priority = v22->fields.priority;
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_28:
    v28 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return *outEnt != 0;
}