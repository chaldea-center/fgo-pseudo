void __fastcall TotalEventRaidMaster___ctor(TotalEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189952 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__, method);
    byte_4189952 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    147,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaidEntity_o *__fastcall TotalEventRaidMaster__GetEntity(
        TotalEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189950 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4189950 = 1;
  }
  PK = TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalEventRaidEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__GetEntity__);
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

  if ( (byte_4189951 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__, entity);
    byte_4189951 = 1;
  }
  PK = TotalEventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_TotalEventRaidMaster__TotalEventRaidEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TotalEventRaidEntity__o *__fastcall TotalEventRaidMaster__TryGetEntityListFromDay(
        TotalEventRaidMaster_o *this,
        int32_t day,
        int64_t *maxHpSum,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t v21; // x24
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int32_t *v29; // x0
  __int64 v30; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x25
  __int64 v32; // x9
  __int64 v33; // x1
  _BOOL8 IsOpenTime; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189953 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&day);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&TotalEventRaidEntity_TypeInfo, v16);
    byte_4189953 = 1;
  }
  entity = 0LL;
  *maxHpSum = 0LL;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TotalEventRaidEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TotalEventRaidEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_47:
    sub_B2C434(Instance, v19);
  v21 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_14:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v42);
    }
    v29 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                       Enumerator,
                       *(_QWORD *)(v28 + 8));
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v29;
    if ( !v29 )
      goto LABEL_42;
    v32 = *(&TotalEventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) < (unsigned int)v32
      || *(TotalEventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v32 - 8) != TotalEventRaidEntity_TypeInfo )
    {
      v29 = (int32_t *)sub_B2C728(v29);
LABEL_42:
      sub_B2C434(v29, v30);
    }
    if ( v29[5] == day )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(v29, TotalEventRaidEntity_TypeInfo);
      if ( EventRaidMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v29[4], day, 0LL) )
      {
        if ( !entity )
          sub_B2C434(0LL, v33);
        IsOpenTime = EventRaidEntity__IsOpenTime(entity, v21, 0LL);
        if ( IsOpenTime )
        {
          if ( !v17 )
            sub_B2C434(IsOpenTime, v35);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            v31,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__Add__);
          if ( !entity )
            sub_B2C434(v36, v37);
          *maxHpSum += entity->fields.maxHp;
        }
      }
    }
  }
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_38:
    v46 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  return (System_Collections_Generic_List_TotalEventRaidEntity__o *)v17;
}