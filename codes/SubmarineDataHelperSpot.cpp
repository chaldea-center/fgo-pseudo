SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  UserEventSpotEntity_o *Entity_23957512; // x0
  int32_t panelMapDetailId; // w22
  SubmarineSpotInfo_o *v8; // x21
  const MethodInfo *v9; // x4

  v4 = eventPanelSpotEntity;
  if ( (byte_418579E & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_B2C35C(&SubmarineSpotInfo_TypeInfo, spotEntity);
    byte_418579E = 1;
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
    sub_B2C434(eventPanelSpotEntity, spotEntity);
  Entity_23957512 = UserEventSpotMaster__GetEntity_23957512(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0LL);
  if ( Entity_23957512 )
    panelMapDetailId = Entity_23957512->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v8 = (SubmarineSpotInfo_o *)sub_B2C42C(SubmarineSpotInfo_TypeInfo);
  SubmarineSpotInfo___ctor(v8, spotEntity, v4, panelMapDetailId, v9);
  return v8;
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
  __int64 v17; // x1
  int v18; // w8
  __int64 v19; // x24
  unsigned int v20; // w27
  __int64 v21; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x25
  const MethodInfo *v23; // x3
  __int64 v24; // x26
  __int64 v25; // x26
  int v26; // w9
  int v27; // w8
  int v28; // w9
  _DWORD *monitor; // x10
  int v30; // w11
  unsigned int v31; // w12
  _DWORD *v32; // x13
  unsigned int v33; // w14
  __int64 v35; // x0

  if ( (byte_41857A0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
      *(_QWORD *)&mapId);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v13);
    byte_41857A0 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
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
  v18 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v19 = eventPanelSpotMaster;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = v19 + 8LL * (int)v20;
      v22 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v21 + 32);
      if ( !v22 )
        goto LABEL_36;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v21 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          v22->fields.missionTargetId,
                                          eventId,
                                          mapId,
                                          v23);
        if ( eventPanelSpotMaster )
        {
          v24 = eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_36;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0LL);
          if ( (eventPanelSpotMaster & 1) == 0 && *(int *)(v24 + 32) >= 1 )
          {
            eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
            if ( !eventPanelSpotMaster )
              goto LABEL_36;
            eventPanelSpotMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)eventPanelSpotMaster,
                                              *(_DWORD *)(v24 + 32),
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
            if ( eventPanelSpotMaster )
            {
              v25 = eventPanelSpotMaster;
              eventPanelSpotMaster = sub_B2C374(int___TypeInfo, 2LL);
              if ( !eventPanelSpotMaster )
                goto LABEL_36;
              v26 = *(_DWORD *)(eventPanelSpotMaster + 24);
              if ( !v26 )
                break;
              v27 = hIndex - *(_DWORD *)(v25 + 28);
              *(_DWORD *)(eventPanelSpotMaster + 32) = v27;
              if ( v26 == 1 )
                break;
              v28 = vIndex - *(_DWORD *)(v25 + 32);
              *(_DWORD *)(eventPanelSpotMaster + 36) = v28;
              monitor = v22[1].monitor;
              if ( !monitor )
                goto LABEL_36;
              v30 = monitor[6];
              if ( v30 >= 1 )
              {
                v31 = 0;
                while ( 1 )
                {
                  if ( v31 >= v30 )
                    goto LABEL_35;
                  v32 = *(_DWORD **)&monitor[2 * v31 + 8];
                  if ( !v32 )
                    goto LABEL_36;
                  v33 = v32[6];
                  if ( !v33 )
                    goto LABEL_35;
                  if ( v27 == v32[8] )
                  {
                    if ( v33 <= 1 )
                      goto LABEL_35;
                    if ( v28 == v32[9] )
                      break;
                  }
                  if ( (int)++v31 >= v30 )
                    goto LABEL_32;
                }
                if ( !v14 )
                  goto LABEL_36;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v14,
                  v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
              }
            }
          }
        }
      }
LABEL_32:
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        goto LABEL_33;
    }
LABEL_35:
    v35 = sub_B2C460(eventPanelSpotMaster);
    sub_B2C400(v35, 0LL);
  }
LABEL_33:
  if ( !v14 )
LABEL_36:
    sub_B2C434(eventPanelSpotMaster, v17);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
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
  SpotEntity_o *v9; // x1
  const MethodInfo *v10; // x2
  SpotEntity_o *spotEntity; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_418579D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId);
    *(_QWORD *)&spotId = sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7);
    byte_418579D = 1;
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
                                                                          (const MethodInfo_24E412C *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
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
                                                                          (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  v9 = spotEntity;
  if ( !spotEntity )
LABEL_15:
    sub_B2C434(eventPanelSpotMaster, v9);
  if ( spotEntity->fields.mapId == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, spotEntity, v10);
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
  SpotEntity_o *v8; // x1
  SpotEntity_array *List; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  const MethodInfo *v11; // x0
  const MethodInfo *v12; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v14; // x21
  unsigned __int64 v15; // x22
  int max_length; // w8
  unsigned int v17; // w9
  __int64 v19; // x0

  v4 = eventId;
  if ( (byte_418579C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__, v5);
    *(_QWORD *)&eventId = sub_B2C35C(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo, v6);
    byte_418579C = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_22;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v11);
  if ( !spotMaster )
    goto LABEL_22;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_22;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v14 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)MasterName_k__BackingField )
      {
LABEL_23:
        v19 = sub_B2C460(spotMaster);
        sub_B2C400(v19, 0LL);
      }
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v14->fields.list + v15);
        v17 = 0;
        while ( 1 )
        {
          if ( v17 >= max_length )
            goto LABEL_23;
          v8 = List->m_Items[v17];
          if ( !v8 || !spotMaster )
            goto LABEL_22;
          if ( v8->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( (int)++v17 >= max_length )
            goto LABEL_20;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v8,
                                       v12);
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)spotMaster,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
      }
LABEL_20:
      LODWORD(MasterName_k__BackingField) = v14->fields._MasterName_k__BackingField;
      if ( (__int64)++v15 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v10;
    }
LABEL_22:
    sub_B2C434(spotMaster, v8);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineDataHelperSpot__IsSpotBelowClosedPanel(
        SpotEntity_o *spotEntity,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  SpotEntity_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t id; // w19
  WarEntity_o *Entity; // x0
  const MethodInfo *v9; // x3
  WarEntity_o *v10; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v12; // x21
  _BOOL8 IsRandomSpot; // x0
  WarEntity_o *v16; // x21
  UserEventMapEntity_o *Entity_27014188; // x0
  const MethodInfo *v18; // x3

  v4 = spotEntity;
  if ( (byte_418579F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__, checkBeforeClearQuest);
    spotEntity = (SpotEntity_o *)sub_B2C35C(
                                   &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
                                   v5);
    byte_418579F = 1;
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
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
  spotEntity = (SpotEntity_o *)SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !spotEntity )
LABEL_24:
    sub_B2C434(spotEntity, v6);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)spotEntity, 0LL) )
  {
    spotEntity = (SpotEntity_o *)v12->fields._EventPanelSpotEntity_k__BackingField;
    if ( spotEntity )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)spotEntity, 0LL);
      if ( IsRandomSpot && v12->fields._PanelId_k__BackingField < 1 )
        return 1;
      spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( spotEntity )
      {
        v16 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)spotEntity,
                v12->fields._PanelId_k__BackingField,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v16);
        if ( spotEntity )
        {
          Entity_27014188 = UserEventMapMaster__GetEntity_27014188(
                              (UserEventMapMaster_o *)spotEntity,
                              *(&v10->fields.id + 1),
                              v10->fields.id,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_27014188, (EventPanelMapDetailEntity_o *)v16, id, v18);
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
  __int64 v4; // x1

  if ( (byte_4185798 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185798 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185797 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185797 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185796 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelSpotMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185796 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418579B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418579B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (SpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185799 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185799 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418579A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventSpotMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418579A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}