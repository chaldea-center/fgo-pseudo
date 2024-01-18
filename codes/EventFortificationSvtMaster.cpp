void __fastcall EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41890C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__, method);
    byte_41890C0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    385,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
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

  if ( (byte_41890C1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_41890C1 = 1;
  }
  PK = EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
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

  if ( (byte_41890C2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__,
      entity);
    byte_41890C2 = 1;
  }
  PK = EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationSvtMaster__TryGetEntityList(
        EventFortificationSvtMaster_o *this,
        System_Collections_Generic_List_EventFortificationSvtEntity__o **eventFortificationSvtList,
        int32_t eventId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  __int64 IsOpen; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x24
  __int64 v36; // x10
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_41890C3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventFortificationSvtList);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7);
    sub_B2C35C(&EventFortificationSvtEntity_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_41890C3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_17:
      v32 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
               Enumerator,
               *(_QWORD *)(v32 + 8));
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsOpen;
    if ( !IsOpen
      || (v36 = *(&EventFortificationSvtEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)IsOpen + 300LL) < (unsigned int)v36)
      || *(EventFortificationSvtEntity_c **)(*(_QWORD *)(*(_QWORD *)IsOpen + 200LL) + 8 * v36 - 8) != EventFortificationSvtEntity_TypeInfo )
    {
      sub_B2C434(IsOpen, v34);
    }
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v37 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v37 )
        goto LABEL_26;
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(IsOpen, v37);
      IsOpen = CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v37, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_26:
        if ( !v20 )
          sub_B2C434(IsOpen, v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v35,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
      }
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_32:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)eventFortificationSvtList,
    (System_Int32_array **)v20,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( !*eventFortificationSvtList )
LABEL_39:
    sub_B2C434(Instance, v18);
  return (*eventFortificationSvtList)->fields._size > 0;
}