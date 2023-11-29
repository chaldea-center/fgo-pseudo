SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  _BOOL8 IsRandomSpot; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  UserEventSpotMaster_o *userEventSpotMaster; // x0
  UserEventSpotEntity_o *Entity_23999916; // x0
  int32_t panelMapDetailId; // w22
  SubmarineSpotInfo_o *v13; // x21
  const MethodInfo *v14; // x4

  if ( (byte_40F7C32 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineSpotInfo_TypeInfo, spotEntity);
    byte_40F7C32 = 1;
  }
  if ( !eventPanelSpotEntity )
    goto LABEL_11;
  IsRandomSpot = EventPanelSpotEntity__IsRandomSpot(eventPanelSpotEntity, 0LL);
  if ( !IsRandomSpot )
  {
    panelMapDetailId = eventPanelSpotEntity->fields.panelMapDetailId;
    goto LABEL_10;
  }
  userEventSpotMaster = SubmarineDataHelperSpot__get_userEventSpotMaster((const MethodInfo *)IsRandomSpot);
  if ( !userEventSpotMaster )
LABEL_11:
    sub_B170D4();
  Entity_23999916 = UserEventSpotMaster__GetEntity_23999916(
                      userEventSpotMaster,
                      eventPanelSpotEntity->fields.eventId,
                      eventPanelSpotEntity->fields.spotId,
                      0LL);
  if ( Entity_23999916 )
    panelMapDetailId = Entity_23999916->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v13 = (SubmarineSpotInfo_o *)sub_B170CC(SubmarineSpotInfo_TypeInfo, v6, v7, v8, v9);
  SubmarineSpotInfo___ctor(v13, spotEntity, eventPanelSpotEntity, panelMapDetailId, v14);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
EventPanelSpotEntity_array *__fastcall SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
        int32_t eventId,
        int32_t mapId,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  const MethodInfo *v15; // x0
  EventPanelSpotMaster_o *eventPanelSpotMaster; // x0
  __int64 EntityList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w8
  __int64 v21; // x24
  unsigned int v22; // w27
  __int64 v23; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x25
  const MethodInfo *v25; // x3
  __int64 v26; // x26
  EventPanelSpotEntity_o *v27; // x0
  EventPanelMapDetailMaster_o *eventPanelMapDetailMaster; // x0
  __int64 v29; // x26
  int v30; // w9
  int v31; // w8
  int v32; // w9
  _DWORD *monitor; // x10
  int v34; // w11
  unsigned int v35; // w12
  _DWORD *v36; // x13
  unsigned int v37; // w14

  if ( (byte_40F7C34 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
      *(_QWORD *)&mapId);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v13);
    byte_40F7C34 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo,
                                                                                                  *(_QWORD *)&mapId,
                                                                                                  *(_QWORD *)&hIndex,
                                                                                                  *(_QWORD *)&vIndex,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = SubmarineDataHelperSpot__get_eventPanelSpotMaster(v15);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  EntityList = (__int64)EventPanelSpotMaster__GetEntityList(eventPanelSpotMaster, eventId, mapId, 0LL);
  if ( !EntityList )
    goto LABEL_36;
  v20 = *(_DWORD *)(EntityList + 24);
  v21 = EntityList;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( v22 < v20 )
    {
      v23 = v21 + 8LL * (int)v22;
      v24 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v23 + 32);
      if ( !v24 )
        goto LABEL_36;
      EntityList = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v23 + 32), 0LL);
      if ( (EntityList & 1) != 0 )
      {
        EntityList = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                v24->fields.missionTargetId,
                                eventId,
                                mapId,
                                v25);
        if ( EntityList )
        {
          v26 = EntityList;
          v27 = *(EventPanelSpotEntity_o **)(EntityList + 24);
          if ( !v27 )
            goto LABEL_36;
          EntityList = EventPanelSpotEntity__IsCrossLineSpot(v27, 0LL);
          if ( (EntityList & 1) == 0 && *(int *)(v26 + 32) >= 1 )
          {
            eventPanelMapDetailMaster = SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)EntityList);
            if ( !eventPanelMapDetailMaster )
              goto LABEL_36;
            EntityList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelMapDetailMaster,
                                    *(_DWORD *)(v26 + 32),
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
            if ( EntityList )
            {
              v29 = EntityList;
              EntityList = sub_B17014(int___TypeInfo, 2LL, v19);
              if ( !EntityList )
                goto LABEL_36;
              v30 = *(_DWORD *)(EntityList + 24);
              if ( !v30 )
                break;
              v31 = hIndex - *(_DWORD *)(v29 + 28);
              *(_DWORD *)(EntityList + 32) = v31;
              if ( v30 == 1 )
                break;
              v32 = vIndex - *(_DWORD *)(v29 + 32);
              *(_DWORD *)(EntityList + 36) = v32;
              monitor = v24[1].monitor;
              if ( !monitor )
                goto LABEL_36;
              v34 = monitor[6];
              if ( v34 >= 1 )
              {
                v35 = 0;
                while ( 1 )
                {
                  if ( v35 >= v34 )
                    goto LABEL_35;
                  v36 = *(_DWORD **)&monitor[2 * v35 + 8];
                  if ( !v36 )
                    goto LABEL_36;
                  v37 = v36[6];
                  if ( !v37 )
                    goto LABEL_35;
                  if ( v31 == v36[8] )
                  {
                    if ( v37 <= 1 )
                      goto LABEL_35;
                    if ( v32 == v36[9] )
                      break;
                  }
                  if ( (int)++v35 >= v34 )
                    goto LABEL_32;
                }
                if ( !v14 )
                  goto LABEL_36;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v14,
                  v24,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
              }
            }
          }
        }
      }
LABEL_32:
      v20 = *(_DWORD *)(v21 + 24);
      if ( (int)++v22 >= v20 )
        goto LABEL_33;
    }
LABEL_35:
    sub_B17100(EntityList, v18, v19);
    sub_B170A0();
  }
LABEL_33:
  if ( !v14 )
LABEL_36:
    sub_B170D4();
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__GetSubmarineSpotInfo(
        int32_t spotId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t v6; // w20
  __int64 v7; // x1
  EventPanelSpotMaster_o *eventPanelSpotMaster; // x0
  _BOOL8 v9; // x0
  SpotMaster_o *spotMaster; // x0
  const MethodInfo *v11; // x2
  SpotEntity_o *spotEntity; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_40F7C31 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    *(_QWORD *)&spotId = sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7);
    byte_40F7C31 = 1;
  }
  spotEntity = 0LL;
  entity = 0LL;
  eventPanelSpotMaster = SubmarineDataHelperSpot__get_eventPanelSpotMaster(*(const MethodInfo **)&spotId);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  v9 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelSpotMaster,
         &entity,
         v6,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
  if ( !v9 )
    return 0LL;
  if ( !entity )
    goto LABEL_15;
  if ( *(&entity->fields.id + 1) != eventId || LODWORD(entity->fields.age) != mapId )
    return 0LL;
  spotMaster = SubmarineDataHelperSpot__get_spotMaster((const MethodInfo *)v9);
  if ( !spotMaster )
    goto LABEL_15;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)spotMaster,
          (WarEntity_o **)&spotEntity,
          v6,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0LL;
  if ( !spotEntity )
LABEL_15:
    sub_B170D4();
  if ( spotEntity->fields.mapId == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, spotEntity, v11);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SubmarineSpotInfo__o *__fastcall SubmarineDataHelperSpot__GetSubmarineSpotInfoList(
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t v4; // w22
  __int64 v5; // x1
  __int64 v6; // x1
  SpotMaster_o *spotMaster; // x0
  SpotEntity_array *List; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  const MethodInfo *v14; // x0
  EventPanelSpotMaster_o *eventPanelSpotMaster; // x0
  EventPanelSpotEntity_array *EntityList; // x0
  SpotEntity_o *v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  EventPanelSpotEntity_array *v20; // x21
  unsigned __int64 v21; // x22
  int max_length; // w8
  unsigned int v23; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *SubmarineSpotInfo; // x0

  v4 = eventId;
  if ( (byte_40F7C30 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__, v5);
    *(_QWORD *)&eventId = sub_B16FFC(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo, v6);
    byte_40F7C30 = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_22;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  eventPanelSpotMaster = SubmarineDataHelperSpot__get_eventPanelSpotMaster(v14);
  if ( !eventPanelSpotMaster )
    goto LABEL_22;
  EntityList = EventPanelSpotMaster__GetEntityList(eventPanelSpotMaster, v4, mapId, 0LL);
  if ( !EntityList )
    goto LABEL_22;
  v19 = *(_QWORD *)&EntityList->max_length;
  v20 = EntityList;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
      {
LABEL_23:
        sub_B17100(EntityList, v17, v18);
        sub_B170A0();
      }
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        EntityList = (EventPanelSpotEntity_array *)v20->m_Items[v21];
        v23 = 0;
        while ( 1 )
        {
          if ( v23 >= max_length )
            goto LABEL_23;
          v17 = List->m_Items[v23];
          if ( !v17 || !EntityList )
            goto LABEL_22;
          if ( v17->fields.id == LODWORD(EntityList->bounds) )
            break;
          if ( (int)++v23 >= max_length )
            goto LABEL_20;
        }
        SubmarineSpotInfo = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                                                                     (EventPanelSpotEntity_o *)EntityList,
                                                                                     v17,
                                                                                     v18);
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          SubmarineSpotInfo,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
      }
LABEL_20:
      LODWORD(v19) = v20->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v13;
    }
LABEL_22:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineDataHelperSpot__IsSpotBelowClosedPanel(
        SpotEntity_o *spotEntity,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  SpotEntity_o *v4; // x21
  __int64 v5; // x1
  int32_t id; // w19
  EventPanelMapMaster_o *eventPanelMapMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v9; // x3
  WarEntity_o *v10; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v12; // x21
  EventPanelSpotEntity_o *EventPanelSpotEntity_k__BackingField; // x0
  EventPanelSpotEntity_o *v16; // x0
  _BOOL8 IsRandomSpot; // x0
  EventPanelMapDetailMaster_o *eventPanelMapDetailMaster; // x0
  WarEntity_o *v19; // x21
  UserEventMapMaster_o *userEventMapMaster; // x0
  UserEventMapEntity_o *Entity_26577024; // x0
  const MethodInfo *v22; // x3

  v4 = spotEntity;
  if ( (byte_40F7C33 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, checkBeforeClearQuest);
    spotEntity = (SpotEntity_o *)sub_B16FFC(
                                   &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
                                   v5);
    byte_40F7C33 = 1;
  }
  if ( !checkBeforeClearQuest )
    goto LABEL_8;
  spotEntity = (SpotEntity_o *)SubmarineSaveParamsManager__LoadBeforeQuestInfo((const MethodInfo *)spotEntity);
  if ( !spotEntity )
    goto LABEL_24;
  if ( LOBYTE(spotEntity->fields.mapId) || BYTE1(spotEntity->fields.mapId) )
    id = spotEntity->fields.id;
  else
LABEL_8:
    id = -1;
  eventPanelMapMaster = SubmarineDataHelperSpot__get_eventPanelMapMaster((const MethodInfo *)spotEntity);
  if ( !v4 || !eventPanelMapMaster )
    goto LABEL_24;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelMapMaster,
             v4->fields.mapId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v10 = Entity;
  SubmarineSpotInfo = SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                        v4->fields.id,
                        *(&v10->fields.id + 1),
                        v10->fields.id,
                        v9);
  if ( !SubmarineSpotInfo )
    return 0;
  v12 = SubmarineSpotInfo;
  EventPanelSpotEntity_k__BackingField = SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !EventPanelSpotEntity_k__BackingField )
LABEL_24:
    sub_B170D4();
  if ( !EventPanelSpotEntity__IsCrossLineSpot(EventPanelSpotEntity_k__BackingField, 0LL) )
  {
    v16 = v12->fields._EventPanelSpotEntity_k__BackingField;
    if ( v16 )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot(v16, 0LL);
      if ( IsRandomSpot && v12->fields._PanelId_k__BackingField < 1 )
        return 1;
      eventPanelMapDetailMaster = SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( eventPanelMapDetailMaster )
      {
        v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelMapDetailMaster,
                v12->fields._PanelId_k__BackingField,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        userEventMapMaster = SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v19);
        if ( userEventMapMaster )
        {
          Entity_26577024 = UserEventMapMaster__GetEntity_26577024(
                              userEventMapMaster,
                              *(&v10->fields.id + 1),
                              v10->fields.id,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_26577024, (EventPanelMapDetailEntity_o *)v19, id, v22);
        }
      }
    }
    goto LABEL_24;
  }
  return 0;
}


EventPanelMapDetailMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapDetailMaster(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C2C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C2C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C2B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C2B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C2A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelSpotMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C2A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C2F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C2F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C2D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C2D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7C2E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventSpotMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F7C2E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}