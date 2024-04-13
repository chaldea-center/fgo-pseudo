void __fastcall ServantSkillReleaseMaster___ctor(ServantSkillReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6DA5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6DA5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    245,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string___ctor__);
}


System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *__fastcall ServantSkillReleaseMaster__GetEntitiyListGroup(
        ServantSkillReleaseMaster_o *this,
        ServantSkillEntity_o *servantSkillEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v42; // x19
  __int64 v43; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x0
  __int64 v58; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x22
  __int64 v60; // x9
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v62; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x23
  __int64 v64; // x0
  __int64 v65; // x1
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0

  if ( (byte_42E6DA7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)servantSkillEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&ServantSkillReleaseEntity_TypeInfo, v39, v40, v41);
    byte_42E6DA7 = 1;
  }
  v42 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v42,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v43);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_16:
      v56 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v52);
    }
    v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v56 + 8));
    v59 = v57;
    if ( !v57 )
      goto LABEL_39;
    v60 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v60
      || (ServantSkillReleaseEntity_c *)v57->klass->_2.typeHierarchy[v60 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v57);
LABEL_39:
      sub_B5D69C(v57, v58);
    }
    if ( !servantSkillEntity )
      sub_B5D69C(v57, ServantSkillReleaseEntity_TypeInfo);
    if ( v57->fields.missionTargetId == servantSkillEntity->fields.svtId
      && v57->fields.missionConditionDetailId == servantSkillEntity->fields.num
      && v57->fields.targetId == servantSkillEntity->fields.priority )
    {
      if ( !v42 )
        sub_B5D69C(v57, ServantSkillReleaseEntity_TypeInfo);
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v42,
             HIDWORD(v57[1].klass),
             (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v42,
                 HIDWORD(v59[1].klass),
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___get_Item__);
        if ( !Item )
          sub_B5D69C(0LL, v62);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
          v59,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
      }
      else
      {
        v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v63,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
        if ( !v63 )
          sub_B5D69C(v64, v65);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v63,
          v59,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v42,
          HIDWORD(v59[1].klass),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v63,
          (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___Add__);
      }
    }
  }
  v66 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_35:
    v69 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v52);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(Enumerator, *(_QWORD *)(v69 + 8));
  return (System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *)v42;
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

  if ( (byte_42E6DA3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42E6DA3 = 1;
  }
  PK = ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&idx);
  return (ServantSkillReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantSkillReleaseEntity__o *__fastcall ServantSkillReleaseMaster__GetEntryListFromCondType(
        ServantSkillReleaseMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E6DA8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      condType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantSkillReleaseEntity_TypeInfo, v24, v25, v26);
    byte_42E6DA8 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_32;
    v44 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (ServantSkillReleaseEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v42);
LABEL_32:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.addCount == condType )
    {
      if ( !v27 )
        sub_B5D69C(v42, ServantSkillReleaseEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__Add__);
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_ServantSkillReleaseEntity__o *)v27;
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

  if ( (byte_42E6DA4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42E6DA4 = 1;
  }
  PK = ServantSkillReleaseEntity__CreatePK(svtId, num, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantSkillReleaseMaster__ServantSkillReleaseEntity__string__TryGetEntity__);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t condGroup; // w20
  int32_t v19; // w27
  __int64 *lookup; // x0
  __int64 v21; // x9
  bool v22; // w25
  System_String_o *Primarykey; // x28
  __int64 v24; // x1
  __int64 v25; // x3
  __int64 v26; // x8
  void *v27; // x19
  unsigned __int64 v28; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v29; // x11
  __int64 v30; // x0
  const MethodInfo *v31; // x5
  ServantSkillReleaseEntity_o *v36; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E6DA6 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      svtId,
      num,
      *(_QWORD *)&priority);
    sub_B5D5C4(&ServantSkillReleaseEntity_TypeInfo, v15, v16, v17);
    byte_42E6DA6 = 1;
  }
  v36 = 0LL;
  condGroup = 0;
  v19 = 1;
  while ( 1 )
  {
    v22 = isBaseResult;
    Primarykey = ServantSkillReleaseEntity__getCreatePrimarykey(
                   svtId,
                   num,
                   priority,
                   v19,
                   *(const MethodInfo **)&dispLimitCount);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_22;
    v26 = *lookup;
    v27 = lookup;
    if ( *(_WORD *)(*lookup + 298) )
    {
      v28 = 0LL;
      v29 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 2;
        if ( v28 >= *(unsigned __int16 *)(*lookup + 298) )
          goto LABEL_17;
      }
      v30 = v26 + 16LL * (*(_DWORD *)v29 + 1) + 312;
    }
    else
    {
LABEL_17:
      v30 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              1LL,
              v25);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, ServantSkillReleaseEntity_o **, _QWORD))v30)(
            v27,
            Primarykey,
            &v36,
            *(_QWORD *)(v30 + 8)) & 1) == 0 )
      return v22;
    lookup = (__int64 *)v36;
    if ( !v36 )
      goto LABEL_22;
    v21 = *(&ServantSkillReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (ServantSkillReleaseEntity_c *)v36->klass->_2.typeHierarchy[v21 - 1] != ServantSkillReleaseEntity_TypeInfo )
    {
      lookup = (__int64 *)sub_B5D990(v36);
LABEL_22:
      sub_B5D69C(lookup, v24);
    }
    ++v19;
    if ( condGroup == v36->fields.condGroup )
    {
      isBaseResult = 0;
      if ( v22 )
        goto LABEL_11;
    }
    else
    {
      condGroup = v36->fields.condGroup;
      if ( v22 )
        return v22;
LABEL_11:
      isBaseResult = ServantSkillReleaseEntity__isUse(
                       v36,
                       dispLimitCount,
                       beforeClearQuestId,
                       specificLimitCount,
                       userSvtId,
                       v31);
    }
  }
}