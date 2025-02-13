SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  UserEventSpotEntity_o *Entity_41380812; // x0
  int32_t panelMapDetailId; // w21
  SubmarineSpotInfo_o *v8; // x22

  v4 = eventPanelSpotEntity;
  if ( (byte_4BD9080 & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_1C21E38(&SubmarineSpotInfo_TypeInfo);
    byte_4BD9080 = 1;
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
    sub_1C22094(eventPanelSpotEntity, spotEntity);
  Entity_41380812 = UserEventSpotMaster__GetEntity_41380812(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0LL);
  if ( Entity_41380812 )
    panelMapDetailId = Entity_41380812->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v8 = (SubmarineSpotInfo_o *)sub_1C22084(SubmarineSpotInfo_TypeInfo);
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
  System_Collections_Generic_List_object__o *v9; // x23
  const MethodInfo *v10; // x0
  __int64 eventPanelSpotMaster; // x0
  __int64 v12; // x1
  int v13; // w8
  __int64 v14; // x24
  unsigned int v15; // w27
  __int64 v16; // x8
  int64_t v17; // x25
  const MethodInfo *v18; // x3
  SubmarineSpotInfo_o *v19; // x26
  __int64 v20; // x26
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
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

  if ( (byte_4BD9082 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
    byte_4BD9082 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v10);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0LL);
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
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v16 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          *(_DWORD *)(v17 + 16),
                                          eventId,
                                          mapId,
                                          v18);
        if ( eventPanelSpotMaster )
        {
          v19 = (SubmarineSpotInfo_o *)eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_39;
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
                goto LABEL_39;
              eventPanelSpotMaster = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelSpotMaster,
                                                v19->fields._PanelId_k__BackingField,
                                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
              if ( eventPanelSpotMaster )
              {
                v20 = eventPanelSpotMaster;
                eventPanelSpotMaster = sub_1C21EE0(int___TypeInfo, 2LL);
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
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v9,
                      (Il2CppObject *)v17,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v38 = &items->obj.klass + size;
                    v9->fields._size = size + 1;
                    v38[4] = (Il2CppClass *)v17;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), v17, v21, v22, v23, v24, v25, v26);
                  }
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
    sub_1C2209C(eventPanelSpotMaster, v12);
  }
LABEL_36:
  if ( !v9 )
LABEL_39:
    sub_1C22094(eventPanelSpotMaster, v12);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__GetSubmarineSpotInfo(
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
  if ( (byte_4BD907F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    *(_QWORD *)&spotId = sub_1C21E38(&Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
    byte_4BD907F = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(*(const MethodInfo **)&spotId);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         eventPanelSpotMaster,
                                                                         &entity,
                                                                         v6,
                                                                         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_15;
  if ( HIDWORD(entity[1].klass) != eventId || LODWORD(entity[1].monitor) != mapId )
    return 0LL;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperSpot__get_spotMaster((const MethodInfo *)eventPanelSpotMaster);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         eventPanelSpotMaster,
                                                                         &v11,
                                                                         v6,
                                                                         (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  v8 = v11;
  if ( !v11 )
LABEL_15:
    sub_1C22094(eventPanelSpotMaster, v8);
  if ( LODWORD(v11[1].monitor) == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, (SpotEntity_o *)v11, v9);
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
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x0
  const MethodInfo *v10; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v12; // x21
  unsigned __int64 v13; // x22
  int max_length; // w8
  int v15; // w9
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int64_t v25; // x1
  Il2CppClass **v26; // x0

  v4 = eventId;
  if ( (byte_4BD907E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
    *(_QWORD *)&eventId = sub_1C21E38(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
    byte_4BD907E = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_25;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v9);
  if ( !spotMaster )
    goto LABEL_25;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_25;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v12 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)MasterName_k__BackingField )
LABEL_26:
        sub_1C2209C(spotMaster, v6);
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
        v25 = (int64_t)spotMaster;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)spotMaster,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v25, v16, v17, v18, v19, v20, v21);
        }
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v12->fields._MasterName_k__BackingField;
      if ( (__int64)++v13 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v8;
    }
LABEL_25:
    sub_1C22094(spotMaster, v6);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v8;
}


bool __fastcall SubmarineDataHelperSpot__IsSpotBelowClosedPanel(
        SpotEntity_o *spotEntity,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  SpotEntity_o *v4; // x21
  SubmarineQuestSaveInfo_o *eventPanelMapMaster; // x0
  __int64 v6; // x1
  int32_t v7; // w19
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v12; // x21
  _BOOL8 IsRandomSpot; // x0
  Il2CppObject *v16; // x21
  UserEventMapEntity_o *Entity_41355188; // x0
  const MethodInfo *v18; // x3

  v4 = spotEntity;
  if ( (byte_4BD9081 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
    spotEntity = (SpotEntity_o *)sub_1C21E38(&Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
    byte_4BD9081 = 1;
  }
  if ( checkBeforeClearQuest )
  {
    eventPanelMapMaster = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
    if ( !eventPanelMapMaster )
      goto LABEL_22;
    spotEntity = (SpotEntity_o *)SubmarineQuestSaveInfo__get_BeforeClearQuestId(eventPanelMapMaster, 0LL);
    v7 = (int)spotEntity;
  }
  else
  {
    v7 = -1;
  }
  eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineDataHelperSpot__get_eventPanelMapMaster((const MethodInfo *)spotEntity);
  if ( !v4 || !eventPanelMapMaster )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelMapMaster,
             v4->fields.mapId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v10 = Entity;
  SubmarineSpotInfo = SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                        v4->fields.id,
                        HIDWORD(v10[1].klass),
                        (int32_t)v10[1].klass,
                        v9);
  if ( !SubmarineSpotInfo )
    return 0;
  v12 = SubmarineSpotInfo;
  eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !eventPanelMapMaster )
LABEL_22:
    sub_1C22094(eventPanelMapMaster, v6);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)eventPanelMapMaster, 0LL) )
  {
    eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)v12->fields._EventPanelSpotEntity_k__BackingField;
    if ( eventPanelMapMaster )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)eventPanelMapMaster, 0LL);
      if ( IsRandomSpot )
      {
        IsRandomSpot = SubmarineSpotInfo__get_IsOnPanel(v12, 0LL);
        if ( !IsRandomSpot )
          return 1;
      }
      eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( eventPanelMapMaster )
      {
        v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelMapMaster,
                v12->fields._PanelId_k__BackingField,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v16);
        if ( eventPanelMapMaster )
        {
          Entity_41355188 = UserEventMapMaster__GetEntity_41355188(
                              (UserEventMapMaster_o *)eventPanelMapMaster,
                              HIDWORD(v10[1].klass),
                              (int32_t)v10[1].klass,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_41355188, (EventPanelMapDetailEntity_o *)v16, v7, v18);
        }
      }
    }
    goto LABEL_22;
  }
  return 0;
}


EventPanelMapDetailMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapDetailMaster(
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD907A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD907A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9079 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelMapMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9079 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD9078 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelSpotMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9078 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD907D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD907D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (SpotMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD907B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD907B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BD907C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventSpotMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD907C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}