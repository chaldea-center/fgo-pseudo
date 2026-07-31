void EventEquipSkillReleaseMaster___ctor(EventEquipSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938610 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
    byte_5938610 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    275,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
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

  if ( (byte_593860E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
    byte_593860E = 1;
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
                                             (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_593860F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
    byte_593860F = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
}


bool EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        EventEquipSkillReleaseEntity_o **outEnt,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *v15; // x21
  int priority; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  EventEquipSkillReleaseEntity_o *v27; // x0
  const MethodInfo *v28; // x1
  EventEquipSkillReleaseEntity_o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+18h] [xbp-48h]

  if ( (byte_5938611 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventEquipSkillReleaseEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938611 = 1;
  }
  *outEnt = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)outEnt,
    0,
    (System_String_o *)outEnt,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillReleaseEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v14);
  v15 = Enumerator;
  priority = -1;
  while ( 1 )
  {
    klass = v15->klass;
    v18 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_2237E2C(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v15,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v41 )
      sub_21FFECC(v21, v22);
    v23 = v41->klass;
    v24 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v41, System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo, 0);
    }
    v27 = (EventEquipSkillReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                              v41,
                                              *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      sub_21FFECC(0, v28);
    if ( v27->fields.eventId == eventId
      && EventEquipSkillReleaseEntity__isOpen(v27, v28)
      && priority < v29->fields.priority )
    {
      *outEnt = v29;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)outEnt, (int32_t)v29, v30, v31, v32, v33, v34, v35);
      v15 = v41;
      priority = v29->fields.priority;
    }
    else
    {
      v15 = v41;
    }
  }
  if ( v41 )
  {
    v36 = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_35;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_35:
      v39 = sub_2237E2C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v41, *(_QWORD *)(v39 + 8));
  }
  return *outEnt != 0;
}