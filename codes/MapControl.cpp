void __fastcall MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  struct EventEntity_o **p_eventEnt; // x19
  void *v4; // x1

  if ( (byte_4184231 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4184231 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEnt = 0LL;
  p_eventEnt = &this->fields.eventEnt;
  sub_B2C2F8(p_eventEnt, 0LL);
  v4 = StringLiteral_1/*""*/;
  p_eventEnt[4] = (struct EventEntity_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_eventEnt + 4, v4);
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
  __int64 v3; // x1
  MapGimmickMaster_o *result; // x0
  MapGimmickMaster_o **p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4184233 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapGimmickMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4184233 = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = &this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v8);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    *p_mapGimmickMaster = (MapGimmickMaster_o *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_mapGimmickMaster, MasterData_WarQuestSelectionMaster);
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

  if ( (byte_4184232 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__, method);
    byte_4184232 = 1;
  }
  MapGimmickMaster = MapControl_MapGimmickInfo__GetMapGimmickMaster(this, method);
  if ( !MapGimmickMaster )
    sub_B2C434(0LL, v4);
  return (MapGimmickEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *spotInfoList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19

  if ( (byte_4184234 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v10);
    byte_4184234 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v11;
  sub_B2C2F8(&this->fields.spotInfoList, v11);
  spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_7;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    spotInfoList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v14;
  sub_B2C2F8(&this->fields.spotRoadInfoList, v14);
  spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotRoadInfoList;
  if ( !spotInfoList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          spotInfoList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__),
        v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v15,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__),
        this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v15,
        p_mapGimmickInfoList = &this->fields.mapGimmickInfoList,
        sub_B2C2F8(p_mapGimmickInfoList, v15),
        (spotInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_mapGimmickInfoList) == 0LL) )
  {
LABEL_7:
    sub_B2C434(spotInfoList, v12);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    spotInfoList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall MapControl_MapInfo__AddChild(
        MapControl_MapInfo_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_SpotInfo_o *v6; // x21
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4184236 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, *(_QWORD *)&spotId);
    sub_B2C35C(&MapControl_SpotInfo_TypeInfo, v5);
    byte_4184236 = 1;
  }
  v6 = (MapControl_SpotInfo_o *)sub_B2C42C(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v6, 0LL);
  if ( !v6 || (MapControl_SpotInfo__SetMine(v6, spotId, 0LL, 0LL), (spotInfoList = this->fields.spotInfoList) == 0LL) )
    sub_B2C434(spotInfoList, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapGimmickInfo_o *__fastcall MapControl_MapInfo__AddMapGimmick(
        MapControl_MapInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *mapGimmickInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4184238 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, *(_QWORD *)&mapGimmickId);
    sub_B2C35C(&MapControl_MapGimmickInfo_TypeInfo, v5);
    byte_4184238 = 1;
  }
  v6 = sub_B2C42C(MapControl_MapGimmickInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 || (*(_DWORD *)(v6 + 20) = mapGimmickId, (mapGimmickInfoList = this->fields.mapGimmickInfoList) == 0LL) )
    sub_B2C434(mapGimmickInfoList, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mapGimmickInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
  return (MapControl_MapGimmickInfo_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotRoadInfo_o *__fastcall MapControl_MapInfo__AddSpotRoad(
        MapControl_MapInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_SpotRoadInfo_o *v6; // x21
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4184237 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, *(_QWORD *)&spotRoadId);
    sub_B2C35C(&MapControl_SpotRoadInfo_TypeInfo, v5);
    byte_4184237 = 1;
  }
  v6 = (MapControl_SpotRoadInfo_o *)sub_B2C42C(MapControl_SpotRoadInfo_TypeInfo);
  MapControl_SpotRoadInfo___ctor(v6, 0LL);
  if ( !v6 || (v6->fields.spotRoadId = spotRoadId, (spotRoadInfoList = this->fields.spotRoadInfoList) == 0LL) )
    sub_B2C434(spotRoadInfoList, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotRoadInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
  return v6;
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
  __int64 v3; // x1
  MapMaster_o *result; // x0
  MapMaster_o **p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4184239 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4184239 = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = &this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v8);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___);
    *p_mapMaster = (MapMaster_o *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_mapMaster, MasterData_WarQuestSelectionMaster);
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
    sub_B2C434(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v20; // x0
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x0
  __int64 v22; // x1
  int v23; // w21
  int v24; // w8
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *mapGimmickInfoList; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int v28; // w21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+0h] [xbp-A0h] BYREF
  int v30[3]; // [xsp+18h] [xbp-88h]
  int v31; // [xsp+24h] [xbp-7Ch]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o j; // [xsp+40h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+60h] [xbp-40h] BYREF

  if ( (byte_4184235 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    byte_4184235 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&j, 0, sizeof(j));
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  spotInfoList = this->fields.spotInfoList;
  if ( spotInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    for ( i = v29;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
          MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)i.fields.current, 0LL) )
    {
      if ( !i.fields.current )
        sub_B2C434(0LL, v18);
    }
    v30[0] = 59;
    v31 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    v31 = 0;
    v20 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotInfoList;
    if ( !v20 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v20,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
  }
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( spotRoadInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotRoadInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    for ( j = v29;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &j,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
          MapControl_SpotRoadInfo__Reset((MapControl_SpotRoadInfo_o *)j.fields.current, 0LL) )
    {
      if ( !j.fields.current )
        sub_B2C434(0LL, v22);
    }
    v30[0] = 129;
    v23 = ++v31;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &j,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v30[v23 - 1] == 129 )
      {
        --v23;
        v31 = v24;
      }
    }
    v20 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.spotRoadInfoList;
    if ( !v20 )
      goto LABEL_35;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v20,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
  }
  else
  {
    v23 = 0;
  }
  mapGimmickInfoList = this->fields.mapGimmickInfoList;
  if ( !mapGimmickInfoList )
    return;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapGimmickInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v32.fields.current )
      sub_B2C434(v26, v27);
    LODWORD(v32.fields.current[1].klass) = 0;
  }
  v30[v23] = 199;
  v28 = ++v31;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  if ( v28 && v30[v28 - 1] == 199 )
    v31 = v28 - 1;
  v20 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mapGimmickInfoList;
  if ( !v20 )
LABEL_35:
    sub_B2C434(v20, v19);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v20,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
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
  struct QuestPhaseEntity_o *Entity; // x0

  p_mine = &this->fields.mine;
  result = this->fields.mine;
  if ( !result )
  {
    QuestPhaseMaster = MapControl_PhaseInfo__GetQuestPhaseMaster(this, method);
    if ( !QuestPhaseMaster )
      sub_B2C434(0LL, v6);
    Entity = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0LL);
    this->fields.mine = Entity;
    sub_B2C2F8(p_mine, Entity);
    return this->fields.mine;
  }
  return result;
}


QuestPhaseMaster_o *__fastcall MapControl_PhaseInfo__GetQuestPhaseMaster(
        MapControl_PhaseInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  QuestPhaseMaster_o *result; // x0
  QuestPhaseMaster_o **p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_418423A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418423A = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = &this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v8);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    *p_questPhaseMaster = (QuestPhaseMaster_o *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_questPhaseMaster, MasterData_WarQuestSelectionMaster);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_418423E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo, v4);
    byte_418423E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v5;
  sub_B2C2F8(&this->fields.phaseInfoList, v5);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_B2C434(0LL, v6);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)phaseInfoList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
  this->fields.questEnt = 0LL;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_B2C2F8(p_questEnt, 0LL);
  *((_DWORD *)p_questEnt + 25) = -1;
}


// local variable allocation has failed, the output may be wrong!
MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__AddChild(
        MapControl_QuestInfo_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x22
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  __int64 v10; // x1
  MapControl_PhaseInfo_o *result; // x0

  if ( (byte_4184240 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__, *(_QWORD *)&questId);
    sub_B2C35C(&MapControl_PhaseInfo_TypeInfo, v7);
    byte_4184240 = 1;
  }
  v8 = sub_B2C42C(MapControl_PhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId, *(_DWORD *)(v8 + 20) = phase,
                                        (phaseInfoList = this->fields.phaseInfoList) == 0LL) )
  {
    sub_B2C434(phaseInfoList, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)phaseInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__);
  result = (MapControl_PhaseInfo_o *)v8;
  ++this->fields.phaseCount;
  return result;
}


void __fastcall MapControl_QuestInfo__AddSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x24
  System_Collections_Generic_List_int__o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v10; // x22
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  System_Collections_Generic_List_int__o *v13; // x0
  __int64 v14; // x0

  v4 = this;
  if ( (byte_418423B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, questIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    this = (MapControl_QuestInfo_o *)sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_418423B = 1;
  }
  if ( questIds )
  {
    v8 = *(_QWORD *)&questIds->max_length;
    if ( (int)v8 >= 1 )
    {
      p_sameGroupQuestIds = &v4->fields.sameGroupQuestIds;
      if ( !v4->fields.sameGroupQuestIds )
      {
        v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v10,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        *p_sameGroupQuestIds = v10;
        sub_B2C2F8(&v4->fields.sameGroupQuestIds, v10);
      }
      v11 = 0LL;
      do
      {
        if ( v11 >= questIds->max_length )
        {
          v14 = sub_B2C460(this);
          sub_B2C400(v14, 0LL);
        }
        v12 = questIds->m_Items[v11 + 1];
        if ( v12 != v4->fields.questId )
        {
          v13 = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_17;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             v13,
                                             v12,
                                             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v13 = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds )
LABEL_17:
              sub_B2C434(v13, questIds);
            System_Collections_Generic_List_int___Add(
              v13,
              v12,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v11;
      }
      while ( (__int64)v11 < (int)v8 );
    }
  }
}


int32_t __fastcall MapControl_QuestInfo__GetClearPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t PhaseMax; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184244 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4184244 = 1;
  }
  entity = 0LL;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B2C434(Instance, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  QuestEntity_o *result; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4184245 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4184245 = 1;
  }
  if ( !this->fields.questId )
    return 0LL;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v7);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      (WarEntity_o **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t __fastcall MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v2 = this;
  if ( (byte_4184243 & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_B2C35C(
                                       &Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__,
                                       method);
    byte_4184243 = 1;
  }
  phaseInfoList = v2->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, v3);
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
    sub_B2C434(0LL, v3);
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
  __int64 v3; // x1
  int64_t UserId; // x0
  int32_t questId; // w19
  int64_t v6; // x20

  if ( (byte_418423D & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_418423D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  questId = this->fields.questId;
  v6 = UserId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(v6, questId, 1, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_418423C & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_418423C = 1;
  }
  questId = this->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(questId, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType != 0 && this->fields.dispType != 3;
}


bool __fastcall MapControl_QuestInfo__IsDisplayWarBoardNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t PhaseMax; // w20
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *v8; // x0
  int32_t questId; // w19
  MapControl_QuestInfo_Fields *p_fields; // t2
  QuestBehaviorMaster_o *v11; // x21
  int32_t v12; // w0

  if ( (byte_4184242 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4184242 = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster
      || (Master_WarQuestSelectionMaster = QuestPhaseMaster__getList(
                                             (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
                                             this->fields.questId,
                                             0LL)) == 0LL )
    {
      sub_B2C434(Master_WarQuestSelectionMaster, v7);
    }
    PhaseMax = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v8 )
  {
    p_fields = &this->fields;
    questId = this->fields.questId;
    v11 = (QuestBehaviorMaster_o *)v8;
    v12 = UnityEngine_Mathf__Min_40694704(p_fields->phaseCount + 1, PhaseMax, 0LL);
    LOBYTE(v8) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v11, questId, v12, 6, 0LL);
  }
  return (char)v8;
}


bool __fastcall MapControl_QuestInfo__IsNew(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


void __fastcall MapControl_QuestInfo__Reset(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *sameGroupQuestIds; // x0
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418423F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__, v7);
    byte_418423F = 1;
  }
  memset(&v14, 0, sizeof(v14));
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
  if ( sameGroupQuestIds )
    System_Collections_Generic_List_int___Clear(
      sameGroupQuestIds,
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  phaseInfoList = this->fields.phaseInfoList;
  if ( phaseInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)phaseInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v10 )
        break;
      if ( !v14.fields.current )
        sub_B2C434(v10, v11);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v13 = this->fields.phaseInfoList;
    if ( !v13 )
      sub_B2C434(0LL, v12);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_QuestInfo__SetSpotID(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *v5; // x8
  struct MapControl_SpotInfo_o **p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4184241 & 1) == 0 )
  {
    sub_B2C35C(&MapControl_SpotInfo_TypeInfo, *(_QWORD *)&value);
    byte_4184241 = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = &this->fields._SpotInfo_k__BackingField;
  v5 = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v8 = (MapControl_SpotInfo_o *)sub_B2C42C(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v8, 0LL);
    *p_SpotInfo_k__BackingField = v8;
    sub_B2C2F8(p_SpotInfo_k__BackingField, v8);
    v5 = *p_SpotInfo_k__BackingField;
    if ( !*p_SpotInfo_k__BackingField )
      sub_B2C434(v9, v10);
  }
  v5->fields.spotId = value;
}


void __fastcall MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4184246 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184246 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C67 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  this->fields.warId = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4183C76 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183C76 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v4->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4183C7A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questId = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questPhase = v6->static_fields->_PhaseCnt_k__BackingField;
  if ( !byte_4184250 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4184250 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.endTime = v6->static_fields->_EndTime_k__BackingField;
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
  sub_B2C2F8(&this->fields._AreaBoardInfo_k__BackingField, value);
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
  sub_B2C2F8(&this->fields._SpotInfo_k__BackingField, value);
}


void __fastcall MapControl_QuestInfo__set_WarInfo(
        MapControl_QuestInfo_o *this,
        MapControl_WarInfo_o *value,
        const MethodInfo *method)
{
  this->fields._WarInfo_k__BackingField = value;
  sub_B2C2F8(&this->fields._WarInfo_k__BackingField, value);
}


void __fastcall MapControl_QuestInfo__set_fixedCostVal(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._fixedCostVal_k__BackingField = value;
}


void __fastcall MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0

  if ( (byte_4185CE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_4185CE1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  warInfoList = this->fields.warInfoList;
  if ( !warInfoList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)warInfoList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
}


// local variable allocation has failed, the output may be wrong!
MapControl_WarInfo_o *__fastcall MapControl_RootInfo__AddChild(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_WarInfo_o *v6; // x21
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  __int64 v9; // x1

  if ( (byte_4185CE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, *(_QWORD *)&warId);
    sub_B2C35C(&MapControl_WarInfo_TypeInfo, v5);
    byte_4185CE4 = 1;
  }
  v6 = (MapControl_WarInfo_o *)sub_B2C42C(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v6, v7);
  if ( !v6 || (v6->fields.warId = warId, (warInfoList = this->fields.warInfoList) == 0LL) )
    sub_B2C434(warInfoList, v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByEventID(
        MapControl_RootInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MapControl_WarInfo_o *result; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v13; // x1
  int v14; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185CE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v7);
    byte_4185CE6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  result = (MapControl_WarInfo_o *)this->fields.warInfoList;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v15,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v9 )
        break;
      current = v15.fields.current;
      if ( !v15.fields.current )
        sub_B2C434(v9, v10);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v15.fields.current, v10);
      if ( !Mine )
        sub_B2C434(0LL, v13);
      if ( Mine->fields.eventId == eventId )
      {
        v14 = 5;
        goto LABEL_11;
      }
    }
    current = 0LL;
    v14 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    if ( v14 == 5 )
      return (MapControl_WarInfo_o *)current;
    else
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByWarID(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MapControl_WarInfo_o *result; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v13; // x1
  int v14; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185CE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v7);
    byte_4185CE5 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  result = (MapControl_WarInfo_o *)this->fields.warInfoList;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v15,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v9 )
        break;
      current = v15.fields.current;
      if ( !v15.fields.current )
        sub_B2C434(v9, v10);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v15.fields.current, v10);
      if ( !Mine )
        sub_B2C434(0LL, v13);
      if ( Mine->fields.id == warId )
      {
        v14 = 5;
        goto LABEL_11;
      }
    }
    current = 0LL;
    v14 = 3;
LABEL_11:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    if ( v14 == 5 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  WarEntity_o *Mine; // x0
  __int64 v12; // x1
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4185CE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v7);
    byte_4185CE7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  warInfoList = this->fields.warInfoList;
  if ( !warInfoList )
    sub_B2C434(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v17,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v9 )
      break;
    if ( !v17.fields.current )
      sub_B2C434(v9, v10);
    if ( HIDWORD(v17.fields.current[1].klass) == warId && ((__int64)v17.fields.current[1].monitor & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v17.fields.current, v10);
      if ( !Mine )
        sub_B2C434(0LL, v12);
      if ( WarEntity__HasFlag(Mine, 128, 0LL) )
      {
        v13 = 1;
        v14 = 8;
        goto LABEL_13;
      }
    }
  }
  v13 = 0;
  v14 = 6;
LABEL_13:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (v14 == 8) & v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MapControl_RootInfo___c__DisplayClass3_0_o *v10; // x21
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x22
  unsigned int Index; // w0

  if ( (byte_4185CE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v5);
    sub_B2C35C(&Method_System_Predicate_MapControl_WarInfo___ctor__, v6);
    sub_B2C35C(&System_Predicate_MapControl_WarInfo__TypeInfo, v7);
    sub_B2C35C(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__, v8);
    sub_B2C35C(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo, v9);
    byte_4185CE3 = 1;
  }
  v10 = (MapControl_RootInfo___c__DisplayClass3_0_o *)sub_B2C42C(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
  MapControl_RootInfo___c__DisplayClass3_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  v10->fields.warId = warId;
  warInfoList = this->fields.warInfoList;
  if ( warInfoList )
  {
    v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_WarInfo__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v14,
      (Il2CppObject *)v10,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_WarInfo___ctor__);
    Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
              (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)warInfoList,
              (System_Predicate_T__o *)v14,
              (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v12 = Index;
      v11 = this->fields.warInfoList;
      if ( v11 )
      {
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
          v12,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_B2C434(v11, v12);
    }
  }
}


void __fastcall MapControl_RootInfo__Reset(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185CE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v6);
    byte_4185CE2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  warInfoList = this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B2C434(0LL, v8);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v11.fields.current, v8);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v10 = this->fields.warInfoList;
    if ( !v10 )
      sub_B2C434(0LL, v9);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
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
    sub_B2C434(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


void __fastcall MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  System_Collections_Generic_List_int__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4185CE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v6);
    byte_4185CE8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questInfoList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_B2C434(0LL, v14);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)questInfoList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  this->fields.questCount = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.availableQuestIdList = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.availableQuestIdList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_SpotInfo__AddAvailableQuestId(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *availableQuestIdList; // x0

  if ( (byte_4185CEC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&questId);
    byte_4185CEC = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList )
    sub_B2C434(0LL, *(_QWORD *)&questId);
  System_Collections_Generic_List_int___Add(
    availableQuestIdList,
    questId,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
MapControl_QuestInfo_o *__fastcall MapControl_SpotInfo__AddChild(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_QuestInfo_o *v6; // x21
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4185CEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, *(_QWORD *)&questId);
    sub_B2C35C(&MapControl_QuestInfo_TypeInfo, v5);
    byte_4185CEA = 1;
  }
  v6 = (MapControl_QuestInfo_o *)sub_B2C42C(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v6, 0LL);
  if ( !v6 || (v6->fields.questId = questId, (questInfoList = this->fields.questInfoList) == 0LL) )
    sub_B2C434(questInfoList, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)questInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
  return v6;
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MapControl_SpotInfo__GetAvailableQuestIdList(
        MapControl_SpotInfo_o *this,
        bool isInstance,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x20
  System_Collections_Generic_List_int__o *v7; // x19

  if ( (byte_4185CEB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, isInstance);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4185CEB = 1;
  }
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  if ( !isInstance )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v7,
      availableQuestIdList,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    return v7;
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
    sub_B2C434(0LL, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0LL);
}


int32_t __fastcall MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_B2C434(0LL, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *__fastcall MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *result; // x0
  SpotMaster_o *SpotMaster; // x0
  __int64 v5; // x1
  struct SpotEntity_o *Entity; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4185CED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, method);
    byte_4185CED = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_B2C434(0LL, v5);
    Entity = (struct SpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)SpotMaster,
                                      this->fields.spotId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    this->fields.mine = Entity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mine,
      (System_Int32_array **)Entity,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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

  if ( (byte_4185CEF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, method);
    byte_4185CEF = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = MapControl_SpotInfo__GetSpotLayerMaster(this, method);
    if ( !SpotLayerMaster )
      sub_B2C434(0LL, v5);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)SpotLayerMaster,
      (WarEntity_o **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_24E412C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    return this->fields.spotLayerEnt;
  }
  return result;
}


SpotLayerMaster_o *__fastcall MapControl_SpotInfo__GetSpotLayerMaster(
        MapControl_SpotInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SpotLayerMaster_o *result; // x0
  BattleServantConfConponent_o *p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4185CF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SpotLayerMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4185CF0 = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = (BattleServantConfConponent_o *)&this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SpotLayerMaster___);
    p_spotLayerMaster->klass = (BattleServantConfConponent_c *)Master_WarQuestSelectionMaster;
    sub_B2C2F8(p_spotLayerMaster, Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    return (SpotLayerMaster_o *)p_spotLayerMaster->klass;
  }
  return result;
}


SpotMaster_o *__fastcall MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SpotMaster_o *result; // x0
  BattleServantConfConponent_o *p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4185CEE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SpotMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4185CEE = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = (BattleServantConfConponent_o *)&this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SpotMaster___);
    p_spotMaster->klass = (BattleServantConfConponent_c *)Master_WarQuestSelectionMaster;
    sub_B2C2F8(p_spotMaster, Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    return (SpotMaster_o *)p_spotMaster->klass;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185CE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v6);
    byte_4185CE9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  questInfoList = this->fields.questInfoList;
  if ( questInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)questInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B2C434(0LL, v8);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v11.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v10 = this->fields.questInfoList;
    if ( !v10 )
      sub_B2C434(0LL, v9);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.spotId = spotId;
  if ( spotEnt )
  {
    this->fields.mine = spotEnt;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mine,
      (System_Int32_array **)spotEnt,
      (System_String_array **)spotEnt,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
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

  if ( (byte_4185CF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__, method);
    byte_4185CF1 = 1;
  }
  SpotRoadMaster = MapControl_SpotRoadInfo__GetSpotRoadMaster(this, method);
  if ( !SpotRoadMaster )
    sub_B2C434(0LL, v4);
  return (SpotRoadEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
}


int32_t __fastcall MapControl_SpotRoadInfo__GetSpotRoadId(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotRoadId;
}


SpotRoadMaster_o *__fastcall MapControl_SpotRoadInfo__GetSpotRoadMaster(
        MapControl_SpotRoadInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SpotRoadMaster_o *result; // x0
  BattleServantConfConponent_o *p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4185CF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotRoadMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4185CF2 = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = (BattleServantConfConponent_o *)&this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v8);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    p_spotRoadMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_spotRoadMaster, MasterData_WarQuestSelectionMaster, v10, v11, v12, v13, v14, v15);
    return (SpotRoadMaster_o *)p_spotRoadMaster->klass;
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0

  if ( (byte_4185CF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v4);
    byte_4185CF3 = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mapInfoList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.mine = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mine, 0LL, v12, v13, v14, v15, v16, v17);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B2C434(0LL, v18);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mapInfoList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__AddChild(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_MapInfo_o *v6; // x21
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0
  __int64 v8; // x1

  if ( (byte_4185CF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, *(_QWORD *)&mapId);
    sub_B2C35C(&MapControl_MapInfo_TypeInfo, v5);
    byte_4185CF5 = 1;
  }
  v6 = (MapControl_MapInfo_o *)sub_B2C42C(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v6, 0LL);
  if ( !v6
    || (MapControl_MapInfo__SetMine(v6, mapId, this->fields.warId, 0LL), (mapInfoList = this->fields.mapInfoList) == 0LL) )
  {
    sub_B2C434(mapInfoList, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mapInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetActionMap(
        MapControl_WarInfo_o *this,
        int32_t commandType,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mapInfoList; // x0
  __int64 v27; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v29; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v30; // x23
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x24
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v36; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  bool v44; // w0
  System_Collections_Generic_List_MapControl_MapGimmickInfo__o *MapGimmickList; // x0
  __int64 v46; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x26
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *SpotRoadList; // x0
  __int64 v56; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v57; // x26
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v58; // x25
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  char v65; // w19
  BattleServantConfConponent_o *v66; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4185CF9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__,
      *(_QWORD *)&commandType);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v14);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v15);
    sub_B2C35C(&Method_System_Predicate_MapControl_SpotRoadInfo___ctor__, v16);
    sub_B2C35C(&Method_System_Predicate_MapControl_MapGimmickInfo___ctor__, v17);
    sub_B2C35C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v18);
    sub_B2C35C(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v19);
    sub_B2C35C(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v20);
    sub_B2C35C(&Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__0__, v21);
    sub_B2C35C(&Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__1__, v22);
    sub_B2C35C(&Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__2__, v23);
    sub_B2C35C(&MapControl_WarInfo___c__DisplayClass14_0_TypeInfo, v24);
    byte_4185CF9 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v25 = sub_B2C42C(MapControl_WarInfo___c__DisplayClass14_0_TypeInfo);
  MapControl_WarInfo___c__DisplayClass14_0___ctor((MapControl_WarInfo___c__DisplayClass14_0_o *)v25, 0LL);
  if ( !v25
    || (*(_DWORD *)(v25 + 16) = target,
        (mapInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mapInfoList) == 0LL) )
  {
    sub_B2C434(mapInfoList, v27);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)mapInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    mapInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = (BattleServantConfConponent_o *)(v25 + 24);
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v25 + 32);
  v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v25 + 40);
  v68 = v67;
  while ( 2 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( v31 )
    {
      current = v68.fields.current;
      switch ( commandType )
      {
        case 0:
          if ( !v68.fields.current )
            sub_B2C434(v31, v32);
          SpotList = MapControl_MapInfo__GetSpotList((MapControl_MapInfo_o *)v68.fields.current, 0LL);
          v36 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)SpotList;
          klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v66->klass;
          if ( !v66->klass )
          {
            klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              klass,
              (Il2CppObject *)v25,
              Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__0__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
            v66->klass = (BattleServantConfConponent_c *)klass;
            sub_B2C2F8(v66, (System_Int32_array **)klass, v38, v39, v40, v41, v42, v43);
          }
          if ( !v36 )
            sub_B2C434(SpotList, v35);
          v44 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  v36,
                  (System_Predicate_T__o *)klass,
                  (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
          goto LABEL_28;
        case 1:
          if ( !v68.fields.current )
            sub_B2C434(v31, v32);
          SpotRoadList = MapControl_MapInfo__GetSpotRoadList((MapControl_MapInfo_o *)v68.fields.current, 0LL);
          v57 = *v29;
          v58 = SpotRoadList;
          if ( !*v29 )
          {
            v57 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v57,
              (Il2CppObject *)v25,
              Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__1__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_SpotRoadInfo___ctor__);
            *v29 = v57;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v25 + 32),
              (System_Int32_array **)v57,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
          }
          if ( !v58 )
            sub_B2C434(SpotRoadList, v56);
          v44 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  v58,
                  (System_Predicate_T__o *)v57,
                  (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
          goto LABEL_28;
        case 2:
          if ( !v68.fields.current )
            sub_B2C434(v31, v32);
          MapGimmickList = MapControl_MapInfo__GetMapGimmickList((MapControl_MapInfo_o *)v68.fields.current, 0LL);
          v47 = *v30;
          v48 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)MapGimmickList;
          if ( !*v30 )
          {
            v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v47,
              (Il2CppObject *)v25,
              Method_MapControl_WarInfo___c__DisplayClass14_0__GetActionMap_b__2__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_MapControl_MapGimmickInfo___ctor__);
            *v30 = v47;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v25 + 40),
              (System_Int32_array **)v47,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
          }
          if ( !v48 )
            sub_B2C434(MapGimmickList, v46);
          v44 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                  v48,
                  (System_Predicate_T__o *)v47,
                  (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_28:
          if ( v44 )
            goto LABEL_29;
          continue;
        case 3:
          if ( !v68.fields.current )
            sub_B2C434(v31, v32);
          if ( HIDWORD(v68.fields.current[1].klass) != *(_DWORD *)(v25 + 16) )
            continue;
LABEL_29:
          v65 = 2;
          break;
        default:
          continue;
      }
    }
    else
    {
      v65 = 0;
      current = 0LL;
    }
    break;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( ((v65 + 2) & 3) != 0 )
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
    sub_B2C434(0LL, v3);
  return Mine->fields.eventId;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetMap(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *IsMultiMap; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  int v14; // w20
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185CF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v8);
    byte_4185CF6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  IsMultiMap = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)MapControl_WarInfo__IsMultiMap(
                                                                                 this,
                                                                                 *(const MethodInfo **)&mapId);
  if ( ((unsigned __int8)IsMultiMap & 1) == 0 )
    goto LABEL_12;
  IsMultiMap = this->fields.mapInfoList;
  if ( !IsMultiMap )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMultiMap,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v11 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B2C434(v11, v12);
    if ( HIDWORD(v17.fields.current[1].klass) == mapId )
    {
      v14 = 17;
      goto LABEL_11;
    }
  }
  current = 0LL;
  v14 = 4;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v14 != 17 )
  {
LABEL_12:
    mapInfoList = this->fields.mapInfoList;
    if ( mapInfoList )
    {
      if ( !mapInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      return mapInfoList->fields._items->m_Items[0];
    }
LABEL_18:
    sub_B2C434(IsMultiMap, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarEntity_o *result; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4185CFA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185CFA = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v7);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &this->fields.mine,
      this->fields.warId,
      (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    return this->fields.mine;
  }
  return result;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetNextMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mapInfoList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x19
  int v13; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185CF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v7);
    byte_4185CF7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  mapInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B2C434(0LL, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)mapInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    mapInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B2C434(v10, v11);
    if ( LOBYTE(v14.fields.current[1].monitor) )
    {
      v13 = 8;
      goto LABEL_12;
    }
  }
  current = 0LL;
  v13 = 6;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  if ( v13 == 8 )
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
    sub_B2C434(0LL, v3);
  return WarEntity__HasFlag(Mine, 32, 0LL);
}


bool __fastcall MapControl_WarInfo__IsMultiMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8

  v2 = this;
  if ( (byte_4185CF8 & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__,
                                     method);
    byte_4185CF8 = 1;
  }
  mapInfoList = v2->fields.mapInfoList;
  if ( !mapInfoList )
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185CF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v6);
    byte_4185CF4 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  mapInfoList = this->fields.mapInfoList;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B2C434(0LL, v8);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v11.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v10 = this->fields.mapInfoList;
    if ( !v10 )
      sub_B2C434(0LL, v9);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
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
    sub_B2C434(this, 0LL);
  return x->fields.spotId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass14_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass14_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.spotRoadId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass14_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass14_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.mapGimmickId == this->fields.target;
}