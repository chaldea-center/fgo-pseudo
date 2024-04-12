void __fastcall ServantVoicePatternMaster___ctor(ServantVoicePatternMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3359 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
    byte_42B3359 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    478,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
}


ServantVoicePatternEntity_o *__fastcall ServantVoicePatternMaster__GetEntity(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3356 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
    byte_42B3356 = 1;
  }
  PK = ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, (const MethodInfo *)voiceId);
  return (ServantVoicePatternEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantVoicePatternEntity__o *__fastcall ServantVoicePatternMaster__GetEntityList(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_42B3358 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo);
    sub_B52984(&ServantVoicePatternEntity_TypeInfo);
    byte_42B3358 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_33;
    v24 = *(&ServantVoicePatternEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (ServantVoicePatternEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != ServantVoicePatternEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_33:
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.missionTargetId == id && v22->fields.missionConditionDetailId == svtId )
    {
      if ( !v7 )
        sub_B52A5C(v22, ServantVoicePatternEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_ServantVoicePatternEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoicePatternMaster__IsSatisfyPlayCondition(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t type; // w8
  ServantVoicePatternEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( !ServantVoicePatternMaster__TryGetEntity(this, &entity, id, svtId, voiceId, *(const MethodInfo **)&targetValue) )
    return 1;
  if ( !entity )
    sub_B52A5C(0LL, v9);
  type = entity->fields.type;
  if ( !type )
    return 0;
  return type != 1 || ServantVoicePatternEntity__CheckAddCond(entity, limitCount, targetValue, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoicePatternMaster__TryGetEntity(
        ServantVoicePatternMaster_o *this,
        ServantVoicePatternEntity_o **entity,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B3357 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
    byte_42B3357 = 1;
  }
  PK = ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
}