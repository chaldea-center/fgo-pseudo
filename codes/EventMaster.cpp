void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8872 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_40F8872 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    65,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_22499244; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  unsigned int v13; // w22
  EventEntity_o *v14; // x8
  int32_t id; // w21
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40F887E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F887E = 1;
  }
  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_22499244 )
    goto LABEL_15;
  max_length = EntityList_22499244->max_length;
  if ( max_length >= 1 )
  {
    v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v9, v10);
        sub_B170A0();
      }
      v14 = EntityList_22499244->m_Items[v13];
      if ( !v14 )
        break;
      if ( !v12 )
        break;
      id = v14->fields.id;
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v12,
                                        id,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Entity )
        break;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventDetailEntity__isBP(Entity, 0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        return id;
      max_length = EntityList_22499244->max_length;
      if ( (int)++v13 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  const MethodInfo *v10; // x4
  int64_t EntityList_22499244; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int v14; // w8
  int64_t v15; // x20
  unsigned int v16; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21

  if ( (byte_40F8889 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40F8889 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_22499244 = (int64_t)EventMaster__GetEntityList_22499244(this, 23, 0, 1, v10);
  if ( !EntityList_22499244 )
    goto LABEL_16;
  v14 = *(_DWORD *)(EntityList_22499244 + 24);
  v15 = EntityList_22499244;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
      {
        sub_B17100(EntityList_22499244, v12, v13);
        sub_B170A0();
      }
      v17 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v15 + 8LL * (int)v16 + 32);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      EntityList_22499244 = NetworkManager__getTime(0LL);
      if ( !v17 )
        break;
      if ( EntityList_22499244 >= (__int64)v17[2].monitor )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v17,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
      }
      v14 = *(_DWORD *)(v15 + 24);
      if ( (int)++v16 >= v14 )
        return (System_Collections_Generic_List_EventEntity__o *)v9;
    }
LABEL_16:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventEntity__o *)v9;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_22499244(this, eventType, 1, isFinishedAt, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  bool v17; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *EntityList_22499244; // x0

  if ( (byte_40F8874 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity____TypeInfo, v9);
    byte_40F8874 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity____TypeInfo,
                                                                                                  eventTypes,
                                                                                                  isFinishedAt,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_11;
  v15 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    v17 = isFinishedAt;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      EntityList_22499244 = (EventMissionProgressRequest_Argument_ProgressData_o *)EventMaster__GetEntityList_22499244(
                                                                                     this,
                                                                                     eventTypes->m_Items[v16 + 1],
                                                                                     1,
                                                                                     v17,
                                                                                     v14);
      if ( !v10 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        EntityList_22499244,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity____Add__);
      LODWORD(v15) = eventTypes->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        return (System_Collections_Generic_List_EventEntity____o *)v10;
    }
LABEL_11:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventEntity____o *)v10;
}


EventEntity_array *__fastcall EventMaster__GetEnableExistEventRewardEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRewardSceneMaster_o *v19; // x21
  int32_t Count; // w0
  int32_t v21; // w22
  int32_t v22; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x24
  __int64 v26; // x10
  EventRewardSceneEntity_array *EntityList; // x0

  if ( (byte_40F8887 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_B16FFC(&EventEntity_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F8887 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v19 = (EventRewardSceneMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v22,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v26 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (EventEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      if ( EventEntity__IsOpen((EventEntity_o *)Item, 1, 0LL) )
      {
        if ( !v19 )
          break;
        EntityList = EventRewardSceneMaster__GetEntityList(v19, v25->fields.missionTargetId, 0LL);
        if ( EntityList )
        {
          if ( *(_QWORD *)&EntityList->max_length )
          {
            if ( !v16 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              v25,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v22 >= v21 )
        goto LABEL_21;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_21:
  if ( !v16 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_22499244(this, 24, 1, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEnabledEntityListFromIds(
        EventMaster_o *this,
        int32_t eventType,
        System_Collections_Generic_List_int__o *ids,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w24
  int32_t i; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  int32_t *Item; // x0
  EventEntity_o *v22; // x26
  __int64 v23; // x10

  if ( (byte_40F8875 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_40F8875 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventType,
                                                                                                  ids,
                                                                                                  checkTime,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    for ( i = 0; i < v18; ++i )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        goto LABEL_22;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v20,
                          i,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = (EventEntity_o *)Item;
        v23 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v23
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v23 - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_22;
          if ( System_Collections_Generic_List_int___Remove(
                 ids,
                 Item[4],
                 (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__)
            && (eventType < 1 || v22->fields.type == eventType) )
          {
            if ( checkTime )
            {
              if ( EventEntity__IsOpen_29427156(v22, checkTime, 1, 0LL) )
                goto LABEL_16;
            }
            else if ( EventEntity__IsOpen(v22, 1, 0LL) )
            {
LABEL_16:
              if ( !v15 )
                goto LABEL_22;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v15,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
            }
          }
        }
      }
    }
  }
  if ( !v15 )
LABEL_22:
    sub_B170D4();
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_22499244(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_22499244(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w23
  int32_t v19; // w24
  bool v20; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x26
  __int64 v24; // x10

  v6 = isOpenGet;
  if ( (byte_40F8876 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&EventEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_40F8876 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventType,
                                                                                                  isOpenGet,
                                                                                                  isFinishedAt,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    v20 = isFinishedAt;
    while ( 1 )
    {
      v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v21 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v21,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v24 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(Item[1].monitor) == eventType)
          && (!v6 || EventEntity__IsOpen((EventEntity_o *)Item, v20, 0LL) || !v6) )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v23,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F888C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_40F888C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return (int64_t)entity->fields.coordinate;
LABEL_12:
    sub_B170D4();
  }
  return -1LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o **p_name; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8883 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F8883 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B170D4();
    p_name = &entity->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_name;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventShortName(
        EventMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o **p_longName; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8884 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F8884 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B170D4();
    p_longName = &entity->fields.longName;
  }
  else
  {
    p_longName = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_longName;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventStartedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F888B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_40F888B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_WarQuestSelectionMaster
    && (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   eventId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
  {
    return Entity->fields.targetId;
  }
  else
  {
    return -1LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventMaster__GetEventValUpEventIdList(
        EventMaster_o *this,
        bool isFinish,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventEntity_array *FilterEnableEntityList; // x0
  EventEntity_array *v13; // x19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_int__o *v20; // x20
  _BOOL8 IsBonusSkill; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  __int64 v25; // x22
  EventEntity_o *v26; // x26
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40F8881 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F8881 = 1;
  }
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, method);
  if ( !FilterEnableEntityList )
    goto LABEL_20;
  v13 = FilterEnableEntityList;
  if ( !*(_QWORD *)&FilterEnableEntityList->max_length )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
      {
        sub_B17100(IsBonusSkill, v22, v23);
        sub_B170A0();
      }
      v26 = v13->m_Items[v25];
      if ( !v26 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v26->fields.id,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Entity )
        break;
      IsBonusSkill = EventDetailEntity__IsBonusSkill(Entity, 0LL);
      if ( IsBonusSkill )
      {
        if ( !v20 )
          break;
        System_Collections_Generic_List_int___Add(
          v20,
          v26->fields.id,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v13->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_16;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_16:
  if ( !v20 )
    goto LABEL_20;
  if ( v20->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v20,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w24
  int32_t v41; // w25
  bool v42; // w23
  int32_t type; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v45; // x0
  EventEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x26
  __int64 v48; // x10
  EventMaster___c_c *v49; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v52; // x22
  struct EventMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  EventMaster___c_c *v64; // x0
  struct EventMaster___c_StaticFields *v65; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_1; // x21
  Il2CppObject *v67; // x22
  struct EventMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x2
  WarBoardManager_TaskList_array *v76; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8877 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_EventEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFilterMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&EventEntity___TypeInfo, v10);
    sub_B16FFC(&EventEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v19);
    sub_B16FFC(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v20);
    sub_B16FFC(&EventMaster___c_TypeInfo, v21);
    byte_40F8877 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v40 = Count;
    v41 = 0;
    v42 = isFinishedAt;
    do
    {
      v45 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v45 )
        goto LABEL_45;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                v45,
                                v41,
                                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v48 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v48
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v48 - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( (type == 22 || type == 12) && EventEntity__IsOpen(Item, v42, 0LL) )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_45;
            if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    v47->fields.missionTargetId,
                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__) )
              goto LABEL_16;
            if ( !entity )
              goto LABEL_45;
            if ( !EventFilterEntity__IsOpen((EventFilterEntity_o *)entity, 0LL) )
              continue;
            if ( !entity )
              goto LABEL_45;
            if ( !System_String__IsNullOrEmpty(entity->fields.name, 0LL) )
            {
              if ( !v33 )
                goto LABEL_45;
              v44 = v33;
            }
            else
            {
LABEL_16:
              if ( !v28 )
                goto LABEL_45;
              v44 = v28;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              v47,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
    }
    while ( ++v41 < v40 );
  }
  v49 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v49 = EventMaster___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventEntity__TypeInfo,
                                                                          v36,
                                                                          v37,
                                                                          v38,
                                                                          v39);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v52,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v53 = EventMaster___c_TypeInfo->static_fields;
    v53->__9__7_0 = (struct System_Comparison_EventEntity__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v53->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v28 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v64 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v64 = EventMaster___c_TypeInfo;
  }
  v65 = v64->static_fields;
  _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v65->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v65 = EventMaster___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)v65->__9;
    _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventEntity__TypeInfo,
                                                                          v60,
                                                                          v61,
                                                                          v62,
                                                                          v63);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_1,
      v67,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v68 = EventMaster___c_TypeInfo->static_fields;
    v68->__9__7_1 = (struct System_Comparison_EventEntity__o *)_9__7_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v68->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v33 )
LABEL_45:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v33,
    (System_Comparison_T__o *)_9__7_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v76 = (WarBoardManager_TaskList_array *)sub_B17014(
                                            EventEntity___TypeInfo,
                                            (unsigned int)(v33->fields._size + v28->fields._size),
                                            v75);
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v28,
    v76,
    0,
    (const MethodInfo_2F264E8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v33,
    v76,
    v28->fields._size,
    (const MethodInfo_2F264E8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v76;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_22499244; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  __int64 v7; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v10; // x11
  int64_t finishedAt; // x11

  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 24, 1, 1, v2);
  if ( !EntityList_22499244 )
    return -1LL;
  max_length = EntityList_22499244->max_length;
  if ( max_length < 1 )
    return -1LL;
  v7 = 0LL;
  m_Items = EntityList_22499244->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v7 >= max_length )
    {
      sub_B17100(result, v4, v5);
      sub_B170A0();
    }
    v10 = m_Items[v7];
    if ( !v10 )
      sub_B170D4();
    finishedAt = v10->fields.finishedAt;
    ++v7;
    if ( result < finishedAt )
      result = finishedAt;
  }
  while ( (int)v7 < max_length );
  return result;
}


EventEntity_array *__fastcall EventMaster__GetOpenedEventEntityList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v36; // x0
  WarQuestSelectionMaster_o *v37; // x0
  ShopMaster_o *v38; // x25
  int32_t Count; // w0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w26
  int32_t v45; // w27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  EventEntity_o *v48; // x28
  __int64 v49; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x0
  EventMaster___c_c *v51; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x22
  Il2CppObject *v54; // x23
  struct EventMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  EventMaster___c_c *v66; // x0
  struct EventMaster___c_StaticFields *v67; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_1; // x22
  Il2CppObject *v69; // x23
  struct EventMaster___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  EventMaster___c_c *v81; // x0
  struct EventMaster___c_StaticFields *v82; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_2; // x22
  Il2CppObject *v84; // x23
  struct EventMaster___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // [xsp+8h] [xbp-78h]
  int64_t nowTime; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v100; // [xsp+18h] [xbp-68h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v101; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F8885 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Comparison_EventEntity___ctor__, v4);
    sub_B16FFC(&System_Comparison_EventEntity__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&EventEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v18);
    sub_B16FFC(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v19);
    sub_B16FFC(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v20);
    sub_B16FFC(&EventMaster___c_TypeInfo, v21);
    byte_40F8885 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  nowTime = NetworkManager__getTime(0LL);
  v101 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                                   System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                   v22,
                                                                                   v23,
                                                                                   v24,
                                                                                   v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v101,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v100 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                                   System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                   v26,
                                                                                   v27,
                                                                                   v28,
                                                                                   v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v98,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v36 )
    goto LABEL_59;
  v37 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v36,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_59;
  v38 = (ShopMaster_o *)v37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v44 = Count;
    v45 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          v45,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v48 = (EventEntity_o *)Item;
      v49 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v49
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v49 - 8) != EventEntity_TypeInfo
        || !v38 )
      {
        break;
      }
      if ( ShopMaster__IsEnableEventShop(v38, Item[4], 0LL) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                v48->fields.id,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          goto LABEL_21;
        if ( !entity )
          break;
        if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
        {
LABEL_21:
          if ( EventEntity__IsOpen(v48, 0, 0LL) )
          {
            v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v101;
            if ( !v101 )
              break;
          }
          else if ( EventEntity__IsExchangePeriod(v48, nowTime, 0LL) )
          {
            v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100;
            if ( !v100 )
              break;
          }
          else
          {
            v50 = v98;
            if ( !v98 )
              break;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v50,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
        }
      }
      if ( ++v45 >= v44 )
        goto LABEL_30;
    }
LABEL_59:
    sub_B170D4();
  }
LABEL_30:
  v51 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v51 = EventMaster___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v40,
                                                                           v41,
                                                                           v42,
                                                                           v43);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v54,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v55 = EventMaster___c_TypeInfo->static_fields;
    v55->__9__22_0 = (struct System_Comparison_EventEntity__o *)_9__22_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v55->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !v101 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v101,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v66 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v66 = EventMaster___c_TypeInfo;
  }
  v67 = v66->static_fields;
  _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v67->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v67 = EventMaster___c_TypeInfo->static_fields;
    }
    v69 = (Il2CppObject *)v67->__9;
    _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v62,
                                                                           v63,
                                                                           v64,
                                                                           v65);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_1,
      v69,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v70 = EventMaster___c_TypeInfo->static_fields;
    v70->__9__22_1 = (struct System_Comparison_EventEntity__o *)_9__22_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v70->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  if ( !v100 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v100,
    (System_Comparison_T__o *)_9__22_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v81 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v81 = EventMaster___c_TypeInfo;
  }
  v82 = v81->static_fields;
  _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v82->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v81);
      v82 = EventMaster___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v82->__9;
    _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v77,
                                                                           v78,
                                                                           v79,
                                                                           v80);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_2,
      v84,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v85 = EventMaster___c_TypeInfo->static_fields;
    v85->__9__22_2 = (struct System_Comparison_EventEntity__o *)_9__22_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v85->__9__22_2,
      (System_Int32_array **)_9__22_2,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  if ( !v98 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v98,
    (System_Comparison_T__o *)_9__22_2,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v92,
                                                                                                  v93,
                                                                                                  v94,
                                                                                                  v95);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v96,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  if ( !v96 )
    goto LABEL_59;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v96,
    (System_Collections_Generic_IEnumerable_T__o *)v101,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v96,
    (System_Collections_Generic_IEnumerable_T__o *)v100,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v96,
    (System_Collections_Generic_IEnumerable_T__o *)v98,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v96,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v9; // x19

  if ( (byte_40F8878 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8878 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( EventDetailEntity__IsEventPoint(Entity, 0LL) )
      LODWORD(Entity) = v9->fields.pointImageId;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t __fastcall EventMaster__GetRaidEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_22499244; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  unsigned int v13; // w22
  EventEntity_o *v14; // x8
  int32_t id; // w21
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40F887D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F887D = 1;
  }
  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_22499244 )
    goto LABEL_15;
  max_length = EntityList_22499244->max_length;
  if ( max_length >= 1 )
  {
    v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v9, v10);
        sub_B170A0();
      }
      v14 = EntityList_22499244->m_Items[v13];
      if ( !v14 )
        break;
      if ( !v12 )
        break;
      id = v14->fields.id;
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v12,
                                        id,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Entity )
        break;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventDetailEntity__IsRaid(Entity, 0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        return id;
      max_length = EntityList_22499244->max_length;
      if ( (int)++v13 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v9; // x19

  if ( (byte_40F8879 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8879 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( EventDetailEntity__IsRaid(Entity, 0LL) )
      LODWORD(Entity) = v9->fields.pointImageId;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetSortedEntityList(
        EventMaster_o *this,
        GameEventType_TYPE_array *types,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  GameEventType_TYPE_array *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  __int64 v17; // x3
  const MethodInfo *v18; // x4
  __int64 v19; // x8
  unsigned __int64 v20; // x22
  System_Collections_Generic_IEnumerable_T__o *EntityList_22499244; // x0
  EventMaster___c_c *v22; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v25; // x21
  struct EventMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v5 = types;
  if ( (byte_40F887C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventEntity___ctor__, types);
    sub_B16FFC(&System_Comparison_EventEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v11);
    sub_B16FFC(&GameEventType_TYPE___TypeInfo, v12);
    sub_B16FFC(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v13);
    sub_B16FFC(&EventMaster___c_TypeInfo, v14);
    byte_40F887C = 1;
  }
  if ( !v5 )
  {
    v15 = sub_B17014(GameEventType_TYPE___TypeInfo, 1LL, method);
    if ( !v15 )
      goto LABEL_23;
    v5 = (GameEventType_TYPE_array *)v15;
    if ( !*(_DWORD *)(v15 + 24) )
      goto LABEL_22;
    *(_DWORD *)(v15 + 32) = 12;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  types,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v19 = *(_QWORD *)&v5->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( v20 < (unsigned int)v19 )
    {
      EntityList_22499244 = (System_Collections_Generic_IEnumerable_T__o *)EventMaster__GetEntityList_22499244(
                                                                             this,
                                                                             v5->m_Items[v20 + 1],
                                                                             0,
                                                                             1,
                                                                             v18);
      if ( !v16 )
        goto LABEL_23;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        EntityList_22499244,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v19) = v5->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_12;
    }
LABEL_22:
    sub_B17100(v15, types, method);
    sub_B170A0();
  }
LABEL_12:
  v22 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v22 = EventMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           types,
                                                                           method,
                                                                           v17,
                                                                           v18);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v25,
      Method_EventMaster___c__GetSortedEntityList_b__12_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventEntity___ctor__);
    v26 = EventMaster___c_TypeInfo->static_fields;
    v26->__9__12_0 = (struct System_Comparison_EventEntity__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v16 )
LABEL_23:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v16;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_22499244; // x19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v11; // x0
  QuestGroupMaster_o *v12; // x21
  WebViewManager_o *v13; // x0
  WarQuestSelectionMaster_o *isBP; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int max_length; // w8
  QuestMaster_o *v18; // x22
  unsigned int v19; // w24
  EventEntity_o *v20; // x8
  int32_t id; // w23
  EventDetailEntity_o *Entity; // x0
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0

  if ( (byte_40F887F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F887F = 1;
  }
  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 12, 1, 0, v2);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v12 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v11,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        (v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (isBP = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)v13,
                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_22499244) )
  {
LABEL_20:
    sub_B170D4();
  }
  max_length = EntityList_22499244->max_length;
  if ( max_length < 1 )
    return 0;
  v18 = (QuestMaster_o *)isBP;
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= max_length )
    {
      sub_B17100(isBP, v15, v16);
      sub_B170A0();
    }
    v20 = EntityList_22499244->m_Items[v19];
    if ( !v20 )
      goto LABEL_20;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_20;
    id = v20->fields.id;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      id,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_20;
    isBP = (WarQuestSelectionMaster_o *)EventDetailEntity__isBP(Entity, 0LL);
    if ( ((unsigned __int8)isBP & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_20;
      ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(v12, id, 1, 0LL);
      if ( !v18 )
        goto LABEL_20;
      isBP = (WarQuestSelectionMaster_o *)QuestMaster__CheckBpEnabled(v18, ListOfQuestIdByGroupId, 0LL);
      if ( ((unsigned __int8)isBP & 1) != 0 )
        return 1;
    }
    max_length = EntityList_22499244->max_length;
    if ( (int)++v19 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  EventEntity_o *Entity; // x0

  if ( (byte_40F8880 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_40F8880 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              BPEnableEventId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_B170D4();
  return EventEntity__IsOpen_29427156(Entity, checkTime, 0, 0LL);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_22499244; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  unsigned int v15; // w22
  EventEntity_o *v16; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8882 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8882 = 1;
  }
  entity = 0LL;
  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EntityList_22499244) )
  {
LABEL_16:
    sub_B170D4();
  }
  max_length = EntityList_22499244->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
      sub_B170A0();
    }
    v16 = EntityList_22499244->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                        v14,
                                                                        &entity,
                                                                        v16->fields.id,
                                                                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_16;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventDetailEntity__HasFlag(
                                                                          (EventDetailEntity_o *)entity,
                                                                          flag,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        return 1;
    }
    max_length = EntityList_22499244->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0

  if ( (byte_40F888A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_40F888A = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              eventId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, 0LL, 0LL);
}


bool __fastcall EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x20
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v13; // x0
  WarQuestSelectionMaster_o *v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  EventEntity_o *v21; // x25
  __int64 v22; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8886 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&EventEntity_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F8886 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___),
        (v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v14 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v13,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !this->fields.list) )
  {
LABEL_28:
    sub_B170D4();
  }
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)v14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v18,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_28;
    v21 = (EventEntity_o *)Item;
    v22 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v22
      || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v22 - 8) != EventEntity_TypeInfo
      || !MasterData_WarQuestSelectionMaster )
    {
      goto LABEL_28;
    }
    if ( ShopMaster__IsEnableEventShop(MasterData_WarQuestSelectionMaster, Item[4], 0LL) )
    {
      if ( !v15 )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v15,
              &entity,
              v21->fields.id,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_23;
      if ( !entity )
        goto LABEL_28;
      if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
      {
LABEL_23:
        if ( (EventEntity__IsOpen(v21, 0, 0LL) || EventEntity__IsExchangePeriod(v21, Time, 0LL))
          && !EventEntity__IsClosePurchaseShop(v21, 0LL) )
        {
          return 1;
        }
      }
    }
    if ( ++v18 >= v17 )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_22499244; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  unsigned int v15; // w23
  EventEntity_o *v16; // x8
  int32_t id; // w22
  bool result; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8888 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8888 = 1;
  }
  entity = 0LL;
  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 12, 1, 0, v3);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_22499244) )
  {
LABEL_17:
    sub_B170D4();
  }
  max_length = EntityList_22499244->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
      sub_B170A0();
    }
    v16 = EntityList_22499244->m_Items[v15];
    if ( !v16 || !v14 )
      goto LABEL_17;
    id = v16->fields.id;
    MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                        v14,
                                                                        &entity,
                                                                        id,
                                                                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_17;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)EventDetailEntity__HasFlag(
                                                                          (EventDetailEntity_o *)entity,
                                                                          0x100000LL,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        break;
    }
    max_length = EntityList_22499244->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
  result = 1;
  *eventId = id;
  return result;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_22499244; // x0

  EntityList_22499244 = EventMaster__GetEntityList_22499244(this, 24, 1, 1, v2);
  if ( EntityList_22499244 )
    LOBYTE(EntityList_22499244) = EntityList_22499244->max_length != 0;
  return (char)EntityList_22499244;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  int32_t *Item; // x0
  __int64 v19; // x10

  if ( (byte_40F8873 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&EventEntity_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40F8873 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v17,
                          v16,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v19
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v19 - 8) == EventEntity_TypeInfo )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_int___Add(
            v12,
            Item[4],
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_13:
  if ( !v12 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t myroomBgId; // w21
  int32_t v9; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x0
  EventEntity_o *Item; // x0
  EventEntity_o *v12; // x23
  __int64 v13; // x10

  if ( (byte_40F887A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&EventEntity_TypeInfo, v4);
    byte_40F887A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    myroomBgId = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v10 )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                v10,
                                v9,
                                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, 0LL) )
        {
          myroomBgId = v12->fields.myroomBgId;
        }
      }
      if ( ++v9 >= v7 )
        return myroomBgId;
    }
LABEL_17:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  EventEntity_o *v14; // x0
  EventEntity_o *v15; // x21
  __int64 v16; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_40F887B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&EventEntity_TypeInfo, v3);
    sub_B16FFC(&System_IDisposable_TypeInfo, v4);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_40F887B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_10:
      v13 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                             Enumerator,
                             *(_QWORD *)(v13 + 8));
    v15 = v14;
    if ( v14 )
    {
      v16 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventEntity_c *)v14->klass->_2.typeHierarchy[v16 - 1] != EventEntity_TypeInfo )
      {
        sub_B173C8(v14);
        goto LABEL_33;
      }
      if ( v14->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v14, 0, 0LL) )
        myroomBgmId = v15->fields.myroomBgmId;
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FEB & 1) == 0 )
  {
    sub_B16FFC(&EventMaster___c_TypeInfo, v1);
    byte_40F6FEB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventMaster___c___ctor(EventMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetOpenedEventEntityList_b__22_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t endedAt; // x8
  int64_t v5; // x9
  int32_t result; // w0

  if ( !a || !b )
    sub_B170D4();
  endedAt = a->fields.endedAt;
  v5 = b->fields.endedAt;
  result = endedAt - v5;
  if ( endedAt == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


int32_t __fastcall EventMaster___c___GetOpenedEventEntityList_b__22_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return EventEntity__cmpShopClosedAt(a, b, 0LL);
}


int32_t __fastcall EventMaster___c___GetOpenedEventEntityList_b__22_2(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t startedAt; // x8
  int64_t v5; // x9
  int32_t result; // w0

  if ( !a || !b )
    sub_B170D4();
  startedAt = a->fields.startedAt;
  v5 = b->fields.startedAt;
  result = v5 - startedAt;
  if ( v5 == startedAt )
    return a->fields.id - b->fields.id;
  return result;
}


int32_t __fastcall EventMaster___c___GetSortedEntityList_b__12_0(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !b || !a )
    sub_B170D4();
  v4 = b->fields.startedAt - a->fields.startedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  if ( b->fields.endedAt - a->fields.endedAt < 0 )
    return -1;
  else
    return b->fields.endedAt != a->fields.endedAt;
}