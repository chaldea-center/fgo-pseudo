SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  UserEventSpotEntity_o *Entity_23016864; // x0
  int32_t panelMapDetailId; // w22
  SubmarineSpotInfo_o *v8; // x21

  v4 = eventPanelSpotEntity;
  if ( (byte_438A5AF & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_B775C4(&SubmarineSpotInfo_TypeInfo);
    byte_438A5AF = 1;
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
    sub_B7769C(eventPanelSpotEntity, spotEntity);
  Entity_23016864 = UserEventSpotMaster__GetEntity_23016864(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0LL);
  if ( Entity_23016864 )
    panelMapDetailId = Entity_23016864->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v8 = (SubmarineSpotInfo_o *)sub_B77694(SubmarineSpotInfo_TypeInfo);
  SubmarineSpotInfo___ctor(v8, spotEntity, v4, panelMapDetailId, 0LL);
  return v8;
}


EventPanelSpotEntity_array *__fastcall SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
        int32_t eventId,
        int32_t mapId,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  const MethodInfo *v10; // x0
  __int64 eventPanelSpotMaster; // x0
  __int64 v12; // x1
  int v13; // w8
  __int64 v14; // x24
  unsigned int v15; // w27
  __int64 v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x25
  const MethodInfo *v18; // x3
  SubmarineSpotInfo_o *v19; // x26
  __int64 v20; // x26
  int v21; // w9
  int v22; // w8
  int v23; // w9
  _DWORD *monitor; // x10
  int v25; // w11
  unsigned int v26; // w12
  _DWORD *v27; // x13
  unsigned int v28; // w14
  __int64 v30; // x0

  if ( (byte_438A5B1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_438A5B1 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v10);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0LL);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  v13 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v14 = eventPanelSpotMaster;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13 )
    {
      v16 = v14 + 8LL * (int)v15;
      v17 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v16 + 32);
      if ( !v17 )
        goto LABEL_36;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v16 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          v17->fields.missionTargetId,
                                          eventId,
                                          mapId,
                                          v18);
        if ( eventPanelSpotMaster )
        {
          v19 = (SubmarineSpotInfo_o *)eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_36;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0LL);
          if ( (eventPanelSpotMaster & 1) == 0 )
          {
            eventPanelSpotMaster = SubmarineSpotInfo__get_IsOnPanel(v19, 0LL);
            if ( (eventPanelSpotMaster & 1) != 0 )
            {
              eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
              if ( !eventPanelSpotMaster )
                goto LABEL_36;
              eventPanelSpotMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelSpotMaster,
                                                v19->fields._PanelId_k__BackingField,
                                                (const MethodInfo_21FB894 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
              if ( eventPanelSpotMaster )
              {
                v20 = eventPanelSpotMaster;
                eventPanelSpotMaster = sub_B775DC(int___TypeInfo, 2LL);
                if ( !eventPanelSpotMaster )
                  goto LABEL_36;
                v21 = *(_DWORD *)(eventPanelSpotMaster + 24);
                if ( !v21 )
                  break;
                v22 = hIndex - *(_DWORD *)(v20 + 28);
                *(_DWORD *)(eventPanelSpotMaster + 32) = v22;
                if ( v21 == 1 )
                  break;
                v23 = vIndex - *(_DWORD *)(v20 + 32);
                *(_DWORD *)(eventPanelSpotMaster + 36) = v23;
                monitor = v17[1].monitor;
                if ( !monitor )
                  goto LABEL_36;
                v25 = monitor[6];
                if ( v25 >= 1 )
                {
                  v26 = 0;
                  while ( 1 )
                  {
                    if ( v26 >= v25 )
                      goto LABEL_35;
                    v27 = *(_DWORD **)&monitor[2 * v26 + 8];
                    if ( !v27 )
                      goto LABEL_36;
                    v28 = v27[6];
                    if ( !v28 )
                      goto LABEL_35;
                    if ( v22 == v27[8] )
                    {
                      if ( v28 <= 1 )
                        goto LABEL_35;
                      if ( v23 == v27[9] )
                        break;
                    }
                    if ( (int)++v26 >= v25 )
                      goto LABEL_32;
                  }
                  if ( !v9 )
                    goto LABEL_36;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v9,
                    v17,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_32:
      v13 = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= v13 )
        goto LABEL_33;
    }
LABEL_35:
    v30 = sub_B776C8(eventPanelSpotMaster);
    sub_B77668(v30, 0LL);
  }
LABEL_33:
  if ( !v9 )
LABEL_36:
    sub_B7769C(eventPanelSpotMaster, v12);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__GetSubmarineSpotInfo(
        int32_t spotId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t v6; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *eventPanelSpotMaster; // x0
  SpotEntity_o *v8; // x1
  const MethodInfo *v9; // x2
  SpotEntity_o *spotEntity; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_438A5AE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
    *(_QWORD *)&spotId = sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    byte_438A5AE = 1;
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
                                                                          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
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
                                                                          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  v8 = spotEntity;
  if ( !spotEntity )
LABEL_15:
    sub_B7769C(eventPanelSpotMaster, v8);
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
  SpotMaster_o *spotMaster; // x0
  SpotEntity_o *v6; // x1
  SpotEntity_array *List; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  const MethodInfo *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v12; // x21
  unsigned __int64 v13; // x22
  int max_length; // w8
  unsigned int v15; // w9
  __int64 v17; // x0

  v4 = eventId;
  if ( (byte_438A5AD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
    *(_QWORD *)&eventId = sub_B775C4(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
    byte_438A5AD = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_22;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v9);
  if ( !spotMaster )
    goto LABEL_22;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_22;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v12 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)MasterName_k__BackingField )
      {
LABEL_23:
        v17 = sub_B776C8(spotMaster);
        sub_B77668(v17, 0LL);
      }
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v12->fields.list + v13);
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= max_length )
            goto LABEL_23;
          v6 = List->m_Items[v15];
          if ( !v6 || !spotMaster )
            goto LABEL_22;
          if ( v6->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( (int)++v15 >= max_length )
            goto LABEL_20;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v6,
                                       v10);
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotMaster,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
      }
LABEL_20:
      LODWORD(MasterName_k__BackingField) = v12->fields._MasterName_k__BackingField;
      if ( (__int64)++v13 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v8;
    }
LABEL_22:
    sub_B7769C(spotMaster, v6);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v8;
}


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
  UserEventMapEntity_o *Entity_22990952; // x0
  const MethodInfo *v17; // x3

  v4 = spotEntity;
  if ( (byte_438A5B0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    spotEntity = (SpotEntity_o *)sub_B775C4(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
    byte_438A5B0 = 1;
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
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
    sub_B7769C(spotEntity, v5);
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
                (const MethodInfo_21FB894 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v15);
        if ( spotEntity )
        {
          Entity_22990952 = UserEventMapMaster__GetEntity_22990952(
                              (UserEventMapMaster_o *)spotEntity,
                              *(&v9->fields.id + 1),
                              v9->fields.id,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_22990952, (EventPanelMapDetailEntity_o *)v15, id, v17);
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
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438A5A9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A5A9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438A5A8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A5A8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438A5A7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPanelSpotMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A5A7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438A5AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A5AC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438A5AA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A5AA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_438A5AB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventSpotMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A5AB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}