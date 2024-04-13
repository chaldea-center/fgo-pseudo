void __fastcall EventMaster___ctor(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9B35 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E9B35 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    66,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_EventMaster__EventEntity__int___ctor__);
}


int32_t __fastcall EventMaster__GetBPEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventEntity_array *EntityList_27137608; // x19
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  unsigned int v17; // w22
  EventEntity_o *v18; // x8
  int32_t id; // w21
  __int64 v21; // x0

  if ( (byte_42E9B41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E9B41 = 1;
  }
  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 12, 1, 0, v4);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_27137608 )
    goto LABEL_15;
  max_length = EntityList_27137608->max_length;
  if ( max_length >= 1 )
  {
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v21 = sub_B5D6C8(Instance);
        sub_B5D668(v21, 0LL);
      }
      v18 = EntityList_27137608->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v16 )
        break;
      id = v18->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v16,
                                    id,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_27137608->max_length;
      if ( (int)++v17 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B5D69C(Instance, v14);
  }
  return 0;
}


System_Collections_Generic_List_EventEntity__o *__fastcall EventMaster__GetCombineCostumeItemEventList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x4
  int64_t EntityList_27137608; // x0
  __int64 v17; // x1
  int v18; // w8
  int64_t v19; // x20
  unsigned int v20; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  __int64 v23; // x0

  if ( (byte_42E9B4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42E9B4C = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  EntityList_27137608 = (int64_t)EventMaster__GetEntityList_27137608(this, 23, 0, 1, v15);
  if ( !EntityList_27137608 )
    goto LABEL_16;
  v18 = *(_DWORD *)(EntityList_27137608 + 24);
  v19 = EntityList_27137608;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= v18 )
      {
        v23 = sub_B5D6C8(EntityList_27137608);
        sub_B5D668(v23, 0LL);
      }
      v21 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v19 + 8LL * (int)v20 + 32);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      EntityList_27137608 = NetworkManager__getTime(0LL);
      if ( !v21 )
        break;
      if ( EntityList_27137608 >= (__int64)v21[2].monitor )
      {
        if ( !v14 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v21,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity__Add__);
      }
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        return (System_Collections_Generic_List_EventEntity__o *)v14;
    }
LABEL_16:
    sub_B5D69C(EntityList_27137608, v17);
  }
  return (System_Collections_Generic_List_EventEntity__o *)v14;
}


EventEntity_array *__fastcall EventMaster__GetEnableEntityList(
        EventMaster_o *this,
        int32_t eventType,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return EventMaster__GetEntityList_27137608(this, eventType, 1, isFinishedAt, v4);
}


System_Collections_Generic_List_EventEntity____o *__fastcall EventMaster__GetEnableEntityLists(
        EventMaster_o *this,
        GameEventType_TYPE_array *eventTypes,
        bool isFinishedAt,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *EntityList_27137608; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  unsigned __int64 v18; // x23
  bool v19; // w22
  __int64 v21; // x0

  if ( (byte_42E9B37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity____Add__, (_DWORD)eventTypes, isFinishedAt, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity_____ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity____TypeInfo, v10, v11, v12);
    byte_42E9B37 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity_____ctor__);
  if ( !eventTypes )
    goto LABEL_11;
  v17 = *(_QWORD *)&eventTypes->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v19 = isFinishedAt;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
      {
        v21 = sub_B5D6C8(EntityList_27137608);
        sub_B5D668(v21, 0LL);
      }
      EntityList_27137608 = (EventMissionProgressRequest_Argument_ProgressData_o *)EventMaster__GetEntityList_27137608(
                                                                                     this,
                                                                                     eventTypes->m_Items[v18 + 1],
                                                                                     1,
                                                                                     v19,
                                                                                     v16);
      if ( !v13 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        EntityList_27137608,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity____Add__);
      LODWORD(v17) = eventTypes->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        return (System_Collections_Generic_List_EventEntity____o *)v13;
    }
LABEL_11:
    sub_B5D69C(EntityList_27137608, v15);
  }
  return (System_Collections_Generic_List_EventEntity____o *)v13;
}


EventEntity_array *__fastcall EventMaster__GetEnableExistEventRewardEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  EventRewardSceneMaster_o *v35; // x21
  int32_t v36; // w22
  int32_t v37; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x24
  __int64 v39; // x10

  if ( (byte_42E9B4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardSceneMaster___, v8, v9, v10);
    sub_B5D5C4(&EventEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E9B4A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v35 = (EventRewardSceneMaster_o *)Instance;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Instance >= 1 )
  {
    v36 = (int)Instance;
    v37 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v37,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v39 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v39
        || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v39 - 1] != EventEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)EventEntity__IsOpen((EventEntity_o *)Instance, 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v35 )
          break;
        Instance = (DataManager_o *)EventRewardSceneMaster__GetEntityList(v35, v38->fields.missionTargetId, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.datalist )
          {
            if ( !v32 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              v38,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v37 >= v36 )
        goto LABEL_21;
    }
LABEL_23:
    sub_B5D69C(Instance, v34);
  }
LABEL_21:
  if ( !v32 )
    goto LABEL_23;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEnableMyRoomMultipleViewEntityList(
        EventMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventMaster__GetEntityList_27137608(this, 24, 1, 1, v2);
}


EventEntity_array *__fastcall EventMaster__GetEnabledEntityListFromIds(
        EventMaster_o *this,
        int32_t eventType,
        System_Collections_Generic_List_int__o *ids,
        int64_t checkTime,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  __int64 v30; // x1
  void *list; // x0
  int32_t v32; // w24
  int32_t i; // w25
  EventEntity_o *v34; // x26
  __int64 v35; // x10

  if ( (byte_42E9B38 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventType,
      (_DWORD)ids,
      checkTime);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&EventEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v26, v27, v28);
    byte_42E9B38 = 1;
  }
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v32 = (int)list;
    for ( i = 0; i < v32; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_22;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v34 = (EventEntity_o *)list;
        v35 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v35
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v35 - 8) == EventEntity_TypeInfo )
        {
          if ( !ids )
            goto LABEL_22;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 && (eventType < 1 || v34->fields.type == eventType) )
          {
            if ( checkTime )
            {
              list = (void *)EventEntity__IsOpen_29837068(v34, checkTime, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
                goto LABEL_16;
            }
            else
            {
              list = (void *)EventEntity__IsOpen(v34, 1, 0LL);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
LABEL_16:
                if ( !v29 )
                  goto LABEL_22;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v29,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
  if ( !v29 )
LABEL_22:
    sub_B5D69C(list, v30);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


EventEntity_array *__fastcall EventMaster__GetEntityList(
        EventMaster_o *this,
        int32_t eventType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventMaster__GetEntityList_27137608(this, eventType, 0, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventMaster__GetEntityList_27137608(
        EventMaster_o *this,
        int32_t eventType,
        bool isOpenGet,
        bool isFinishedAt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v30; // w23
  int32_t v31; // w24
  bool v32; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x26
  __int64 v34; // x10

  v6 = isOpenGet;
  if ( (byte_42E9B39 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventType,
      isOpenGet,
      isFinishedAt);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v24, v25, v26);
    byte_42E9B39 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    v32 = isFinishedAt;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v31,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v34 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (EventEntity_c *)list->klass->_2.typeHierarchy[v34 - 1] == EventEntity_TypeInfo
          && (eventType < 1 || LODWORD(list->fields._syncRoot) == eventType) )
        {
          if ( !v6
            || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventEntity__IsOpen(
                                                                                                     (EventEntity_o *)list,
                                                                                                     v32,
                                                                                                     0LL),
                (((unsigned int)list | !v6) & 1) != 0) )
          {
            if ( !v27 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              v33,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity__Add__);
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B5D69C(list, v28);
  }
LABEL_17:
  if ( !v27 )
    goto LABEL_19;
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int64_t __fastcall EventMaster__GetEventFinishedAt(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9B4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42E9B4F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  eventId,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity->fields.coordinate;
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  return -1LL;
}


System_String_o *__fastcall EventMaster__GetEventName(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o **p_name; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9B46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E9B46 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v9 )
  {
    if ( !entity )
      sub_B5D69C(v9, v10);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o **p_longName; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9B47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E9B47 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v9 )
  {
    if ( !entity )
      sub_B5D69C(v9, v10);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_42E9B4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9, v10);
    byte_42E9B4E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( Master_WarQuestSelectionMaster
    && (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   eventId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) != 0LL )
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
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  EventEntity_array *FilterEnableEntityList; // x19
  System_Collections_Generic_HashSet_int__o *v25; // x20
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x21
  __int64 v30; // x22
  EventEntity_o *v31; // x26
  __int64 v33; // x0

  if ( (byte_42E9B44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, isFinish, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E9B44 = 1;
  }
  FilterEnableEntityList = EventMaster__GetFilterEnableEntityList(this, isFinish, method);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !FilterEnableEntityList )
    goto LABEL_18;
  if ( *(_QWORD *)&FilterEnableEntityList->max_length )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    max_length = FilterEnableEntityList->max_length;
    if ( max_length >= 1 )
    {
      v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v30 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v30 >= max_length )
        {
          v33 = sub_B5D6C8(Instance);
          sub_B5D668(v33, 0LL);
        }
        v31 = FilterEnableEntityList->m_Items[v30];
        if ( !v31 )
          break;
        if ( !v29 )
          break;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v29,
                                      v31->fields.id,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v25 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                        v25,
                                        v31->fields.id,
                                        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        max_length = FilterEnableEntityList->max_length;
        if ( (int)++v30 >= max_length )
          goto LABEL_16;
      }
LABEL_18:
      sub_B5D69C(Instance, v27);
    }
LABEL_16:
    if ( !v25 )
      goto LABEL_18;
  }
  return v25;
}


EventEntity_array *__fastcall EventMaster__GetFilterEnableEntityList(
        EventMaster_o *this,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  char v30; // w1
  int v31; // w2
  __int64 v32; // x3
  char v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char v36; // w1
  int v37; // w2
  __int64 v38; // x3
  char v39; // w1
  int v40; // w2
  __int64 v41; // x3
  char v42; // w1
  int v43; // w2
  __int64 v44; // x3
  char v45; // w1
  int v46; // w2
  __int64 v47; // x3
  char v48; // w1
  int v49; // w2
  __int64 v50; // x3
  char v51; // w1
  int v52; // w2
  __int64 v53; // x3
  char v54; // w1
  int v55; // w2
  __int64 v56; // x3
  void *Instance; // x0
  __int64 v58; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  int32_t Count; // w0
  int32_t v63; // w24
  int32_t v64; // w25
  bool v65; // w23
  int32_t type; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x0
  EventEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x26
  __int64 v70; // x10
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v73; // x22
  struct EventMaster___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct EventMaster___c_StaticFields *v81; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_1; // x21
  Il2CppObject *v83; // x22
  struct EventMaster___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  WarBoardManager_TaskList_array *v91; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9B3A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      isFinishedAt,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFilterMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&EventEntity___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&EventEntity_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__CopyTo__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__get_Count__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__, v48, v49, v50);
    sub_B5D5C4(&Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__, v51, v52, v53);
    sub_B5D5C4(&EventMaster___c_TypeInfo, v54, v55, v56);
    byte_42E9B3A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFilterMaster___);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_45;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v63 = Count;
    v64 = 0;
    v65 = isFinishedAt;
    do
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_45;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                v64,
                                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v70 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v70
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v70 - 1] == EventEntity_TypeInfo )
        {
          type = Item->fields.type;
          if ( type == 22 || type == 12 )
          {
            Instance = (void *)EventEntity__IsOpen(Item, v65, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   &entity,
                                   v69->fields.missionTargetId,
                                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventFilterMaster__EventFilterEntity__int__TryGetEntity__);
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
                if ( !v61 )
                  goto LABEL_45;
                v67 = v61;
              }
              else
              {
LABEL_16:
                if ( !v60 )
                  goto LABEL_45;
                v67 = v60;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v67,
                v69,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity__Add__);
            }
          }
        }
      }
    }
    while ( ++v64 < v63 );
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
    v73 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v73,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v74 = EventMaster___c_TypeInfo->static_fields;
    v74->__9__7_0 = (struct System_Comparison_EventEntity__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v74->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  if ( !v60 )
    goto LABEL_45;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v60,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v81 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v81->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v81 = EventMaster___c_TypeInfo->static_fields;
    }
    v83 = (Il2CppObject *)v81->__9;
    _9__7_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_1,
      v83,
      Method_EventMaster___c__GetFilterEnableEntityList_b__7_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v84 = EventMaster___c_TypeInfo->static_fields;
    v84->__9__7_1 = (struct System_Comparison_EventEntity__o *)_9__7_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v84->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  if ( !v61 )
LABEL_45:
    sub_B5D69C(Instance, v58);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
    (System_Comparison_T__o *)_9__7_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v91 = (WarBoardManager_TaskList_array *)sub_B5D5DC(
                                            EventEntity___TypeInfo,
                                            (unsigned int)(v61->fields._size + v60->fields._size));
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v60,
    v91,
    0,
    (const MethodInfo_30577D0 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  System_Collections_Generic_List_WarBoardManager_TaskList___CopyTo(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v61,
    v91,
    v60->fields._size,
    (const MethodInfo_30577D0 *)Method_System_Collections_Generic_List_EventEntity__CopyTo__);
  return (EventEntity_array *)v91;
}


int64_t __fastcall EventMaster__GetFinishedTimeMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27137608; // x0
  __int64 v4; // x1
  int max_length; // w8
  __int64 v6; // x9
  EventEntity_o **m_Items; // x10
  int64_t result; // x0
  EventEntity_o *v9; // x11
  int64_t finishedAt; // x11
  __int64 v11; // x0

  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 24, 1, 1, v2);
  if ( !EntityList_27137608 )
    return -1LL;
  max_length = EntityList_27137608->max_length;
  if ( max_length < 1 )
    return -1LL;
  v6 = 0LL;
  m_Items = EntityList_27137608->m_Items;
  result = -1LL;
  do
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B5D6C8(result);
      sub_B5D668(v11, 0LL);
    }
    v9 = m_Items[v6];
    if ( !v9 )
      sub_B5D69C(result, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  void *Instance; // x0
  __int64 v63; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  ShopMaster_o *v65; // x25
  int32_t Count; // w0
  int32_t v67; // w26
  int32_t v68; // w27
  EventEntity_o *v69; // x28
  __int64 v70; // x10
  EventMaster___c_c *v71; // x0
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x22
  Il2CppObject *v74; // x23
  struct EventMaster___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  EventMaster___c_c *v82; // x0
  struct EventMaster___c_StaticFields *v83; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_1; // x22
  Il2CppObject *v85; // x23
  struct EventMaster___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct EventMaster___c_StaticFields *v93; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_2; // x22
  Il2CppObject *v95; // x23
  struct EventMaster___c_StaticFields *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v103; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // [xsp+8h] [xbp-78h]
  int64_t nowTime; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v107; // [xsp+18h] [xbp-68h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v108; // [xsp+20h] [xbp-60h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E9B48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_EventEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_EventEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&EventEntity_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&NetworkManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__, v50, v51, v52);
    sub_B5D5C4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__, v53, v54, v55);
    sub_B5D5C4(&Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__, v56, v57, v58);
    sub_B5D5C4(&EventMaster___c_TypeInfo, v59, v60, v61);
    byte_42E9B48 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  nowTime = NetworkManager__getTime(0LL);
  v108 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v107 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v107,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v105,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !this->fields.list )
    goto LABEL_59;
  v65 = (ShopMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v67 = Count;
    v68 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v68,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v69 = (EventEntity_o *)Instance;
      v70 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v70
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v70 - 8) != EventEntity_TypeInfo
        || !v65 )
      {
        break;
      }
      Instance = (void *)ShopMaster__IsEnableEventShop(v65, *((_DWORD *)Instance + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                v69->fields.id,
                (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          goto LABEL_21;
        Instance = entity;
        if ( !entity )
          break;
        if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
        {
LABEL_21:
          if ( EventEntity__IsOpen(v69, 0, 0LL) )
          {
            Instance = v108;
            if ( !v108 )
              break;
          }
          else if ( EventEntity__IsExchangePeriod(v69, nowTime, 0LL) )
          {
            Instance = v107;
            if ( !v107 )
              break;
          }
          else
          {
            Instance = v105;
            if ( !v105 )
              break;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventEntity__Add__);
        }
      }
      if ( ++v68 >= v67 )
        goto LABEL_30;
    }
LABEL_59:
    sub_B5D69C(Instance, v63);
  }
LABEL_30:
  v71 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v71 = EventMaster___c_TypeInfo;
  }
  static_fields = v71->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v74,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v75 = EventMaster___c_TypeInfo->static_fields;
    v75->__9__22_0 = (struct System_Comparison_EventEntity__o *)_9__22_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v75->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  Instance = v108;
  if ( !v108 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v108,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v82 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    v82 = EventMaster___c_TypeInfo;
  }
  v83 = v82->static_fields;
  _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v83->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82);
      v83 = EventMaster___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)v83->__9;
    _9__22_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_1,
      v85,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v86 = EventMaster___c_TypeInfo->static_fields;
    v86->__9__22_1 = (struct System_Comparison_EventEntity__o *)_9__22_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v86->__9__22_1,
      (System_Int32_array **)_9__22_1,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  Instance = v107;
  if ( !v107 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v107,
    (System_Comparison_T__o *)_9__22_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  Instance = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    Instance = EventMaster___c_TypeInfo;
  }
  v93 = (struct EventMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v93->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      v93 = EventMaster___c_TypeInfo->static_fields;
    }
    v95 = (Il2CppObject *)v93->__9;
    _9__22_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_2,
      v95,
      Method_EventMaster___c__GetOpenedEventEntityList_b__22_2__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v96 = EventMaster___c_TypeInfo->static_fields;
    v96->__9__22_2 = (struct System_Comparison_EventEntity__o *)_9__22_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v96->__9__22_2,
      (System_Int32_array **)_9__22_2,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  if ( !v105 )
    goto LABEL_59;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v105,
    (System_Comparison_T__o *)_9__22_2,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  v103 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v103,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  if ( !v103 )
    goto LABEL_59;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v103,
    (System_Collections_Generic_IEnumerable_T__o *)v108,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v103,
    (System_Collections_Generic_IEnumerable_T__o *)v107,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v103,
    (System_Collections_Generic_IEnumerable_T__o *)v105,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  return (EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v103,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
}


int32_t __fastcall EventMaster__GetPointEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v14; // x19

  if ( (byte_42E9B3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E9B3B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( EventDetailEntity__IsEventPoint(Entity, 0LL) )
      LODWORD(Entity) = v14->fields.pointImageId;
    else
      LODWORD(Entity) = 0;
  }
  return (int)Entity;
}


int32_t __fastcall EventMaster__GetRaidEnableEventId(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventEntity_array *EntityList_27137608; // x19
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  unsigned int v17; // w22
  EventEntity_o *v18; // x8
  int32_t id; // w21
  __int64 v21; // x0

  if ( (byte_42E9B40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E9B40 = 1;
  }
  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 12, 1, 0, v4);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !EntityList_27137608 )
    goto LABEL_15;
  max_length = EntityList_27137608->max_length;
  if ( max_length >= 1 )
  {
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v21 = sub_B5D6C8(Instance);
        sub_B5D668(v21, 0LL);
      }
      v18 = EntityList_27137608->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v16 )
        break;
      id = v18->fields.id;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v16,
                                    id,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)EventDetailEntity__IsRaid((EventDetailEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return id;
      max_length = EntityList_27137608->max_length;
      if ( (int)++v17 >= max_length )
        return 0;
    }
LABEL_15:
    sub_B5D69C(Instance, v14);
  }
  return 0;
}


int32_t __fastcall EventMaster__GetRaidEventImageId(EventMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v14; // x19

  if ( (byte_42E9B3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E9B3C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    eventId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( EventDetailEntity__IsRaid(Entity, 0LL) )
      LODWORD(Entity) = v14->fields.pointImageId;
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
  GameEventType_TYPE_array *v4; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  void *EntityList_27137608; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  const MethodInfo *v33; // x4
  __int64 v34; // x8
  unsigned __int64 v35; // x22
  struct EventMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v38; // x21
  struct EventMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v47; // x0

  v4 = types;
  if ( (byte_42E9B3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventEntity___ctor__, (_DWORD)types, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_EventEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__Sort__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&GameEventType_TYPE___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventMaster___c__GetSortedEntityList_b__12_0__, v24, v25, v26);
    sub_B5D5C4(&EventMaster___c_TypeInfo, v27, v28, v29);
    byte_42E9B3F = 1;
  }
  if ( !v4 )
  {
    EntityList_27137608 = (void *)sub_B5D5DC(GameEventType_TYPE___TypeInfo, 1LL);
    if ( !EntityList_27137608 )
      goto LABEL_23;
    v4 = (GameEventType_TYPE_array *)EntityList_27137608;
    if ( !*((_DWORD *)EntityList_27137608 + 6) )
      goto LABEL_22;
    *((_DWORD *)EntityList_27137608 + 8) = 12;
  }
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventEntity___ctor__);
  v34 = *(_QWORD *)&v4->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    while ( v35 < (unsigned int)v34 )
    {
      EntityList_27137608 = EventMaster__GetEntityList_27137608(this, v4->m_Items[v35 + 1], 0, 1, v33);
      if ( !v32 )
        goto LABEL_23;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
        (System_Collections_Generic_IEnumerable_T__o *)EntityList_27137608,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
      LODWORD(v34) = v4->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        goto LABEL_12;
    }
LABEL_22:
    v47 = sub_B5D6C8(EntityList_27137608);
    sub_B5D668(v47, 0LL);
  }
LABEL_12:
  EntityList_27137608 = EventMaster___c_TypeInfo;
  if ( (BYTE3(EventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMaster___c_TypeInfo);
    EntityList_27137608 = EventMaster___c_TypeInfo;
  }
  static_fields = (struct EventMaster___c_StaticFields *)*((_QWORD *)EntityList_27137608 + 23);
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)EntityList_27137608 + 307) & 4) != 0 && !*((_DWORD *)EntityList_27137608 + 56) )
    {
      j_il2cpp_runtime_class_init_0(EntityList_27137608);
      static_fields = EventMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v38,
      Method_EventMaster___c__GetSortedEntityList_b__12_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventEntity___ctor__);
    v39 = EventMaster___c_TypeInfo->static_fields;
    v39->__9__12_0 = (struct System_Comparison_EventEntity__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v39->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v32 )
LABEL_23:
    sub_B5D69C(EntityList_27137608, v31);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v32,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventEntity__Sort__);
  return (System_Collections_Generic_List_EventEntity__o *)v32;
}


bool __fastcall EventMaster__IsBPEnable(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventEntity_array *EntityList_27137608; // x19
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  QuestGroupMaster_o *v22; // x21
  int max_length; // w8
  QuestMaster_o *v24; // x22
  unsigned int v25; // w24
  EventEntity_o *v26; // x8
  int32_t id; // w23
  __int64 v29; // x0

  if ( (byte_42E9B42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E9B42 = 1;
  }
  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 12, 1, 0, v4);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v22 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_27137608) )
  {
LABEL_20:
    sub_B5D69C(Instance, v20);
  }
  max_length = EntityList_27137608->max_length;
  if ( max_length < 1 )
    return 0;
  v24 = (QuestMaster_o *)Instance;
  v25 = 0;
  while ( 1 )
  {
    if ( v25 >= max_length )
    {
      v29 = sub_B5D6C8(Instance);
      sub_B5D668(v29, 0LL);
    }
    v26 = EntityList_27137608->m_Items[v25];
    if ( !v26 )
      goto LABEL_20;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_20;
    id = v26->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  id,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)EventDetailEntity__isBP((EventDetailEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestGroupMaster__GetListOfQuestIdByGroupId(v22, id, 1, 0LL);
      if ( !v24 )
        goto LABEL_20;
      Instance = (DataManager_o *)QuestMaster__CheckBpEnabled(
                                    v24,
                                    (System_Collections_Generic_List_int__o *)Instance,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_27137608->max_length;
    if ( (int)++v25 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsBPNotification(EventMaster_o *this, int64_t checkTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int BPEnableEventId; // w0
  EventEntity_o *Entity; // x0
  __int64 v8; // x1

  if ( (byte_42E9B43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, checkTime, (_DWORD)method, v3);
    byte_42E9B43 = 1;
  }
  BPEnableEventId = EventMaster__GetBPEnableEventId(this, (const MethodInfo *)checkTime);
  if ( BPEnableEventId < 1 )
    return 0;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              BPEnableEventId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    sub_B5D69C(0LL, v8);
  return EventEntity__IsOpen_29837068(Entity, checkTime, 0, 0LL);
}


bool __fastcall EventMaster__IsEnableDetailFlag(EventMaster_o *this, int64_t flag, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  EventEntity_array *EntityList_27137608; // x20
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  unsigned int v18; // w22
  EventEntity_o *v19; // x8
  __int64 v21; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9B45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E9B45 = 1;
  }
  entity = 0LL;
  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 12, 1, 0, v4);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EntityList_27137608) )
  {
LABEL_16:
    sub_B5D69C(Instance, v15);
  }
  max_length = EntityList_27137608->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= max_length )
    {
      v21 = sub_B5D6C8(Instance);
      sub_B5D668(v21, 0LL);
    }
    v19 = EntityList_27137608->m_Items[v18];
    if ( !v19 || !v17 )
      goto LABEL_16;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v17,
                                  &entity,
                                  v19->fields.id,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_16;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, flag, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    max_length = EntityList_27137608->max_length;
    if ( (int)++v18 >= max_length )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableEvent(
        EventMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  EventEntity_o *Entity; // x0

  if ( (byte_42E9B4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, eventId, eventType, method);
    byte_42E9B4D = 1;
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              eventId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  return Entity && (!eventType || Entity->fields.type == eventType) && EventEntity__IsEventPeriod(Entity, 0LL, 0LL);
}


bool __fastcall EventMaster__IsEnableEventShop(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x22
  int32_t Count; // w0
  int32_t v32; // w23
  int32_t v33; // w24
  EventEntity_o *v34; // x25
  __int64 v35; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9B49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&EventEntity_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E9B49 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !this->fields.list) )
  {
LABEL_28:
    sub_B5D69C(Instance, v28);
  }
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v32 = Count;
  v33 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  v33,
                                  (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v34 = (EventEntity_o *)Instance;
    v35 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (EventEntity_c *)Instance->klass->_2.typeHierarchy[v35 - 1] != EventEntity_TypeInfo
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
      if ( !v30 )
        goto LABEL_28;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v30,
              &entity,
              v34->fields.id,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_23;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_28;
      if ( !EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x4000000000LL, 0LL) )
      {
LABEL_23:
        if ( (EventEntity__IsOpen(v34, 0, 0LL) || EventEntity__IsExchangePeriod(v34, Time, 0LL))
          && !EventEntity__IsClosePurchaseShop(v34, 0LL) )
        {
          return 1;
        }
      }
    }
    if ( ++v33 >= v32 )
      return 0;
  }
}


bool __fastcall EventMaster__IsEnableFatigueEvent(EventMaster_o *this, int32_t *eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  EventEntity_array *EntityList_27137608; // x20
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  unsigned int v18; // w23
  EventEntity_o *v19; // x8
  int32_t id; // w22
  bool result; // w0
  __int64 v22; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9B4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E9B4B = 1;
  }
  entity = 0LL;
  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 12, 1, 0, v4);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        *eventId = 0,
        !EntityList_27137608) )
  {
LABEL_17:
    sub_B5D69C(Instance, v15);
  }
  max_length = EntityList_27137608->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= max_length )
    {
      v22 = sub_B5D6C8(Instance);
      sub_B5D668(v22, 0LL);
    }
    v19 = EntityList_27137608->m_Items[v18];
    if ( !v19 || !v17 )
      goto LABEL_17;
    id = v19->fields.id;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v17,
                                  &entity,
                                  id,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_17;
      Instance = (DataManager_o *)EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x100000LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    max_length = EntityList_27137608->max_length;
    if ( (int)++v18 >= max_length )
      return 0;
  }
  result = 1;
  *eventId = id;
  return result;
}


bool __fastcall EventMaster__IsEnableMyRoomMultipleView(EventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventEntity_array *EntityList_27137608; // x0

  EntityList_27137608 = EventMaster__GetEntityList_27137608(this, 24, 1, 1, v2);
  if ( EntityList_27137608 )
    LOBYTE(EntityList_27137608) = EntityList_27137608->max_length != 0;
  return (char)EntityList_27137608;
}


bool __fastcall EventMaster__IsRaidEnable(EventMaster_o *this, const MethodInfo *method)
{
  return EventMaster__GetRaidEnableEventId(this, method) > 0;
}


System_Int32_array *__fastcall EventMaster__getEventIdList(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x20
  __int64 v24; // x1
  void *list; // x0
  int32_t v26; // w21
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42E9B36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&EventEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    byte_42E9B36 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = (int)list;
    v27 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v27,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v28
          && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) == EventEntity_TypeInfo )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_int___Add(
            v23,
            *((_DWORD *)list + 4),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v27 >= v26 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(list, v24);
  }
LABEL_13:
  if ( !v23 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMaster__getMyRoomBgImgId(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w20
  int32_t myroomBgId; // w21
  int32_t v15; // w22
  EventEntity_o *Item; // x0
  EventEntity_o *v17; // x23
  __int64 v18; // x10

  if ( (byte_42E9B3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&EventEntity_TypeInfo, v8, v9, v10);
    byte_42E9B3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    myroomBgId = 0;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v15,
                                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = Item;
        v18 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == EventEntity_TypeInfo
          && Item->fields.myroomBgId >= 1
          && EventEntity__IsOpen(Item, 0, 0LL) )
        {
          myroomBgId = v17->fields.myroomBgId;
        }
      }
      if ( ++v15 >= v13 )
        return myroomBgId;
    }
LABEL_17:
    sub_B5D69C(list, method);
  }
  return 0;
}


int32_t __fastcall EventMaster__getMyRoomBgmId(EventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t myroomBgmId; // w20
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventEntity_o *v26; // x0
  EventEntity_o *v27; // x21
  __int64 v28; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42E9B3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&EventEntity_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v14, v15, v16);
    byte_42E9B3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B5D69C(list, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v18);
  myroomBgmId = 0;
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
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_10:
      v25 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v26 = (EventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                             Enumerator,
                             *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( v26 )
    {
      v28 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != EventEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D990(v26);
        goto LABEL_33;
      }
      if ( v26->fields.myroomBgmId >= 1 && EventEntity__IsOpen(v26, 0, 0LL) )
        myroomBgmId = v27->fields.myroomBgmId;
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return myroomBgmId;
}


void __fastcall EventMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E6559 & 1) == 0 )
  {
    sub_B5D5C4(&EventMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6559 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMaster___c___GetFilterEnableEntityList_b__7_1(
        EventMaster___c_o *this,
        EventEntity_o *a,
        EventEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
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