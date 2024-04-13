void __fastcall EventServantFatigueMaster___ctor(EventServantFatigueMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC087 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC087 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    231,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string___ctor__);
}


EventServantFatigueEntity_array *__fastcall EventServantFatigueMaster__GetEntities(
        EventServantFatigueMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x11
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42EC088 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventServantFatigueEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantFatigueEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantFatigueEntity__TypeInfo, v27, v28, v29);
    byte_42EC088 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantFatigueEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantFatigueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v44 + 8));
    if ( v45 )
    {
      v47 = *(&EventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v47
        || (EventServantFatigueEntity_c *)v45->klass->_2.typeHierarchy[v47 - 1] != EventServantFatigueEntity_TypeInfo )
      {
        sub_B5D69C(v45, v46);
      }
      if ( v45->fields.missionTargetId == eventId )
      {
        if ( !v30 )
          sub_B5D69C(v45, v46);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          v45,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantFatigueEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_28:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v51 + 8));
  if ( !v30 )
LABEL_34:
    sub_B5D69C(list, v31);
  return (EventServantFatigueEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventServantFatigueEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantFatigueEntity_o *__fastcall EventServantFatigueMaster__GetEntity(
        EventServantFatigueMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EC085 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__GetEntity__,
      eventId,
      svtId,
      *(_QWORD *)&priority);
    byte_42EC085 = 1;
  }
  PK = EventServantFatigueEntity__CreatePK(eventId, svtId, priority, *(const MethodInfo **)&priority);
  return (EventServantFatigueEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantFatigueMaster__IsBonusFilterTarget(
        EventServantFatigueMaster_o *this,
        int32_t eventId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  _DWORD *v37; // x0
  __int64 v38; // x1
  _DWORD *v39; // x22
  __int64 v40; // x10
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v42; // x1
  bool v43; // w20
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  int v49; // [xsp+0h] [xbp-60h]

  if ( (byte_42EC089 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      svtId,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&EventServantFatigueEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    byte_42EC089 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_16:
      v36 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v37 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                      Enumerator,
                      *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( v37 )
    {
      v40 = *(&EventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v40
        || *(EventServantFatigueEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v40 - 8) != EventServantFatigueEntity_TypeInfo )
      {
        sub_B5D69C(v37, v38);
      }
      if ( v37[4] == eventId && v37[5] == svtId )
      {
        if ( !v37[8] )
          goto LABEL_29;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !Master_WarQuestSelectionMaster )
          sub_B5D69C(0LL, v42);
        if ( CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v39[8], 0LL, 0, 0LL) )
        {
LABEL_29:
          v49 = 103;
          v43 = 1;
          goto LABEL_31;
        }
      }
    }
  }
  v43 = 0;
  v49 = 101;
LABEL_31:
  v44 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_35:
    v47 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  if ( v49 == 101 )
    return 0;
  return v43;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantFatigueMaster__TryGetEntity(
        EventServantFatigueMaster_o *this,
        EventServantFatigueEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EC086 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&svtId);
    byte_42EC086 = 1;
  }
  PK = EventServantFatigueEntity__CreatePK(eventId, svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventServantFatigueMaster__EventServantFatigueEntity__string__TryGetEntity__);
}