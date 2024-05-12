void __fastcall MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  struct EventEntity_o **p_eventEnt; // x19

  if ( (byte_438896C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438896C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEnt = 0LL;
  p_eventEnt = &this->fields.eventEnt;
  sub_B77560(p_eventEnt);
  p_eventEnt[4] = (struct EventEntity_o *)StringLiteral_1/*""*/;
  sub_B77560(p_eventEnt + 4);
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
  MapGimmickMaster_o *result; // x0
  MapGimmickMaster_o **p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_438896E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438896E = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = &this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v7);
    *p_mapGimmickMaster = (MapGimmickMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B77560(p_mapGimmickMaster);
    return *p_mapGimmickMaster;
  }
  return result;
}


MapGimmickEntity_o *__fastcall MapControl_MapGimmickInfo__GetMine(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  MapGimmickMaster_o *MapGimmickMaster; // x0
  __int64 v4; // x1

  if ( (byte_438896D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
    byte_438896D = 1;
  }
  MapGimmickMaster = MapControl_MapGimmickInfo__GetMapGimmickMaster(this, method);
  if ( !MapGimmickMaster )
    sub_B7769C(0LL, v4);
  return (MapGimmickEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *spotInfoList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19

  if ( (byte_438896F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    byte_438896F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v3;
  sub_B77560(&this->fields.spotInfoList);
  spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_7;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    spotInfoList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v6;
  sub_B77560(&this->fields.spotRoadInfoList);
  spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotRoadInfoList;
  if ( !spotInfoList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          spotInfoList,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v7,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__),
        this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v7,
        p_mapGimmickInfoList = &this->fields.mapGimmickInfoList,
        sub_B77560(p_mapGimmickInfoList),
        (spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_mapGimmickInfoList) == 0LL) )
  {
LABEL_7:
    sub_B7769C(spotInfoList, v4);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    spotInfoList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
}


MapControl_SpotInfo_o *__fastcall MapControl_MapInfo__AddChild(
        MapControl_MapInfo_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  MapControl_SpotInfo_o *v5; // x21
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4388971 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_B775C4(&MapControl_SpotInfo_TypeInfo);
    byte_4388971 = 1;
  }
  v5 = (MapControl_SpotInfo_o *)sub_B77694(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v5, v6);
  if ( !v5 || (v5->fields.spotId = spotId, (spotInfoList = this->fields.spotInfoList) == 0LL) )
    sub_B7769C(spotInfoList, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
  return v5;
}


MapControl_MapGimmickInfo_o *__fastcall MapControl_MapInfo__AddMapGimmick(
        MapControl_MapInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *mapGimmickInfoList; // x0
  __int64 v7; // x1

  if ( (byte_4388973 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_B775C4(&MapControl_MapGimmickInfo_TypeInfo);
    byte_4388973 = 1;
  }
  v5 = sub_B77694(MapControl_MapGimmickInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 || (*(_DWORD *)(v5 + 20) = mapGimmickId, (mapGimmickInfoList = this->fields.mapGimmickInfoList) == 0LL) )
    sub_B7769C(mapGimmickInfoList, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mapGimmickInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
  return (MapControl_MapGimmickInfo_o *)v5;
}


MapControl_SpotRoadInfo_o *__fastcall MapControl_MapInfo__AddSpotRoad(
        MapControl_MapInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x0
  __int64 v7; // x1

  if ( (byte_4388972 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_B775C4(&MapControl_SpotRoadInfo_TypeInfo);
    byte_4388972 = 1;
  }
  v5 = sub_B77694(MapControl_SpotRoadInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 || (*(_DWORD *)(v5 + 20) = spotRoadId, (spotRoadInfoList = this->fields.spotRoadInfoList) == 0LL) )
    sub_B7769C(spotRoadInfoList, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotRoadInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
  return (MapControl_SpotRoadInfo_o *)v5;
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
  MapMaster_o *result; // x0
  MapMaster_o **p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4388974 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4388974 = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = &this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v7);
    *p_mapMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_MapMaster___);
    sub_B77560(p_mapMaster);
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
    sub_B7769C(0LL, v4);
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
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v6; // x0
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int v10; // w21
  int v11; // w8
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *mapGimmickInfoList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+0h] [xbp-A0h] BYREF
  int v17[3]; // [xsp+18h] [xbp-88h]
  int v18; // [xsp+24h] [xbp-7Ch]
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+40h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+60h] [xbp-40h] BYREF

  if ( (byte_4388970 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4388970 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&j, 0, sizeof(j));
  memset(&v19, 0, sizeof(v19));
  v18 = 0;
  spotInfoList = this->fields.spotInfoList;
  if ( spotInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotInfoList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    for ( i = v16;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
          MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)i.fields.current, v4) )
    {
      if ( !i.fields.current )
        sub_B7769C(0LL, v4);
    }
    v17[0] = 59;
    v18 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    v18 = 0;
    v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotInfoList;
    if ( !v6 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v6,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  }
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( spotRoadInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotRoadInfoList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    for ( j = v16; ; LODWORD(j.fields.current[1].klass) = 0 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &j,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
      if ( !v8 )
        break;
      if ( !j.fields.current )
        sub_B7769C(v8, v9);
    }
    v17[0] = 129;
    v10 = ++v18;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &j,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v17[v10 - 1] == 129 )
      {
        --v10;
        v18 = v11;
      }
    }
    v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotRoadInfoList;
    if ( !v6 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v6,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
  }
  else
  {
    v10 = 0;
  }
  mapGimmickInfoList = this->fields.mapGimmickInfoList;
  if ( !mapGimmickInfoList )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapGimmickInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v19.fields.current )
      sub_B7769C(v13, v14);
    LODWORD(v19.fields.current[1].klass) = 0;
  }
  v17[v10] = 199;
  v15 = ++v18;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  if ( v15 && v17[v15 - 1] == 199 )
    v18 = v15 - 1;
  v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mapGimmickInfoList;
  if ( !v6 )
LABEL_35:
    sub_B7769C(v6, v5);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v6,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
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
      sub_B7769C(0LL, v6);
    this->fields.mine = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0LL);
    sub_B77560(p_mine);
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
  QuestPhaseMaster_o *result; // x0
  QuestPhaseMaster_o **p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4388975 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4388975 = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = &this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v7);
    *p_questPhaseMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B77560(p_questPhaseMaster);
    return *p_questPhaseMaster;
  }
  return result;
}


int32_t __fastcall MapControl_PhaseInfo__GetReferToQuestPhase(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  QuestPhaseEntity_o *Mine; // x0

  Mine = MapControl_PhaseInfo__GetMine(this, method);
  if ( Mine )
    LODWORD(Mine) = QuestPhaseEntity__GetReferToQuestPhase(Mine, 0LL);
  return (int)Mine;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_4388979 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
    byte_4388979 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v3;
  sub_B77560(&this->fields.phaseInfoList);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)phaseInfoList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
  this->fields.questEnt = 0LL;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_B77560(p_questEnt);
  *((_DWORD *)p_questEnt + 25) = -1;
}


MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__AddChild(
        MapControl_QuestInfo_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  __int64 v9; // x1
  MapControl_PhaseInfo_o *result; // x0

  if ( (byte_438897B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__);
    sub_B775C4(&MapControl_PhaseInfo_TypeInfo);
    byte_438897B = 1;
  }
  v7 = sub_B77694(MapControl_PhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = questId, *(_DWORD *)(v7 + 20) = phase,
                                        (phaseInfoList = this->fields.phaseInfoList) == 0LL) )
  {
    sub_B7769C(phaseInfoList, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)phaseInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__);
  result = (MapControl_PhaseInfo_o *)v7;
  ++this->fields.phaseCount;
  return result;
}


void __fastcall MapControl_QuestInfo__AddSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v4; // x20
  __int64 v5; // x24
  System_Collections_Generic_List_int__o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v7; // x22
  unsigned __int64 v8; // x23
  int32_t v9; // w22
  System_Collections_Generic_List_int__o *v10; // x0
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4388976 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    this = (MapControl_QuestInfo_o *)sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4388976 = 1;
  }
  if ( questIds )
  {
    v5 = *(_QWORD *)&questIds->max_length;
    if ( (int)v5 >= 1 )
    {
      p_sameGroupQuestIds = &v4->fields.sameGroupQuestIds;
      if ( !v4->fields.sameGroupQuestIds )
      {
        v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v7,
          (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
        *p_sameGroupQuestIds = v7;
        sub_B77560(&v4->fields.sameGroupQuestIds);
      }
      v8 = 0LL;
      do
      {
        if ( v8 >= questIds->max_length )
        {
          v11 = sub_B776C8(this);
          sub_B77668(v11, 0LL);
        }
        v9 = questIds->m_Items[v8 + 1];
        if ( v9 != v4->fields.questId )
        {
          v10 = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_17;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             v10,
                                             v9,
                                             (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v10 = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds )
LABEL_17:
              sub_B7769C(v10, questIds);
            System_Collections_Generic_List_int___Add(
              v10,
              v9,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v8;
      }
      while ( (__int64)v8 < (int)v5 );
    }
  }
}


MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__FindChild(
        MapControl_QuestInfo_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  MapControl_QuestInfo___c__DisplayClass54_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_438897C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
    sub_B775C4(&Method_System_Predicate_MapControl_PhaseInfo___ctor__);
    sub_B775C4(&System_Predicate_MapControl_PhaseInfo__TypeInfo);
    sub_B775C4(&Method_MapControl_QuestInfo___c__DisplayClass54_0__FindChild_b__0__);
    sub_B775C4(&MapControl_QuestInfo___c__DisplayClass54_0_TypeInfo);
    byte_438897C = 1;
  }
  v5 = (MapControl_QuestInfo___c__DisplayClass54_0_o *)sub_B77694(MapControl_QuestInfo___c__DisplayClass54_0_TypeInfo);
  MapControl_QuestInfo___c__DisplayClass54_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.phase = phase,
        phaseInfoList = this->fields.phaseInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_MapControl_PhaseInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_MapControl_QuestInfo___c__DisplayClass54_0__FindChild_b__0__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_MapControl_PhaseInfo___ctor__),
        !phaseInfoList) )
  {
    sub_B7769C(v6, v7);
  }
  return (MapControl_PhaseInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                     (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)phaseInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
}


int32_t __fastcall MapControl_QuestInfo__GetClearPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t PhaseMax; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4388980 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4388980 = 1;
  }
  entity = 0LL;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B7769C(Instance, v5);
  }
  return PhaseMax;
}


int32_t __fastcall MapControl_QuestInfo__GetCostCalcVal(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.costCalcVal;
}


MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__GetCurrentPhaseInfo(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapControl_QuestInfo__FindChild(this, this->fields.questPhase + 1, v2);
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
  QuestEntity_o *result; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4388981 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4388981 = 1;
  }
  if ( !this->fields.questId )
    return 0LL;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
    {
      sub_B7769C(Instance, v5);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      (WarEntity_o **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t __fastcall MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v2 = this;
  if ( (byte_438897F & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__);
    byte_438897F = 1;
  }
  phaseInfoList = v2->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_B7769C(this, method);
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
    sub_B7769C(0LL, v3);
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
    sub_B7769C(0LL, v3);
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
  int64_t UserId; // x0
  int32_t questId; // w19
  int64_t v5; // x20

  if ( (byte_4388978 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4388978 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  questId = this->fields.questId;
  v5 = UserId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(v5, questId, 1, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4388977 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    byte_4388977 = 1;
  }
  questId = this->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24699280(questId, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType != 0 && this->fields.dispType != 3;
}


bool __fastcall MapControl_QuestInfo__IsDisplayQuestNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t PhaseMax; // w20
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  WarQuestSelectionMaster_o *v6; // x0
  int32_t questId; // w19
  MapControl_QuestInfo_Fields *p_fields; // t2
  QuestBehaviorMaster_o *v9; // x21
  int32_t v10; // w0

  if ( (byte_438897E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438897E = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster
      || (Master_WarQuestSelectionMaster = QuestPhaseMaster__getList(
                                             (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
                                             this->fields.questId,
                                             0LL)) == 0LL )
    {
      sub_B7769C(Master_WarQuestSelectionMaster, v5);
    }
    PhaseMax = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v6 )
  {
    p_fields = &this->fields;
    questId = this->fields.questId;
    v9 = (QuestBehaviorMaster_o *)v6;
    v10 = UnityEngine_Mathf__Min_41473676(p_fields->phaseCount + 1, PhaseMax, 0LL);
    LOBYTE(v6) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v9, questId, v10, 6, 0LL);
  }
  return (char)v6;
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
    sub_B7769C(0LL, v10);
  return v9->fields.type == 1;
}


void __fastcall MapControl_QuestInfo__Reset(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *sameGroupQuestIds; // x0
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *v8; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438897A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    byte_438897A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
  if ( sameGroupQuestIds )
    System_Collections_Generic_List_int___Clear(
      sameGroupQuestIds,
      (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__);
  phaseInfoList = this->fields.phaseInfoList;
  if ( phaseInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)phaseInfoList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v9,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v5 )
        break;
      if ( !v9.fields.current )
        sub_B7769C(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v8 = this->fields.phaseInfoList;
    if ( !v8 )
      sub_B7769C(0LL, v7);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
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
  struct MapControl_SpotInfo_o *v5; // x8
  struct MapControl_SpotInfo_o **p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v8; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_438897D & 1) == 0 )
  {
    sub_B775C4(&MapControl_SpotInfo_TypeInfo);
    byte_438897D = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = &this->fields._SpotInfo_k__BackingField;
  v5 = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v8 = (MapControl_SpotInfo_o *)sub_B77694(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v8, v9);
    *p_SpotInfo_k__BackingField = v8;
    sub_B77560(p_SpotInfo_k__BackingField);
    v5 = *p_SpotInfo_k__BackingField;
    if ( !*p_SpotInfo_k__BackingField )
      sub_B7769C(v10, v11);
  }
  v5->fields.spotId = value;
}


void __fastcall MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4388982 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388982 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387465 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387465 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  this->fields.warId = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4387474 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4387474 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v4->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questId = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4387479 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questPhase = v5->static_fields->_PhaseCnt_k__BackingField;
  if ( !byte_43884BF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_43884BF = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.endTime = v5->static_fields->_EndTime_k__BackingField;
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
  sub_B77560(&this->fields._AreaBoardInfo_k__BackingField);
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
  sub_B77560(&this->fields._SpotInfo_k__BackingField);
}


void __fastcall MapControl_QuestInfo__set_WarInfo(
        MapControl_QuestInfo_o *this,
        MapControl_WarInfo_o *value,
        const MethodInfo *method)
{
  this->fields._WarInfo_k__BackingField = value;
  sub_B77560(&this->fields._WarInfo_k__BackingField);
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
    sub_B7769C(this, 0LL);
  return n->fields.phase == this->fields.phase;
}


void __fastcall MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0

  if ( (byte_4388983 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4388983 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v3;
  sub_B77560(&this->fields);
  warInfoList = this->fields.warInfoList;
  if ( !warInfoList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)warInfoList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


MapControl_WarInfo_o *__fastcall MapControl_RootInfo__AddChild(
        MapControl_RootInfo_o *this,
        int32_t warId,
        int64_t dateTime,
        const MethodInfo *method)
{
  MapControl_WarInfo_o *v7; // x22
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  __int64 v10; // x1

  if ( (byte_4388986 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_B775C4(&MapControl_WarInfo_TypeInfo);
    byte_4388986 = 1;
  }
  v7 = (MapControl_WarInfo_o *)sub_B77694(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v7, dateTime, v8);
  if ( !v7 || (v7->fields.warId = warId, (warInfoList = this->fields.warInfoList) == 0LL) )
    sub_B7769C(warInfoList, v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
  return v7;
}


MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByEventID(
        MapControl_RootInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  int v11; // w19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4388988 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4388988 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  result = (MapControl_WarInfo_o *)this->fields.warInfoList;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v6 )
        break;
      current = v12.fields.current;
      if ( !v12.fields.current )
        sub_B7769C(v6, v7);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v12.fields.current, v7);
      if ( !Mine )
        sub_B7769C(0LL, v10);
      if ( Mine->fields.eventId == eventId )
      {
        v11 = 5;
        goto LABEL_11;
      }
    }
    current = 0LL;
    v11 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    if ( v11 == 5 )
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
  MapControl_WarInfo_o *result; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  int v11; // w19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4388987 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4388987 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  result = (MapControl_WarInfo_o *)this->fields.warInfoList;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v6 )
        break;
      current = v12.fields.current;
      if ( !v12.fields.current )
        sub_B7769C(v6, v7);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v12.fields.current, v7);
      if ( !Mine )
        sub_B7769C(0LL, v10);
      if ( Mine->fields.id == warId )
      {
        v11 = 5;
        goto LABEL_11;
      }
    }
    current = 0LL;
    v11 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    if ( v11 == 5 )
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
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  WarEntity_o *Mine; // x0
  __int64 v9; // x1
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4388989 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4388989 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  warInfoList = this->fields.warInfoList;
  if ( !warInfoList )
    sub_B7769C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v14.fields.current )
      sub_B7769C(v6, v7);
    if ( HIDWORD(v14.fields.current[1].klass) == warId && ((__int64)v14.fields.current[1].monitor & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v14.fields.current, v7);
      if ( !Mine )
        sub_B7769C(0LL, v9);
      if ( WarEntity__HasFlag(Mine, 128, 0LL) )
      {
        v10 = 1;
        v11 = 8;
        goto LABEL_13;
      }
    }
  }
  v10 = 0;
  v11 = 6;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (v11 == 8) & v10;
}


void __fastcall MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo___c__DisplayClass3_0_o *v5; // x21
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x22
  unsigned int Index; // w0

  if ( (byte_4388985 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_B775C4(&Method_System_Predicate_MapControl_WarInfo___ctor__);
    sub_B775C4(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_B775C4(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__);
    sub_B775C4(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
    byte_4388985 = 1;
  }
  v5 = (MapControl_RootInfo___c__DisplayClass3_0_o *)sub_B77694(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
  MapControl_RootInfo___c__DisplayClass3_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.warId = warId;
  warInfoList = this->fields.warInfoList;
  if ( warInfoList )
  {
    v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_MapControl_WarInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_MapControl_WarInfo___ctor__);
    Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
              (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)warInfoList,
              (System_Predicate_T__o *)v9,
              (const MethodInfo_3053D44 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v7 = Index;
      v6 = this->fields.warInfoList;
      if ( v6 )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
          v7,
          (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_B7769C(v6, v7);
    }
  }
}


void __fastcall MapControl_RootInfo__Reset(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388984 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4388984 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  warInfoList = this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B7769C(0LL, v4);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v7.fields.current, v4);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v6 = this->fields.warInfoList;
    if ( !v6 )
      sub_B7769C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
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
    sub_B7769C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


void __fastcall MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  System_Collections_Generic_List_int__o *v6; // x20

  if ( (byte_438898A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_438898A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v3;
  sub_B77560(&this->fields.questInfoList);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)questInfoList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  this->fields.questCount = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.availableQuestIdList = v6;
  sub_B77560(&this->fields.availableQuestIdList);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_SpotInfo__AddAvailableQuestId(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *availableQuestIdList; // x0

  if ( (byte_438898E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    byte_438898E = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList )
    sub_B7769C(0LL, *(_QWORD *)&questId);
  System_Collections_Generic_List_int___Add(
    availableQuestIdList,
    questId,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
}


MapControl_QuestInfo_o *__fastcall MapControl_SpotInfo__AddChild(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v5; // x21
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  __int64 v8; // x1

  if ( (byte_438898C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B775C4(&MapControl_QuestInfo_TypeInfo);
    byte_438898C = 1;
  }
  v5 = (MapControl_QuestInfo_o *)sub_B77694(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v5, v6);
  if ( !v5 || (v5->fields.questId = questId, (questInfoList = this->fields.questInfoList) == 0LL) )
    sub_B7769C(questInfoList, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)questInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
  return v5;
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
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x20
  System_Collections_Generic_List_int__o *v6; // x19

  if ( (byte_438898D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438898D = 1;
  }
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  if ( !isInstance )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_51270276(
      v6,
      availableQuestIdList,
      (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
    return v6;
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
    sub_B7769C(0LL, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0LL);
}


int32_t __fastcall MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_B7769C(0LL, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *__fastcall MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *result; // x0
  SpotMaster_o *SpotMaster; // x0
  __int64 v5; // x1

  if ( (byte_438898F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    byte_438898F = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_B7769C(0LL, v5);
    this->fields.mine = (struct SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)SpotMaster,
                                                 this->fields.spotId,
                                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_B77560(&this->fields.mine);
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
  SpotLayerEntity_o *result; // x0
  SpotLayerMaster_o *SpotLayerMaster; // x0
  __int64 v5; // x1

  if ( (byte_4388991 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_4388991 = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = MapControl_SpotInfo__GetSpotLayerMaster(this, method);
    if ( !SpotLayerMaster )
      sub_B7769C(0LL, v5);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)SpotLayerMaster,
      (WarEntity_o **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    return this->fields.spotLayerEnt;
  }
  return result;
}


SpotLayerMaster_o *__fastcall MapControl_SpotInfo__GetSpotLayerMaster(
        MapControl_SpotInfo_o *this,
        const MethodInfo *method)
{
  SpotLayerMaster_o *result; // x0
  SpotLayerMaster_o **p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1

  if ( (byte_4388992 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_4388992 = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = &this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *p_spotLayerMaster = (SpotLayerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_B77560(p_spotLayerMaster);
    return *p_spotLayerMaster;
  }
  return result;
}


SpotMaster_o *__fastcall MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotMaster_o *result; // x0
  SpotMaster_o **p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1

  if ( (byte_4388990 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SpotMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_4388990 = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = &this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *p_spotMaster = (SpotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SpotMaster___);
    sub_B77560(p_spotMaster);
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
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438898B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_438898B = 1;
  }
  memset(&v7, 0, sizeof(v7));
  questInfoList = this->fields.questInfoList;
  if ( questInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)questInfoList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B7769C(0LL, v4);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v7.fields.current, v4);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v6 = this->fields.questInfoList;
    if ( !v6 )
      sub_B7769C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
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
    sub_B77560(&this->fields.mine);
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
  SpotRoadMaster_o *SpotRoadMaster; // x0
  __int64 v4; // x1

  if ( (byte_4388993 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
    byte_4388993 = 1;
  }
  SpotRoadMaster = MapControl_SpotRoadInfo__GetSpotRoadMaster(this, method);
  if ( !SpotRoadMaster )
    sub_B7769C(0LL, v4);
  return (SpotRoadEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
}


int32_t __fastcall MapControl_SpotRoadInfo__GetSpotRoadId(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotRoadId;
}


SpotRoadMaster_o *__fastcall MapControl_SpotRoadInfo__GetSpotRoadMaster(
        MapControl_SpotRoadInfo_o *this,
        const MethodInfo *method)
{
  SpotRoadMaster_o *result; // x0
  SpotRoadMaster_o **p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4388994 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4388994 = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = &this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v7);
    *p_spotRoadMaster = (SpotRoadMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_B77560(p_spotRoadMaster);
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


void __fastcall MapControl_WarInfo___ctor(MapControl_WarInfo_o *this, int64_t dateTime, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0

  if ( (byte_4388995 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    byte_4388995 = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v5;
  sub_B77560(&this->fields.mapInfoList);
  this->fields.mine = 0LL;
  sub_B77560(&this->fields.mine);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B7769C(0LL, v6);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapInfoList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
  this->fields.mapUpdateState = 0;
  this->fields.createdDateTime = dateTime;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__AddChild(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  MapControl_MapInfo_o *v5; // x21
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4388997 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_B775C4(&MapControl_MapInfo_TypeInfo);
    byte_4388997 = 1;
  }
  v5 = (MapControl_MapInfo_o *)sub_B77694(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v5, v6);
  if ( !v5
    || (v5->fields.warId = this->fields.warId, v5->fields.mapId = mapId, (mapInfoList = this->fields.mapInfoList) == 0LL) )
  {
    sub_B7769C(mapInfoList, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mapInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
  return v5;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetActionMap(
        MapControl_WarInfo_o *this,
        int32_t commandType,
        int32_t target,
        const MethodInfo *method)
{
  MapControl_WarInfo___c__DisplayClass17_0_o *v7; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mapInfoList; // x0
  __int64 v9; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__1; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__2; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x25
  bool v18; // w0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x25
  Il2CppClass *v20; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x25
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *monitor; // x24
  char v23; // w19
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__0; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438899B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    sub_B775C4(&Method_System_Predicate_MapControl_SpotInfo___ctor__);
    sub_B775C4(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
    sub_B775C4(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
    sub_B775C4(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_B775C4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_B775C4(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_B775C4(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__);
    sub_B775C4(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__);
    sub_B775C4(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__);
    sub_B775C4(&MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
    byte_438899B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v7 = (MapControl_WarInfo___c__DisplayClass17_0_o *)sub_B77694(MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
  MapControl_WarInfo___c__DisplayClass17_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.target = target,
        (mapInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mapInfoList) == 0LL) )
  {
    sub_B7769C(mapInfoList, v9);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)mapInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    mapInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  p__9__0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v7->fields.__9__0;
  p__9__1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v7->fields.__9__1;
  p__9__2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v7->fields.__9__2;
  v26 = v25;
  while ( 2 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( v13 )
    {
      current = v26.fields.current;
      switch ( commandType )
      {
        case 0:
          if ( !v26.fields.current )
            sub_B7769C(v13, v14);
          klass = v26.fields.current[2].klass;
          v17 = *p__9__0;
          if ( !*p__9__0 )
          {
            v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v17,
              (Il2CppObject *)v7,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            *p__9__0 = v17;
            sub_B77560(p__9__0);
          }
          if ( !klass )
            sub_B7769C(v13, v14);
          v18 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)klass,
                  (System_Predicate_T__o *)v17,
                  (const MethodInfo_3053B24 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
          goto LABEL_28;
        case 1:
          if ( !v26.fields.current )
            sub_B7769C(v13, v14);
          v21 = *p__9__1;
          monitor = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v26.fields.current[2].monitor;
          if ( !*p__9__1 )
          {
            v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v21,
              (Il2CppObject *)v7,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
            *p__9__1 = v21;
            sub_B77560(&v7->fields.__9__1);
          }
          if ( !monitor )
            sub_B7769C(v13, v14);
          v18 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  monitor,
                  (System_Predicate_T__o *)v21,
                  (const MethodInfo_3053B24 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
          goto LABEL_28;
        case 2:
          if ( !v26.fields.current )
            sub_B7769C(v13, v14);
          v19 = *p__9__2;
          v20 = v26.fields.current[3].klass;
          if ( !*p__9__2 )
          {
            v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v19,
              (Il2CppObject *)v7,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__,
              (const MethodInfo_2C3248C *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
            *p__9__2 = v19;
            sub_B77560(&v7->fields.__9__2);
          }
          if ( !v20 )
            sub_B7769C(v13, v14);
          v18 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v20,
                  (System_Predicate_T__o *)v19,
                  (const MethodInfo_3053B24 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_28:
          if ( v18 )
            goto LABEL_29;
          continue;
        case 3:
          if ( !v26.fields.current )
            sub_B7769C(v13, v14);
          if ( HIDWORD(v26.fields.current[1].klass) != v7->fields.target )
            continue;
LABEL_29:
          v23 = 2;
          break;
        default:
          continue;
      }
    }
    else
    {
      v23 = 0;
      current = 0LL;
    }
    break;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( ((v23 + 2) & 3) != 0 )
    return 0LL;
  else
    return (MapControl_MapInfo_o *)current;
}


int64_t __fastcall MapControl_WarInfo__GetCreatedDateTime(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return this->fields.createdDateTime;
}


int32_t __fastcall MapControl_WarInfo__GetEventId(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_WarInfo__GetMine(this, method);
  if ( !Mine )
    sub_B7769C(0LL, v3);
  return Mine->fields.eventId;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetMap(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MapControl_MapInfo__o *IsMultiMap; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  int v10; // w20
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4388998 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_4388998 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  IsMultiMap = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)MapControl_WarInfo__IsMultiMap(
                                                                                 this,
                                                                                 *(const MethodInfo **)&mapId);
  if ( ((unsigned __int8)IsMultiMap & 1) == 0 )
    goto LABEL_12;
  IsMultiMap = this->fields.mapInfoList;
  if ( !IsMultiMap )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMultiMap,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B7769C(v7, v8);
    if ( HIDWORD(v13.fields.current[1].klass) == mapId )
    {
      v10 = 17;
      goto LABEL_11;
    }
  }
  current = 0LL;
  v10 = 4;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v10 != 17 )
  {
LABEL_12:
    mapInfoList = this->fields.mapInfoList;
    if ( mapInfoList )
    {
      if ( !mapInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      return mapInfoList->fields._items->m_Items[0];
    }
LABEL_18:
    sub_B7769C(IsMultiMap, v6);
  }
  return (MapControl_MapInfo_o *)current;
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall MapControl_WarInfo__GetMapList(
        MapControl_WarInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mapInfoList;
}


int32_t __fastcall MapControl_WarInfo__GetMapUpdateState(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  MapUpdateScheduleMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_438899D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438899D = 1;
  }
  result = this->fields.mapUpdateState;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (MapUpdateScheduleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B7769C(0LL, v5);
    if ( MapUpdateScheduleMaster__Any(Master_WarQuestSelectionMaster, this->fields.warId, 0LL) )
      result = 1;
    else
      result = 2;
    this->fields.mapUpdateState = result;
  }
  return result;
}


WarEntity_o *__fastcall MapControl_WarInfo__GetMine(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438899C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438899C = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
      sub_B7769C(Instance, v5);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &this->fields.mine,
      this->fields.warId,
      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    return this->fields.mine;
  }
  return result;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetNextMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mapInfoList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388999 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_4388999 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mapInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B7769C(0LL, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)mapInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    mapInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v5 )
      break;
    current = v9.fields.current;
    if ( !v9.fields.current )
      sub_B7769C(v5, v6);
    if ( LOBYTE(v9.fields.current[1].monitor) )
    {
      v8 = 8;
      goto LABEL_12;
    }
  }
  current = 0LL;
  v8 = 6;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v8 == 8 )
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
    sub_B7769C(0LL, v3);
  return WarEntity__HasFlag(Mine, 32, 0LL);
}


bool __fastcall MapControl_WarInfo__IsMapUpdateStateEnabled(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return MapControl_WarInfo__GetMapUpdateState(this, method) == 1;
}


bool __fastcall MapControl_WarInfo__IsMultiMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8

  v2 = this;
  if ( (byte_438899A & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    byte_438899A = 1;
  }
  mapInfoList = v2->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B7769C(this, method);
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
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388996 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    byte_4388996 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  mapInfoList = this->fields.mapInfoList;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapInfoList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v7.fields.current )
        sub_B7769C(0LL, v4);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v7.fields.current, v4);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v6 = this->fields.mapInfoList;
    if ( !v6 )
      sub_B7769C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
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


void __fastcall MapControl_WarInfo___c__DisplayClass17_0___ctor(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__0(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.spotId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.spotRoadId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.mapGimmickId == this->fields.target;
}