void __fastcall EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41890B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__, method);
    byte_41890B6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    383,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationEntity_o *__fastcall EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41890B7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_41890B7 = 1;
  }
  PK = EventFortificationEntity__CreatePK(eventId, idx, 0LL);
  return (EventFortificationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationMaster__IsFortificationEvent(
        EventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x10
  bool v23; // w20
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-40h]

  if ( (byte_41890BA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventFortificationEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_41890BA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
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
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v22 = *(&EventFortificationEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) >= (unsigned int)v22
        && *(EventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v22 - 8) == EventFortificationEntity_TypeInfo
        && v21[4] == eventId )
      {
        v29 = 64;
        v23 = 1;
        goto LABEL_24;
      }
    }
  }
  v23 = 0;
  v29 = 62;
LABEL_24:
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 62 )
    return 0;
  return v23;
}


bool __fastcall EventFortificationMaster__TryGetEntity(
        EventFortificationMaster_o *this,
        EventFortificationEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_41890B8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_41890B8 = 1;
  }
  PK = EventFortificationEntity__CreatePK(eventId, idx, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationMaster__TryGetEntityList(
        EventFortificationMaster_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o **entities,
        int32_t evenId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x0
  __int64 v39; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x22
  __int64 v41; // x10
  WebViewManager_o *Instance; // x0
  __int64 v43; // x1
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_41890B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entities);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7);
    sub_B2C35C(&EventFortificationEntity_TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_41890B9 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)entities, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v26);
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
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_16:
      v37 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38
      || (v41 = *(&EventFortificationEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v41)
      || (EventFortificationEntity_c *)v38->klass->_2.typeHierarchy[v41 - 1] != EventFortificationEntity_TypeInfo )
    {
      sub_B2C434(v38, v39);
    }
    if ( v38->fields.missionTargetId == evenId )
    {
      if ( !v38[1].fields.missionConditionDetailId )
        goto LABEL_26;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v43);
      MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(0LL, v45);
      if ( CommonReleaseMaster__IsOpen(
             MasterData_WarQuestSelectionMaster,
             v40[1].fields.missionConditionDetailId,
             0LL,
             0,
             0LL) )
      {
LABEL_26:
        if ( !*entities )
          sub_B2C434(0LL, v39);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entities,
          v40,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationEntity__Add__);
      }
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_32:
    v49 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v49 + 8));
  if ( !*entities )
LABEL_40:
    sub_B2C434(list, v24);
  return (*entities)->fields._size > 0;
}