void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188D80 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, method);
    byte_4188D80 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    65,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventEntity_array *EntityList_27178048; // x19
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21
  __int64 v15; // x0

  if ( (byte_4188D8C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188D8C = 1;
  }
  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_27178048 )
    goto LABEL_15;
  max_length = EntityList_27178048->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
      }
      v12 = EntityList_27178048->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    id,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_27178048->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B2C434(Instance, v8);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  const MethodInfo *v7; // x4
  int64_t EntityList_27178048; // x0
  __int64 v9; // x1
  int v10; // w8
  int64_t v11; // x20
  unsigned int v12; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_4188D97 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_4188D97 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_27178048 = (int64_t)EventMaster__GetEntityList_27178048(this, 23, 0, 1, v7);
  if ( !EntityList_27178048 )
    goto LABEL_16;
  v10 = *(_DWORD *)(EntityList_27178048 + 24);
  v11 = EntityList_27178048;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v15 = sub_B2C460(EntityList_27178048);
        sub_B2C400(v15, 0LL);
      }
      v13 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v11 + 8LL * (int)v12 + 32);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      EntityList_27178048 = NetworkManager__getTime(0LL);
      if ( !v13 )
        break;
      if ( EntityList_27178048 >= (__int64)v13[2].monitor )
      {
        if ( !v6 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          v13,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity__Add__);
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_EventEntity__o *)v6;
    }
LABEL_16:
    sub_B2C434(EntityList_27178048, v9);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v6;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_27178048(this, eventType, 1, isFinishedAt, v4);
}


System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *EntityList_27178048; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  bool v15; // w22
  __int64 v17; // x0

  if ( (byte_4188D82 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity____Add__, eventTypes);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity____TypeInfo, v8);
    byte_4188D82 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_11;
  v13 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = isFinishedAt;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v17 = sub_B2C460(EntityList_27178048);
        sub_B2C400(v17, 0LL);
      }
      EntityList_27178048 = (EventMissionProgressRequest_Argument_ProgressData_o *)EventMaster__GetEntityList_27178048(
                                                                                     this,
                                                                                     eventTypes->m_Items[v14 + 1],
                                                                                     1,
                                                                                     v15,
                                                                                     v12);
      if ( !v9 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        EntityList_27178048,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity____Add__);
      LODWORD(v13) = eventTypes->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        return (System_Collections_Generic_List_EventEntity____o *)v9;
    }
LABEL_11:
    sub_B2C434(EntityList_27178048, v11);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventRewardSceneMaster_o *v15; // x21
  int32_t v16; // w22
  int32_t v17; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x24
  __int64 v19; // x10

  if ( (byte_4188D95 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v4);
    sub_B2C35C(&EventEntity_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4188D95 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v15 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v16 = (int)Instance;
    v17 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v17,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v19 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v19 - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v15 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v15, v18->fields.missionTargetId, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.datalist )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              v18,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_21;
    }
LABEL_23:
    sub_B2C434(Instance, v14);
  }
LABEL_21:
  if ( !v12 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_27178048(this, 24, 1, 1, v2);
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
  __int64 v16; // x1
  void *list; // x0
  int32_t v18; // w24
  int32_t i; // w25
  EventEntity_o *v20; // x26
  __int64 v21; // x10

  if ( (byte_4188D83 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&EventEntity_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4188D83 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    for ( i = 0; i < v18; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (EventEntity_o *)list;
        v21 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_22;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v20->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_29738096(v20, checkTime, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
                goto LABEL_16;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v20, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
LABEL_16:
                if ( !v15 )
                  goto LABEL_22;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v15,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
  if ( !v15 )
LABEL_22:
    sub_B2C434(list, v16);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_27178048(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_27178048(
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v18; // w23
  int32_t v19; // w24
  bool v20; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x26
  __int64 v22; // x10

  v6 = isOpenGet;
  if ( (byte_4188D84 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&EventEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v14);
    byte_4188D84 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    v20 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v19,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v22 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (EventEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list->fields._syncRoot) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventEntity__IsOpen(
                                                                                                     (EventEntity_o *)list,
                                                                                                     v20,
                                                                                                     0LL),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v15 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v21,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B2C434(list, v16);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188D9A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    byte_4188D9A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  eventId,
                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity->fields.coordinate;
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  }
  return -1LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o **p_name; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188D91 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4188D91 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_B2C434(v6, v7);
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
  __int64 v7; // x1
  System_String_o **p_longName; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188D92 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4188D92 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v6 )
  {
    if ( !entity )
      sub_B2C434(v6, v7);
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

  if ( (byte_4188D99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    byte_4188D99 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_WarQuestSelectionMaster
    && (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   eventId,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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
  DataManager_o *FilterEnableEntityList; // x0
  __int64 v13; // x1
  DataManager_o *v14; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  int datalist; // w8
  __int64 v18; // x22
  __int64 v19; // x26
  __int64 v21; // x0

  if ( (byte_4188D8F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4188D8F = 1;
  }
  FilterEnableEntityList = (DataManager_o *)EventMaster__GetFilterEnableEntityList(this, isFinish, method);
  if ( !FilterEnableEntityList )
    goto LABEL_20;
  v14 = FilterEnableEntityList;
  if ( !FilterEnableEntityList->fields.datalist )
    return 0LL;
  FilterEnableEntityList = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !FilterEnableEntityList )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        FilterEnableEntityList,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  datalist = (int)v14->fields.datalist;
  if ( datalist >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= datalist )
      {
        v21 = sub_B2C460(FilterEnableEntityList);
        sub_B2C400(v21, 0LL);
      }
      v19 = *((_QWORD *)&v14->fields.lookup + v18);
      if ( !v19 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      FilterEnableEntityList = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  MasterData_WarQuestSelectionMaster,
                                                  *(_DWORD *)(v19 + 16),
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !FilterEnableEntityList )
        break;
      FilterEnableEntityList = (DataManager_o *)EventDetailEntity__IsBonusSkill(
                                                  (EventDetailEntity_o *)FilterEnableEntityList,
                                                  0LL);
      if ( ((unsigned __int8)FilterEnableEntityList & 1) != 0 )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_int___Add(
          v16,
          *(_DWORD *)(v19 + 16),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      datalist = (int)v14->fields.datalist;
      if ( (int)++v18 >= datalist )
        goto LABEL_16;
    }
LABEL_20:
    sub_B2C434(FilterEnableEntityList, v13);
  }
LABEL_16:
  if ( !v16 )
    goto LABEL_20;
  if ( v16->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v16,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  void *Instance; // x0
  __int64 v23; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  int32_t Count; // w0
  int32_t v28; // w24
  int32_t v29; // w25
  bool v30; // w23
  int32_t type; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x0
  EventEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x26
  __int64 v35; // x10
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v38; // x22
  struct EventMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct EventMaster___c_StaticFields *v46; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_1; // x21
  Il2CppObject *v48; // x22
  struct EventMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WarBoardManager_TaskList_array *v56; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4188D85 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isFinishedAt);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventEntity__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFilterMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&EventEntity___TypeInfo, v10);
    sub_B2C35C(&EventEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Sort__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v19);
    sub_B2C35C(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v20);
    sub_B2C35C(&EventMaster___c_TypeInfo, v21);
    byte_4188D85 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    v30 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_45;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                v29,
                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen(Item, v30, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   &entity,
                                   v34->fields.missionTargetId,
                                   (const MethodInfo_24E412C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
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
                if ( !v26 )
                  goto LABEL_45;
                v32 = v26;
              }
              else
              {
LABEL_16:
                if ( !v25 )
                  goto LABEL_45;
                v32 = v25;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v32,
                v34,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity__Add__);
            }
          }
        }
      }
    }
    while ( ++v29 < v28 );
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
    v38 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v38,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v39 = EventMaster___c_TypeInfo->static_fields;
    v39->__9__7_0 = (struct System_Comparison_EventEntity__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v39->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v25 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v46 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v46->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v46 = EventMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_1,
      v48,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v49 = EventMaster___c_TypeInfo->static_fields;
    v49->__9__7_1 = (struct System_Comparison_EventEntity__o *)_9__7_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v49->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v26 )
LABEL_45:
    sub_B2C434(Instance, v23);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__7_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v56 = (WarBoardManager_TaskList_array *)sub_B2C374(
                                            EventEntity___TypeInfo,
                                            (unsigned int)(v26->fields._size + v25->fields._size));
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v25,
    v56,
    0,
    (const MethodInfo_2EF4C70 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
    v56,
    v25->fields._size,
    (const MethodInfo_2EF4C70 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v56;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27178048; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11
  __int64 v11; // x0

  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 24, 1, 1, v2);
  if ( !EntityList_27178048 )
    return -1LL;
  max_length = EntityList_27178048->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_27178048->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B2C460(result);
      sub_B2C400(v11, 0LL);
    }
    v9 = m_Items[v6];
    if ( !v9 )
      sub_B2C434(result, v4);
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
  void *Instance; // x0
  __int64 v23; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ShopMaster_o *v25; // x25
  int32_t Count; // w0
  int32_t v27; // w26
  int32_t v28; // w27
  EventEntity_o *v29; // x28
  __int64 v30; // x10
  EventMaster___c_c *v31; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x22
  Il2CppObject *v34; // x23
  struct EventMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EventMaster___c_c *v42; // x0
  struct EventMaster___c_StaticFields *v43; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_1; // x22
  Il2CppObject *v45; // x23
  struct EventMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct EventMaster___c_StaticFields *v53; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_2; // x22
  Il2CppObject *v55; // x23
  struct EventMaster___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // [xsp+8h] [xbp-78h]
  int64_t nowTime; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v67; // [xsp+18h] [xbp-68h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v68; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4188D93 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Comparison_EventEntity___ctor__, v4);
    sub_B2C35C(&System_Comparison_EventEntity__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&EventEntity_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v18);
    sub_B2C35C(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v19);
    sub_B2C35C(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v20);
    sub_B2C35C(&EventMaster___c_TypeInfo, v21);
    byte_4188D93 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  nowTime = NetworkManager__getTime(0LL);
  v68 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v68,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v67 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v67,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_59;
  v25 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v28,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v29 = (EventEntity_o *)Instance;
      v30 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v30
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) != EventEntity_TypeInfo
        || !v25 )
      {
        break;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v25, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                v29->fields.id,
                (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          goto LABEL_21;
        Instance = entity;
        if ( !entity )
          break;
        if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
        {
LABEL_21:
          if ( EventEntity__IsOpen(v29, 0, 0LL) )
          {
            Instance = v68;
            if ( !v68 )
              break;
          }
          else if ( EventEntity__IsExchangePeriod(v29, nowTime, 0LL) )
          {
            Instance = v67;
            if ( !v67 )
              break;
          }
          else
          {
            Instance = v65;
            if ( !v65 )
              break;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_30;
    }
LABEL_59:
    sub_B2C434(Instance, v23);
  }
LABEL_30:
  v31 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v31 = EventMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v34,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v35 = EventMaster___c_TypeInfo->static_fields;
    v35->__9__22_0 = (struct System_Comparison_EventEntity__o *)_9__22_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  Instance = v68;
  if ( !v68 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v68,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v42 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v42 = EventMaster___c_TypeInfo;
  }
  v43 = v42->static_fields;
  _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v43->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v43 = EventMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_1,
      v45,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v46 = EventMaster___c_TypeInfo->static_fields;
    v46->__9__22_1 = (struct System_Comparison_EventEntity__o *)_9__22_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v46->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  Instance = v67;
  if ( !v67 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v67,
    (System_Comparison_T__o *)_9__22_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v53 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v53->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v53 = EventMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_2,
      v55,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v56 = EventMaster___c_TypeInfo->static_fields;
    v56->__9__22_2 = (struct System_Comparison_EventEntity__o *)_9__22_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v56->__9__22_2,
      (System_Int32_array **)_9__22_2,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !v65 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v65,
    (System_Comparison_T__o *)_9__22_2,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  if ( !v63 )
    goto LABEL_59;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    (System_Collections_Generic_IEnumerable_T__o *)v68,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    (System_Collections_Generic_IEnumerable_T__o *)v67,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    (System_Collections_Generic_IEnumerable_T__o *)v65,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v9; // x19

  if ( (byte_4188D86 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188D86 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  EventEntity_array *EntityList_27178048; // x19
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  unsigned int v11; // w22
  EventEntity_o *v12; // x8
  int32_t id; // w21
  __int64 v15; // x0

  if ( (byte_4188D8B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188D8B = 1;
  }
  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_27178048 )
    goto LABEL_15;
  max_length = EntityList_27178048->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
      }
      v12 = EntityList_27178048->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v10 )
        break;
      id = v12->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    id,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__IsRaid((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_27178048->max_length;
      if ( (int)++v11 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B2C434(Instance, v8);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v9; // x19

  if ( (byte_4188D87 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188D87 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  GameEventType_TYPE_array *v3; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *EntityList_27178048; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v21; // x21
  struct EventMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0

  v3 = types;
  if ( (byte_4188D8A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventEntity___ctor__, types);
    sub_B2C35C(&System_Comparison_EventEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__Sort__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v9);
    sub_B2C35C(&GameEventType_TYPE___TypeInfo, v10);
    sub_B2C35C(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v11);
    sub_B2C35C(&EventMaster___c_TypeInfo, v12);
    byte_4188D8A = 1;
  }
  if ( !v3 )
  {
    EntityList_27178048 = (void *)sub_B2C374(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_27178048 )
      goto LABEL_23;
    v3 = (GameEventType_TYPE_array *)EntityList_27178048;
    if ( !*((_DWORD *)EntityList_27178048 + 6) )
      goto LABEL_22;
    *((_DWORD *)EntityList_27178048 + 8) = 12;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v17 = *(_QWORD *)&v3->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)v17 )
    {
      EntityList_27178048 = EventMaster__GetEntityList_27178048(this, v3->m_Items[v18 + 1], 0, 1, v16);
      if ( !v15 )
        goto LABEL_23;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_27178048,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v17) = v3->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_12;
    }
LABEL_22:
    v30 = sub_B2C460(EntityList_27178048);
    sub_B2C400(v30, 0LL);
  }
LABEL_12:
  EntityList_27178048 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_27178048 = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)EntityList_27178048 + 23);
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)EntityList_27178048 + 307) & 4) != 0 && !*((_DWORD *)EntityList_27178048 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_27178048);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v21,
      Method_EventMaster___c__GetSortedEntityList_b__12_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventEntity___ctor__);
    v22 = EventMaster___c_TypeInfo->static_fields;
    v22->__9__12_0 = (struct System_Comparison_EventEntity__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v15 )
LABEL_23:
    sub_B2C434(EntityList_27178048, v14);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v15;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_27178048; // x19
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  QuestGroupMaster_o *v12; // x21
  int max_length; // w8
  QuestMaster_o *v14; // x22
  unsigned int v15; // w24
  EventEntity_o *v16; // x8
  int32_t id; // w23
  __int64 v19; // x0

  if ( (byte_4188D8D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188D8D = 1;
  }
  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 12, 1, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v12 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_27178048) )
  {
LABEL_20:
    sub_B2C434(Instance, v10);
  }
  max_length = EntityList_27178048->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = (QuestMaster_o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= max_length )
    {
      v19 = sub_B2C460(Instance);
      sub_B2C400(v19, 0LL);
    }
    v16 = EntityList_27178048->m_Items[v15];
    if ( !v16 )
      goto LABEL_20;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_20;
    id = v16->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  id,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId(v12, id, 1, 0LL);
      if ( !v14 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                    v14,
                                    (System_Collections_Generic_List_int__o *)Instance,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_27178048->max_length;
    if ( (int)++v15 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  int BPEnableEventId; // w0
  EventEntity_o *Entity; // x0
  __int64 v7; // x1

  if ( (byte_4188D8E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime);
    byte_4188D8E = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              BPEnableEventId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_B2C434(0LL, v7);
  return EventEntity__IsOpen_29738096(Entity, checkTime, 0, 0LL);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_27178048; // x20
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  unsigned int v13; // w22
  EventEntity_o *v14; // x8
  __int64 v16; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188D90 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, flag);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188D90 = 1;
  }
  entity = 0LL;
  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EntityList_27178048) )
  {
LABEL_16:
    sub_B2C434(Instance, v10);
  }
  max_length = EntityList_27178048->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= max_length )
    {
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    v14 = EntityList_27178048->m_Items[v13];
    if ( !v14 || !v12 )
      goto LABEL_16;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v12,
                                  &entity,
                                  v14->fields.id,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_16;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, flag, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_27178048->max_length;
    if ( (int)++v13 >= max_length )
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

  if ( (byte_4188D98 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, *(_QWORD *)&eventId);
    byte_4188D98 = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              eventId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  __int64 v12; // x1
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  EventEntity_o *v18; // x25
  __int64 v19; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4188D94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&EventEntity_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4188D94 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !this->fields.list) )
  {
LABEL_28:
    sub_B2C434(Instance, v12);
  }
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v17,
                                  (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v18 = (EventEntity_o *)Instance;
    v19 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v19 - 1] != EventEntity_TypeInfo
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
      if ( !v14 )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v14,
              &entity,
              v18->fields.id,
              (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_23;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_28;
      if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
      {
LABEL_23:
        if ( (EventEntity__IsOpen(v18, 0, 0LL) || EventEntity__IsExchangePeriod(v18, Time, 0LL))
          && !EventEntity__IsClosePurchaseShop(v18, 0LL) )
        {
          return 1;
        }
      }
    }
    if ( ++v17 >= v16 )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *EntityList_27178048; // x20
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  unsigned int v13; // w23
  EventEntity_o *v14; // x8
  int32_t id; // w22
  bool result; // w0
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188D96 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188D96 = 1;
  }
  entity = 0LL;
  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 12, 1, 0, v3);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_27178048) )
  {
LABEL_17:
    sub_B2C434(Instance, v10);
  }
  max_length = EntityList_27178048->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= max_length )
    {
      v17 = sub_B2C460(Instance);
      sub_B2C400(v17, 0LL);
    }
    v14 = EntityList_27178048->m_Items[v13];
    if ( !v14 || !v12 )
      goto LABEL_17;
    id = v14->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v12,
                                  &entity,
                                  id,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_17;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x100000LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    max_length = EntityList_27178048->max_length;
    if ( (int)++v13 >= max_length )
      return 0;
  }
  result = 1;
  *eventId = id;
  return result;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27178048; // x0

  EntityList_27178048 = EventMaster__GetEntityList_27178048(this, 24, 1, 1, v2);
  if ( EntityList_27178048 )
    LOBYTE(EntityList_27178048) = EntityList_27178048->max_length != 0;
  return (char)EntityList_27178048;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x1
  void *list; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_4188D81 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&EventEntity_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4188D81 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v14
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v14 - 8) == EventEntity_TypeInfo )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_int___Add(
            v9,
            *((_DWORD *)list + 4),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(list, v10);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4188D88 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&EventEntity_TypeInfo, v4);
    byte_4188D88 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_B2C434(list, method);
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
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  EventEntity_o *v16; // x0
  EventEntity_o *v17; // x21
  __int64 v18; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_4188D89 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&EventEntity_TypeInfo, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    byte_4188D89 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B2C434(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v8);
  myroomBgmId = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_10:
      v15 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v16 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                             Enumerator,
                             *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( v16 )
    {
      v18 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (EventEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] != EventEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C728(v16);
        goto LABEL_33;
      }
      if ( v16->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v16, 0, 0LL) )
        myroomBgmId = v17->fields.myroomBgmId;
    }
  }
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
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B1E & 1) == 0 )
  {
    sub_B2C35C(&EventMaster___c_TypeInfo, v1);
    byte_4184B1E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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