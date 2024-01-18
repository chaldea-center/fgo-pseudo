void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185F3F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__, method);
    byte_4185F3F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    244,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *__fastcall ServantSkillReleaseMaster__GetEntitiyListGroup(
        ServantSkillReleaseMaster_o *this,
        ServantSkillEntity_o *servantSkillEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x19
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x0
  __int64 v33; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x22
  __int64 v35; // x9
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0

  if ( (byte_4185F41 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, servantSkillEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v15);
    sub_B2C35C(&ServantSkillReleaseEntity_TypeInfo, v16);
    byte_4185F41 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v31 + 8));
    v34 = v32;
    if ( !v32 )
      goto LABEL_39;
    v35 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (ServantSkillReleaseEntity_c *)v32->klass->_2.typeHierarchy[v35 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v32);
LABEL_39:
      sub_B2C434(v32, v33);
    }
    if ( !servantSkillEntity )
      sub_B2C434(v32, ServantSkillReleaseEntity_TypeInfo);
    if ( v32->fields.missionTargetId == servantSkillEntity->fields.svtId
      && v32->fields.missionConditionDetailId == servantSkillEntity->fields.num
      && v32->fields.targetId == servantSkillEntity->fields.priority )
    {
      if ( !v17 )
        sub_B2C434(v32, ServantSkillReleaseEntity_TypeInfo);
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v17,
             HIDWORD(v32[1].klass),
             (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v17,
                 HIDWORD(v34[1].klass),
                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_B2C434(0LL, v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
          v34,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
      }
      else
      {
        v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v38,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v38 )
          sub_B2C434(v39, v40);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v38,
          v34,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v17,
          HIDWORD(v34[1].klass),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v38,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_35:
    v44 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v17;
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

  if ( (byte_4185F3D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4185F3D = 1;
  }
  PK = ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantSkillReleaseEntity__o *__fastcall ServantSkillReleaseMaster__GetEntryListFromCondType(
        ServantSkillReleaseMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_4185F42 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v10);
    sub_B2C35C(&ServantSkillReleaseEntity_TypeInfo, v11);
    byte_4185F42 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_32;
    v29 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (ServantSkillReleaseEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.addCount == condType )
    {
      if ( !v12 )
        sub_B2C434(v27, ServantSkillReleaseEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v12;
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

  if ( (byte_4185F3E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4185F3E = 1;
  }
  PK = ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v15; // x1
  int32_t condGroup; // w20
  int32_t v17; // w27
  __int64 *lookup; // x0
  __int64 v19; // x9
  bool v20; // w25
  System_String_o *Primarykey; // x28
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x8
  void *v25; // x19
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x11
  __int64 v28; // x0
  const MethodInfo *v29; // x5
  ServantSkillReleaseEntity_o *v34; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4185F40 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantSkillReleaseEntity_TypeInfo, v15);
    byte_4185F40 = 1;
  }
  v34 = 0LL;
  condGroup = 0;
  v17 = 1;
  while ( 1 )
  {
    v20 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v17,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v24 = *lookup;
    v25 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v26 = 0LL;
      v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 2;
        if ( v26 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v28 = v24 + 16LL * (*(_DWORD *)v27 + 1) + 312;
    }
    else
    {
LABEL_17:
      v28 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v23);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v28)(
            v25,
            Primarykey,
            &v34,
            *(_QWORD *)(v28 + 8)) & 1) == 0 )
      return v20;
    lookup = (__int64 *)v34;
    if ( !v34 )
      goto LABEL_22;
    v19 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantSkillReleaseEntity_c *)v34->klass->_2.typeHierarchy[v19 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      lookup = (__int64 *)sub_B2C728(v34);
LABEL_22:
      sub_B2C434(lookup, v22);
    }
    ++v17;
    if ( condGroup == v34->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v20 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v34->fields.condGroup;
      if ( v20 )
        return v20;
LABEL_11:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v34,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v29);
    }
  }
}