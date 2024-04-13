SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventPanelSpotEntity_o *v5; // x20
  _BOOL8 IsRandomSpot; // x0
  UserEventSpotEntity_o *Entity_22479928; // x0
  int32_t panelMapDetailId; // w22
  SubmarineSpotInfo_o *v9; // x21

  v5 = eventPanelSpotEntity;
  if ( (byte_42E7B2A & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_B5D5C4(
                                                       &SubmarineSpotInfo_TypeInfo,
                                                       (_DWORD)spotEntity,
                                                       (_DWORD)method,
                                                       v3);
    byte_42E7B2A = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  IsRandomSpot = EventPanelSpotEntity__IsRandomSpot(v5, 0LL);
  if ( !IsRandomSpot )
  {
    panelMapDetailId = v5->fields.panelMapDetailId;
    goto LABEL_10;
  }
  eventPanelSpotEntity = (EventPanelSpotEntity_o *)SubmarineDataHelperSpot__get_userEventSpotMaster((const MethodInfo *)IsRandomSpot);
  if ( !eventPanelSpotEntity )
LABEL_11:
    sub_B5D69C(eventPanelSpotEntity, spotEntity);
  Entity_22479928 = UserEventSpotMaster__GetEntity_22479928(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v5->fields.eventId,
                      v5->fields.spotId,
                      0LL);
  if ( Entity_22479928 )
    panelMapDetailId = Entity_22479928->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v9 = (SubmarineSpotInfo_o *)sub_B5D694(SubmarineSpotInfo_TypeInfo);
  SubmarineSpotInfo___ctor(v9, spotEntity, v5, panelMapDetailId, 0LL);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
EventPanelSpotEntity_array *__fastcall SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
        int32_t eventId,
        int32_t mapId,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  const MethodInfo *v25; // x0
  __int64 eventPanelSpotMaster; // x0
  __int64 v27; // x1
  int v28; // w8
  __int64 v29; // x24
  unsigned int v30; // w27
  __int64 v31; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x25
  const MethodInfo *v33; // x3
  SubmarineSpotInfo_o *v34; // x26
  __int64 v35; // x26
  int v36; // w9
  int v37; // w8
  int v38; // w9
  _DWORD *monitor; // x10
  int v40; // w11
  unsigned int v41; // w12
  _DWORD *v42; // x13
  unsigned int v43; // w14
  __int64 v45; // x0

  if ( (byte_42E7B2C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
      mapId,
      hIndex,
      *(_QWORD *)&vIndex);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v21, v22, v23);
    byte_42E7B2C = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v25);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0LL);
  if ( !eventPanelSpotMaster )
    goto LABEL_36;
  v28 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v29 = eventPanelSpotMaster;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( v30 < v28 )
    {
      v31 = v29 + 8LL * (int)v30;
      v32 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v31 + 32);
      if ( !v32 )
        goto LABEL_36;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v31 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          v32->fields.missionTargetId,
                                          eventId,
                                          mapId,
                                          v33);
        if ( eventPanelSpotMaster )
        {
          v34 = (SubmarineSpotInfo_o *)eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_36;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0LL);
          if ( (eventPanelSpotMaster & 1) == 0 )
          {
            eventPanelSpotMaster = SubmarineSpotInfo__get_IsOnPanel(v34, 0LL);
            if ( (eventPanelSpotMaster & 1) != 0 )
            {
              eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
              if ( !eventPanelSpotMaster )
                goto LABEL_36;
              eventPanelSpotMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelSpotMaster,
                                                v34->fields._PanelId_k__BackingField,
                                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
              if ( eventPanelSpotMaster )
              {
                v35 = eventPanelSpotMaster;
                eventPanelSpotMaster = sub_B5D5DC(int___TypeInfo, 2LL);
                if ( !eventPanelSpotMaster )
                  goto LABEL_36;
                v36 = *(_DWORD *)(eventPanelSpotMaster + 24);
                if ( !v36 )
                  break;
                v37 = hIndex - *(_DWORD *)(v35 + 28);
                *(_DWORD *)(eventPanelSpotMaster + 32) = v37;
                if ( v36 == 1 )
                  break;
                v38 = vIndex - *(_DWORD *)(v35 + 32);
                *(_DWORD *)(eventPanelSpotMaster + 36) = v38;
                monitor = v32[1].monitor;
                if ( !monitor )
                  goto LABEL_36;
                v40 = monitor[6];
                if ( v40 >= 1 )
                {
                  v41 = 0;
                  while ( 1 )
                  {
                    if ( v41 >= v40 )
                      goto LABEL_35;
                    v42 = *(_DWORD **)&monitor[2 * v41 + 8];
                    if ( !v42 )
                      goto LABEL_36;
                    v43 = v42[6];
                    if ( !v43 )
                      goto LABEL_35;
                    if ( v37 == v42[8] )
                    {
                      if ( v43 <= 1 )
                        goto LABEL_35;
                      if ( v38 == v42[9] )
                        break;
                    }
                    if ( (int)++v41 >= v40 )
                      goto LABEL_32;
                  }
                  if ( !v24 )
                    goto LABEL_36;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v24,
                    v32,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_32:
      v28 = *(_DWORD *)(v29 + 24);
      if ( (int)++v30 >= v28 )
        goto LABEL_33;
    }
LABEL_35:
    v45 = sub_B5D6C8(eventPanelSpotMaster);
    sub_B5D668(v45, 0LL);
  }
LABEL_33:
  if ( !v24 )
LABEL_36:
    sub_B5D69C(eventPanelSpotMaster, v27);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__GetSubmarineSpotInfo(
        int32_t spotId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t v6; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *eventPanelSpotMaster; // x0
  SpotEntity_o *v11; // x1
  const MethodInfo *v12; // x2
  SpotEntity_o *spotEntity; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_42E7B29 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__,
      eventId,
      mapId,
      method);
    *(_QWORD *)&spotId = sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7, v8, v9);
    byte_42E7B29 = 1;
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
                                                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
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
                                                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  v11 = spotEntity;
  if ( !spotEntity )
LABEL_15:
    sub_B5D69C(eventPanelSpotMaster, v11);
  if ( spotEntity->fields.mapId == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, spotEntity, v12);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SubmarineSpotInfo__o *__fastcall SubmarineDataHelperSpot__GetSubmarineSpotInfoList(
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v5; // w22
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SpotMaster_o *spotMaster; // x0
  SpotEntity_o *v13; // x1
  SpotEntity_array *List; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v19; // x21
  unsigned __int64 v20; // x22
  int max_length; // w8
  unsigned int v22; // w9
  __int64 v24; // x0

  v5 = eventId;
  if ( (byte_42E7B28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__, mapId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__, v6, v7, v8);
    *(_QWORD *)&eventId = sub_B5D5C4(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo, v9, v10, v11);
    byte_42E7B28 = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_22;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v16);
  if ( !spotMaster )
    goto LABEL_22;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v5, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_22;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v19 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)MasterName_k__BackingField )
      {
LABEL_23:
        v24 = sub_B5D6C8(spotMaster);
        sub_B5D668(v24, 0LL);
      }
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v19->fields.list + v20);
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= max_length )
            goto LABEL_23;
          v13 = List->m_Items[v22];
          if ( !v13 || !spotMaster )
            goto LABEL_22;
          if ( v13->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( (int)++v22 >= max_length )
            goto LABEL_20;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v13,
                                       v17);
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotMaster,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
      }
LABEL_20:
      LODWORD(MasterName_k__BackingField) = v19->fields._MasterName_k__BackingField;
      if ( (__int64)++v20 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v15;
    }
LABEL_22:
    sub_B5D69C(spotMaster, v13);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v15;
}


bool __fastcall SubmarineDataHelperSpot__IsSpotBelowClosedPanel(
        SpotEntity_o *spotEntity,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SpotEntity_o *v5; // x21
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  int32_t id; // w19
  WarEntity_o *Entity; // x0
  const MethodInfo *v12; // x3
  WarEntity_o *v13; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v15; // x21
  _BOOL8 IsRandomSpot; // x0
  WarEntity_o *v19; // x21
  UserEventMapEntity_o *Entity_22454016; // x0
  const MethodInfo *v21; // x3

  v5 = spotEntity;
  if ( (byte_42E7B2B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__,
      checkBeforeClearQuest,
      (_DWORD)method,
      v3);
    spotEntity = (SpotEntity_o *)sub_B5D5C4(
                                   &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
                                   v6,
                                   v7,
                                   v8);
    byte_42E7B2B = 1;
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
  if ( !v5 || !spotEntity )
    goto LABEL_24;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)spotEntity,
             v5->fields.mapId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v13 = Entity;
  SubmarineSpotInfo = SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                        v5->fields.id,
                        *(&v13->fields.id + 1),
                        v13->fields.id,
                        v12);
  if ( !SubmarineSpotInfo )
    return 0;
  v15 = SubmarineSpotInfo;
  spotEntity = (SpotEntity_o *)SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !spotEntity )
LABEL_24:
    sub_B5D69C(spotEntity, v9);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)spotEntity, 0LL) )
  {
    spotEntity = (SpotEntity_o *)v15->fields._EventPanelSpotEntity_k__BackingField;
    if ( spotEntity )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)spotEntity, 0LL);
      if ( IsRandomSpot )
      {
        IsRandomSpot = SubmarineSpotInfo__get_IsOnPanel(v15, 0LL);
        if ( !IsRandomSpot )
          return 1;
      }
      spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( spotEntity )
      {
        v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)spotEntity,
                v15->fields._PanelId_k__BackingField,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v19);
        if ( spotEntity )
        {
          Entity_22454016 = UserEventMapMaster__GetEntity_22454016(
                              (UserEventMapMaster_o *)spotEntity,
                              *(&v13->fields.id + 1),
                              v13->fields.id,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_22454016, (EventPanelMapDetailEntity_o *)v19, id, v21);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B24 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B23 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelSpotMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B22 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B27 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B25 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7B26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventSpotMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E7B26 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}