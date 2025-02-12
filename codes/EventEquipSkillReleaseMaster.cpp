void __fastcall EventEquipSkillReleaseMaster___ctor(EventEquipSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7A22 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__,
      method);
    byte_4BC7A22 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    271,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4BC7A20 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC7A20 = 1;
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
                                             (const MethodInfo_324D130 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4BC7A21 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4BC7A21 = 1;
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
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        EventEquipSkillReleaseEntity_o **outEnt,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int priority; // w26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  EventEquipSkillReleaseEntity_o *v27; // x0
  const MethodInfo *v28; // x1
  EventEquipSkillReleaseEntity_o *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4BC7A23 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventEquipSkillReleaseEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo, v12);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_4BC7A23 = 1;
  }
  *outEnt = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)outEnt, 0LL, (int64_t)outEnt, (int32_t)method, v4, v5, v6, v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_EventEquipSkillReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v16);
  priority = -1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_EventEquipSkillReleaseEntity__TypeInfo, 0LL);
    }
    v27 = (EventEquipSkillReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                              Enumerator,
                                              *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      sub_1C1AE30(0LL, v28);
    if ( v27->fields.eventId == eventId
      && EventEquipSkillReleaseEntity__isOpen(v27, v28)
      && priority < v29->fields.priority )
    {
      *outEnt = v29;
      sub_1C1AB78((PartyOrganizationUtility_o *)outEnt, (int64_t)v29, v30, v31, v32, v33, v34, v35);
      priority = v29->fields.priority;
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_28;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_28:
    v39 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return *outEnt != 0LL;
}