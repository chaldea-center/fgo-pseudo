void __fastcall TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D5F0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
    byte_438D5F0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    148,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *__fastcall TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D5EE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
    byte_438D5EE = 1;
  }
  PK = TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_21FBCE4 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventRaidMaster__TryGetEntity(
        TotalEventRaidMaster_o *this,
        TotalEventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438D5EF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
    byte_438D5EF = 1;
  }
  PK = TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_TotalEventRaidEntity__o *__fastcall TotalEventRaidMaster__TryGetEntityListFromDay(
        TotalEventRaidMaster_o *this,
        int32_t day,
        int64_t *maxHpSum,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t v11; // x24
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  int32_t *v18; // x0
  __int64 v19; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x25
  __int64 v21; // x9
  __int64 v22; // x1
  _BOOL8 IsOpenTime; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438D5F1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TotalEventRaidEntity_TypeInfo);
    byte_438D5F1 = 1;
  }
  entity = 0LL;
  *maxHpSum = 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_47:
    sub_B7769C(Instance, v9);
  v11 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_14:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                       Enumerator,
                       *(_QWORD *)(v17 + 8));
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18;
    if ( !v18 )
      goto LABEL_42;
    v21 = *(&TotalEventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v21
      || *(TotalEventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v21 - 8) != TotalEventRaidEntity_TypeInfo )
    {
      sub_B77990(v18);
LABEL_42:
      sub_B7769C(v18, v19);
    }
    if ( v18[5] == day )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7769C(v18, TotalEventRaidEntity_TypeInfo);
      if ( EventRaidMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v18[4], day, 0LL) )
      {
        if ( !entity )
          sub_B7769C(0LL, v22);
        IsOpenTime = EventRaidEntity__IsOpenTime(entity, v11, 0LL);
        if ( IsOpenTime )
        {
          if ( !v7 )
            sub_B7769C(IsOpenTime, v24);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            v20,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__);
          if ( !entity )
            sub_B7769C(v25, v26);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_38:
    v34 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v7;
}