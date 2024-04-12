void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE334 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
    byte_42AE334 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    245,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *__fastcall ServantSkillReleaseMaster__GetEntitiyListGroup(
        ServantSkillReleaseMaster_o *this,
        ServantSkillEntity_o *servantSkillEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x9
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_42AE336 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    sub_B52984(&ServantSkillReleaseEntity_TypeInfo);
    byte_42AE336 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
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
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_39;
    v23 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (ServantSkillReleaseEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_39:
      sub_B52A5C(v20, v21);
    }
    if ( !servantSkillEntity )
      sub_B52A5C(v20, ServantSkillReleaseEntity_TypeInfo);
    if ( v20->fields.missionTargetId == servantSkillEntity->fields.svtId
      && v20->fields.missionConditionDetailId == servantSkillEntity->fields.num
      && v20->fields.targetId == servantSkillEntity->fields.priority )
    {
      if ( !v5 )
        sub_B52A5C(v20, ServantSkillReleaseEntity_TypeInfo);
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5,
             HIDWORD(v20[1].klass),
             (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v5,
                 HIDWORD(v22[1].klass),
                 (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_B52A5C(0LL, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
      }
      else
      {
        v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v26,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v26 )
          sub_B52A5C(v27, v28);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v5,
          HIDWORD(v22[1].klass),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v26,
          (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_35:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v5;
}


// local variable allocation has failed, the output may be wrong!
ServantSkillReleaseEntity_o *__fastcall ServantSkillReleaseMaster__GetEntity(
        ServantSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE332 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
    byte_42AE332 = 1;
  }
  PK = ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantSkillReleaseEntity__o *__fastcall ServantSkillReleaseMaster__GetEntryListFromCondType(
        ServantSkillReleaseMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42AE337 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
    sub_B52984(&ServantSkillReleaseEntity_TypeInfo);
    byte_42AE337 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
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
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_32;
    v22 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (ServantSkillReleaseEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_32:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.addCount == condType )
    {
      if ( !v5 )
        sub_B52A5C(v20, ServantSkillReleaseEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillReleaseMaster__TryGetEntity(
        ServantSkillReleaseMaster_o *this,
        ServantSkillReleaseEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AE333 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
    byte_42AE333 = 1;
  }
  PK = ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillReleaseMaster__isUse(
        ServantSkillReleaseMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        bool isBaseResult,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int32_t condGroup; // w20
  int32_t v16; // w27
  __int64 *lookup; // x0
  __int64 v18; // x9
  bool v19; // w25
  System_String_o *Primarykey; // x28
  __int64 v21; // x1
  __int64 v22; // x3
  __int64 v23; // x8
  void *v24; // x19
  unsigned __int64 v25; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v26; // x11
  __int64 v27; // x0
  const MethodInfo *v28; // x5
  ServantSkillReleaseEntity_o *v33; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42AE335 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&ServantSkillReleaseEntity_TypeInfo);
    byte_42AE335 = 1;
  }
  v33 = 0LL;
  condGroup = 0;
  v16 = 1;
  while ( 1 )
  {
    v19 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v16,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v23 = *lookup;
    v24 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v25 = 0LL;
      v26 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 2;
        if ( v25 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v27 = v23 + 16LL * (*(_DWORD *)v26 + 1) + 312;
    }
    else
    {
LABEL_17:
      v27 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v22);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v27)(
            v24,
            Primarykey,
            &v33,
            *(_QWORD *)(v27 + 8)) & 1) == 0 )
      return v19;
    lookup = (__int64 *)v33;
    if ( !v33 )
      goto LABEL_22;
    v18 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (ServantSkillReleaseEntity_c *)v33->klass->_2.typeHierarchy[v18 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      lookup = (__int64 *)sub_B52D50(v33);
LABEL_22:
      sub_B52A5C(lookup, v21);
    }
    ++v16;
    if ( condGroup == v33->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v19 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v33->fields.condGroup;
      if ( v19 )
        return v19;
LABEL_11:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v33,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v28);
    }
  }
}