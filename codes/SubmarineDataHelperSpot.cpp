SubmarineSpotInfo_o *SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  UserEventSpotEntity_o *Entity_43607656; // x0
  int32_t panelMapDetailId; // w21
  SubmarineSpotInfo_o *v8; // x22
  const MethodInfo *v9; // x4

  v4 = eventPanelSpotEntity;
  if ( (byte_4CEAEB1 & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_1C7BAE8(&SubmarineSpotInfo_TypeInfo);
    byte_4CEAEB1 = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  IsRandomSpot = EventPanelSpotEntity__IsRandomSpot(v4, 0);
  if ( !IsRandomSpot )
  {
    panelMapDetailId = v4->fields.panelMapDetailId;
    goto LABEL_10;
  }
  eventPanelSpotEntity = (EventPanelSpotEntity_o *)SubmarineDataHelperSpot__get_userEventSpotMaster((const MethodInfo *)IsRandomSpot);
  if ( !eventPanelSpotEntity )
LABEL_11:
    sub_1C7BD40(eventPanelSpotEntity, spotEntity);
  Entity_43607656 = UserEventSpotMaster__GetEntity_43607656(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0);
  if ( Entity_43607656 )
    panelMapDetailId = Entity_43607656->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v8 = (SubmarineSpotInfo_o *)sub_1C7BD34(SubmarineSpotInfo_TypeInfo);
  SubmarineSpotInfo___ctor(v8, spotEntity, v4, panelMapDetailId, v9);
  return v8;
}


EventPanelSpotEntity_array *SubmarineDataHelperSpot__GetSpotsEnemyOccupied(
        int32_t eventId,
        int32_t mapId,
        int32_t hIndex,
        int32_t vIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  const MethodInfo *v10; // x0
  __int64 eventPanelSpotMaster; // x0
  __int64 v12; // x1
  int v13; // w8
  __int64 v14; // x24
  unsigned int v15; // w27
  __int64 v16; // x8
  __int64 v17; // x25
  const MethodInfo *v18; // x3
  __int64 v19; // x26
  __int64 v20; // x26
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int v27; // w9
  int v28; // w8
  int v29; // w9
  __int64 v30; // x10
  int v31; // w11
  int v32; // w12
  _DWORD *v33; // x13
  unsigned int v34; // w14
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4CEAEB3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4CEAEB3 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v10);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  v13 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v14 = eventPanelSpotMaster;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13 )
    {
      v16 = v14 + 8LL * (int)v15;
      v17 = *(_QWORD *)(v16 + 32);
      if ( !v17 )
        goto LABEL_39;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v16 + 32), 0);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          *(_DWORD *)(v17 + 16),
                                          eventId,
                                          mapId,
                                          v18);
        if ( eventPanelSpotMaster )
        {
          v19 = eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_39;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0);
          if ( (eventPanelSpotMaster & 1) == 0 && *(int *)(v19 + 32) >= 1 )
          {
            eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
            if ( !eventPanelSpotMaster )
              goto LABEL_39;
            eventPanelSpotMaster = (__int64)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelSpotMaster,
                                              *(_DWORD *)(v19 + 32),
                                              (const MethodInfo_342E2FC *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
            if ( eventPanelSpotMaster )
            {
              v20 = eventPanelSpotMaster;
              eventPanelSpotMaster = sub_1C7BB90(int___TypeInfo, 2);
              if ( !eventPanelSpotMaster )
                goto LABEL_39;
              v27 = *(_DWORD *)(eventPanelSpotMaster + 24);
              if ( !v27 )
                break;
              v28 = hIndex - *(_DWORD *)(v20 + 28);
              *(_DWORD *)(eventPanelSpotMaster + 32) = v28;
              if ( v27 == 1 )
                break;
              v29 = vIndex - *(_DWORD *)(v20 + 32);
              *(_DWORD *)(eventPanelSpotMaster + 36) = v29;
              v30 = *(_QWORD *)(v17 + 48);
              if ( !v30 )
                goto LABEL_39;
              v31 = *(_DWORD *)(v30 + 24);
              if ( v31 >= 1 )
              {
                v32 = 0;
                while ( 1 )
                {
                  if ( v31 == v32 )
                    goto LABEL_38;
                  v33 = *(_DWORD **)(v30 + 8LL * v32 + 32);
                  if ( !v33 )
                    goto LABEL_39;
                  v34 = v33[6];
                  if ( !v34 )
                    goto LABEL_38;
                  if ( v28 == v33[8] )
                  {
                    if ( v34 <= 1 )
                      goto LABEL_38;
                    if ( v29 == v33[9] )
                      break;
                  }
                  if ( v31 == ++v32 )
                    goto LABEL_35;
                }
                if ( !v9 )
                  goto LABEL_39;
                items = v9->fields._items;
                v36 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
                ++v9->fields._version;
                if ( !items )
                  goto LABEL_39;
                size = v9->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    (Il2CppObject *)v17,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v38[4] = (Il2CppClass *)v17;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v38 + 4), v17, v21, v22, v23, v24, v25, v26);
                }
              }
            }
          }
        }
      }
LABEL_35:
      v13 = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= v13 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1C7BD48(eventPanelSpotMaster);
  }
LABEL_36:
  if ( !v9 )
LABEL_39:
    sub_1C7BD40(eventPanelSpotMaster, v12);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineSpotInfo_o *SubmarineDataHelperSpot__GetSubmarineSpotInfo(
        int32_t spotId,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t v6; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelSpotMaster; // x0
  Il2CppObject *v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_4CEAEB0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    *(_QWORD *)&spotId = sub_1C7BAE8(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
    byte_4CEAEB0 = 1;
  }
  entity = 0;
  v11 = 0;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(*(const MethodInfo **)&spotId);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         eventPanelSpotMaster,
                                                                         &entity,
                                                                         v6,
                                                                         (const MethodInfo_342E348 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_15;
  if ( HIDWORD(entity[1].klass) != eventId || LODWORD(entity[1].monitor) != mapId )
    return 0;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperSpot__get_spotMaster((const MethodInfo *)eventPanelSpotMaster);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         eventPanelSpotMaster,
                                                                         &v11,
                                                                         v6,
                                                                         (const MethodInfo_342E348 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0;
  v8 = v11;
  if ( !v11 )
LABEL_15:
    sub_1C7BD40(eventPanelSpotMaster, v8);
  if ( LODWORD(v11[1].monitor) == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, (SpotEntity_o *)v11, v9);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SubmarineSpotInfo__o *SubmarineDataHelperSpot__GetSubmarineSpotInfoList(
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t v4; // w22
  SpotMaster_o *spotMaster; // x0
  SpotEntity_o *v6; // x1
  SpotEntity_array *List; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v12; // x21
  unsigned __int64 v13; // x22
  int max_length; // w8
  int v15; // w9
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  SpotMaster_o *v25; // x1
  Il2CppClass **v26; // x0

  v4 = eventId;
  if ( (byte_4CEAEAF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
    *(_QWORD *)&eventId = sub_1C7BAE8(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
    byte_4CEAEAF = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_25;
  List = SpotMaster__getList(spotMaster, mapId, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v9);
  if ( !spotMaster )
    goto LABEL_25;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0);
  if ( !spotMaster )
    goto LABEL_25;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v12 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)MasterName_k__BackingField )
LABEL_26:
        sub_1C7BD48(spotMaster);
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v12->fields.revision + v13);
        v15 = 0;
        while ( 1 )
        {
          if ( max_length == v15 )
            goto LABEL_26;
          v6 = List->m_Items[v15];
          if ( !v6 || !spotMaster )
            goto LABEL_25;
          if ( v6->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( max_length == ++v15 )
            goto LABEL_23;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v6,
                                       v10);
        if ( !v8 )
          break;
        items = v8->fields._items;
        v23 = Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        v25 = spotMaster;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)spotMaster,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v25, v16, v17, v18, v19, v20, v21);
        }
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v12->fields._MasterName_k__BackingField;
      if ( (__int64)++v13 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v8;
    }
LABEL_25:
    sub_1C7BD40(spotMaster, v6);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v8;
}


bool SubmarineDataHelperSpot__IsSpotBelowClosedPanel(
        SpotEntity_o *spotEntity,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  SpotEntity_o *v4; // x21
  __int64 v5; // x1
  int32_t id; // w19
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v11; // x21
  _BOOL8 IsRandomSpot; // x0
  Il2CppObject *v15; // x21
  UserEventMapEntity_o *Entity_43583524; // x0
  const MethodInfo *v17; // x3

  v4 = spotEntity;
  if ( (byte_4CEAEB2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    spotEntity = (SpotEntity_o *)sub_1C7BAE8(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
    byte_4CEAEB2 = 1;
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
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)spotEntity,
             v4->fields.mapId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v9 = Entity;
  SubmarineSpotInfo = SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                        v4->fields.id,
                        HIDWORD(v9[1].klass),
                        (int32_t)v9[1].klass,
                        v8);
  if ( !SubmarineSpotInfo )
    return 0;
  v11 = SubmarineSpotInfo;
  spotEntity = (SpotEntity_o *)SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !spotEntity )
LABEL_24:
    sub_1C7BD40(spotEntity, v5);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)spotEntity, 0) )
  {
    spotEntity = (SpotEntity_o *)v11->fields._EventPanelSpotEntity_k__BackingField;
    if ( spotEntity )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)spotEntity, 0);
      if ( IsRandomSpot && v11->fields._PanelId_k__BackingField < 1 )
        return 1;
      spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( spotEntity )
      {
        v15 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)spotEntity,
                v11->fields._PanelId_k__BackingField,
                (const MethodInfo_342E2FC *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v15);
        if ( spotEntity )
        {
          Entity_43583524 = UserEventMapMaster__GetEntity_43583524(
                              (UserEventMapMaster_o *)spotEntity,
                              HIDWORD(v9[1].klass),
                              (int32_t)v9[1].klass,
                              0);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_43583524, (EventPanelMapDetailEntity_o *)v15, id, v17);
        }
      }
    }
    goto LABEL_24;
  }
  return 0;
}


EventPanelMapDetailMaster_o *SubmarineDataHelperSpot__get_eventPanelMapDetailMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEAEAB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAEAB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEAEAA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAEAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEAEA9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPanelSpotMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAEA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEAEAE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAEAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (SpotMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEAEAC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAEAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CEAEAD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventSpotMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAEAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}