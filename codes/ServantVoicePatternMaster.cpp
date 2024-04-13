void __fastcall ServantVoicePatternMaster___ctor(ServantVoicePatternMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF7B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBF7B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    479,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
}


ServantVoicePatternEntity_o *__fastcall ServantVoicePatternMaster__GetEntity(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBF78 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__,
      id,
      svtId,
      voiceId);
    byte_42EBF78 = 1;
  }
  PK = ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, (const MethodInfo *)voiceId);
  return (ServantVoicePatternEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantVoicePatternEntity__o *__fastcall ServantVoicePatternMaster__GetEntityList(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x10
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42EBF7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, id, svtId, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ServantVoicePatternEntity_TypeInfo, v25, v26, v27);
    byte_42EBF7A = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v29);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v42 + 8));
    if ( !v43 )
      goto LABEL_33;
    v45 = *(&ServantVoicePatternEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (ServantVoicePatternEntity_c *)v43->klass->_2.typeHierarchy[v45 - 1] != ServantVoicePatternEntity_TypeInfo )
    {
      sub_B5D990(v43);
LABEL_33:
      sub_B5D69C(v43, v44);
    }
    if ( v43->fields.missionTargetId == id && v43->fields.missionConditionDetailId == svtId )
    {
      if ( !v28 )
        sub_B5D69C(v43, ServantVoicePatternEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v43,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__);
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_ServantVoicePatternEntity__o *)v28;
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
    sub_B5D69C(0LL, v9);
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

  if ( (byte_42EBF79 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&svtId);
    byte_42EBF79 = 1;
  }
  PK = ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
}