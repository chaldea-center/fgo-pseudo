void __fastcall EventDataLostBattleResetMaster___ctor(EventDataLostBattleResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DDCF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
    byte_438DDCF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    436,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
}


System_Collections_Generic_List_EventDataLostBattleResetEntity__o *__fastcall EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t eventId,
        const MethodInfo *method)
{
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  int32_t *v21; // x0
  __int64 v22; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x24
  __int64 v24; // x10
  _BOOL8 IsOpen; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_438DDCE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&EventDataLostBattleResetEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
    byte_438DDCE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
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
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                       Enumerator,
                       *(_QWORD *)(v20 + 8));
    v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v21;
    if ( v21 )
    {
      v24 = *(&EventDataLostBattleResetEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) >= (unsigned int)v24
        && *(EventDataLostBattleResetEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v24 - 8) == EventDataLostBattleResetEntity_TypeInfo
        && v21[4] == dataLostBattleId
        && v21[6] == eventId )
      {
        if ( !Master_WarQuestSelectionMaster )
          sub_B7769C(v21, v22);
        IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v21[7], 0LL, 0, 0LL);
        if ( IsOpen )
        {
          if ( !v8 )
            sub_B7769C(IsOpen, v26);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            v23,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
        }
      }
    }
  }
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_34:
    v30 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_EventDataLostBattleResetEntity__o *)v8;
}


// local variable allocation has failed, the output may be wrong!
EventDataLostBattleResetEntity_o *__fastcall EventDataLostBattleResetMaster__GetEntity(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DDD0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
    byte_438DDD0 = 1;
  }
  PK = EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, *(const MethodInfo **)&idx);
  return (EventDataLostBattleResetEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventDataLostBattleResetMaster__TryGetEntity(
        EventDataLostBattleResetMaster_o *this,
        EventDataLostBattleResetEntity_o **entity,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438DDD1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
    byte_438DDD1 = 1;
  }
  PK = EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, *(const MethodInfo **)&dataLostBattleId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
}