void __fastcall EventDataLostBattleResetMaster___ctor(EventDataLostBattleResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B27BE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
    byte_42B27BE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    436,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
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
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  int32_t *v23; // x0
  __int64 v24; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x24
  __int64 v26; // x10
  _BOOL8 IsOpen; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_42B27BD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EventDataLostBattleResetEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
    byte_42B27BD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_19:
      v22 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v18);
    }
    v23 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                       Enumerator,
                       *(_QWORD *)(v22 + 8));
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
    if ( v23 )
    {
      v26 = *(&EventDataLostBattleResetEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) >= (unsigned int)v26
        && *(EventDataLostBattleResetEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v26 - 8) == EventDataLostBattleResetEntity_TypeInfo
        && v23[4] == dataLostBattleId
        && v23[6] == eventId )
      {
        if ( !Master_WarQuestSelectionMaster )
          sub_B52A5C(v23, v24);
        IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v23[7], 0LL, 0, 0LL);
        if ( IsOpen )
        {
          if ( !v8 )
            sub_B52A5C(IsOpen, v28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            v25,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
        }
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
        goto LABEL_34;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_34:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
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

  if ( (byte_42B27BF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
    byte_42B27BF = 1;
  }
  PK = EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, *(const MethodInfo **)&idx);
  return (EventDataLostBattleResetEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                               PK,
                                               (const MethodInfo_23E2728 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
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

  if ( (byte_42B27C0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
    byte_42B27C0 = 1;
  }
  PK = EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, *(const MethodInfo **)&dataLostBattleId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
}