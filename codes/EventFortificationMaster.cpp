void __fastcall EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1DC3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
    byte_42B1DC3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    384,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


EventFortificationEntity_o *__fastcall EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1DC4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
    byte_42B1DC4 = 1;
  }
  PK = EventFortificationEntity__CreatePK(eventId, idx, 0LL);
  return (EventFortificationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationMaster__IsFortificationEvent(
        EventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x10
  bool v19; // w20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-40h]

  if ( (byte_42B1DC7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventFortificationEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B1DC7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      v18 = *(&EventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) >= (unsigned int)v18
        && *(EventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v18 - 8) == EventFortificationEntity_TypeInfo
        && v17[4] == eventId )
      {
        v25 = 64;
        v19 = 1;
        goto LABEL_24;
      }
    }
  }
  v19 = 0;
  v25 = 62;
LABEL_24:
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_28:
    v23 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( v25 == 62 )
    return 0;
  return v19;
}


bool __fastcall EventFortificationMaster__TryGetEntity(
        EventFortificationMaster_o *this,
        EventFortificationEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1DC5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
    byte_42B1DC5 = 1;
  }
  PK = EventFortificationEntity__CreatePK(eventId, idx, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationMaster__TryGetEntityList(
        EventFortificationMaster_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o **entities,
        int32_t evenId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  __int64 v29; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x22
  __int64 v31; // x10
  WebViewManager_o *Instance; // x0
  __int64 v33; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_42B1DC6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&EventFortificationEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1DC6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v7;
  sub_B52920((BattleServantConfConponent_o *)entities, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    v30 = v28;
    if ( !v28
      || (v31 = *(&EventFortificationEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v31)
      || (EventFortificationEntity_c *)v28->klass->_2.typeHierarchy[v31 - 1] != EventFortificationEntity_TypeInfo )
    {
      sub_B52A5C(v28, v29);
    }
    if ( v28->fields.missionTargetId == evenId )
    {
      if ( !v28[1].fields.missionConditionDetailId )
        goto LABEL_26;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v33);
      MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B52A5C(0LL, v35);
      if ( CommonReleaseMaster__IsOpen(
             MasterData_WarQuestSelectionMaster,
             v30[1].fields.missionConditionDetailId,
             0LL,
             0,
             0LL) )
      {
LABEL_26:
        if ( !*entities )
          sub_B52A5C(0LL, v29);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entities,
          v30,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventFortificationEntity__Add__);
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v39 + 8));
  if ( !*entities )
LABEL_40:
    sub_B52A5C(list, v14);
  return (*entities)->fields._size > 0;
}