SubmarineSpotInfo_o *__fastcall SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
        EventPanelSpotEntity_o *eventPanelSpotEntity,
        SpotEntity_o *spotEntity,
        const MethodInfo *method)
{
  EventPanelSpotEntity_o *v4; // x20
  _BOOL8 IsRandomSpot; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserEventSpotEntity_o *Entity_39779860; // x0
  int32_t panelMapDetailId; // w21
  SubmarineSpotInfo_o *v10; // x22
  const MethodInfo *v11; // x4

  v4 = eventPanelSpotEntity;
  if ( (byte_49F90CB & 1) == 0 )
  {
    eventPanelSpotEntity = (EventPanelSpotEntity_o *)sub_1B640C8(&SubmarineSpotInfo_TypeInfo, spotEntity);
    byte_49F90CB = 1;
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
    sub_1B64324(eventPanelSpotEntity);
  Entity_39779860 = UserEventSpotMaster__GetEntity_39779860(
                      (UserEventSpotMaster_o *)eventPanelSpotEntity,
                      v4->fields.eventId,
                      v4->fields.spotId,
                      0LL);
  if ( Entity_39779860 )
    panelMapDetailId = Entity_39779860->fields.value;
  else
    panelMapDetailId = 0;
LABEL_10:
  v10 = (SubmarineSpotInfo_o *)sub_1B64314(SubmarineSpotInfo_TypeInfo, v6, v7);
  SubmarineSpotInfo___ctor(v10, spotEntity, v4, panelMapDetailId, v11);
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
  System_Collections_Generic_List_object__o *v14; // x23
  const MethodInfo *v15; // x0
  __int64 eventPanelSpotMaster; // x0
  __int64 v17; // x1
  int v18; // w8
  __int64 v19; // x24
  unsigned int v20; // w27
  __int64 v21; // x8
  __int64 v22; // x25
  const MethodInfo *v23; // x3
  __int64 v24; // x26
  __int64 v25; // x26
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w9
  int v29; // w8
  int v30; // w9
  __int64 v31; // x10
  int v32; // w11
  int v33; // w12
  _DWORD *v34; // x13
  unsigned int v35; // w14
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_49F90CD & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
      *(_QWORD *)&mapId);
    sub_1B640C8(&int___TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo, v13);
    byte_49F90CD = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventPanelSpotEntity__TypeInfo,
                                                       *(_QWORD *)&mapId,
                                                       *(_QWORD *)&hIndex);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventPanelSpotEntity___ctor__);
  eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v15);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  eventPanelSpotMaster = (__int64)EventPanelSpotMaster__GetEntityList(
                                    (EventPanelSpotMaster_o *)eventPanelSpotMaster,
                                    eventId,
                                    mapId,
                                    0LL);
  if ( !eventPanelSpotMaster )
    goto LABEL_39;
  v18 = *(_DWORD *)(eventPanelSpotMaster + 24);
  v19 = eventPanelSpotMaster;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = v19 + 8LL * (int)v20;
      v22 = *(_QWORD *)(v21 + 32);
      if ( !v22 )
        goto LABEL_39;
      eventPanelSpotMaster = EventPanelSpotEntity__HasEnemySize(*(EventPanelSpotEntity_o **)(v21 + 32), 0LL);
      if ( (eventPanelSpotMaster & 1) != 0 )
      {
        eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__GetSubmarineSpotInfo(
                                          *(_DWORD *)(v22 + 16),
                                          eventId,
                                          mapId,
                                          v23);
        if ( eventPanelSpotMaster )
        {
          v24 = eventPanelSpotMaster;
          eventPanelSpotMaster = *(_QWORD *)(eventPanelSpotMaster + 24);
          if ( !eventPanelSpotMaster )
            goto LABEL_39;
          eventPanelSpotMaster = EventPanelSpotEntity__IsCrossLineSpot(
                                   (EventPanelSpotEntity_o *)eventPanelSpotMaster,
                                   0LL);
          if ( (eventPanelSpotMaster & 1) == 0 && *(int *)(v24 + 32) >= 1 )
          {
            eventPanelSpotMaster = (__int64)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)eventPanelSpotMaster);
            if ( !eventPanelSpotMaster )
              goto LABEL_39;
            eventPanelSpotMaster = (__int64)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)eventPanelSpotMaster,
                                              *(_DWORD *)(v24 + 32),
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
            if ( eventPanelSpotMaster )
            {
              v25 = eventPanelSpotMaster;
              eventPanelSpotMaster = sub_1B64170(int___TypeInfo, 2LL);
              if ( !eventPanelSpotMaster )
                goto LABEL_39;
              v28 = *(_DWORD *)(eventPanelSpotMaster + 24);
              if ( !v28 )
                break;
              v29 = hIndex - *(_DWORD *)(v25 + 28);
              *(_DWORD *)(eventPanelSpotMaster + 32) = v29;
              if ( v28 == 1 )
                break;
              v30 = vIndex - *(_DWORD *)(v25 + 32);
              *(_DWORD *)(eventPanelSpotMaster + 36) = v30;
              v31 = *(_QWORD *)(v22 + 48);
              if ( !v31 )
                goto LABEL_39;
              v32 = *(_DWORD *)(v31 + 24);
              if ( v32 >= 1 )
              {
                v33 = 0;
                while ( 1 )
                {
                  if ( v32 == v33 )
                    goto LABEL_38;
                  v34 = *(_DWORD **)(v31 + 8LL * v33 + 32);
                  if ( !v34 )
                    goto LABEL_39;
                  v35 = v34[6];
                  if ( !v35 )
                    goto LABEL_38;
                  if ( v29 == v34[8] )
                  {
                    if ( v35 <= 1 )
                      goto LABEL_38;
                    if ( v30 == v34[9] )
                      break;
                  }
                  if ( v32 == ++v33 )
                    goto LABEL_35;
                }
                if ( !v14 )
                  goto LABEL_39;
                items = v14->fields._items;
                v37 = Method_System_Collections_Generic_List_EventPanelSpotEntity__Add__;
                ++v14->fields._version;
                if ( !items )
                  goto LABEL_39;
                size = v14->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v14,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = &items->obj.klass + size;
                  v14->fields._size = size + 1;
                  v39[4] = (Il2CppClass *)v22;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), v22, v26, v27);
                }
              }
            }
          }
        }
      }
LABEL_35:
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        goto LABEL_36;
    }
LABEL_38:
    sub_1B6432C(eventPanelSpotMaster, v17);
  }
LABEL_36:
  if ( !v14 )
LABEL_39:
    sub_1B64324(eventPanelSpotMaster);
  return (EventPanelSpotEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v14,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventPanelSpotEntity__ToArray__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *eventPanelSpotMaster; // x0
  const MethodInfo *v9; // x2
  Il2CppObject *v11; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v6 = spotId;
  if ( (byte_49F90CA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, *(_QWORD *)&eventId);
    *(_QWORD *)&spotId = sub_1B640C8(
                           &Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__,
                           v7);
    byte_49F90CA = 1;
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
                                                                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventPanelSpotMaster__EventPanelSpotEntity__int__TryGetEntity__);
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
                                                                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)eventPanelSpotMaster & 1) == 0 )
    return 0LL;
  if ( !v11 )
LABEL_15:
    sub_1B64324(eventPanelSpotMaster);
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
  __int64 v5; // x1
  __int64 v6; // x1
  SpotMaster_o *spotMaster; // x0
  SpotEntity_array *List; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x0
  SpotEntity_o *v13; // x1
  const MethodInfo *v14; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  SpotMaster_o *v16; // x21
  unsigned __int64 v17; // x22
  int max_length; // w8
  int v19; // w9
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  SpotMaster_o *v25; // x1
  Il2CppClass **v26; // x0

  v4 = eventId;
  if ( (byte_49F90C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__, v5);
    *(_QWORD *)&eventId = sub_1B640C8(&System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo, v6);
    byte_49F90C9 = 1;
  }
  spotMaster = SubmarineDataHelperSpot__get_spotMaster(*(const MethodInfo **)&eventId);
  if ( !spotMaster )
    goto LABEL_25;
  List = SpotMaster__getList(spotMaster, mapId, 0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineSpotInfo__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineSpotInfo___ctor__);
  spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__get_eventPanelSpotMaster(v12);
  if ( !spotMaster )
    goto LABEL_25;
  spotMaster = (SpotMaster_o *)EventPanelSpotMaster__GetEntityList((EventPanelSpotMaster_o *)spotMaster, v4, mapId, 0LL);
  if ( !spotMaster )
    goto LABEL_25;
  MasterName_k__BackingField = spotMaster->fields._MasterName_k__BackingField;
  v16 = spotMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)MasterName_k__BackingField )
LABEL_26:
        sub_1B6432C(spotMaster, v13);
      if ( !List )
        break;
      max_length = List->max_length;
      if ( max_length >= 1 )
      {
        spotMaster = (SpotMaster_o *)*((_QWORD *)&v16->fields.list + v17);
        v19 = 0;
        while ( 1 )
        {
          if ( max_length == v19 )
            goto LABEL_26;
          v13 = List->m_Items[v19];
          if ( !v13 || !spotMaster )
            goto LABEL_25;
          if ( v13->fields.id == spotMaster->fields._MasterKind_k__BackingField )
            break;
          if ( max_length == ++v19 )
            goto LABEL_23;
        }
        spotMaster = (SpotMaster_o *)SubmarineDataHelperSpot__CreateSubmarineSpotInfo(
                                       (EventPanelSpotEntity_o *)spotMaster,
                                       v13,
                                       v14);
        if ( !v11 )
          break;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_SubmarineSpotInfo__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        v25 = spotMaster;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)spotMaster,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v25;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
        }
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v16->fields._MasterName_k__BackingField;
      if ( (__int64)++v17 >= (int)MasterName_k__BackingField )
        return (System_Collections_Generic_List_SubmarineSpotInfo__o *)v11;
    }
LABEL_25:
    sub_1B64324(spotMaster);
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x20
  SubmarineSpotInfo_o *SubmarineSpotInfo; // x0
  SubmarineSpotInfo_o *v11; // x21
  _BOOL8 IsRandomSpot; // x0
  Il2CppObject *v15; // x21
  UserEventMapEntity_o *Entity_39752976; // x0
  const MethodInfo *v17; // x3

  v4 = spotEntity;
  if ( (byte_49F90CC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__,
      checkBeforeClearQuest);
    spotEntity = (SpotEntity_o *)sub_1B640C8(
                                   &Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__,
                                   v5);
    byte_49F90CC = 1;
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
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__GetEntity__);
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
    sub_1B64324(spotEntity);
  if ( !EventPanelSpotEntity__IsCrossLineSpot((EventPanelSpotEntity_o *)spotEntity, 0LL) )
  {
    spotEntity = (SpotEntity_o *)v11->fields._EventPanelSpotEntity_k__BackingField;
    if ( spotEntity )
    {
      IsRandomSpot = EventPanelSpotEntity__IsRandomSpot((EventPanelSpotEntity_o *)spotEntity, 0LL);
      if ( IsRandomSpot && v11->fields._PanelId_k__BackingField < 1 )
        return 1;
      spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_eventPanelMapDetailMaster((const MethodInfo *)IsRandomSpot);
      if ( spotEntity )
      {
        v15 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)spotEntity,
                v11->fields._PanelId_k__BackingField,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelMapDetailMaster__EventPanelMapDetailEntity__int__GetEntity__);
        spotEntity = (SpotEntity_o *)SubmarineDataHelperSpot__get_userEventMapMaster((const MethodInfo *)v15);
        if ( spotEntity )
        {
          Entity_39752976 = UserEventMapMaster__GetEntity_39752976(
                              (UserEventMapMaster_o *)spotEntity,
                              HIDWORD(v9[1].klass),
                              (int32_t)v9[1].klass,
                              0LL);
          return !SubmarineMapDataManager__IsOpenPanel(Entity_39752976, (EventPanelMapDetailEntity_o *)v15, id, v17);
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
  Il2CppObject *Instance; // x0

  if ( (byte_49F90C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelMapDetailMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventPanelMapDetailMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelMapDetailMaster___);
}


EventPanelMapMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelMapMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventPanelMapMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelMapMaster___);
}


EventPanelSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_eventPanelSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelSpotMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (EventPanelSpotMaster_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelSpotMaster___);
}


SpotMaster_o *__fastcall SubmarineDataHelperSpot__get_spotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (SpotMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
}


UserEventMapMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventMapMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMapMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (UserEventMapMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMapMaster___);
}


UserEventSpotMaster_o *__fastcall SubmarineDataHelperSpot__get_userEventSpotMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F90C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventSpotMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F90C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (UserEventSpotMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventSpotMaster___);
}