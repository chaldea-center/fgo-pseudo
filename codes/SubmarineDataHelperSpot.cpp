SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserEventSpotEntity_o *Entity_22563348; // x0
  int32_t panelMapDetailId; // w22
  SubmarineSpotInfo_o *v10; // x21

  v4 = eventPanelSpotEntity;
  if ( (byte_42135E7 & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_B0D8A4(&SubmarineSpotInfo_TypeInfo, spotEntity);
    byte_42135E7 = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  IsRandomSpot = EventPanelSpotEntity__IsRandomSpot(v4, 0LL);
  if ( !IsRandomSpot )
  {
    panelMapDetailId = v4->fields.panelMapDetailId;
    goto LABEL_10;
  }
  eventPanelSpotEntity = (EventPanelSpotEntity_o *)SubmarineDataHelperSpot__get_userEventSpotMaster((const MethodInfo *)IsRandomSpot);
  if ( !eventPanelSpotEntity )
LABEL_11:
    sub_B0D97C(eventPanelSpotEntity);
  Entity_22563348 = UserEventSpotMaster__GetEntity_22563348(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0LL);
  if ( Entity_22563348 )
    panelMapDetailId = Entity_22563348->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v10 = (SubmarineSpotInfo_o *)sub_B0D974(SubmarineSpotInfo_TypeInfo, v6, v7);
  SubmarineSpotInfo___ctor(v10, spotEntity, v4, panelMapDetailId, 0LL);
  return v10;
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
  __int64 eventPanelSpotMaster; // x0
  int v17; // w8
  __int64 v18; // x24
  unsigned int v19; // w27
  __int64 v20; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x25
  const MethodInfo *v22; // x3
  SubmarineSpotInfo_o *v23; // x26
  __int64 v24; // x26
  int v25; // w9
  int v26; // w8
  int v27; // w9
  _DWORD *monitor; // x10
  int v29; // w11
  unsigned int v30; // w12
  _DWORD *v31; // x13
  unsigned int v32; // w14
  __int64 v34; // x0

  if ( (byte_42135E9 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
      *(_QWORD *)&mapId);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v13);
    byte_42135E9 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo,
                                                                                                  *(_QWORD *)&mapId,
                                                                                                  *(_QWORD *)&hIndex);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v15);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0LL);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  v17 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v18 = eventPanelSpotMaster;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      v20 = v18 + 8LL * (int)v19;
      v21 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v20 + 32);
      if ( !v21 )
        goto LABEL_36;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v20 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          v21->fields.missionTargetId,
                                          eventId,
                                          mapId,
                                          v22);
        if ( eventPanelSpotMaster )
        {
          v23 = (SubmarineSpotInfo_o *)eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_36;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0LL);
          if ( (eventPanelSpotMaster & 1) == 0 )
          {
            eventPanelSpotMaster = SubmarineSpotInfo__get_IsOnPanel(v23, 0LL);
            if ( (eventPanelSpotMaster & 1) != 0 )
            {
              eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
              if ( !eventPanelSpotMaster )
                goto LABEL_36;
              eventPanelSpotMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelSpotMaster,
                                                v23->fields._PanelId_k__BackingField,
                                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
              if ( eventPanelSpotMaster )
              {
                v24 = eventPanelSpotMaster;
                eventPanelSpotMaster = sub_B0D8BC(int___TypeInfo, 2LL);
                if ( !eventPanelSpotMaster )
                  goto LABEL_36;
                v25 = *(_DWORD *)(eventPanelSpotMaster + 24);
                if ( !v25 )
                  break;
                v26 = hIndex - *(_DWORD *)(v24 + 28);
                *(_DWORD *)(eventPanelSpotMaster + 32) = v26;
                if ( v25 == 1 )
                  break;
                v27 = vIndex - *(_DWORD *)(v24 + 32);
                *(_DWORD *)(eventPanelSpotMaster + 36) = v27;
                monitor = v21[1].monitor;
                if ( !monitor )
                  goto LABEL_36;
                v29 = monitor[6];
                if ( v29 >= 1 )
                {
                  v30 = 0;
                  while ( 1 )
                  {
                    if ( v30 >= v29 )
                      goto LABEL_35;
                    v31 = *(_DWORD **)&monitor[2 * v30 + 8];
                    if ( !v31 )
                      goto LABEL_36;
                    v32 = v31[6];
                    if ( !v32 )
                      goto LABEL_35;
                    if ( v26 == v31[8] )
                    {
                      if ( v32 <= 1 )
                        goto LABEL_35;
                      if ( v27 == v31[9] )
                        break;
                    }
                    if ( (int)++v30 >= v29 )
                      goto LABEL_32;
                  }
                  if ( !v14 )
                    goto LABEL_36;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v14,
                    v21,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_32:
      v17 = *(_DWORD *)(v18 + 24);
      if ( (int)++v19 >= v17 )
        goto LABEL_33;
    }
LABEL_35:
    v34 = sub_B0D9A8(eventPanelSpotMaster);
    sub_B0D948(v34, 0LL);
  }
LABEL_33:
  if ( !v14 )
LABEL_36:
    sub_B0D97C(eventPanelSpotMaster);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *eventPanelSpotMaster; // x0
  const MethodInfo *v9; // x2
  SpotEntity_o *spotEntity; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_42135E6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    *(_QWORD *)&spotId = sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7);
    byte_42135E6 = 1;
  }
  spotEntity = 0LL;
  entity = 0LL;
  eventPanelSpotMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(*(const MethodInfo **)&spotId);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                          eventPanelSpotMaster,
                                                                          &entity,
                                                                          v6,
                                                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_15;
  if ( *(&entity->fields.id + 1) != eventId || LODWORD(entity->fields.age) != mapId )
    return 0LL;
  eventPanelSpotMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SubmarineDataHelperSpot__get_spotMaster((const MethodInfo *)eventPanelSpotMaster);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                          eventPanelSpotMaster,
                                                                          (WarEntity_o **)&spotEntity,
                                                                          v6,
                                                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  if ( !spotEntity )
LABEL_15:
    sub_B0D97C(eventPanelSpotMaster);
  if ( spotEntity->fields.mapId == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, spotEntity, v9);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  const MethodInfo *v12; // x0
  const MethodInfo *v13; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v15; // x21
  unsigned __int64 v16; // x22
  int max_length; // w8
  unsigned int v18; // w9
  SpotEntity_o *v19; // x1
  __int64 v21; // x0

  v4 = eventId;
  if ( (byte_42135E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__, v5);
    *(_QWORD *)&eventId = sub_B0D8A4(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo, v6);
    byte_42135E5 = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_22;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo,
                                                                                                  v9,
                                                                                                  v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v12);
  if ( !spotMaster )
    goto LABEL_22;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_22;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v15 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)MasterName_k__BackingField )
      {
LABEL_23:
        v21 = sub_B0D9A8(spotMaster);
        sub_B0D948(v21, 0LL);
      }
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v15->fields.list + v16);
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= max_length )
            goto LABEL_23;
          v19 = List->m_Items[v18];
          if ( !v19 || !spotMaster )
            goto LABEL_22;
          if ( v19->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( (int)++v18 >= max_length )
            goto LABEL_20;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v19,
                                       v13);
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotMaster,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
      }
LABEL_20:
      LODWORD(MasterName_k__BackingField) = v15->fields._MasterName_k__BackingField;
      if ( (__int64)++v16 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v11;
    }
LABEL_22:
    sub_B0D97C(spotMaster);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v11;
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
  WarEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  WarEntity_o *v9; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v11; // x21
  _BOOL8 IsRandomSpot; // x0
  WarEntity_o *v15; // x21
  UserEventMapEntity_o *Entity_26766520; // x0
  const MethodInfo *v17; // x3

  v4 = spotEntity;
  if ( (byte_42135E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, checkBeforeClearQuest);
    spotEntity = (SpotEntity_o *)sub_B0D8A4(
                                   &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
                                   v5);
    byte_42135E8 = 1;
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
  spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_eventPanelMapMaster((const MethodInfo *)spotEntity);
  if ( !v4 || !spotEntity )
    goto LABEL_24;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)spotEntity,
             v4->fields.mapId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v9 = Entity;
  SubmarineSpotInfo = SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                        v4->fields.id,
                        *(&v9->fields.id + 1),
                        v9->fields.id,
                        v8);
  if ( !SubmarineSpotInfo )
    return 0;
  v11 = SubmarineSpotInfo;
  spotEntity = (SpotEntity_o *)SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !spotEntity )
LABEL_24:
    sub_B0D97C(spotEntity);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)spotEntity, 0LL) )
  {
    spotEntity = (SpotEntity_o *)v11->fields._EventPanelSpotEntity_k__BackingField;
    if ( spotEntity )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)spotEntity, 0LL);
      if ( IsRandomSpot )
      {
        IsRandomSpot = SubmarineSpotInfo__get_IsOnPanel(v11, 0LL);
        if ( !IsRandomSpot )
          return 1;
      }
      spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( spotEntity )
      {
        v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)spotEntity,
                v11->fields._PanelId_k__BackingField,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v15);
        if ( spotEntity )
        {
          Entity_26766520 = UserEventMapMaster__GetEntity_26766520(
                              (UserEventMapMaster_o *)spotEntity,
                              *(&v9->fields.id + 1),
                              v9->fields.id,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_26766520, (EventPanelMapDetailEntity_o *)v15, id, v17);
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

  if ( (byte_42135E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135E1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135E0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelSpotMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135DF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135E4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135E2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42135E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventSpotMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42135E3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}