void __fastcall MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct EventEntity_o **p_eventEnt; // x19

  if ( (byte_42E5EEE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E5EEE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEnt = 0LL;
  p_eventEnt = &this->fields.eventEnt;
  sub_B5D560(p_eventEnt);
  p_eventEnt[4] = (struct EventEntity_o *)StringLiteral_1/*""*/;
  sub_B5D560(p_eventEnt + 4);
}


void __fastcall MapControl_MapGimmickInfo___ctor(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MapControl_MapGimmickInfo__GetDispType(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int32_t __fastcall MapControl_MapGimmickInfo__GetMapGimmickId(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mapGimmickId;
}


MapGimmickMaster_o *__fastcall MapControl_MapGimmickInfo__GetMapGimmickMaster(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MapGimmickMaster_o *result; // x0
  MapGimmickMaster_o **p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E5EF0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapGimmickMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5EF0 = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = &this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    *p_mapGimmickMaster = (MapGimmickMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B5D560(p_mapGimmickMaster);
    return *p_mapGimmickMaster;
  }
  return result;
}


MapGimmickEntity_o *__fastcall MapControl_MapGimmickInfo__GetMine(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapGimmickMaster_o *MapGimmickMaster; // x0
  __int64 v6; // x1

  if ( (byte_42E5EEF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__, (_DWORD)method, v2, v3);
    byte_42E5EEF = 1;
  }
  MapGimmickMaster = MapControl_MapGimmickInfo__GetMapGimmickMaster(this, method);
  if ( !MapGimmickMaster )
    sub_B5D69C(0LL, v6);
  return (MapGimmickEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
}


void __fastcall MapControl_MapGimmickInfo__Reset(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  this->fields.dispType = 0;
}


void __fastcall MapControl_MapGimmickInfo__SetDispType(
        MapControl_MapGimmickInfo_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void __fastcall MapControl_MapGimmickInfo__SetMine(
        MapControl_MapGimmickInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  this->fields.mapGimmickId = mapGimmickId;
}


void __fastcall MapControl_MapInfo___ctor(MapControl_MapInfo_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  __int64 v30; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *spotInfoList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19

  if ( (byte_42E5EF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v26, v27, v28);
    byte_42E5EF1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v29;
  sub_B5D560(&this->fields.spotInfoList);
  spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_7;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    spotInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v32;
  sub_B5D560(&this->fields.spotRoadInfoList);
  spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotRoadInfoList;
  if ( !spotInfoList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          spotInfoList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v33,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__),
        this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v33,
        p_mapGimmickInfoList = &this->fields.mapGimmickInfoList,
        sub_B5D560(p_mapGimmickInfoList),
        (spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_mapGimmickInfoList) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(spotInfoList, v30);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    spotInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
}


MapControl_SpotInfo_o *__fastcall MapControl_MapInfo__AddChild(
        MapControl_MapInfo_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MapControl_SpotInfo_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x0
  __int64 v12; // x1

  if ( (byte_42E5EF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, spotId, (_DWORD)method, v3);
    sub_B5D5C4(&MapControl_SpotInfo_TypeInfo, v6, v7, v8);
    byte_42E5EF3 = 1;
  }
  v9 = (MapControl_SpotInfo_o *)sub_B5D694(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v9, v10);
  if ( !v9 || (v9->fields.spotId = spotId, (spotInfoList = this->fields.spotInfoList) == 0LL) )
    sub_B5D69C(spotInfoList, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
  return v9;
}


MapControl_MapGimmickInfo_o *__fastcall MapControl_MapInfo__AddMapGimmick(
        MapControl_MapInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *mapGimmickInfoList; // x0
  __int64 v11; // x1

  if ( (byte_42E5EF5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
      mapGimmickId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&MapControl_MapGimmickInfo_TypeInfo, v6, v7, v8);
    byte_42E5EF5 = 1;
  }
  v9 = sub_B5D694(MapControl_MapGimmickInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 || (*(_DWORD *)(v9 + 20) = mapGimmickId, (mapGimmickInfoList = this->fields.mapGimmickInfoList) == 0LL) )
    sub_B5D69C(mapGimmickInfoList, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mapGimmickInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
  return (MapControl_MapGimmickInfo_o *)v9;
}


MapControl_SpotRoadInfo_o *__fastcall MapControl_MapInfo__AddSpotRoad(
        MapControl_MapInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x0
  __int64 v11; // x1

  if ( (byte_42E5EF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, spotRoadId, (_DWORD)method, v3);
    sub_B5D5C4(&MapControl_SpotRoadInfo_TypeInfo, v6, v7, v8);
    byte_42E5EF4 = 1;
  }
  v9 = sub_B5D694(MapControl_SpotRoadInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 || (*(_DWORD *)(v9 + 20) = spotRoadId, (spotRoadInfoList = this->fields.spotRoadInfoList) == 0LL) )
    sub_B5D69C(spotRoadInfoList, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotRoadInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
  return (MapControl_SpotRoadInfo_o *)v9;
}


System_Collections_Generic_List_MapControl_MapGimmickInfo__o *__fastcall MapControl_MapInfo__GetMapGimmickList(
        MapControl_MapInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mapGimmickInfoList;
}


int32_t __fastcall MapControl_MapInfo__GetMapID(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


MapMaster_o *__fastcall MapControl_MapInfo__GetMapMaster(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MapMaster_o *result; // x0
  MapMaster_o **p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E5EF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5EF6 = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = &this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    *p_mapMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapMaster___);
    sub_B5D560(p_mapMaster);
    return *p_mapMaster;
  }
  return result;
}


MapEntity_o *__fastcall MapControl_MapInfo__GetMine(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  MapMaster_o *MapMaster; // x0
  __int64 v4; // x1

  MapMaster = MapControl_MapInfo__GetMapMaster(this, method);
  if ( !MapMaster )
    sub_B5D69C(0LL, v4);
  return MapMaster__GetEntity(MapMaster, this->fields.mapId, this->fields.warId, 0LL);
}


System_Collections_Generic_List_MapControl_SpotInfo__o *__fastcall MapControl_MapInfo__GetSpotList(
        MapControl_MapInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.spotInfoList;
}


System_Collections_Generic_List_MapControl_SpotRoadInfo__o *__fastcall MapControl_MapInfo__GetSpotRoadList(
        MapControl_MapInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.spotRoadInfoList;
}


void __fastcall MapControl_MapInfo__Reset(MapControl_MapInfo_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x0
  const MethodInfo *v48; // x1
  __int64 v49; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v50; // x0
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x0
  _BOOL8 v52; // x0
  __int64 v53; // x1
  int v54; // w21
  int v55; // w8
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *mapGimmickInfoList; // x0
  _BOOL8 v57; // x0
  __int64 v58; // x1
  int v59; // w21
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+0h] [xbp-A0h] BYREF
  int v61[3]; // [xsp+18h] [xbp-88h]
  int v62; // [xsp+24h] [xbp-7Ch]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+40h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+60h] [xbp-40h] BYREF

  if ( (byte_42E5EF2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v44, v45, v46);
    byte_42E5EF2 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&j, 0, sizeof(j));
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  spotInfoList = this->fields.spotInfoList;
  if ( spotInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v60,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    for ( i = v60;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
          MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)i.fields.current, v48) )
    {
      if ( !i.fields.current )
        sub_B5D69C(0LL, v48);
    }
    v61[0] = 59;
    v62 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    v62 = 0;
    v50 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotInfoList;
    if ( !v50 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v50,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  }
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( spotRoadInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v60,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotRoadInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    for ( j = v60; ; LODWORD(j.fields.current[1].klass) = 0 )
    {
      v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &j,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
      if ( !v52 )
        break;
      if ( !j.fields.current )
        sub_B5D69C(v52, v53);
    }
    v61[0] = 129;
    v54 = ++v62;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &j,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( v61[v54 - 1] == 129 )
      {
        --v54;
        v62 = v55;
      }
    }
    v50 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotRoadInfoList;
    if ( !v50 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v50,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
  }
  else
  {
    v54 = 0;
  }
  mapGimmickInfoList = this->fields.mapGimmickInfoList;
  if ( !mapGimmickInfoList )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapGimmickInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v63,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v57 )
      break;
    if ( !v63.fields.current )
      sub_B5D69C(v57, v58);
    LODWORD(v63.fields.current[1].klass) = 0;
  }
  v61[v54] = 199;
  v59 = ++v62;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v63,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  if ( v59 && v61[v59 - 1] == 199 )
    v62 = v59 - 1;
  v50 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mapGimmickInfoList;
  if ( !v50 )
LABEL_35:
    sub_B5D69C(v50, v49);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v50,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
}


void __fastcall MapControl_MapInfo__SetMine(
        MapControl_MapInfo_o *this,
        int32_t mapId,
        int32_t warId,
        const MethodInfo *method)
{
  this->fields.warId = warId;
  this->fields.mapId = mapId;
}


bool __fastcall MapControl_MapInfo__get_IsNext(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsNext_k__BackingField;
}


void __fastcall MapControl_MapInfo__set_IsNext(MapControl_MapInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNext_k__BackingField = value;
}


void __fastcall MapControl_PhaseInfo___ctor(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestPhaseEntity_o *__fastcall MapControl_PhaseInfo__GetMine(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  QuestPhaseEntity_o *result; // x0
  struct QuestPhaseEntity_o **p_mine; // x20
  QuestPhaseMaster_o *QuestPhaseMaster; // x0
  __int64 v6; // x1

  p_mine = &this->fields.mine;
  result = this->fields.mine;
  if ( !result )
  {
    QuestPhaseMaster = MapControl_PhaseInfo__GetQuestPhaseMaster(this, method);
    if ( !QuestPhaseMaster )
      sub_B5D69C(0LL, v6);
    this->fields.mine = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0LL);
    sub_B5D560(p_mine);
    return this->fields.mine;
  }
  return result;
}


int32_t __fastcall MapControl_PhaseInfo__GetPhase(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  return this->fields.phase;
}


QuestPhaseMaster_o *__fastcall MapControl_PhaseInfo__GetQuestPhaseMaster(
        MapControl_PhaseInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  QuestPhaseMaster_o *result; // x0
  QuestPhaseMaster_o **p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E5EF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5EF7 = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = &this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    *p_questPhaseMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B5D560(p_questPhaseMaster);
    return *p_questPhaseMaster;
  }
  return result;
}


void __fastcall MapControl_PhaseInfo__Reset(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MapControl_PhaseInfo__SetMine(
        MapControl_PhaseInfo_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  this->fields.questId = questId;
  this->fields.phase = phase;
}


void __fastcall MapControl_QuestInfo___ctor(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_42E5EFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo, v8, v9, v10);
    byte_42E5EFB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v11;
  sub_B5D560(&this->fields.phaseInfoList);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_B5D69C(0LL, v12);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)phaseInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
  this->fields.questEnt = 0LL;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_B5D560(p_questEnt);
  *((_DWORD *)p_questEnt + 25) = -1;
}


MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__AddChild(
        MapControl_QuestInfo_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x22
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  __int64 v12; // x1
  MapControl_PhaseInfo_o *result; // x0

  if ( (byte_42E5EFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__, questId, phase, method);
    sub_B5D5C4(&MapControl_PhaseInfo_TypeInfo, v7, v8, v9);
    byte_42E5EFD = 1;
  }
  v10 = sub_B5D694(MapControl_PhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = questId,
        *(_DWORD *)(v10 + 20) = phase,
        (phaseInfoList = this->fields.phaseInfoList) == 0LL) )
  {
    sub_B5D69C(phaseInfoList, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)phaseInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__);
  result = (MapControl_PhaseInfo_o *)v10;
  ++this->fields.phaseCount;
  return result;
}


void __fastcall MapControl_QuestInfo__AddSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MapControl_QuestInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x24
  System_Collections_Generic_List_int__o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v17; // x22
  unsigned __int64 v18; // x23
  int32_t v19; // w22
  System_Collections_Generic_List_int__o *v20; // x0
  __int64 v21; // x0

  v5 = this;
  if ( (byte_42E5EF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)questIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v9, v10, v11);
    this = (MapControl_QuestInfo_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    byte_42E5EF8 = 1;
  }
  if ( questIds )
  {
    v15 = *(_QWORD *)&questIds->max_length;
    if ( (int)v15 >= 1 )
    {
      p_sameGroupQuestIds = &v5->fields.sameGroupQuestIds;
      if ( !v5->fields.sameGroupQuestIds )
      {
        v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v17,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        *p_sameGroupQuestIds = v17;
        sub_B5D560(&v5->fields.sameGroupQuestIds);
      }
      v18 = 0LL;
      do
      {
        if ( v18 >= questIds->max_length )
        {
          v21 = sub_B5D6C8(this);
          sub_B5D668(v21, 0LL);
        }
        v19 = questIds->m_Items[v18 + 1];
        if ( v19 != v5->fields.questId )
        {
          v20 = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_17;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             v20,
                                             v19,
                                             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v20 = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds )
LABEL_17:
              sub_B5D69C(v20, questIds);
            System_Collections_Generic_List_int___Add(
              v20,
              v19,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v18;
      }
      while ( (__int64)v18 < (int)v15 );
    }
  }
}


MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__FindChild(
        MapControl_QuestInfo_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  MapControl_QuestInfo___c__DisplayClass54_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E5EFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__, phase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_MapControl_PhaseInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_MapControl_PhaseInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_MapControl_QuestInfo___c__DisplayClass54_0__FindChild_b__0__, v12, v13, v14);
    sub_B5D5C4(&MapControl_QuestInfo___c__DisplayClass54_0_TypeInfo, v15, v16, v17);
    byte_42E5EFE = 1;
  }
  v18 = (MapControl_QuestInfo___c__DisplayClass54_0_o *)sub_B5D694(MapControl_QuestInfo___c__DisplayClass54_0_TypeInfo);
  MapControl_QuestInfo___c__DisplayClass54_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.phase = phase,
        phaseInfoList = this->fields.phaseInfoList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_PhaseInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_MapControl_QuestInfo___c__DisplayClass54_0__FindChild_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_PhaseInfo___ctor__),
        !phaseInfoList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (MapControl_PhaseInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)phaseInfoList,
                                     (System_Predicate_T__o *)v22,
                                     (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
}


int32_t __fastcall MapControl_QuestInfo__GetClearPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t PhaseMax; // w20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5F02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E5F02 = 1;
  }
  entity = 0LL;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int64_t)Instance,
         this->fields.questId,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_12:
    sub_B5D69C(Instance, v13);
  }
  return PhaseMax;
}


int32_t __fastcall MapControl_QuestInfo__GetCostCalcVal(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.costCalcVal;
}


int32_t __fastcall MapControl_QuestInfo__GetDispType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int64_t __fastcall MapControl_QuestInfo__GetEndTime(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.endTime;
}


QuestEntity_o *__fastcall MapControl_QuestInfo__GetMine(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  QuestEntity_o *result; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E5F03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E5F03 = 1;
  }
  if ( !this->fields.questId )
    return 0LL;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v13);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      (WarEntity_o **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t __fastcall MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapControl_QuestInfo_o *v4; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v4 = this;
  if ( (byte_42E5F01 & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_B5D5C4(
                                       &Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__,
                                       (_DWORD)method,
                                       v2,
                                       v3);
    byte_42E5F01 = 1;
  }
  phaseInfoList = v4->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_B5D69C(this, method);
  return phaseInfoList->fields._size;
}


int32_t __fastcall MapControl_QuestInfo__GetPickupPriority(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.pickupPriority;
}


int32_t __fastcall MapControl_QuestInfo__GetQuestID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall MapControl_QuestInfo__GetQuestPhase(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t __fastcall MapControl_QuestInfo__GetQuestType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_QuestInfo__GetMine(this, method);
  if ( !Mine )
    sub_B5D69C(0LL, v3);
  return Mine->fields.type;
}


System_Collections_Generic_List_int__o *__fastcall MapControl_QuestInfo__GetSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.sameGroupQuestIds;
}


int32_t __fastcall MapControl_QuestInfo__GetSpotID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_QuestInfo__GetMine(this, method);
  if ( !Mine )
    sub_B5D69C(0LL, v3);
  return QuestEntity__getSpotId(Mine, 0LL);
}


int32_t __fastcall MapControl_QuestInfo__GetTouchType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.touchType;
}


int32_t __fastcall MapControl_QuestInfo__GetWarID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool __fastcall MapControl_QuestInfo__IsAnyPhaseClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t UserId; // x0
  int32_t questId; // w19
  int64_t v10; // x20

  if ( (byte_42E5EFA & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E5EFA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  questId = this->fields.questId;
  v10 = UserId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(v10, questId, 1, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t questId; // w19

  if ( (byte_42E5EF9 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5EF9 = 1;
  }
  questId = this->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(questId, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType != 0 && this->fields.dispType != 3;
}


bool __fastcall MapControl_QuestInfo__IsDisplayQuestNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t PhaseMax; // w20
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  WarQuestSelectionMaster_o *v14; // x0
  int32_t questId; // w19
  MapControl_QuestInfo_Fields *p_fields; // t2
  QuestBehaviorMaster_o *v17; // x21
  int32_t v18; // w0

  if ( (byte_42E5F00 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E5F00 = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster
      || (Master_WarQuestSelectionMaster = QuestPhaseMaster__getList(
                                             (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
                                             this->fields.questId,
                                             0LL)) == 0LL )
    {
      sub_B5D69C(Master_WarQuestSelectionMaster, v13);
    }
    PhaseMax = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v14 )
  {
    p_fields = &this->fields;
    questId = this->fields.questId;
    v17 = (QuestBehaviorMaster_o *)v14;
    v18 = UnityEngine_Mathf__Min_41629336(p_fields->phaseCount + 1, PhaseMax, 0LL);
    LOBYTE(v14) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v17, questId, v18, 6, 0LL);
  }
  return (char)v14;
}


bool __fastcall MapControl_QuestInfo__IsNew(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool __fastcall MapControl_QuestInfo__IsReleaseFocusQuestBoard(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MapControl_PhaseInfo_o *Child; // x0
  const MethodInfo *v5; // x1
  QuestPhaseEntity_o *Mine; // x0
  QuestPhaseEntity_o *v7; // x20
  QuestEntity_o *v9; // x0
  __int64 v10; // x1

  Child = MapControl_QuestInfo__FindChild(this, 1, v2);
  if ( Child )
  {
    Mine = MapControl_PhaseInfo__GetMine(Child, v5);
    if ( Mine )
    {
      v7 = Mine;
      if ( QuestPhaseEntity__HasReleaseFocusQuestBoardKey(Mine, 0LL) )
        return QuestPhaseEntity__IsReleaseFocusQuestBoard(v7, 0LL);
    }
  }
  v9 = MapControl_QuestInfo__GetMine(this, v5);
  if ( !v9 )
    sub_B5D69C(0LL, v10);
  return v9->fields.type == 1;
}


void __fastcall MapControl_QuestInfo__Reset(MapControl_QuestInfo_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *sameGroupQuestIds; // x0
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5EFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__, v17, v18, v19);
    byte_42E5EFC = 1;
  }
  memset(&v26, 0, sizeof(v26));
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
  if ( sameGroupQuestIds )
    System_Collections_Generic_List_int___Clear(
      sameGroupQuestIds,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  phaseInfoList = this->fields.phaseInfoList;
  if ( phaseInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)phaseInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v22 )
        break;
      if ( !v26.fields.current )
        sub_B5D69C(v22, v23);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v25 = this->fields.phaseInfoList;
    if ( !v25 )
      sub_B5D69C(0LL, v24);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v25,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    this->fields.phaseCount = 0;
  }
}


void __fastcall MapControl_QuestInfo__SetCostCalcVal(
        MapControl_QuestInfo_o *this,
        int32_t val,
        const MethodInfo *method)
{
  this->fields.costCalcVal = val;
}


void __fastcall MapControl_QuestInfo__SetDispType(
        MapControl_QuestInfo_o *this,
        int32_t dispType,
        int32_t quest_release_type,
        int32_t quest_release_target_id,
        int64_t quest_release_value,
        int32_t quest_release_closed_id,
        const MethodInfo *method)
{
  this->fields.dispType = dispType;
  this->fields.questReleaseType = quest_release_type;
  this->fields.questReleaseTargetID = quest_release_target_id;
  this->fields.questReleaseValue = quest_release_value;
  this->fields.questReleaseClosedID = quest_release_closed_id;
}


void __fastcall MapControl_QuestInfo__SetEndTime(MapControl_QuestInfo_o *this, int64_t val, const MethodInfo *method)
{
  this->fields.endTime = val;
}


void __fastcall MapControl_QuestInfo__SetIsNew(MapControl_QuestInfo_o *this, bool isNew, const MethodInfo *method)
{
  this->fields.isNew = isNew;
}


void __fastcall MapControl_QuestInfo__SetMine(MapControl_QuestInfo_o *this, int32_t questId, const MethodInfo *method)
{
  this->fields.questId = questId;
}


void __fastcall MapControl_QuestInfo__SetPickupPriority(
        MapControl_QuestInfo_o *this,
        int32_t pickupPriority,
        const MethodInfo *method)
{
  this->fields.pickupPriority = pickupPriority;
}


void __fastcall MapControl_QuestInfo__SetQuestID(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.questId = value;
}


void __fastcall MapControl_QuestInfo__SetQuestPhase(
        MapControl_QuestInfo_o *this,
        int32_t questPhase,
        const MethodInfo *method)
{
  this->fields.questPhase = questPhase;
}


void __fastcall MapControl_QuestInfo__SetSpotID(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  struct MapControl_SpotInfo_o *v6; // x8
  struct MapControl_SpotInfo_o **p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v9; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E5EFF & 1) == 0 )
  {
    sub_B5D5C4(&MapControl_SpotInfo_TypeInfo, value, (_DWORD)method, v3);
    byte_42E5EFF = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = &this->fields._SpotInfo_k__BackingField;
  v6 = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v9 = (MapControl_SpotInfo_o *)sub_B5D694(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v9, v10);
    *p_SpotInfo_k__BackingField = v9;
    sub_B5D560(p_SpotInfo_k__BackingField);
    v6 = *p_SpotInfo_k__BackingField;
    if ( !*p_SpotInfo_k__BackingField )
      sub_B5D69C(v11, v12);
  }
  v6->fields.spotId = value;
}


void __fastcall MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  TerminalPramsManager_c *v9; // x0

  if ( (byte_42E5F04 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E5F04 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E4B20 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.warId = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_42E4B2F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    v5 = TerminalPramsManager_TypeInfo;
    byte_42E4B2F = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v5->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    byte_42E4B33 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questId = v9->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    v9 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questPhase = v9->static_fields->_PhaseCnt_k__BackingField;
  if ( !byte_42E5CCF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    v9 = TerminalPramsManager_TypeInfo;
    byte_42E5CCF = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  this->fields.endTime = v9->static_fields->_EndTime_k__BackingField;
}


void __fastcall MapControl_QuestInfo__SetTouchType(
        MapControl_QuestInfo_o *this,
        int32_t eTouchType,
        const MethodInfo *method)
{
  this->fields.touchType = eTouchType;
}


void __fastcall MapControl_QuestInfo__SetWarID(MapControl_QuestInfo_o *this, int32_t warId, const MethodInfo *method)
{
  this->fields.warId = warId;
}


MapControl_AreaBoardInfo_o *__fastcall MapControl_QuestInfo__get_AreaBoardInfo(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._AreaBoardInfo_k__BackingField;
}


int32_t __fastcall MapControl_QuestInfo__get_GroupId(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


int32_t __fastcall MapControl_QuestInfo__get_QuestReleaseClosedID(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.questReleaseClosedID;
}


int32_t __fastcall MapControl_QuestInfo__get_QuestReleaseTargetID(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.questReleaseTargetID;
}


int32_t __fastcall MapControl_QuestInfo__get_QuestReleaseType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questReleaseType;
}


int64_t __fastcall MapControl_QuestInfo__get_QuestReleaseValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questReleaseValue;
}


MapControl_SpotInfo_o *__fastcall MapControl_QuestInfo__get_SpotInfo(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotInfo_k__BackingField;
}


MapControl_WarInfo_o *__fastcall MapControl_QuestInfo__get_WarInfo(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._WarInfo_k__BackingField;
}


int32_t __fastcall MapControl_QuestInfo__get_fixedCostVal(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._fixedCostVal_k__BackingField;
}


void __fastcall MapControl_QuestInfo__set_AreaBoardInfo(
        MapControl_QuestInfo_o *this,
        MapControl_AreaBoardInfo_o *value,
        const MethodInfo *method)
{
  this->fields._AreaBoardInfo_k__BackingField = value;
  sub_B5D560(&this->fields._AreaBoardInfo_k__BackingField);
}


void __fastcall MapControl_QuestInfo__set_GroupId(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GroupId_k__BackingField = value;
}


void __fastcall MapControl_QuestInfo__set_SpotInfo(
        MapControl_QuestInfo_o *this,
        MapControl_SpotInfo_o *value,
        const MethodInfo *method)
{
  this->fields._SpotInfo_k__BackingField = value;
  sub_B5D560(&this->fields._SpotInfo_k__BackingField);
}


void __fastcall MapControl_QuestInfo__set_WarInfo(
        MapControl_QuestInfo_o *this,
        MapControl_WarInfo_o *value,
        const MethodInfo *method)
{
  this->fields._WarInfo_k__BackingField = value;
  sub_B5D560(&this->fields._WarInfo_k__BackingField);
}


void __fastcall MapControl_QuestInfo__set_fixedCostVal(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._fixedCostVal_k__BackingField = value;
}


void __fastcall MapControl_QuestInfo___c__DisplayClass54_0___ctor(
        MapControl_QuestInfo___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapControl_QuestInfo___c__DisplayClass54_0___FindChild_b__0(
        MapControl_QuestInfo___c__DisplayClass54_0_o *this,
        MapControl_PhaseInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.phase == this->fields.phase;
}


void __fastcall MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0

  if ( (byte_42E5F05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v8, v9, v10);
    byte_42E5F05 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v11;
  sub_B5D560(&this->fields);
  warInfoList = this->fields.warInfoList;
  if ( !warInfoList )
    sub_B5D69C(0LL, v12);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)warInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


MapControl_WarInfo_o *__fastcall MapControl_RootInfo__AddChild(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MapControl_WarInfo_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  __int64 v12; // x1

  if ( (byte_42E5F08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&MapControl_WarInfo_TypeInfo, v6, v7, v8);
    byte_42E5F08 = 1;
  }
  v9 = (MapControl_WarInfo_o *)sub_B5D694(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v9, v10);
  if ( !v9 || (v9->fields.warId = warId, (warInfoList = this->fields.warInfoList) == 0LL) )
    sub_B5D69C(warInfoList, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
  return v9;
}


MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByEventID(
        MapControl_RootInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  MapControl_WarInfo_o *result; // x0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v20; // x1
  int v21; // w19
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E5F0A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v12, v13, v14);
    byte_42E5F0A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  result = (MapControl_WarInfo_o *)this->fields.warInfoList;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v16 )
        break;
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B5D69C(v16, v17);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v22.fields.current, v17);
      if ( !Mine )
        sub_B5D69C(0LL, v20);
      if ( Mine->fields.eventId == eventId )
      {
        v21 = 5;
        goto LABEL_11;
      }
    }
    current = 0LL;
    v21 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    if ( v21 == 5 )
      return (MapControl_WarInfo_o *)current;
    else
      return 0LL;
  }
  return result;
}


MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByWarID(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  MapControl_WarInfo_o *result; // x0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v20; // x1
  int v21; // w19
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E5F09 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__,
      warId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v12, v13, v14);
    byte_42E5F09 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  result = (MapControl_WarInfo_o *)this->fields.warInfoList;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v16 )
        break;
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B5D69C(v16, v17);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v22.fields.current, v17);
      if ( !Mine )
        sub_B5D69C(0LL, v20);
      if ( Mine->fields.id == warId )
      {
        v21 = 5;
        goto LABEL_11;
      }
    }
    current = 0LL;
    v21 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    if ( v21 == 5 )
      return (MapControl_WarInfo_o *)current;
    else
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapControl_RootInfo__IsOpenedMainScenarioWar(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  WarEntity_o *Mine; // x0
  __int64 v19; // x1
  char v20; // w19
  int v21; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E5F0B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__,
      warId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v12, v13, v14);
    byte_42E5F0B = 1;
  }
  memset(&v24, 0, sizeof(v24));
  warInfoList = this->fields.warInfoList;
  if ( !warInfoList )
    sub_B5D69C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v16 )
      break;
    if ( !v24.fields.current )
      sub_B5D69C(v16, v17);
    if ( HIDWORD(v24.fields.current[1].klass) == warId && ((__int64)v24.fields.current[1].monitor & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v24.fields.current, v17);
      if ( !Mine )
        sub_B5D69C(0LL, v19);
      if ( WarEntity__HasFlag(Mine, 128, 0LL) )
      {
        v20 = 1;
        v21 = 8;
        goto LABEL_13;
      }
    }
  }
  v20 = 0;
  v21 = 6;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (v21 == 8) & v20;
}


void __fastcall MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x3
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
  MapControl_RootInfo___c__DisplayClass3_0_o *v21; // x21
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v22; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x22
  unsigned int Index; // w0

  if ( (byte_42E5F07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_MapControl_WarInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_MapControl_WarInfo__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__, v15, v16, v17);
    sub_B5D5C4(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo, v18, v19, v20);
    byte_42E5F07 = 1;
  }
  v21 = (MapControl_RootInfo___c__DisplayClass3_0_o *)sub_B5D694(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
  MapControl_RootInfo___c__DisplayClass3_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_9;
  v21->fields.warId = warId;
  warInfoList = this->fields.warInfoList;
  if ( warInfoList )
  {
    v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_WarInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v25,
      (Il2CppObject *)v21,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_WarInfo___ctor__);
    Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
              (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)warInfoList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v23 = Index;
      v22 = this->fields.warInfoList;
      if ( v22 )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v22,
          v23,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_B5D69C(v22, v23);
    }
  }
}


void __fastcall MapControl_RootInfo__Reset(MapControl_RootInfo_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5F06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v14, v15, v16);
    byte_42E5F06 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  warInfoList = this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v21.fields.current )
        sub_B5D69C(0LL, v18);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v21.fields.current, v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v20 = this->fields.warInfoList;
    if ( !v20 )
      sub_B5D69C(0LL, v19);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
  }
}


void __fastcall MapControl_RootInfo___c__DisplayClass3_0___ctor(
        MapControl_RootInfo___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapControl_RootInfo___c__DisplayClass3_0___Remove_b__0(
        MapControl_RootInfo___c__DisplayClass3_0_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


void __fastcall MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  System_Collections_Generic_List_int__o *v20; // x20

  if ( (byte_42E5F0C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v14, v15, v16);
    byte_42E5F0C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v17;
  sub_B5D560(&this->fields.questInfoList);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_B5D69C(0LL, v18);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)questInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  this->fields.questCount = 0;
  v20 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.availableQuestIdList = v20;
  sub_B5D560(&this->fields.availableQuestIdList);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_SpotInfo__AddAvailableQuestId(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *availableQuestIdList; // x0

  if ( (byte_42E5F10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, questId, (_DWORD)method, v3);
    byte_42E5F10 = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList )
    sub_B5D69C(0LL, *(_QWORD *)&questId);
  System_Collections_Generic_List_int___Add(
    availableQuestIdList,
    questId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


MapControl_QuestInfo_o *__fastcall MapControl_SpotInfo__AddChild(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MapControl_QuestInfo_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  __int64 v12; // x1

  if ( (byte_42E5F0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, questId, (_DWORD)method, v3);
    sub_B5D5C4(&MapControl_QuestInfo_TypeInfo, v6, v7, v8);
    byte_42E5F0E = 1;
  }
  v9 = (MapControl_QuestInfo_o *)sub_B5D694(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, v10);
  if ( !v9 || (v9->fields.questId = questId, (questInfoList = this->fields.questInfoList) == 0LL) )
    sub_B5D69C(questInfoList, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)questInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
  return v9;
}


void __fastcall MapControl_SpotInfo__AddFreeQuestCount(
        MapControl_SpotInfo_o *this,
        int32_t addCount,
        const MethodInfo *method)
{
  this->fields.freeQuestCount += addCount;
}


void __fastcall MapControl_SpotInfo__AddQuestCount(
        MapControl_SpotInfo_o *this,
        int32_t questCount,
        const MethodInfo *method)
{
  this->fields.questCount += questCount;
}


System_Collections_Generic_List_int__o *__fastcall MapControl_SpotInfo__GetAvailableQuestIdList(
        MapControl_SpotInfo_o *this,
        bool isInstance,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x20
  System_Collections_Generic_List_int__o *v10; // x19

  if ( (byte_42E5F0F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, isInstance, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v6, v7, v8);
    byte_42E5F0F = 1;
  }
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  if ( !isInstance )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v10,
      availableQuestIdList,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    return v10;
  }
  return (System_Collections_Generic_List_int__o *)availableQuestIdList;
}


int32_t __fastcall MapControl_SpotInfo__GetDispType(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int32_t __fastcall MapControl_SpotInfo__GetFreeQuestCount(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.freeQuestCount;
}


int32_t __fastcall MapControl_SpotInfo__GetLayer(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotLayerMaster_o *SpotLayerMaster; // x0
  __int64 v4; // x1

  SpotLayerMaster = MapControl_SpotInfo__GetSpotLayerMaster(this, method);
  if ( !SpotLayerMaster )
    sub_B5D69C(0LL, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0LL);
}


int32_t __fastcall MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_B5D69C(0LL, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *__fastcall MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SpotEntity_o *result; // x0
  SpotMaster_o *SpotMaster; // x0
  __int64 v7; // x1

  if ( (byte_42E5F11 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, (_DWORD)method, v2, v3);
    byte_42E5F11 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_B5D69C(0LL, v7);
    this->fields.mine = (struct SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)SpotMaster,
                                                 this->fields.spotId,
                                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_B5D560(&this->fields.mine);
    return this->fields.mine;
  }
  return result;
}


int32_t __fastcall MapControl_SpotInfo__GetQuestcount(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.questCount;
}


int32_t __fastcall MapControl_SpotInfo__GetSpotID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


SpotLayerEntity_o *__fastcall MapControl_SpotInfo__GetSpotLayerEntity(
        MapControl_SpotInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SpotLayerEntity_o *result; // x0
  SpotLayerMaster_o *SpotLayerMaster; // x0
  __int64 v7; // x1

  if ( (byte_42E5F13 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, (_DWORD)method, v2, v3);
    byte_42E5F13 = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = MapControl_SpotInfo__GetSpotLayerMaster(this, method);
    if ( !SpotLayerMaster )
      sub_B5D69C(0LL, v7);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)SpotLayerMaster,
      (WarEntity_o **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    return this->fields.spotLayerEnt;
  }
  return result;
}


SpotLayerMaster_o *__fastcall MapControl_SpotInfo__GetSpotLayerMaster(
        MapControl_SpotInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SpotLayerMaster_o *result; // x0
  SpotLayerMaster_o **p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1

  if ( (byte_42E5F14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotLayerMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E5F14 = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = &this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *p_spotLayerMaster = (SpotLayerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_B5D560(p_spotLayerMaster);
    return *p_spotLayerMaster;
  }
  return result;
}


SpotMaster_o *__fastcall MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SpotMaster_o *result; // x0
  SpotMaster_o **p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1

  if ( (byte_42E5F12 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E5F12 = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = &this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *p_spotMaster = (SpotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotMaster___);
    sub_B5D560(p_spotMaster);
    return *p_spotMaster;
  }
  return result;
}


int32_t __fastcall MapControl_SpotInfo__GetTouchType(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.touchType;
}


bool __fastcall MapControl_SpotInfo__IsNextDisp(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType == 1 && this->fields._IsNext_k__BackingField;
}


void __fastcall MapControl_SpotInfo__Reset(MapControl_SpotInfo_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5F0D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v14, v15, v16);
    byte_42E5F0D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  questInfoList = this->fields.questInfoList;
  if ( questInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)questInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v21.fields.current )
        sub_B5D69C(0LL, v18);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v21.fields.current, v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v20 = this->fields.questInfoList;
    if ( !v20 )
      sub_B5D69C(0LL, v19);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  }
}


void __fastcall MapControl_SpotInfo__SetDispType(
        MapControl_SpotInfo_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void __fastcall MapControl_SpotInfo__SetFreeQuestCount(
        MapControl_SpotInfo_o *this,
        int32_t freeQuestCount,
        const MethodInfo *method)
{
  this->fields.freeQuestCount = freeQuestCount;
}


void __fastcall MapControl_SpotInfo__SetMine(
        MapControl_SpotInfo_o *this,
        int32_t spotId,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  this->fields.spotId = spotId;
  if ( spotEnt )
  {
    this->fields.mine = spotEnt;
    sub_B5D560(&this->fields.mine);
  }
}


void __fastcall MapControl_SpotInfo__SetQuestcount(
        MapControl_SpotInfo_o *this,
        int32_t questCount,
        const MethodInfo *method)
{
  this->fields.questCount = questCount;
}


void __fastcall MapControl_SpotInfo__SetSpotID(MapControl_SpotInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.spotId = value;
}


void __fastcall MapControl_SpotInfo__SetTouchType(
        MapControl_SpotInfo_o *this,
        int32_t touchType,
        const MethodInfo *method)
{
  this->fields.touchType = touchType;
}


bool __fastcall MapControl_SpotInfo__get_IsNext(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsNext_k__BackingField;
}


void __fastcall MapControl_SpotInfo__set_IsNext(MapControl_SpotInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNext_k__BackingField = value;
}


void __fastcall MapControl_SpotRoadInfo___ctor(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MapControl_SpotRoadInfo__GetDispType(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


SpotRoadEntity_o *__fastcall MapControl_SpotRoadInfo__GetMine(
        MapControl_SpotRoadInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SpotRoadMaster_o *SpotRoadMaster; // x0
  __int64 v6; // x1

  if ( (byte_42E5F15 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__, (_DWORD)method, v2, v3);
    byte_42E5F15 = 1;
  }
  SpotRoadMaster = MapControl_SpotRoadInfo__GetSpotRoadMaster(this, method);
  if ( !SpotRoadMaster )
    sub_B5D69C(0LL, v6);
  return (SpotRoadEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
}


int32_t __fastcall MapControl_SpotRoadInfo__GetSpotRoadId(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotRoadId;
}


SpotRoadMaster_o *__fastcall MapControl_SpotRoadInfo__GetSpotRoadMaster(
        MapControl_SpotRoadInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SpotRoadMaster_o *result; // x0
  SpotRoadMaster_o **p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E5F16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotRoadMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5F16 = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = &this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    *p_spotRoadMaster = (SpotRoadMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B5D560(p_spotRoadMaster);
    return *p_spotRoadMaster;
  }
  return result;
}


void __fastcall MapControl_SpotRoadInfo__Reset(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  this->fields.dispType = 0;
}


void __fastcall MapControl_SpotRoadInfo__SetDispType(
        MapControl_SpotRoadInfo_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void __fastcall MapControl_SpotRoadInfo__SetMine(
        MapControl_SpotRoadInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  this->fields.spotRoadId = spotRoadId;
}


void __fastcall MapControl_WarInfo___ctor(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0

  if ( (byte_42E5F17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v8, v9, v10);
    byte_42E5F17 = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v11;
  sub_B5D560(&this->fields.mapInfoList);
  this->fields.mine = 0LL;
  sub_B5D560(&this->fields.mine);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B5D69C(0LL, v12);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__AddChild(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MapControl_MapInfo_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0
  __int64 v12; // x1

  if ( (byte_42E5F19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, mapId, (_DWORD)method, v3);
    sub_B5D5C4(&MapControl_MapInfo_TypeInfo, v6, v7, v8);
    byte_42E5F19 = 1;
  }
  v9 = (MapControl_MapInfo_o *)sub_B5D694(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v9, v10);
  if ( !v9
    || (v9->fields.warId = this->fields.warId, v9->fields.mapId = mapId, (mapInfoList = this->fields.mapInfoList) == 0LL) )
  {
    sub_B5D69C(mapInfoList, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mapInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
  return v9;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetActionMap(
        MapControl_WarInfo_o *this,
        int32_t commandType,
        int32_t target,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  MapControl_WarInfo___c__DisplayClass14_0_o *v61; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mapInfoList; // x0
  __int64 v63; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__1; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__2; // x23
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x25
  bool v72; // w0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v73; // x25
  Il2CppClass *v74; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v75; // x25
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *monitor; // x24
  char v77; // w19
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__0; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E5F1D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__,
      commandType,
      target,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__0__, v49, v50, v51);
    sub_B5D5C4(&Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__1__, v52, v53, v54);
    sub_B5D5C4(&Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__2__, v55, v56, v57);
    sub_B5D5C4(&MapControl_WarInfo___c__DisplayClass14_0_TypeInfo, v58, v59, v60);
    byte_42E5F1D = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v61 = (MapControl_WarInfo___c__DisplayClass14_0_o *)sub_B5D694(MapControl_WarInfo___c__DisplayClass14_0_TypeInfo);
  MapControl_WarInfo___c__DisplayClass14_0___ctor(v61, 0LL);
  if ( !v61
    || (v61->fields.target = target,
        (mapInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mapInfoList) == 0LL) )
  {
    sub_B5D69C(mapInfoList, v63);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)mapInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v79,
    mapInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  p__9__0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v61->fields.__9__0;
  p__9__1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v61->fields.__9__1;
  p__9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v61->fields.__9__2;
  v80 = v79;
  while ( 2 )
  {
    v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v80,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( v67 )
    {
      current = v80.fields.current;
      switch ( commandType )
      {
        case 0:
          if ( !v80.fields.current )
            sub_B5D69C(v67, v68);
          klass = v80.fields.current[2].klass;
          v71 = *p__9__0;
          if ( !*p__9__0 )
          {
            v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v71,
              (Il2CppObject *)v61,
              Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__0__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            *p__9__0 = v71;
            sub_B5D560(p__9__0);
          }
          if ( !klass )
            sub_B5D69C(v67, v68);
          v72 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)klass,
                  (System_Predicate_T__o *)v71,
                  (const MethodInfo_305784C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
          goto LABEL_28;
        case 1:
          if ( !v80.fields.current )
            sub_B5D69C(v67, v68);
          v75 = *p__9__1;
          monitor = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v80.fields.current[2].monitor;
          if ( !*p__9__1 )
          {
            v75 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v75,
              (Il2CppObject *)v61,
              Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__1__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
            *p__9__1 = v75;
            sub_B5D560(&v61->fields.__9__1);
          }
          if ( !monitor )
            sub_B5D69C(v67, v68);
          v72 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  monitor,
                  (System_Predicate_T__o *)v75,
                  (const MethodInfo_305784C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
          goto LABEL_28;
        case 2:
          if ( !v80.fields.current )
            sub_B5D69C(v67, v68);
          v73 = *p__9__2;
          v74 = v80.fields.current[3].klass;
          if ( !*p__9__2 )
          {
            v73 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v73,
              (Il2CppObject *)v61,
              Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__2__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
            *p__9__2 = v73;
            sub_B5D560(&v61->fields.__9__2);
          }
          if ( !v74 )
            sub_B5D69C(v67, v68);
          v72 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v74,
                  (System_Predicate_T__o *)v73,
                  (const MethodInfo_305784C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_28:
          if ( v72 )
            goto LABEL_29;
          continue;
        case 3:
          if ( !v80.fields.current )
            sub_B5D69C(v67, v68);
          if ( HIDWORD(v80.fields.current[1].klass) != v61->fields.target )
            continue;
LABEL_29:
          v77 = 2;
          break;
        default:
          continue;
      }
    }
    else
    {
      v77 = 0;
      current = 0LL;
    }
    break;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v80,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( ((v77 + 2) & 3) != 0 )
    return 0LL;
  else
    return (MapControl_MapInfo_o *)current;
}


int32_t __fastcall MapControl_WarInfo__GetEventId(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_WarInfo__GetMine(this, method);
  if ( !Mine )
    sub_B5D69C(0LL, v3);
  return Mine->fields.eventId;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetMap(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  struct System_Collections_Generic_List_MapControl_MapInfo__o *IsMultiMap; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x21
  int v23; // w20
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E5F1A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__,
      mapId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v15, v16, v17);
    byte_42E5F1A = 1;
  }
  memset(&v26, 0, sizeof(v26));
  IsMultiMap = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)MapControl_WarInfo__IsMultiMap(
                                                                                 this,
                                                                                 *(const MethodInfo **)&mapId);
  if ( ((unsigned __int8)IsMultiMap & 1) == 0 )
    goto LABEL_12;
  IsMultiMap = this->fields.mapInfoList;
  if ( !IsMultiMap )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMultiMap,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v20 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B5D69C(v20, v21);
    if ( HIDWORD(v26.fields.current[1].klass) == mapId )
    {
      v23 = 17;
      goto LABEL_11;
    }
  }
  current = 0LL;
  v23 = 4;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v23 != 17 )
  {
LABEL_12:
    mapInfoList = this->fields.mapInfoList;
    if ( mapInfoList )
    {
      if ( !mapInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      return mapInfoList->fields._items->m_Items[0];
    }
LABEL_18:
    sub_B5D69C(IsMultiMap, v19);
  }
  return (MapControl_MapInfo_o *)current;
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall MapControl_WarInfo__GetMapList(
        MapControl_WarInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mapInfoList;
}


WarEntity_o *__fastcall MapControl_WarInfo__GetMine(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarEntity_o *result; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E5F1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E5F1E = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v13);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &this->fields.mine,
      this->fields.warId,
      (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    return this->fields.mine;
  }
  return result;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetNextMap(MapControl_WarInfo_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mapInfoList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x19
  int v25; // w20
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5F1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v17, v18, v19);
    byte_42E5F1B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  mapInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B5D69C(0LL, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)mapInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    mapInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v22 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B5D69C(v22, v23);
    if ( LOBYTE(v26.fields.current[1].monitor) )
    {
      v25 = 8;
      goto LABEL_12;
    }
  }
  current = 0LL;
  v25 = 6;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v25 == 8 )
    return (MapControl_MapInfo_o *)current;
  else
    return 0LL;
}


int32_t __fastcall MapControl_WarInfo__GetStatus(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int32_t status; // w8

  status = this->fields.status;
  if ( (status & 1) != 0 )
    return 0;
  if ( (status & 2) != 0 )
    return 4;
  if ( (status & 4) != 0 )
    return 2;
  if ( (status & 8) != 0 )
    return 3;
  return 1;
}


int32_t __fastcall MapControl_WarInfo__GetWarID(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool __fastcall MapControl_WarInfo__IsClosedWar(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  unsigned int v3; // w19
  WarEntity_o *Mine; // x0
  bool HasFlag; // w0
  bool result; // w0

  status = this->fields.status;
  if ( (status & 1) != 0 )
  {
    v3 = -3;
  }
  else if ( (status & 2) != 0 )
  {
    v3 = 1;
  }
  else if ( (status & 4) != 0 )
  {
    v3 = -1;
  }
  else if ( (status & 8) != 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = -2;
  }
  Mine = MapControl_WarInfo__GetMine(this, method);
  result = 0;
  if ( Mine )
  {
    HasFlag = WarEntity__HasFlag(Mine, 64, 0LL);
    if ( v3 <= 1 && HasFlag )
      return 1;
  }
  return result;
}


bool __fastcall MapControl_WarInfo__IsEvent(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_WarInfo__GetMine(this, method);
  if ( !Mine )
    sub_B5D69C(0LL, v3);
  return WarEntity__HasFlag(Mine, 32, 0LL);
}


bool __fastcall MapControl_WarInfo__IsMultiMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MapControl_WarInfo_o *v4; // x19
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8

  v4 = this;
  if ( (byte_42E5F1C & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__,
                                     (_DWORD)method,
                                     v2,
                                     v3);
    byte_42E5F1C = 1;
  }
  mapInfoList = v4->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B5D69C(this, method);
  return mapInfoList->fields._size > 1;
}


bool __fastcall MapControl_WarInfo__IsStatusCheckFlagAvailable(
        MapControl_WarInfo_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  return (this->fields.status & flag) != 0;
}


void __fastcall MapControl_WarInfo__Reset(MapControl_WarInfo_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5F18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v14, v15, v16);
    byte_42E5F18 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  mapInfoList = this->fields.mapInfoList;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v21.fields.current )
        sub_B5D69C(0LL, v18);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v21.fields.current, v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v20 = this->fields.mapInfoList;
    if ( !v20 )
      sub_B5D69C(0LL, v19);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
  }
}


void __fastcall MapControl_WarInfo__SetMine(MapControl_WarInfo_o *this, int32_t warId, const MethodInfo *method)
{
  this->fields.warId = warId;
}


void __fastcall MapControl_WarInfo__SetStatusCheckFlag(
        MapControl_WarInfo_o *this,
        int32_t flag,
        bool setTo,
        const MethodInfo *method)
{
  int32_t status; // w8
  int32_t v5; // w9

  status = this->fields.status;
  if ( ((((status & flag) != 0) ^ setTo) & 1) != 0 )
  {
    if ( setTo )
      v5 = flag;
    else
      v5 = -flag;
    this->fields.status = status + v5;
  }
}


void __fastcall MapControl_WarInfo___c__DisplayClass14_0___ctor(
        MapControl_WarInfo___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapControl_WarInfo___c__DisplayClass14_0___GetActionMap_b__0(
        MapControl_WarInfo___c__DisplayClass14_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.spotId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass14_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass14_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.spotRoadId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass14_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass14_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.mapGimmickId == this->fields.target;
}