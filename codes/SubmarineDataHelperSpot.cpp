SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  UserEventSpotEntity_o *Entity_40841644; // x0
  int32_t panelMapDetailId; // w21
  SubmarineSpotInfo_o *v11; // x22

  v4 = eventPanelSpotEntity;
  if ( (byte_4B12DAC & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_1BCA7E0(&SubmarineSpotInfo_TypeInfo, spotEntity, method);
    byte_4B12DAC = 1;
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
    sub_1BCAA3C(eventPanelSpotEntity, spotEntity);
  Entity_40841644 = UserEventSpotMaster__GetEntity_40841644(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0LL);
  if ( Entity_40841644 )
    panelMapDetailId = Entity_40841644->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v11 = (SubmarineSpotInfo_o *)sub_1BCAA2C(SubmarineSpotInfo_TypeInfo, v6, v7, v8);
  SubmarineSpotInfo___ctor(v11, spotEntity, v4, panelMapDetailId, 0LL);
  return v11;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x23
  const MethodInfo *v20; // x0
  __int64 eventPanelSpotMaster; // x0
  __int64 v22; // x1
  int v23; // w8
  __int64 v24; // x24
  unsigned int v25; // w27
  __int64 v26; // x8
  int64_t v27; // x25
  const MethodInfo *v28; // x3
  SubmarineSpotInfo_o *v29; // x26
  __int64 v30; // x26
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int v37; // w9
  int v38; // w8
  int v39; // w9
  __int64 v40; // x10
  int v41; // w11
  int v42; // w12
  _DWORD *v43; // x13
  unsigned int v44; // w14
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4B12DAE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
      *(_QWORD *)&mapId,
      *(_QWORD *)&hIndex);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v17, v18);
    byte_4B12DAE = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo,
                                                       *(_QWORD *)&mapId,
                                                       *(_QWORD *)&hIndex,
                                                       *(_QWORD *)&vIndex);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v20);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0LL);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  v23 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v24 = eventPanelSpotMaster;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v23 )
    {
      v26 = v24 + 8LL * (int)v25;
      v27 = *(_QWORD *)(v26 + 32);
      if ( !v27 )
        goto LABEL_39;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v26 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          *(_DWORD *)(v27 + 16),
                                          eventId,
                                          mapId,
                                          v28);
        if ( eventPanelSpotMaster )
        {
          v29 = (SubmarineSpotInfo_o *)eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_39;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0LL);
          if ( (eventPanelSpotMaster & 1) == 0 )
          {
            eventPanelSpotMaster = SubmarineSpotInfo__get_IsOnPanel(v29, 0LL);
            if ( (eventPanelSpotMaster & 1) != 0 )
            {
              eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
              if ( !eventPanelSpotMaster )
                goto LABEL_39;
              eventPanelSpotMaster = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelSpotMaster,
                                                v29->fields._PanelId_k__BackingField,
                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
              if ( eventPanelSpotMaster )
              {
                v30 = eventPanelSpotMaster;
                eventPanelSpotMaster = sub_1BCA888(int___TypeInfo, 2LL);
                if ( !eventPanelSpotMaster )
                  goto LABEL_39;
                v37 = *(_DWORD *)(eventPanelSpotMaster + 24);
                if ( !v37 )
                  break;
                v38 = hIndex - *(_DWORD *)(v30 + 28);
                *(_DWORD *)(eventPanelSpotMaster + 32) = v38;
                if ( v37 == 1 )
                  break;
                v39 = vIndex - *(_DWORD *)(v30 + 32);
                *(_DWORD *)(eventPanelSpotMaster + 36) = v39;
                v40 = *(_QWORD *)(v27 + 48);
                if ( !v40 )
                  goto LABEL_39;
                v41 = *(_DWORD *)(v40 + 24);
                if ( v41 >= 1 )
                {
                  v42 = 0;
                  while ( 1 )
                  {
                    if ( v41 == v42 )
                      goto LABEL_38;
                    v43 = *(_DWORD **)(v40 + 8LL * v42 + 32);
                    if ( !v43 )
                      goto LABEL_39;
                    v44 = v43[6];
                    if ( !v44 )
                      goto LABEL_38;
                    if ( v38 == v43[8] )
                    {
                      if ( v44 <= 1 )
                        goto LABEL_38;
                      if ( v39 == v43[9] )
                        break;
                    }
                    if ( v41 == ++v42 )
                      goto LABEL_35;
                  }
                  if ( !v19 )
                    goto LABEL_39;
                  items = v19->fields._items;
                  v46 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
                  ++v19->fields._version;
                  if ( !items )
                    goto LABEL_39;
                  size = v19->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v19,
                      (Il2CppObject *)v27,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v48 = &items->obj.klass + size;
                    v19->fields._size = size + 1;
                    v48[4] = (Il2CppClass *)v27;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v27, v31, v32, v33, v34, v35, v36);
                  }
                }
              }
            }
          }
        }
      }
LABEL_35:
      v23 = *(_DWORD *)(v24 + 24);
      if ( (int)++v25 >= v23 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1BCAA44(eventPanelSpotMaster, v22);
  }
LABEL_36:
  if ( !v19 )
LABEL_39:
    sub_1BCAA3C(eventPanelSpotMaster, v22);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v19,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
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
  __int64 v8; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelSpotMaster; // x0
  Il2CppObject *v10; // x1
  const MethodInfo *v11; // x2
  Il2CppObject *v13; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_4B12DAB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&mapId);
    *(_QWORD *)&spotId = sub_1BCA7E0(
                           &Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__,
                           v7,
                           v8);
    byte_4B12DAB = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(*(const MethodInfo **)&spotId);
  if ( !eventPanelSpotMaster )
    goto LABEL_15;
  eventPanelSpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         eventPanelSpotMaster,
                                                                         &entity,
                                                                         v6,
                                                                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
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
                                                                         &v13,
                                                                         v6,
                                                                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  v10 = v13;
  if ( !v13 )
LABEL_15:
    sub_1BCAA3C(eventPanelSpotMaster, v10);
  if ( LODWORD(v13[1].monitor) == mapId )
    return SubmarineDataHelperSpot__CreateSubmarineSpotInfo((EventPanelSpotEntity_o *)entity, (SpotEntity_o *)v13, v11);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SpotMaster_o *spotMaster; // x0
  SpotEntity_o *v10; // x1
  SpotEntity_array *List; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v19; // x21
  unsigned __int64 v20; // x22
  int max_length; // w8
  int v22; // w9
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0

  v4 = eventId;
  if ( (byte_4B12DAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__, *(_QWORD *)&mapId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__, v5, v6);
    *(_QWORD *)&eventId = sub_1BCA7E0(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo, v7, v8);
    byte_4B12DAA = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_25;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v16);
  if ( !spotMaster )
    goto LABEL_25;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_25;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v19 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)MasterName_k__BackingField )
LABEL_26:
        sub_1BCAA44(spotMaster, v10);
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v19->fields.list + v20);
        v22 = 0;
        while ( 1 )
        {
          if ( max_length == v22 )
            goto LABEL_26;
          v10 = List->m_Items[v22];
          if ( !v10 || !spotMaster )
            goto LABEL_25;
          if ( v10->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( max_length == ++v22 )
            goto LABEL_23;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v10,
                                       v17);
        if ( !v15 )
          break;
        items = v15->fields._items;
        v30 = Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v32 = (int64_t)spotMaster;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)spotMaster,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
        }
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v19->fields._MasterName_k__BackingField;
      if ( (__int64)++v20 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v15;
    }
LABEL_25:
    sub_1BCAA3C(spotMaster, v10);
  }
  return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SubmarineDataHelperSpot__IsSpotBelowClosedPanel(
        SpotEntity_o *spotEntity,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  SpotEntity_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  SubmarineQuestSaveInfo_o *eventPanelMapMaster; // x0
  __int64 v8; // x1
  int32_t v9; // w19
  Il2CppObject *Entity; // x0
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v14; // x21
  _BOOL8 IsRandomSpot; // x0
  Il2CppObject *v18; // x21
  UserEventMapEntity_o *Entity_40814760; // x0
  const MethodInfo *v20; // x3

  v4 = spotEntity;
  if ( (byte_4B12DAD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__,
      checkBeforeClearQuest,
      method);
    spotEntity = (SpotEntity_o *)sub_1BCA7E0(
                                   &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
                                   v5,
                                   v6);
    byte_4B12DAD = 1;
  }
  if ( checkBeforeClearQuest )
  {
    eventPanelMapMaster = SubmarineSaveParamsManager__LoadBeforeQuestInfo(0LL);
    if ( !eventPanelMapMaster )
      goto LABEL_22;
    spotEntity = (SpotEntity_o *)SubmarineQuestSaveInfo__get_BeforeClearQuestId(eventPanelMapMaster, 0LL);
    v9 = (int)spotEntity;
  }
  else
  {
    v9 = -1;
  }
  eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineDataHelperSpot__get_eventPanelMapMaster((const MethodInfo *)spotEntity);
  if ( !v4 || !eventPanelMapMaster )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelMapMaster,
             v4->fields.mapId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v12 = Entity;
  SubmarineSpotInfo = SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                        v4->fields.id,
                        HIDWORD(v12[1].klass),
                        (int32_t)v12[1].klass,
                        v11);
  if ( !SubmarineSpotInfo )
    return 0;
  v14 = SubmarineSpotInfo;
  eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineSpotInfo->fields._EventPanelSpotEntity_k__BackingField;
  if ( !eventPanelMapMaster )
LABEL_22:
    sub_1BCAA3C(eventPanelMapMaster, v8);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)eventPanelMapMaster, 0LL) )
  {
    eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)v14->fields._EventPanelSpotEntity_k__BackingField;
    if ( eventPanelMapMaster )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)eventPanelMapMaster, 0LL);
      if ( IsRandomSpot )
      {
        IsRandomSpot = SubmarineSpotInfo__get_IsOnPanel(v14, 0LL);
        if ( !IsRandomSpot )
          return 1;
      }
      eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( eventPanelMapMaster )
      {
        v18 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelMapMaster,
                v14->fields._PanelId_k__BackingField,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        eventPanelMapMaster = (SubmarineQuestSaveInfo_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v18);
        if ( eventPanelMapMaster )
        {
          Entity_40814760 = UserEventMapMaster__GetEntity_40814760(
                              (UserEventMapMaster_o *)eventPanelMapMaster,
                              HIDWORD(v12[1].klass),
                              (int32_t)v12[1].klass,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_40814760, (EventPanelMapDetailEntity_o *)v18, v9, v20);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelSpotMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DA4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (SpotMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DA7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventSpotMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B12DA8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}