void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215A28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_4215A28 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    65,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_26628280; // x19
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  unsigned int v10; // w22
  EventEntity_o *v11; // x8
  int32_t id; // w21
  __int64 v14; // x0

  if ( (byte_4215A34 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215A34 = 1;
  }
  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_26628280 )
    goto LABEL_15;
  max_length = EntityList_26628280->max_length;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v14 = sub_B0D9A8(Instance);
        sub_B0D948(v14, 0LL);
      }
      v11 = EntityList_26628280->m_Items[v10];
      if ( !v11 )
        break;
      if ( !v9 )
        break;
      id = v11->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v9,
                                    id,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_26628280->max_length;
      if ( (int)++v10 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B0D97C(Instance);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  const MethodInfo *v8; // x4
  int64_t EntityList_26628280; // x0
  int v10; // w8
  int64_t v11; // x20
  unsigned int v12; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_4215A3F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    byte_4215A3F = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_26628280 = (int64_t)EventMaster__GetEntityList_26628280(this, 23, 0, 1, v8);
  if ( !EntityList_26628280 )
    goto LABEL_16;
  v10 = *(_DWORD *)(EntityList_26628280 + 24);
  v11 = EntityList_26628280;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v15 = sub_B0D9A8(EntityList_26628280);
        sub_B0D948(v15, 0LL);
      }
      v13 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v11 + 8LL * (int)v12 + 32);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      EntityList_26628280 = NetworkManager__getTime(0LL);
      if ( !v13 )
        break;
      if ( EntityList_26628280 >= (__int64)v13[2].monitor )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          v13,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_EventEntity__o *)v7;
    }
LABEL_16:
    sub_B0D97C(EntityList_26628280);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v7;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_26628280(this, eventType, 1, isFinishedAt, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *EntityList_26628280; // x0
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  bool v14; // w22
  __int64 v16; // x0

  if ( (byte_4215A2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_4215A2A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventEntity____TypeInfo,
                                                                                                 eventTypes,
                                                                                                 isFinishedAt);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_11;
  v12 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = isFinishedAt;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v16 = sub_B0D9A8(EntityList_26628280);
        sub_B0D948(v16, 0LL);
      }
      EntityList_26628280 = (EventMissionProgressRequest_Argument_ProgressData_o *)EventMaster__GetEntityList_26628280(
                                                                                     this,
                                                                                     eventTypes->m_Items[v13 + 1],
                                                                                     1,
                                                                                     v14,
                                                                                     v11);
      if ( !v9 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        EntityList_26628280,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity____Add__);
      LODWORD(v12) = eventTypes->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_11:
    sub_B0D97C(EntityList_26628280);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v9;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  DataManager_o *Instance; // x0
  EventRewardSceneMaster_o *v16; // x21
  int32_t v17; // w22
  int32_t v18; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x24
  __int64 v20; // x10

  if ( (byte_4215A3D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_B0D8A4(&EventEntity_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4215A3D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v16 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v17 = (int)Instance;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v18,
                                    (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v20 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v20 - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v16, v19->fields.missionTargetId, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.datalist )
          {
            if ( !v14 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              v19,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v18 >= v17 )
        goto LABEL_21;
    }
LABEL_23:
    sub_B0D97C(Instance);
  }
LABEL_21:
  if ( !v14 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_26628280(this, 24, 1, 1, v2);
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
  void *list; // x0
  int32_t v17; // w24
  int32_t i; // w25
  EventEntity_o *v19; // x26
  __int64 v20; // x10

  if ( (byte_4215A2B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&EventEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4215A2B = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventType,
                                                                                                  ids);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    for ( i = 0; i < v17; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = (EventEntity_o *)list;
        v20 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v20
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_22;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v19->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_28904008(v19, checkTime, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
                goto LABEL_16;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v19, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
LABEL_16:
                if ( !v15 )
                  goto LABEL_22;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v15,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
  if ( !v15 )
LABEL_22:
    sub_B0D97C(list);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_26628280(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_26628280(
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
  int32_t v17; // w23
  int32_t v18; // w24
  bool v19; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x26
  __int64 v21; // x10

  v6 = isOpenGet;
  if ( (byte_4215A2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&EventEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4215A2C = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventType,
                                                                                                  isOpenGet);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    v19 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v18,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v21 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (EventEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list->fields._syncRoot) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventEntity__IsOpen(
                                                                                                     (EventEntity_o *)list,
                                                                                                     v19,
                                                                                                     0LL),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v15 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v20,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v18 >= v17 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B0D97C(list);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215A42 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_4215A42 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  eventId,
                                                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity->fields.coordinate;
LABEL_12:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  return -1LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  System_String_o **p_name; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215A39 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4215A39 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_B0D97C(v6);
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
  _BOOL8 v6; // x0
  System_String_o **p_longName; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215A3A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4215A3A = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_B0D97C(v6);
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

  if ( (byte_4215A41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_4215A41 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_WarQuestSelectionMaster
    && (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   eventId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
  {
    return Entity->fields.targetId;
  }
  else
  {
    return -1LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_HashSet_int__o *__fastcall EventMaster__GetEventValUpEventIdHash(
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
  EventEntity_array *FilterEnableEntityList; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_HashSet_int__o *v14; // x20
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  __int64 v18; // x22
  EventEntity_o *v19; // x26
  __int64 v21; // x0

  if ( (byte_4215A37 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4215A37 = 1;
  }
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, method);
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !FilterEnableEntityList )
    goto LABEL_18;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v18 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= max_length )
        {
          v21 = sub_B0D9A8(Instance);
          sub_B0D948(v21, 0LL);
        }
        v19 = FilterEnableEntityList->m_Items[v18];
        if ( !v19 )
          break;
        if ( !v17 )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v17,
                                      v19->fields.id,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v14 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                        v14,
                                        v19->fields.id,
                                        (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_16;
      }
LABEL_18:
      sub_B0D97C(Instance);
    }
LABEL_16:
    if ( !v14 )
      goto LABEL_18;
  }
  return v14;
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
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  int32_t Count; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t v33; // w24
  int32_t v34; // w25
  bool v35; // w23
  int32_t type; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x0
  EventEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x26
  __int64 v40; // x10
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v43; // x22
  struct EventMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  struct EventMaster___c_StaticFields *v53; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_1; // x21
  Il2CppObject *v55; // x22
  struct EventMaster___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  WarBoardManager_TaskList_array *v63; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4215A2D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFilterMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&EventEntity___TypeInfo, v10);
    sub_B0D8A4(&EventEntity_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v19);
    sub_B0D8A4(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v20);
    sub_B0D8A4(&EventMaster___c_TypeInfo, v21);
    byte_4215A2D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v33 = Count;
    v34 = 0;
    v35 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_45;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                v34,
                                (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v40 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen(Item, v35, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   &entity,
                                   v39->fields.missionTargetId,
                                   (const MethodInfo_2669C30 *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_16;
              Instance = entity;
              if ( !entity )
                goto LABEL_45;
              Instance = (void *)EventFilterEntity__IsOpen((EventFilterEntity_o *)entity, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                continue;
              if ( !entity )
                goto LABEL_45;
              Instance = (void *)System_String__IsNullOrEmpty(entity->fields.name, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v29 )
                  goto LABEL_45;
                v37 = v29;
              }
              else
              {
LABEL_16:
                if ( !v26 )
                  goto LABEL_45;
                v37 = v26;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v37,
                v39,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
            }
          }
        }
      }
    }
    while ( ++v34 < v33 );
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
    v43 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventEntity__TypeInfo,
                                                                          v31,
                                                                          v32);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v43,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventEntity___ctor__);
    v44 = EventMaster___c_TypeInfo->static_fields;
    v44->__9__7_0 = (struct System_Comparison_EventEntity__o *)_9__7_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v44->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v26 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v53 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v53->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v53 = EventMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventEntity__TypeInfo,
                                                                          v51,
                                                                          v52);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_1,
      v55,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventEntity___ctor__);
    v56 = EventMaster___c_TypeInfo->static_fields;
    v56->__9__7_1 = (struct System_Comparison_EventEntity__o *)_9__7_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v56->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !v29 )
LABEL_45:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
    (System_Comparison_T__o *)_9__7_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v63 = (WarBoardManager_TaskList_array *)sub_B0D8BC(
                                            EventEntity___TypeInfo,
                                            (unsigned int)(v29->fields._size + v26->fields._size));
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
    v63,
    0,
    (const MethodInfo_2FC5EF8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v29,
    v63,
    v26->fields._size,
    (const MethodInfo_2FC5EF8 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v63;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_26628280; // x0
  int max_length; // w8
  __int64 v5; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v8; // x11
  int64_t finishedAt; // x11
  __int64 v10; // x0

  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 24, 1, 1, v2);
  if ( !EntityList_26628280 )
    return -1LL;
  max_length = EntityList_26628280->max_length;
  if ( max_length < 1 )
    return -1LL;
  v5 = 0LL;
  m_Items = EntityList_26628280->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v5 >= max_length )
    {
      v10 = sub_B0D9A8(result);
      sub_B0D948(v10, 0LL);
    }
    v8 = m_Items[v5];
    if ( !v8 )
      sub_B0D97C(result);
    finishedAt = v8->fields.finishedAt;
    ++v5;
    if ( result < finishedAt )
      result = finishedAt;
  }
  while ( (int)v5 < max_length );
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ShopMaster_o *v30; // x25
  int32_t Count; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t v34; // w26
  int32_t v35; // w27
  EventEntity_o *v36; // x28
  __int64 v37; // x10
  EventMaster___c_c *v38; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x22
  Il2CppObject *v41; // x23
  struct EventMaster___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  EventMaster___c_c *v51; // x0
  struct EventMaster___c_StaticFields *v52; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_1; // x22
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
  struct EventMaster___c_StaticFields *v64; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_2; // x22
  Il2CppObject *v66; // x23
  struct EventMaster___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // [xsp+8h] [xbp-78h]
  int64_t nowTime; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v80; // [xsp+18h] [xbp-68h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v81; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4215A3B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_System_Comparison_EventEntity___ctor__, v4);
    sub_B0D8A4(&System_Comparison_EventEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&EventEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v18);
    sub_B0D8A4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v19);
    sub_B0D8A4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v20);
    sub_B0D8A4(&EventMaster___c_TypeInfo, v21);
    byte_4215A3B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  nowTime = NetworkManager__getTime(0LL);
  v81 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                  v22,
                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v81,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v80 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                  v24,
                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v80,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v78,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_59;
  v30 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v34 = Count;
    v35 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v35,
                   (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v36 = (EventEntity_o *)Instance;
      v37 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v37
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v37 - 8) != EventEntity_TypeInfo
        || !v30 )
      {
        break;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v30, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                v36->fields.id,
                (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          goto LABEL_21;
        Instance = entity;
        if ( !entity )
          break;
        if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
        {
LABEL_21:
          if ( EventEntity__IsOpen(v36, 0, 0LL) )
          {
            Instance = v81;
            if ( !v81 )
              break;
          }
          else if ( EventEntity__IsExchangePeriod(v36, nowTime, 0LL) )
          {
            Instance = v80;
            if ( !v80 )
              break;
          }
          else
          {
            Instance = v78;
            if ( !v78 )
              break;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventEntity__Add__);
        }
      }
      if ( ++v35 >= v34 )
        goto LABEL_30;
    }
LABEL_59:
    sub_B0D97C(Instance);
  }
LABEL_30:
  v38 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v38 = EventMaster___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v32,
                                                                           v33);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v41,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventEntity___ctor__);
    v42 = EventMaster___c_TypeInfo->static_fields;
    v42->__9__22_0 = (struct System_Comparison_EventEntity__o *)_9__22_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v42->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  Instance = v81;
  if ( !v81 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v81,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v51 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v51 = EventMaster___c_TypeInfo;
  }
  v52 = v51->static_fields;
  _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v52->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v52 = EventMaster___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v49,
                                                                           v50);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_1,
      v54,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventEntity___ctor__);
    v55 = EventMaster___c_TypeInfo->static_fields;
    v55->__9__22_1 = (struct System_Comparison_EventEntity__o *)_9__22_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v55->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  Instance = v80;
  if ( !v80 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v80,
    (System_Comparison_T__o *)_9__22_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v64 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v64->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v64 = EventMaster___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)v64->__9;
    _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v62,
                                                                           v63);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_2,
      v66,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventEntity___ctor__);
    v67 = EventMaster___c_TypeInfo->static_fields;
    v67->__9__22_2 = (struct System_Comparison_EventEntity__o *)_9__22_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v67->__9__22_2,
      (System_Int32_array **)_9__22_2,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v78 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v78,
    (System_Comparison_T__o *)_9__22_2,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  v74,
                                                                                                  v75);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  if ( !v76 )
    goto LABEL_59;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v76,
    (System_Collections_Generic_IEnumerable_T__o *)v81,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v76,
    (System_Collections_Generic_IEnumerable_T__o *)v80,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v76,
    (System_Collections_Generic_IEnumerable_T__o *)v78,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v76,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v8; // x19

  if ( (byte_4215A2E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215A2E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v8 = Entity;
    if ( EventDetailEntity__IsEventPoint(Entity, 0LL) )
      LODWORD(Entity) = v8->fields.pointImageId;
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
  EventEntity_array *EntityList_26628280; // x19
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  unsigned int v10; // w22
  EventEntity_o *v11; // x8
  int32_t id; // w21
  __int64 v14; // x0

  if ( (byte_4215A33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215A33 = 1;
  }
  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_26628280 )
    goto LABEL_15;
  max_length = EntityList_26628280->max_length;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v14 = sub_B0D9A8(Instance);
        sub_B0D948(v14, 0LL);
      }
      v11 = EntityList_26628280->m_Items[v10];
      if ( !v11 )
        break;
      if ( !v9 )
        break;
      id = v11->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v9,
                                    id,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__IsRaid((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_26628280->max_length;
      if ( (int)++v10 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B0D97C(Instance);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v8; // x19

  if ( (byte_4215A2F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215A2F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v8 = Entity;
    if ( EventDetailEntity__IsRaid(Entity, 0LL) )
      LODWORD(Entity) = v8->fields.pointImageId;
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
  GameEventType_TYPE_array *v3; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *EntityList_26628280; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v22; // x21
  struct EventMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v31; // x0

  v3 = types;
  if ( (byte_4215A32 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventEntity___ctor__, types);
    sub_B0D8A4(&System_Comparison_EventEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_B0D8A4(&GameEventType_TYPE___TypeInfo, v10);
    sub_B0D8A4(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v11);
    sub_B0D8A4(&EventMaster___c_TypeInfo, v12);
    byte_4215A32 = 1;
  }
  if ( !v3 )
  {
    EntityList_26628280 = (void *)sub_B0D8BC(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_26628280 )
      goto LABEL_23;
    v3 = (GameEventType_TYPE_array *)EntityList_26628280;
    if ( !*((_DWORD *)EntityList_26628280 + 6) )
      goto LABEL_22;
    *((_DWORD *)EntityList_26628280 + 8) = 12;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                                  types,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v18 = *(_QWORD *)&v3->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    while ( v19 < (unsigned int)v18 )
    {
      EntityList_26628280 = EventMaster__GetEntityList_26628280(this, v3->m_Items[v19 + 1], 0, 1, v17);
      if ( !v14 )
        goto LABEL_23;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_26628280,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v18) = v3->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        goto LABEL_12;
    }
LABEL_22:
    v31 = sub_B0D9A8(EntityList_26628280);
    sub_B0D948(v31, 0LL);
  }
LABEL_12:
  EntityList_26628280 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_26628280 = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)EntityList_26628280 + 23);
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)EntityList_26628280 + 307) & 4) != 0 && !*((_DWORD *)EntityList_26628280 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_26628280);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventEntity__TypeInfo,
                                                                           v15,
                                                                           v16);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v22,
      Method_EventMaster___c__GetSortedEntityList_b__12_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventEntity___ctor__);
    v23 = EventMaster___c_TypeInfo->static_fields;
    v23->__9__12_0 = (struct System_Comparison_EventEntity__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v14 )
LABEL_23:
    sub_B0D97C(EntityList_26628280);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v14,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v14;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_26628280; // x19
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  QuestGroupMaster_o *v11; // x21
  int max_length; // w8
  QuestMaster_o *v13; // x22
  unsigned int v14; // w24
  EventEntity_o *v15; // x8
  int32_t id; // w23
  __int64 v18; // x0

  if ( (byte_4215A35 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215A35 = 1;
  }
  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v11 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_26628280) )
  {
LABEL_20:
    sub_B0D97C(Instance);
  }
  max_length = EntityList_26628280->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (QuestMaster_o *)Instance;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= max_length )
    {
      v18 = sub_B0D9A8(Instance);
      sub_B0D948(v18, 0LL);
    }
    v15 = EntityList_26628280->m_Items[v14];
    if ( !v15 )
      goto LABEL_20;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_20;
    id = v15->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  id,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId(v11, id, 1, 0LL);
      if ( !v13 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                    v13,
                                    (System_Collections_Generic_List_int__o *)Instance,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_26628280->max_length;
    if ( (int)++v14 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  EventEntity_o *Entity; // x0

  if ( (byte_4215A36 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_4215A36 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              BPEnableEventId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_B0D97C(0LL);
  return EventEntity__IsOpen_28904008(Entity, checkTime, 0, 0LL);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_26628280; // x20
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  unsigned int v12; // w22
  EventEntity_o *v13; // x8
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4215A38 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215A38 = 1;
  }
  entity = 0LL;
  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EntityList_26628280) )
  {
LABEL_16:
    sub_B0D97C(Instance);
  }
  max_length = EntityList_26628280->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v15 = sub_B0D9A8(Instance);
      sub_B0D948(v15, 0LL);
    }
    v13 = EntityList_26628280->m_Items[v12];
    if ( !v13 || !v11 )
      goto LABEL_16;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v11,
                                  &entity,
                                  v13->fields.id,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_16;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, flag, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_26628280->max_length;
    if ( (int)++v12 >= max_length )
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

  if ( (byte_4215A40 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_4215A40 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              eventId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  DataManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  EventEntity_o *v17; // x25
  __int64 v18; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4215A3C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&EventEntity_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4215A3C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !this->fields.list) )
  {
LABEL_28:
    sub_B0D97C(Instance);
  }
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v16,
                                  (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v17 = (EventEntity_o *)Instance;
    v18 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v18 - 1] != EventEntity_TypeInfo
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
      if ( !v13 )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v13,
              &entity,
              v17->fields.id,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_23;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_28;
      if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
      {
LABEL_23:
        if ( (EventEntity__IsOpen(v17, 0, 0LL) || EventEntity__IsExchangePeriod(v17, Time, 0LL))
          && !EventEntity__IsClosePurchaseShop(v17, 0LL) )
        {
          return 1;
        }
      }
    }
    if ( ++v16 >= v15 )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_26628280; // x20
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  unsigned int v12; // w23
  EventEntity_o *v13; // x8
  int32_t id; // w22
  bool result; // w0
  __int64 v16; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4215A3E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215A3E = 1;
  }
  entity = 0LL;
  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_26628280) )
  {
LABEL_17:
    sub_B0D97C(Instance);
  }
  max_length = EntityList_26628280->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
    {
      v16 = sub_B0D9A8(Instance);
      sub_B0D948(v16, 0LL);
    }
    v13 = EntityList_26628280->m_Items[v12];
    if ( !v13 || !v11 )
      goto LABEL_17;
    id = v13->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v11,
                                  &entity,
                                  id,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_17;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x100000LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    max_length = EntityList_26628280->max_length;
    if ( (int)++v12 >= max_length )
      return 0;
  }
  result = 1;
  *eventId = id;
  return result;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_26628280; // x0

  EntityList_26628280 = EventMaster__GetEntityList_26628280(this, 24, 1, 1, v2);
  if ( EntityList_26628280 )
    LOBYTE(EntityList_26628280) = EntityList_26628280->max_length != 0;
  return (char)EntityList_26628280;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  void *list; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_4215A29 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&EventEntity_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4215A29 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v13,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v14
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v14 - 8) == EventEntity_TypeInfo )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_int___Add(
            v10,
            *((_DWORD *)list + 4),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B0D97C(list);
  }
LABEL_13:
  if ( !v10 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  EventEntity_o *Item; // x0
  EventEntity_o *v11; // x23
  __int64 v12; // x10

  if ( (byte_4215A30 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&EventEntity_TypeInfo, v4);
    byte_4215A30 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    myroomBgId = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v9,
                                (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = Item;
        v12 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, 0LL) )
        {
          myroomBgId = v11->fields.myroomBgId;
        }
      }
      if ( ++v9 >= v7 )
        return myroomBgId;
    }
LABEL_17:
    sub_B0D97C(list);
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

  if ( (byte_4215A31 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&EventEntity_TypeInfo, v3);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v4);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_4215A31 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B0D97C(list);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v13 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B0DC70(v14);
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
    v24 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B84 & 1) == 0 )
  {
    sub_B0D8A4(&EventMaster___c_TypeInfo, v1);
    byte_4211B84 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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