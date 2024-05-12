void __fastcall EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CBD3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
    byte_438CBD3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    386,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationSvtEntity_o *__fastcall EventFortificationSvtMaster__GetEntity(
        EventFortificationSvtMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438CBD4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
    byte_438CBD4 = 1;
  }
  PK = EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationSvtMaster__TryGetEntity(
        EventFortificationSvtMaster_o *this,
        EventFortificationSvtEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438CBD5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
    byte_438CBD5 = 1;
  }
  PK = EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationSvtMaster__TryGetEntityList(
        EventFortificationSvtMaster_o *this,
        System_Collections_Generic_List_EventFortificationSvtEntity__o **eventFortificationSvtList,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 IsOpen; // x0
  __int64 v22; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x24
  __int64 v24; // x10
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_438CBD6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&EventFortificationSvtEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438CBD6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v11);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
               Enumerator,
               *(_QWORD *)(v20 + 8));
    v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsOpen;
    if ( !IsOpen
      || (v24 = *(&EventFortificationSvtEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)IsOpen + 300LL) < (unsigned int)v24)
      || *(EventFortificationSvtEntity_c **)(*(_QWORD *)(*(_QWORD *)IsOpen + 200LL) + 8 * v24 - 8) != EventFortificationSvtEntity_TypeInfo )
    {
      sub_B7769C(IsOpen, v22);
    }
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v25 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v25 )
        goto LABEL_26;
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7769C(IsOpen, v25);
      IsOpen = CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v25, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_26:
        if ( !v10 )
          sub_B7769C(IsOpen, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          v23,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_32:
    v29 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)eventFortificationSvtList,
    (System_Int32_array **)v10,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !*eventFortificationSvtList )
LABEL_39:
    sub_B7769C(Instance, v8);
  return (*eventFortificationSvtList)->fields._size > 0;
}