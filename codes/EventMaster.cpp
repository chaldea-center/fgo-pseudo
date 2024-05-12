void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C691 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
    byte_438C691 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    66,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27734852; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  unsigned int v9; // w22
  EventEntity_o *v10; // x8
  int32_t id; // w21
  __int64 v13; // x0

  if ( (byte_438C69D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C69D = 1;
  }
  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_27734852 )
    goto LABEL_15;
  max_length = EntityList_27734852->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v13 = sub_B776C8(Instance);
        sub_B77668(v13, 0LL);
      }
      v10 = EntityList_27734852->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v8,
                                    id,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_27734852->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B7769C(Instance, v6);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x4
  int64_t EntityList_27734852; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21
  __int64 v12; // x0

  if ( (byte_438C6A8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438C6A8 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_27734852 = (int64_t)EventMaster__GetEntityList_27734852(this, 23, 0, 1, v4);
  if ( !EntityList_27734852 )
    goto LABEL_16;
  v7 = *(_DWORD *)(EntityList_27734852 + 24);
  v8 = EntityList_27734852;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v12 = sub_B776C8(EntityList_27734852);
        sub_B77668(v12, 0LL);
      }
      v10 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v8 + 8LL * (int)v9 + 32);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      EntityList_27734852 = NetworkManager__getTime(0LL);
      if ( !v10 )
        break;
      if ( EntityList_27734852 >= (__int64)v10[2].monitor )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v10,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity__Add__);
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return (System_Collections_Generic_List_EventEntity__o *)v3;
    }
LABEL_16:
    sub_B7769C(EntityList_27734852, v6);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v3;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_27734852(this, eventType, 1, isFinishedAt, v4);
}


System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *EntityList_27734852; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  bool v13; // w22
  __int64 v15; // x0

  if ( (byte_438C693 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity____Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity_____ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity____TypeInfo);
    byte_438C693 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_11;
  v11 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = isFinishedAt;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B776C8(EntityList_27734852);
        sub_B77668(v15, 0LL);
      }
      EntityList_27734852 = (EventMissionProgressRequest_Argument_ProgressData_o *)EventMaster__GetEntityList_27734852(
                                                                                     this,
                                                                                     eventTypes->m_Items[v12 + 1],
                                                                                     1,
                                                                                     v13,
                                                                                     v10);
      if ( !v7 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        EntityList_27734852,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity____Add__);
      LODWORD(v11) = eventTypes->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        return (System_Collections_Generic_List_EventEntity____o *)v7;
    }
LABEL_11:
    sub_B7769C(EntityList_27734852, v9);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v7;
}


EventEntity_array *__fastcall EventMaster__GetEnableExistEventRewardEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  EventRewardSceneMaster_o *v6; // x21
  int32_t v7; // w22
  int32_t v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x24
  __int64 v10; // x10

  if ( (byte_438C6A6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C6A6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v6 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v7 = (int)Instance;
    v8 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v8,
                                    (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v10 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v10 - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v6, v9->fields.missionTargetId, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.datalist )
          {
            if ( !v3 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              v9,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v8 >= v7 )
        goto LABEL_21;
    }
LABEL_23:
    sub_B7769C(Instance, v5);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_27734852(this, 24, 1, 1, v2);
}


EventEntity_array *__fastcall EventMaster__GetEnabledEntityListFromIds(
        EventMaster_o *this,
        int32_t eventType,
        System_Collections_Generic_List_int__o *ids,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  __int64 v9; // x1
  void *list; // x0
  int32_t v11; // w24
  int32_t i; // w25
  EventEntity_o *v13; // x26
  __int64 v14; // x10

  if ( (byte_438C694 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_438C694 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    for ( i = 0; i < v11; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = (EventEntity_o *)list;
        v14 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v14
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v14 - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_22;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v13->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_30360280(v13, checkTime, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
                goto LABEL_16;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v13, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
LABEL_16:
                if ( !v8 )
                  goto LABEL_22;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
  if ( !v8 )
LABEL_22:
    sub_B7769C(list, v9);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_27734852(this, eventType, 0, 1, v3);
}


EventEntity_array *__fastcall EventMaster__GetEntityList_27734852(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w23
  int32_t v13; // w24
  bool v14; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x26
  __int64 v16; // x10

  v6 = isOpenGet;
  if ( (byte_438C695 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    byte_438C695 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    v14 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v16 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list->fields._syncRoot) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventEntity__IsOpen(
                                                                                                     (EventEntity_o *)list,
                                                                                                     v14,
                                                                                                     0LL),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              v15,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B7769C(list, v10);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C6AB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_438C6AB = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  eventId,
                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity->fields.coordinate;
LABEL_12:
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  }
  return -1LL;
}


System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o **p_name; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C6A2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C6A2 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_B7769C(v5, v6);
    p_name = &entity->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_name;
}


System_String_o *__fastcall EventMaster__GetEventShortName(
        EventMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o **p_longName; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C6A3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C6A3 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_B7769C(v5, v6);
    p_longName = &entity->fields.longName;
  }
  else
  {
    p_longName = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_longName;
}


int64_t __fastcall EventMaster__GetEventStartedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_438C6AA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_438C6AA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_WarQuestSelectionMaster
    && (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   eventId,
                   (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
  {
    return Entity->fields.targetId;
  }
  else
  {
    return -1LL;
  }
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMaster__GetEventValUpEventIdHash(
        EventMaster_o *this,
        bool isFinish,
        int64_t nowTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  System_Collections_Generic_HashSet_int__o *v10; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  __int64 v13; // x22
  EventEntity_o *v14; // x26
  __int64 v16; // x0

  if ( (byte_438C6A0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_438C6A0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, *((_QWORD *)Instance + 13), v8);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  if ( !FilterEnableEntityList )
    goto LABEL_22;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v13 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
        {
          v16 = sub_B776C8(Instance);
          sub_B77668(v16, 0LL);
        }
        v14 = FilterEnableEntityList->m_Items[v13];
        if ( !v14 )
          break;
        if ( !v12 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v12,
                     v14->fields.id,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (void *)EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v10 )
            break;
          Instance = (void *)System_Collections_Generic_HashSet_int___Add(
                               v10,
                               v14->fields.id,
                               (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_20;
      }
LABEL_22:
      sub_B7769C(Instance, v7);
    }
LABEL_20:
    if ( !v10 )
      goto LABEL_22;
  }
  return v10;
}


EventEntity_array *__fastcall EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  int32_t Count; // w25
  int32_t v12; // w26
  bool v13; // w24
  int32_t type; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x0
  EventEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x27
  __int64 v18; // x10
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v21; // x22
  struct EventMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct EventMaster___c_StaticFields *v29; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_1; // x21
  Il2CppObject *v31; // x22
  struct EventMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WarBoardManager_TaskList_array *v39; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-60h]
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438C696 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventEntity___ctor__);
    sub_B775C4(&System_Comparison_EventEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_B775C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
    sub_B775C4(&EventEntity___TypeInfo);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__CopyTo__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__);
    sub_B775C4(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__);
    sub_B775C4(&EventMaster___c_TypeInfo);
    byte_438C696 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( nowTime <= 0 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v12 = 0;
    v13 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_50;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                v12,
                                (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v18 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( (type == 22 || type == 12) && EventEntity__IsOpen_30360280(Item, nowTime, v13, 0LL) )
          {
            Instance = MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_50;
            Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 &entity,
                                 v17->fields.missionTargetId,
                                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_21;
            Instance = entity;
            if ( !entity )
              goto LABEL_50;
            Instance = (void *)EventFilterEntity__IsOpen((EventFilterEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              continue;
            if ( !entity )
              goto LABEL_50;
            Instance = (void *)System_String__IsNullOrEmpty(entity->fields.name, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !v10 )
                goto LABEL_50;
              v15 = v10;
            }
            else
            {
LABEL_21:
              if ( !v9 )
                goto LABEL_50;
              v15 = v9;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v17,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
    }
    while ( ++v12 < Count );
  }
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v21,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v22 = EventMaster___c_TypeInfo->static_fields;
    v22->__9__7_0 = (struct System_Comparison_EventEntity__o *)_9__7_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v9 )
    goto LABEL_50;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v29 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v29->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v29 = EventMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_1,
      v31,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v32 = EventMaster___c_TypeInfo->static_fields;
    v32->__9__7_1 = (struct System_Comparison_EventEntity__o *)_9__7_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v32->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v10 )
LABEL_50:
    sub_B7769C(Instance, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__7_1,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v39 = (WarBoardManager_TaskList_array *)sub_B775DC(
                                            EventEntity___TypeInfo,
                                            (unsigned int)(v10->fields._size + v9->fields._size));
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v9,
    v39,
    0,
    (const MethodInfo_3053AA8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
    v39,
    v9->fields._size,
    (const MethodInfo_3053AA8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v39;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27734852; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11
  __int64 v11; // x0

  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 24, 1, 1, v2);
  if ( !EntityList_27734852 )
    return -1LL;
  max_length = EntityList_27734852->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_27734852->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B776C8(result);
      sub_B77668(v11, 0LL);
    }
    v9 = m_Items[v6];
    if ( !v9 )
      sub_B7769C(result, v4);
    finishedAt = v9->fields.finishedAt;
    ++v6;
    if ( result < finishedAt )
      result = finishedAt;
  }
  while ( (int)v6 < max_length );
  return result;
}


EventEntity_array *__fastcall EventMaster__GetOpenedEventEntityList(EventMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ShopMaster_o *v6; // x25
  int32_t Count; // w0
  int32_t v8; // w26
  int32_t v9; // w27
  EventEntity_o *v10; // x28
  __int64 v11; // x10
  EventMaster___c_c *v12; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x22
  Il2CppObject *v15; // x23
  struct EventMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EventMaster___c_c *v23; // x0
  struct EventMaster___c_StaticFields *v24; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_1; // x22
  Il2CppObject *v26; // x23
  struct EventMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct EventMaster___c_StaticFields *v34; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_2; // x22
  Il2CppObject *v36; // x23
  struct EventMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // [xsp+8h] [xbp-78h]
  int64_t nowTime; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v48; // [xsp+18h] [xbp-68h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v49; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_438C6A4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventEntity___ctor__);
    sub_B775C4(&System_Comparison_EventEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__);
    sub_B775C4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__);
    sub_B775C4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__);
    sub_B775C4(&EventMaster___c_TypeInfo);
    byte_438C6A4 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  nowTime = NetworkManager__getTime(0LL);
  v49 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v48 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v48,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_59;
  v6 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v9,
                   (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v10 = (EventEntity_o *)Instance;
      v11 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v11
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) != EventEntity_TypeInfo
        || !v6 )
      {
        break;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v6, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                v10->fields.id,
                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          goto LABEL_21;
        Instance = entity;
        if ( !entity )
          break;
        if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
        {
LABEL_21:
          if ( EventEntity__IsOpen(v10, 0, 0LL) )
          {
            Instance = v49;
            if ( !v49 )
              break;
          }
          else if ( EventEntity__IsExchangePeriod(v10, nowTime, 0LL) )
          {
            Instance = v48;
            if ( !v48 )
              break;
          }
          else
          {
            Instance = v46;
            if ( !v46 )
              break;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_30;
    }
LABEL_59:
    sub_B7769C(Instance, v4);
  }
LABEL_30:
  v12 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v12 = EventMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v15,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v16 = EventMaster___c_TypeInfo->static_fields;
    v16->__9__22_0 = (struct System_Comparison_EventEntity__o *)_9__22_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v16->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  Instance = v49;
  if ( !v49 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v49,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v23 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v23 = EventMaster___c_TypeInfo;
  }
  v24 = v23->static_fields;
  _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v24->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v24 = EventMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_1,
      v26,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v27 = EventMaster___c_TypeInfo->static_fields;
    v27->__9__22_1 = (struct System_Comparison_EventEntity__o *)_9__22_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v27->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  Instance = v48;
  if ( !v48 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v48,
    (System_Comparison_T__o *)_9__22_1,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v34 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v34->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v34 = EventMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_2,
      v36,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v37 = EventMaster___c_TypeInfo->static_fields;
    v37->__9__22_2 = (struct System_Comparison_EventEntity__o *)_9__22_2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v37->__9__22_2,
      (System_Int32_array **)_9__22_2,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v46 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v46,
    (System_Comparison_T__o *)_9__22_2,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  if ( !v44 )
    goto LABEL_59;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
    (System_Collections_Generic_IEnumerable_T__o *)v49,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
    (System_Collections_Generic_IEnumerable_T__o *)v48,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
    (System_Collections_Generic_IEnumerable_T__o *)v46,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v7; // x19

  if ( (byte_438C697 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C697 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v5);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v7 = Entity;
    if ( EventDetailEntity__IsEventPoint(Entity, 0LL) )
      LODWORD(Entity) = v7->fields.pointImageId;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t __fastcall EventMaster__GetRaidEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27734852; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  unsigned int v9; // w22
  EventEntity_o *v10; // x8
  int32_t id; // w21
  __int64 v13; // x0

  if ( (byte_438C69C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C69C = 1;
  }
  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_27734852 )
    goto LABEL_15;
  max_length = EntityList_27734852->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v13 = sub_B776C8(Instance);
        sub_B77668(v13, 0LL);
      }
      v10 = EntityList_27734852->m_Items[v9];
      if ( !v10 )
        break;
      if ( !v8 )
        break;
      id = v10->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v8,
                                    id,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__IsRaid((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_27734852->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B7769C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v7; // x19

  if ( (byte_438C698 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C698 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v5);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v7 = Entity;
    if ( EventDetailEntity__IsRaid(Entity, 0LL) )
      LODWORD(Entity) = v7->fields.pointImageId;
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
  void *EntityList_27734852; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  const MethodInfo *v8; // x4
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v13; // x21
  struct EventMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v22; // x0

  if ( (byte_438C69B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventEntity___ctor__);
    sub_B775C4(&System_Comparison_EventEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B775C4(&GameEventType_TYPE___TypeInfo);
    sub_B775C4(&Method_EventMaster___c__GetSortedEntityList_b__12_0__);
    sub_B775C4(&EventMaster___c_TypeInfo);
    byte_438C69B = 1;
  }
  if ( !types )
  {
    EntityList_27734852 = (void *)sub_B775DC(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_27734852 )
      goto LABEL_23;
    types = (GameEventType_TYPE_array *)EntityList_27734852;
    if ( !*((_DWORD *)EntityList_27734852 + 6) )
      goto LABEL_22;
    *((_DWORD *)EntityList_27734852 + 8) = 12;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v9 = *(_QWORD *)&types->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)v9 )
    {
      EntityList_27734852 = EventMaster__GetEntityList_27734852(this, types->m_Items[v10 + 1], 0, 1, v8);
      if ( !v7 )
        goto LABEL_23;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_27734852,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v9) = types->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_12;
    }
LABEL_22:
    v22 = sub_B776C8(EntityList_27734852);
    sub_B77668(v22, 0LL);
  }
LABEL_12:
  EntityList_27734852 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_27734852 = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)EntityList_27734852 + 23);
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)EntityList_27734852 + 307) & 4) != 0 && !*((_DWORD *)EntityList_27734852 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_27734852);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v13,
      Method_EventMaster___c__GetSortedEntityList_b__12_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventEntity___ctor__);
    v14 = EventMaster___c_TypeInfo->static_fields;
    v14->__9__12_0 = (struct System_Comparison_EventEntity__o *)_9__12_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v7 )
LABEL_23:
    sub_B7769C(EntityList_27734852, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v7;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27734852; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  QuestGroupMaster_o *v8; // x21
  int max_length; // w8
  QuestMaster_o *v10; // x22
  unsigned int v11; // w24
  EventEntity_o *v12; // x8
  int32_t id; // w23
  __int64 v15; // x0

  if ( (byte_438C69E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C69E = 1;
  }
  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v8 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_27734852) )
  {
LABEL_20:
    sub_B7769C(Instance, v6);
  }
  max_length = EntityList_27734852->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (QuestMaster_o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
      v15 = sub_B776C8(Instance);
      sub_B77668(v15, 0LL);
    }
    v12 = EntityList_27734852->m_Items[v11];
    if ( !v12 )
      goto LABEL_20;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_20;
    id = v12->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  id,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId(v8, id, 1, 0LL);
      if ( !v10 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                    v10,
                                    (System_Collections_Generic_List_int__o *)Instance,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_27734852->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  EventEntity_o *Entity; // x0
  __int64 v7; // x1

  if ( (byte_438C69F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_438C69F = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              BPEnableEventId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_B7769C(0LL, v7);
  return EventEntity__IsOpen_30360280(Entity, checkTime, 0, 0LL);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventEntity_array *EntityList_27734852; // x20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C6A1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C6A1 = 1;
  }
  entity = 0LL;
  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EntityList_27734852) )
  {
LABEL_16:
    sub_B7769C(Instance, v8);
  }
  max_length = EntityList_27734852->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
      v14 = sub_B776C8(Instance);
      sub_B77668(v14, 0LL);
    }
    v12 = EntityList_27734852->m_Items[v11];
    if ( !v12 || !v10 )
      goto LABEL_16;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v10,
                                  &entity,
                                  v12->fields.id,
                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_16;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, flag, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_27734852->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0

  if ( (byte_438C6A9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_438C6A9 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              eventId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, nowTime, 0LL);
}


bool __fastcall EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  EventEntity_o *v11; // x25
  __int64 v12; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438C6A5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C6A5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !this->fields.list) )
  {
LABEL_28:
    sub_B7769C(Instance, v5);
  }
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v10,
                                  (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v11 = (EventEntity_o *)Instance;
    v12 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v12 - 1] != EventEntity_TypeInfo
      || !MasterData_WarQuestSelectionMaster )
    {
      goto LABEL_28;
    }
    Instance = (DataManager_o *)ShopMaster__IsEnableEventShop(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance->fields.m_CachedPtr,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v7,
              &entity,
              v11->fields.id,
              (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_23;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_28;
      if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
      {
LABEL_23:
        if ( (EventEntity__IsOpen(v11, 0, 0LL) || EventEntity__IsExchangePeriod(v11, Time, 0LL))
          && !EventEntity__IsClosePurchaseShop(v11, 0LL) )
        {
          return 1;
        }
      }
    }
    if ( ++v10 >= v9 )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventEntity_array *EntityList_27734852; // x20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  unsigned int v11; // w23
  EventEntity_o *v12; // x8
  int32_t id; // w22
  bool result; // w0
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438C6A7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C6A7 = 1;
  }
  entity = 0LL;
  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_27734852) )
  {
LABEL_17:
    sub_B7769C(Instance, v8);
  }
  max_length = EntityList_27734852->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
      v15 = sub_B776C8(Instance);
      sub_B77668(v15, 0LL);
    }
    v12 = EntityList_27734852->m_Items[v11];
    if ( !v12 || !v10 )
      goto LABEL_17;
    id = v12->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v10,
                                  &entity,
                                  id,
                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_17;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x100000LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    max_length = EntityList_27734852->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
  result = 1;
  *eventId = id;
  return result;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27734852; // x0

  EntityList_27734852 = EventMaster__GetEntityList_27734852(this, 24, 1, 1, v2);
  if ( EntityList_27734852 )
    LOBYTE(EntityList_27734852) = EntityList_27734852->max_length != 0;
  return (char)EntityList_27734852;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  void *list; // x0
  int32_t v6; // w21
  int32_t v7; // w22
  __int64 v8; // x10

  if ( (byte_438C692 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438C692 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v7,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v8
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v8 - 8) == EventEntity_TypeInfo )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_int___Add(
            v3,
            *((_DWORD *)list + 4),
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v7 >= v6 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B7769C(list, v4);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t myroomBgId; // w21
  int32_t v7; // w22
  EventEntity_o *Item; // x0
  EventEntity_o *v9; // x23
  __int64 v10; // x10

  if ( (byte_438C699 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventEntity_TypeInfo);
    byte_438C699 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    myroomBgId = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v7,
                                (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v9 = Item;
        v10 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, 0LL) )
        {
          myroomBgId = v9->fields.myroomBgId;
        }
      }
      if ( ++v7 >= v5 )
        return myroomBgId;
    }
LABEL_17:
    sub_B7769C(list, method);
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *v7; // x8
  unsigned __int64 v8; // x10
  int32_t *v9; // x11
  __int64 v10; // x0
  EventEntity_o *v11; // x0
  EventEntity_o *v12; // x21
  __int64 v13; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0

  if ( (byte_438C69A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438C69A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B7769C(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v4);
  myroomBgmId = 0;
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
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v7 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      v9 = &v7->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v9 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v8;
        v9 += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v10 = (__int64)&v7->vtable[*v9].method;
    }
    else
    {
LABEL_10:
      v10 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v11 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
                             Enumerator,
                             *(_QWORD *)(v10 + 8));
    v12 = v11;
    if ( v11 )
    {
      v13 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventEntity_c *)v11->klass->_2.typeHierarchy[v13 - 1] != EventEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B77990(v11);
        goto LABEL_33;
      }
      if ( v11->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v11, 0, 0LL) )
        myroomBgmId = v12->fields.myroomBgmId;
    }
  }
  v18 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v21 = (__int64)&v18->vtable[*v20].method;
  }
  else
  {
LABEL_29:
    v21 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388685 & 1) == 0 )
  {
    sub_B775C4(&EventMaster___c_TypeInfo);
    byte_4388685 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7769C(this, a);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, a);
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