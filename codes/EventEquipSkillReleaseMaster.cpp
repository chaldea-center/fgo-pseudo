void __fastcall EventEquipSkillReleaseMaster___ctor(EventEquipSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A387 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__,
      method);
    byte_418A387 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    265,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string___ctor__);
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

  if ( (byte_418A385 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A385 = 1;
  }
  PK = EventEquipSkillReleaseEntity__CreatePK(eventId, type, targetId, value, *(const MethodInfo **)&value);
  return (EventEquipSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_418A386 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_418A386 = 1;
  }
  PK = EventEquipSkillReleaseEntity__CreatePK(eventId, type, targetId, value, *(const MethodInfo **)&targetId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventEquipSkillReleaseMaster__EventEquipSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v17; // x1
  System_String_array **v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int priority; // w26
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventEquipSkillReleaseEntity_o *v25; // x0
  __int64 v26; // x1
  EventEquipSkillReleaseEntity_o *v27; // x22
  __int64 v28; // x9
  System_String_array **v29; // x2
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0

  if ( (byte_418A388 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventEquipSkillReleaseEntity_TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_418A388 = 1;
  }
  *outEnt = 0LL;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v15);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  priority = -1;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_23;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_23:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_10:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v25 = (EventEquipSkillReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                              Enumerator,
                                              *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      goto LABEL_34;
    v28 = *(&EventEquipSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (EventEquipSkillReleaseEntity_c *)v25->klass->_2.typeHierarchy[v28 - 1] != EventEquipSkillReleaseEntity_TypeInfo )
    {
      sub_B2C728(v25);
LABEL_34:
      sub_B2C434(v25, v26);
    }
    if ( v25->fields.eventId == eventId
      && EventEquipSkillReleaseEntity__isOpen(v25, (const MethodInfo *)EventEquipSkillReleaseEntity_TypeInfo)
      && priority < v27->fields.priority )
    {
      *outEnt = v27;
      sub_B2C2F8((BattleServantConfConponent_o *)outEnt, (System_Int32_array **)v27, v29, v18, v30, v31, v32, v33);
      priority = v27->fields.priority;
    }
  }
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_30:
    v42 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return *outEnt != 0LL;
}