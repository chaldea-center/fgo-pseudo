void __fastcall EventEquipSkillReleaseMaster___ctor(EventEquipSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE26 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
    byte_438DE26 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    266,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
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
  System_String_o *PK; // x1

  if ( (byte_438DE24 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
    byte_438DE24 = 1;
  }
  PK = EventEquipSkillReleaseEntity__CreatePK(eventId, type, targetId, value, *(const MethodInfo **)&value);
  return (EventEquipSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_438DE25 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
    byte_438DE25 = 1;
  }
  PK = EventEquipSkillReleaseEntity__CreatePK(eventId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
}


bool __fastcall EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
        EventEquipSkillReleaseMaster_o *this,
        int32_t eventId,
        EventEquipSkillReleaseEntity_o **outEnt,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int priority; // w26
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventEquipSkillReleaseEntity_o *v20; // x0
  __int64 v21; // x1
  EventEquipSkillReleaseEntity_o *v22; // x22
  __int64 v23; // x9
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_438DE27 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&EventEquipSkillReleaseEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438DE27 = 1;
  }
  *outEnt = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)outEnt,
    0LL,
    (System_String_array **)outEnt,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v13);
  priority = -1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_10:
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventEquipSkillReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                              Enumerator,
                                              *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_34;
    v23 = *(&EventEquipSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (EventEquipSkillReleaseEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != EventEquipSkillReleaseEntity_TypeInfo )
    {
      sub_B77990(v20);
LABEL_34:
      sub_B7769C(v20, v21);
    }
    if ( v20->fields.eventId == eventId
      && EventEquipSkillReleaseEntity__isOpen(v20, (const MethodInfo *)EventEquipSkillReleaseEntity_TypeInfo)
      && priority < v22->fields.priority )
    {
      *outEnt = v22;
      sub_B77560((BattleServantConfConponent_o *)outEnt, (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
      priority = v22->fields.priority;
    }
  }
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
    v37 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return *outEnt != 0LL;
}