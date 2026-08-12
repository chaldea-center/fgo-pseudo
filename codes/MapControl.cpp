void MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  int32_t v9; // w1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596D0AA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D0AA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventEnt, 0, v3, v4, v5, v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.specialNoticeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.specialNoticeText, v9, v10, v11, v12, v13, v14, v15);
}


void MapControl_MapGimmickInfo___ctor(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MapControl_MapGimmickInfo__GetDispType(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int32_t MapControl_MapGimmickInfo__GetMapGimmickId(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  return this->fields.mapGimmickId;
}


MapGimmickMaster_o *MapControl_MapGimmickInfo__GetMapGimmickMaster(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  MapGimmickMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596D0CB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0CB = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    p_mapGimmickMaster->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object;
    sub_2213A04(p_mapGimmickMaster, (int32_t)MasterData_object, v9, v10, v11, v12, v13, v14);
    return (MapGimmickMaster_o *)p_mapGimmickMaster->klass;
  }
  return result;
}


MapGimmickEntity_o *MapControl_MapGimmickInfo__GetMine(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *MapGimmickMaster; // x0
  __int64 v4; // x1

  if ( (byte_596D0CA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
    byte_596D0CA = 1;
  }
  MapGimmickMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_MapGimmickInfo__GetMapGimmickMaster(
                                                                     this,
                                                                     method);
  if ( !MapGimmickMaster )
    sub_2213CDC(0, v4);
  return (MapGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
}


void MapControl_MapGimmickInfo__Reset(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  this->fields.dispType = 0;
}


void MapControl_MapGimmickInfo__SetDispType(
        MapControl_MapGimmickInfo_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void MapControl_MapGimmickInfo__SetMine(
        MapControl_MapGimmickInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  this->fields.mapGimmickId = mapGimmickId;
}


void MapControl_MapInfo___ctor(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_object__o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x8
  int32_t v23; // w2
  int v24; // w9
  System_Collections_Generic_List_object__o *v25; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v33; // x8
  int32_t v34; // w2
  int v35; // w9

  if ( (byte_596D0CC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    byte_596D0CC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spotInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  spotInfoList = this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_13;
  size = spotInfoList->fields._size;
  v14 = spotInfoList->fields._version + 1;
  spotInfoList->fields._size = 0;
  spotInfoList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotInfoList->fields._items, 0, size, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.spotRoadInfoList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( !spotRoadInfoList )
    goto LABEL_13;
  v23 = spotRoadInfoList->fields._size;
  v24 = spotRoadInfoList->fields._version + 1;
  spotRoadInfoList->fields._size = 0;
  spotRoadInfoList->fields._version = v24;
  if ( v23 >= 1 )
    System_Array__Clear((System_Array_o *)spotRoadInfoList->fields._items, 0, v23, 0);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v25;
  p_mapGimmickInfoList = &this->fields.mapGimmickInfoList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mapGimmickInfoList, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = *p_mapGimmickInfoList;
  if ( !*p_mapGimmickInfoList )
LABEL_13:
    sub_2213CDC(v10, v11);
  v34 = v33->fields._size;
  v35 = v33->fields._version + 1;
  v33->fields._size = 0;
  v33->fields._version = v35;
  if ( v34 >= 1 )
    System_Array__Clear((System_Array_o *)v33->fields._items, 0, v34, 0);
}


MapControl_SpotInfo_o *MapControl_MapInfo__AddChild(
        MapControl_MapInfo_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  MapControl_SpotInfo_o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *spotInfoList; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_596D0CE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_2213A60(&MapControl_SpotInfo_TypeInfo);
    byte_596D0CE = 1;
  }
  v5 = (MapControl_SpotInfo_o *)sub_2213CCC(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v5, v6);
  if ( !v5
    || (spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList,
        v5->fields.spotId = spotId,
        !spotInfoList)
    || (items = spotInfoList->fields._items,
        v16 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__,
        ++spotInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(spotInfoList, v8);
  }
  size = spotInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    spotInfoList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
  }
  return v5;
}


MapControl_MapGimmickInfo_o *MapControl_MapInfo__AddMapGimmick(
        MapControl_MapInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *mapGimmickInfoList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_596D0D0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_2213A60(&MapControl_MapGimmickInfo_TypeInfo);
    byte_596D0D0 = 1;
  }
  v5 = sub_2213CCC(MapControl_MapGimmickInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList,
        *(_DWORD *)(v5 + 20) = mapGimmickId,
        !mapGimmickInfoList)
    || (items = mapGimmickInfoList->fields._items,
        v15 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
        ++mapGimmickInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(mapGimmickInfoList, v7);
  }
  size = mapGimmickInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapGimmickInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    mapGimmickInfoList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), v5, v8, v9, v10, v11, v12, v13);
  }
  return (MapControl_MapGimmickInfo_o *)v5;
}


MapControl_SpotRoadInfo_o *MapControl_MapInfo__AddSpotRoad(
        MapControl_MapInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_List_object__o *spotRoadInfoList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_596D0CF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_2213A60(&MapControl_SpotRoadInfo_TypeInfo);
    byte_596D0CF = 1;
  }
  v5 = sub_2213CCC(MapControl_SpotRoadInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList,
        *(_DWORD *)(v5 + 20) = spotRoadId,
        !spotRoadInfoList)
    || (items = spotRoadInfoList->fields._items,
        v15 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__,
        ++spotRoadInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(spotRoadInfoList, v7);
  }
  size = spotRoadInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotRoadInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    spotRoadInfoList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), v5, v8, v9, v10, v11, v12, v13);
  }
  return (MapControl_SpotRoadInfo_o *)v5;
}


System_Collections_Generic_List_MapControl_MapGimmickInfo__o *MapControl_MapInfo__GetMapGimmickList(
        MapControl_MapInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mapGimmickInfoList;
}


int32_t MapControl_MapInfo__GetMapID(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


MapMaster_o *MapControl_MapInfo__GetMapMaster(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  MapMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596D0D1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0D1 = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapMaster___);
    p_mapMaster->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object;
    sub_2213A04(p_mapMaster, (int32_t)MasterData_object, v9, v10, v11, v12, v13, v14);
    return (MapMaster_o *)p_mapMaster->klass;
  }
  return result;
}


MapEntity_o *MapControl_MapInfo__GetMine(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  MapMaster_o *MapMaster; // x0
  __int64 v4; // x1

  MapMaster = MapControl_MapInfo__GetMapMaster(this, method);
  if ( !MapMaster )
    sub_2213CDC(0, v4);
  return MapMaster__GetEntity(MapMaster, this->fields.mapId, this->fields.warId, 0);
}


System_Collections_Generic_List_MapControl_SpotInfo__o *MapControl_MapInfo__GetSpotList(
        MapControl_MapInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.spotInfoList;
}


System_Collections_Generic_List_MapControl_SpotRoadInfo__o *MapControl_MapInfo__GetSpotRoadList(
        MapControl_MapInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.spotRoadInfoList;
}


void MapControl_MapInfo__Reset(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_object__o *spotRoadInfoList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v13; // x8
  int32_t v14; // w2
  int v15; // w9
  System_Collections_Generic_List_object__o *mapGimmickInfoList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v19; // x8
  int32_t v20; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_596D0CD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_596D0CD = 1;
  }
  spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList;
  memset(&v25, 0, sizeof(v25));
  memset(&v24, 0, sizeof(v24));
  memset(&v23, 0, sizeof(v23));
  if ( spotInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      spotInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v25 = v22;
    v22.fields._list = 0;
    *(_QWORD *)&v22.fields._index = &v25;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v25.fields._current )
        sub_2213CDC(0, v4);
      MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)v25.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    v7 = this->fields.spotInfoList;
    if ( !v7 )
      goto LABEL_31;
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
  spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList;
  if ( spotRoadInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      spotRoadInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    v24 = v22;
    v22.fields._list = 0;
    *(_QWORD *)&v22.fields._index = &v24;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
      if ( !v11 )
        break;
      if ( !v24.fields._current )
        sub_2213CDC(v11, v12);
      LODWORD(v24.fields._current[1].klass) = 0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    v13 = this->fields.spotRoadInfoList;
    if ( !v13 )
      goto LABEL_31;
    v14 = v13->fields._size;
    v15 = v13->fields._version + 1;
    v13->fields._size = 0;
    v13->fields._version = v15;
    if ( v14 >= 1 )
      System_Array__Clear((System_Array_o *)v13->fields._items, 0, v14, 0);
  }
  mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList;
  if ( !mapGimmickInfoList )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    mapGimmickInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v23.fields._current )
      sub_2213CDC(v17, v18);
    *(_DWORD *)((char *)&v23.fields._current->klass + (unsigned __int64)&word_10) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  v19 = this->fields.mapGimmickInfoList;
  if ( !v19 )
LABEL_31:
    sub_2213CDC(v5, v6);
  v20 = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, v20, 0);
}


void MapControl_MapInfo__SetMine(MapControl_MapInfo_o *this, int32_t mapId, int32_t warId, const MethodInfo *method)
{
  this->fields.warId = warId;
  this->fields.mapId = mapId;
}


bool MapControl_MapInfo__get_IsNext(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsNext_k__BackingField;
}


void MapControl_MapInfo__set_IsNext(MapControl_MapInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNext_k__BackingField = value;
}


void MapControl_PhaseInfo___ctor(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestPhaseEntity_o *MapControl_PhaseInfo__GetMine(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  QuestPhaseEntity_o *result; // x0
  struct QuestPhaseEntity_o **p_mine; // x20
  QuestPhaseMaster_o *QuestPhaseMaster; // x0
  __int64 v6; // x1
  struct QuestPhaseEntity_o *Entity; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  p_mine = &this->fields.mine;
  result = this->fields.mine;
  if ( !result )
  {
    QuestPhaseMaster = MapControl_PhaseInfo__GetQuestPhaseMaster(this, method);
    if ( !QuestPhaseMaster )
      sub_2213CDC(0, v6);
    Entity = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0);
    this->fields.mine = Entity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mine, (int32_t)Entity, v8, v9, v10, v11, v12, v13);
    return this->fields.mine;
  }
  return result;
}


int32_t MapControl_PhaseInfo__GetPhase(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  return this->fields.phase;
}


QuestPhaseMaster_o *MapControl_PhaseInfo__GetQuestPhaseMaster(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  QuestPhaseMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596D0A9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0A9 = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    p_questPhaseMaster->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object;
    sub_2213A04(p_questPhaseMaster, (int32_t)MasterData_object, v9, v10, v11, v12, v13, v14);
    return (QuestPhaseMaster_o *)p_questPhaseMaster->klass;
  }
  return result;
}


int32_t MapControl_PhaseInfo__GetReferToQuestPhase(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  QuestPhaseEntity_o *Mine; // x0

  Mine = MapControl_PhaseInfo__GetMine(this, method);
  if ( Mine )
    LODWORD(Mine) = QuestPhaseEntity__GetReferToQuestPhase(Mine, 0);
  return (int)Mine;
}


void MapControl_PhaseInfo__Reset(MapControl_PhaseInfo_o *this, const MethodInfo *method)
{
  ;
}


void MapControl_PhaseInfo__SetMine(
        MapControl_PhaseInfo_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  this->fields.questId = questId;
  this->fields.phase = phase;
}


void MapControl_QuestInfo___ctor(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8
  System_String_o *size; // x2
  int v19; // w9
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_596D0AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
    byte_596D0AE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.phaseInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_2213CDC(v10, v11);
  size = (System_String_o *)(unsigned int)phaseInfoList->fields._size;
  v19 = phaseInfoList->fields._version + 1;
  phaseInfoList->fields._size = 0;
  phaseInfoList->fields._version = v19;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)phaseInfoList->fields._items, 0, (int32_t)size, 0);
  this->fields.questEnt = 0;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_questEnt, 0, size, v12, v13, v14, v15, v16);
  *((_DWORD *)p_questEnt + 25) = -1;
}


MapControl_PhaseInfo_o *MapControl_QuestInfo__AddChild(
        MapControl_QuestInfo_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_object__o *phaseInfoList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_596D0B0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__);
    sub_2213A60(&MapControl_PhaseInfo_TypeInfo);
    byte_596D0B0 = 1;
  }
  v7 = sub_2213CCC(MapControl_PhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList,
        *(_DWORD *)(v7 + 16) = questId,
        *(_DWORD *)(v7 + 20) = phase,
        !phaseInfoList)
    || (items = phaseInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__,
        ++phaseInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(phaseInfoList, v9);
  }
  size = phaseInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      phaseInfoList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    phaseInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), v7, v10, v11, v12, v13, v14, v15);
  }
  ++this->fields.phaseCount;
  return (MapControl_PhaseInfo_o *)v7;
}


void MapControl_QuestInfo__AddSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v4; // x20
  il2cpp_array_size_t max_length; // x26
  MapControl_QuestInfo_o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  unsigned __int64 v14; // x23
  int32_t v15; // w22
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 questEnt_low; // x10

  v4 = this;
  if ( (byte_596D0AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    this = (MapControl_QuestInfo_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596D0AB = 1;
  }
  if ( questIds )
  {
    max_length = questIds->max_length;
    if ( (int)max_length >= 1 )
    {
      p_sameGroupQuestIds = (MapControl_QuestInfo_o **)&v4->fields.sameGroupQuestIds;
      if ( !v4->fields.sameGroupQuestIds )
      {
        v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v7,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        *p_sameGroupQuestIds = (MapControl_QuestInfo_o *)v7;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.sameGroupQuestIds,
          (int32_t)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
      }
      v14 = 0;
      do
      {
        if ( v14 >= LODWORD(questIds->max_length) )
          sub_2213CE4(this);
        v15 = questIds->m_Items[v14];
        if ( v15 != v4->fields.questId )
        {
          this = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_19;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v15,
                                             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds
              || (v16 = *(_QWORD *)&this->fields.questId,
                  v17 = Method_System_Collections_Generic_List_int__Add__,
                  ++HIDWORD(this->fields.questEnt),
                  !v16) )
            {
LABEL_19:
              sub_2213CDC(this, questIds);
            }
            questEnt_low = SLODWORD(this->fields.questEnt);
            if ( (unsigned int)questEnt_low >= *(_DWORD *)(v16 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                v15,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.questEnt) = questEnt_low + 1;
              *(_DWORD *)(v16 + 4 * questEnt_low + 32) = v15;
            }
          }
        }
        ++v14;
      }
      while ( (unsigned int)max_length != v14 );
    }
  }
}


MapControl_PhaseInfo_o *MapControl_QuestInfo__FindChild(
        MapControl_QuestInfo_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  MapControl_QuestInfo___c__DisplayClass63_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *phaseInfoList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_596D0B1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
    sub_2213A60(&System_Predicate_MapControl_PhaseInfo__TypeInfo);
    sub_2213A60(&Method_MapControl_QuestInfo___c__DisplayClass63_0__FindChild_b__0__);
    sub_2213A60(&MapControl_QuestInfo___c__DisplayClass63_0_TypeInfo);
    byte_596D0B1 = 1;
  }
  v5 = (MapControl_QuestInfo___c__DisplayClass63_0_o *)sub_2213CCC(MapControl_QuestInfo___c__DisplayClass63_0_TypeInfo);
  MapControl_QuestInfo___c__DisplayClass63_0___ctor(v5, 0);
  if ( !v5
    || (phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList,
        v5->fields.phase = phase,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_PhaseInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_MapControl_QuestInfo___c__DisplayClass63_0__FindChild_b__0__,
          0),
        !phaseInfoList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (MapControl_PhaseInfo_o *)System_Collections_Generic_List_object___Find(
                                     phaseInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
}


int32_t MapControl_QuestInfo__GetActConsumeCost(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19

  v2 = this;
  LODWORD(this) = this->fields._fixedCostVal_k__BackingField;
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    this = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(v2, method);
    if ( this )
      LODWORD(this) = QuestEntity__getActConsume((QuestEntity_o *)this, v2->fields.costCalcVal, 0);
  }
  return (int)this;
}


int32_t MapControl_QuestInfo__GetClearPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t PhaseMax; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596D0B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0B6 = 1;
  }
  entity = 0;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         this->fields.questId,
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0);
LABEL_15:
    sub_2213CDC(Instance, v5);
  }
  return PhaseMax;
}


int32_t MapControl_QuestInfo__GetCostCalcVal(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.costCalcVal;
}


MapControl_PhaseInfo_o *MapControl_QuestInfo__GetCurrentPhaseInfo(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapControl_QuestInfo__FindChild(this, this->fields.questPhase + 1, v2);
}


int32_t MapControl_QuestInfo__GetDispType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int64_t MapControl_QuestInfo__GetEndTime(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.endTime;
}


bool MapControl_QuestInfo__GetIsNotItemConsume(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotItemConsume;
}


QuestEntity_o *MapControl_QuestInfo__GetMine(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  QuestEntity_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596D0B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0B7 = 1;
  }
  if ( !this->fields.questId )
    return 0;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v5);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v2 = this;
  if ( (byte_596D0B5 & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__);
    byte_596D0B5 = 1;
  }
  phaseInfoList = v2->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_2213CDC(this, method);
  return phaseInfoList->fields._size;
}


int32_t MapControl_QuestInfo__GetPickupPriority(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.pickupPriority;
}


int32_t MapControl_QuestInfo__GetQuestID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t MapControl_QuestInfo__GetQuestPhase(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t MapControl_QuestInfo__GetQuestPhaseStart1(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.questPhase + 1;
}


int32_t MapControl_QuestInfo__GetQuestPhaseStart1Clamped(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t questPhase; // w19
  int32_t result; // w0

  questPhase = this->fields.questPhase;
  result = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( questPhase + 1 < result )
    return questPhase + 1;
  return result;
}


int32_t MapControl_QuestInfo__GetQuestType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_QuestInfo__GetMine(this, method);
  if ( !Mine )
    sub_2213CDC(0, v3);
  return Mine->fields.type;
}


System_Collections_Generic_List_int__o *MapControl_QuestInfo__GetSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.sameGroupQuestIds;
}


int32_t MapControl_QuestInfo__GetSpotID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_QuestInfo__GetMine(this, method);
  if ( !Mine )
    sub_2213CDC(0, v3);
  return QuestEntity__getSpotId(Mine, 0);
}


int32_t MapControl_QuestInfo__GetTouchType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.touchType;
}


int32_t MapControl_QuestInfo__GetWarID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool MapControl_QuestInfo__IsAnyPhaseClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager_c *v4; // x0
  int32_t questId; // w19
  int64_t userIdNumber; // x20

  if ( (byte_596D0AD & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D0AD = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v4 = NetworkManager_TypeInfo;
  }
  questId = this->fields.questId;
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsQuestPhaseClear(userIdNumber, questId, 1, -1, 0, 0);
}


bool MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t questId; // w19

  if ( (byte_596D0AC & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_596D0AC = 1;
  }
  questId = this->fields.questId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsQuestClear_47284152(questId, -1, 0, 0);
}


bool MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t dispType; // w8
  bool v3; // zf

  dispType = this->fields.dispType;
  if ( dispType )
    v3 = dispType == 3;
  else
    v3 = 1;
  return !v3;
}


bool MapControl_QuestInfo__IsDisplayQuestNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t PhaseMax; // w20
  QuestPhaseEntity_array *Master_object; // x0
  Il2CppObject *v7; // x0
  int32_t phaseCount; // w8
  int32_t v9; // w2

  if ( (byte_596D0B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D0B3 = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
    Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object
      || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.questId, 0)) == 0 )
    {
      sub_2213CDC(Master_object, v3);
    }
    PhaseMax = Master_object->max_length;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v7 )
  {
    phaseCount = this->fields.phaseCount;
    if ( phaseCount + 1 < PhaseMax )
      v9 = phaseCount + 1;
    else
      v9 = PhaseMax;
    LOBYTE(v7) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                   (QuestBehaviorMaster_o *)v7,
                   this->fields.questId,
                   v9,
                   6,
                   0);
  }
  return (char)v7;
}


bool MapControl_QuestInfo__IsNew(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNew;
}


bool MapControl_QuestInfo__IsReleaseFocusQuestBoard(MapControl_QuestInfo_o *this, const MethodInfo *method)
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
      if ( QuestPhaseEntity__HasReleaseFocusQuestBoardKey(Mine, 0) )
        return QuestPhaseEntity__IsReleaseFocusQuestBoard(v7, 0);
    }
  }
  v9 = MapControl_QuestInfo__GetMine(this, v5);
  if ( !v9 )
    sub_2213CDC(0, v10);
  return v9->fields.type == 1;
}


void MapControl_QuestInfo__Reset(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *sameGroupQuestIds; // x8
  int v4; // w9
  System_Collections_Generic_List_object__o *phaseInfoList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0AF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    byte_596D0AF = 1;
  }
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
  memset(&v15, 0, sizeof(v15));
  if ( sameGroupQuestIds )
  {
    v4 = sameGroupQuestIds->fields._version + 1;
    sameGroupQuestIds->fields._size = 0;
    sameGroupQuestIds->fields._version = v4;
  }
  phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList;
  if ( phaseInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      phaseInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    v13 = 0;
    v14 = &v15;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v15.fields._current )
        sub_2213CDC(v6, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v10 = this->fields.phaseInfoList;
    if ( !v10 )
      sub_2213CDC(v8, v9);
    size = v10->fields._size;
    v12 = v10->fields._version + 1;
    v10->fields._size = 0;
    v10->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
    this->fields.phaseCount = 0;
  }
}


void MapControl_QuestInfo__SetCostCalcVal(MapControl_QuestInfo_o *this, int32_t val, const MethodInfo *method)
{
  this->fields.costCalcVal = val;
}


void MapControl_QuestInfo__SetDispType(MapControl_QuestInfo_o *this, int32_t dispType, const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void MapControl_QuestInfo__SetDispType_42937600(
        MapControl_QuestInfo_o *this,
        int32_t dispType,
        QuestReleaseEntity_o *questReleaseEntity,
        const MethodInfo *method)
{
  int32_t type; // w1
  unsigned __int64 v8; // x1
  int32_t v9; // w8
  int32_t imagePriority; // w8
  unsigned __int64 v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D0B4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_CondType_Kind__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_CondType_Kind___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_596D0B4 = 1;
  }
  this->fields.dispType = dispType;
  if ( questReleaseEntity )
  {
    type = questReleaseEntity->fields.type;
    v11 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v11,
      type,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    if ( (_BYTE)v11 )
    {
      v8 = HIDWORD(v11);
      v11 = 0;
      System_Nullable_Int32Enum____ctor(
        (System_Nullable_Int32Enum__o)&v11,
        v8,
        (const MethodInfo_45E4698 *)Method_System_Nullable_CondType_Kind___ctor__);
      v9 = HIDWORD(v11);
    }
    else
    {
      v9 = 0;
    }
    this->fields._QuestReleaseType_k__BackingField = v9;
    this->fields._QuestReleaseTargetID_k__BackingField = questReleaseEntity->fields.targetId;
    this->fields._QuestReleaseValue_k__BackingField = questReleaseEntity->fields.value;
    this->fields._QuestReleaseClosedID_k__BackingField = questReleaseEntity->fields.closedMessageId;
    imagePriority = questReleaseEntity->fields.imagePriority;
  }
  else
  {
    imagePriority = 0;
    this->fields._QuestReleaseType_k__BackingField = 0;
    this->fields._QuestReleaseTargetID_k__BackingField = 0;
    this->fields._QuestReleaseValue_k__BackingField = 0;
    this->fields._QuestReleaseClosedID_k__BackingField = 0;
  }
  this->fields._QuestReleaseImagePriority_k__BackingField = imagePriority;
}


void MapControl_QuestInfo__SetEndTime(MapControl_QuestInfo_o *this, int64_t val, const MethodInfo *method)
{
  this->fields.endTime = val;
}


void MapControl_QuestInfo__SetIsNew(MapControl_QuestInfo_o *this, bool isNew, const MethodInfo *method)
{
  this->fields.isNew = isNew;
}


void MapControl_QuestInfo__SetIsNotItemConsume(MapControl_QuestInfo_o *this, bool isNot, const MethodInfo *method)
{
  this->fields.isNotItemConsume = isNot;
}


void MapControl_QuestInfo__SetMine(MapControl_QuestInfo_o *this, int32_t questId, const MethodInfo *method)
{
  this->fields.questId = questId;
}


void MapControl_QuestInfo__SetPickupPriority(
        MapControl_QuestInfo_o *this,
        int32_t pickupPriority,
        const MethodInfo *method)
{
  this->fields.pickupPriority = pickupPriority;
}


void MapControl_QuestInfo__SetQuestID(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.questId = value;
}


void MapControl_QuestInfo__SetQuestPhase(MapControl_QuestInfo_o *this, int32_t questPhase, const MethodInfo *method)
{
  this->fields.questPhase = questPhase;
}


void MapControl_QuestInfo__SetSpotID(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  _DWORD *klass; // x8
  MissionNaviTransitionBoardItem_o *p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_596D0B2 & 1) == 0 )
  {
    sub_2213A60(&MapControl_SpotInfo_TypeInfo);
    byte_596D0B2 = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._SpotInfo_k__BackingField;
  klass = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v8 = (MapControl_SpotInfo_o *)sub_2213CCC(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v8, 0);
    p_SpotInfo_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v8;
    sub_2213A04(p_SpotInfo_k__BackingField, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    klass = p_SpotInfo_k__BackingField->klass;
    if ( !p_SpotInfo_k__BackingField->klass )
      sub_2213CDC(v15, v16);
  }
  klass[4] = value;
}


void MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  int v5; // w9
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  int v9; // w9
  int v10; // w9

  if ( (byte_596D0B8 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0B8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596D0BD;
  this->fields.warId = v4->static_fields->_WarId_k__BackingField;
  if ( !v5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_596D0BD = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v4->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = (unsigned __int8)byte_596A92D;
  this->fields.questId = v8->static_fields->_QuestId_k__BackingField;
  if ( !v9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = (unsigned __int8)byte_596D0BE;
  this->fields.questPhase = v8->static_fields->_PhaseCnt_k__BackingField;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596D0BE = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  this->fields.endTime = v8->static_fields->_EndTime_k__BackingField;
}


void MapControl_QuestInfo__SetTouchType(MapControl_QuestInfo_o *this, int32_t eTouchType, const MethodInfo *method)
{
  this->fields.touchType = eTouchType;
}


void MapControl_QuestInfo__SetWarID(MapControl_QuestInfo_o *this, int32_t warId, const MethodInfo *method)
{
  this->fields.warId = warId;
}


MapControl_AreaBoardInfo_o *MapControl_QuestInfo__get_AreaBoardInfo(
        MapControl_QuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._AreaBoardInfo_k__BackingField;
}


int32_t MapControl_QuestInfo__get_GroupId(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


int32_t MapControl_QuestInfo__get_QuestReleaseClosedID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestReleaseClosedID_k__BackingField;
}


int32_t MapControl_QuestInfo__get_QuestReleaseImagePriority(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestReleaseImagePriority_k__BackingField;
}


int32_t MapControl_QuestInfo__get_QuestReleaseTargetID(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestReleaseTargetID_k__BackingField;
}


int32_t MapControl_QuestInfo__get_QuestReleaseType(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestReleaseType_k__BackingField;
}


int64_t MapControl_QuestInfo__get_QuestReleaseValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._QuestReleaseValue_k__BackingField;
}


MapControl_SpotInfo_o *MapControl_QuestInfo__get_SpotInfo(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._SpotInfo_k__BackingField;
}


MapControl_WarInfo_o *MapControl_QuestInfo__get_WarInfo(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._WarInfo_k__BackingField;
}


int32_t MapControl_QuestInfo__get_fixedCostVal(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields._fixedCostVal_k__BackingField;
}


void MapControl_QuestInfo__set_AreaBoardInfo(
        MapControl_QuestInfo_o *this,
        MapControl_AreaBoardInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AreaBoardInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AreaBoardInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapControl_QuestInfo__set_GroupId(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._GroupId_k__BackingField = value;
}


void MapControl_QuestInfo__set_QuestReleaseClosedID(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestReleaseClosedID_k__BackingField = value;
}


void MapControl_QuestInfo__set_QuestReleaseImagePriority(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestReleaseImagePriority_k__BackingField = value;
}


void MapControl_QuestInfo__set_QuestReleaseTargetID(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestReleaseTargetID_k__BackingField = value;
}


void MapControl_QuestInfo__set_QuestReleaseType(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._QuestReleaseType_k__BackingField = value;
}


void MapControl_QuestInfo__set_QuestReleaseValue(MapControl_QuestInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._QuestReleaseValue_k__BackingField = value;
}


void MapControl_QuestInfo__set_SpotInfo(
        MapControl_QuestInfo_o *this,
        MapControl_SpotInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpotInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpotInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapControl_QuestInfo__set_WarInfo(
        MapControl_QuestInfo_o *this,
        MapControl_WarInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._WarInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WarInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapControl_QuestInfo__set_fixedCostVal(MapControl_QuestInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._fixedCostVal_k__BackingField = value;
}


void MapControl_QuestInfo___c__DisplayClass63_0___ctor(
        MapControl_QuestInfo___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MapControl_QuestInfo___c__DisplayClass63_0___FindChild_b__0(
        MapControl_QuestInfo___c__DisplayClass63_0_o *this,
        MapControl_PhaseInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.phase == this->fields.phase;
}


void MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x1
  MissionNaviTransitionBoardItem_c *klass; // x8
  int32_t namespaze; // w2
  int v15; // w9

  if ( (byte_596D0DB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_596D0DB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v3;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_2213A04(p_fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    sub_2213CDC(v11, v12);
  namespaze = (int32_t)klass->_1.namespaze;
  v15 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v15;
  if ( namespaze >= 1 )
    System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0);
}


MapControl_WarInfo_o *MapControl_RootInfo__AddChild(
        MapControl_RootInfo_o *this,
        int32_t warId,
        int64_t dateTime,
        const MethodInfo *method)
{
  MapControl_WarInfo_o *v7; // x19
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_596D0DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_2213A60(&MapControl_WarInfo_TypeInfo);
    byte_596D0DE = 1;
  }
  v7 = (MapControl_WarInfo_o *)sub_2213CCC(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v7, dateTime, v8);
  if ( !v7
    || (warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList,
        v7->fields.warId = warId,
        !warInfoList)
    || (items = warInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__,
        ++warInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(warInfoList, v10);
  }
  size = warInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warInfoList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    warInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
  }
  return v7;
}


MapControl_WarInfo_o *MapControl_RootInfo__GetChildByEventID(
        MapControl_RootInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  __int64 v12; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0E0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_596D0E0 = 1;
  }
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  memset(&v14, 0, sizeof(v14));
  if ( !warInfoList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    warInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v12 = 0;
  v13 = &v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_2213CDC(v6, v7);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v14.fields._current, v7);
    if ( !Mine )
      sub_2213CDC(0, v10);
    if ( Mine->fields.eventId == eventId )
      goto LABEL_11;
  }
  current = 0;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_WarInfo_o *MapControl_RootInfo__GetChildByWarID(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  __int64 v12; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_596D0DF = 1;
  }
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  memset(&v14, 0, sizeof(v14));
  if ( !warInfoList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    warInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v12 = 0;
  v13 = &v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_2213CDC(v6, v7);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v14.fields._current, v7);
    if ( !Mine )
      sub_2213CDC(0, v10);
    if ( Mine->fields.id == warId )
      goto LABEL_11;
  }
  current = 0;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MapControl_WarInfo__o *MapControl_RootInfo__GetOpenedWarInfoList(
        MapControl_RootInfo_o *this,
        bool isMainScnario,
        bool isGrand,
        const MethodInfo *method)
{
  MapControl_RootInfo___c_c *v7; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x19
  int v9; // w8
  struct MapControl_RootInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct MapControl_RootInfo___c_StaticFields *v19; // x0
  MissionNaviTransitionBoardItem_o *p__9__8_0; // x0
  struct MapControl_RootInfo___c_StaticFields *v21; // x8
  Il2CppObject *v22; // x21
  struct MapControl_RootInfo___c_StaticFields *v23; // x0
  struct MapControl_RootInfo___c_StaticFields *v24; // x8
  Il2CppObject *v25; // x21
  struct MapControl_RootInfo___c_StaticFields *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_596D0E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
    sub_2213A60(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_2213A60(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__);
    sub_2213A60(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__);
    sub_2213A60(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_2__);
    sub_2213A60(&MapControl_RootInfo___c_TypeInfo);
    byte_596D0E2 = 1;
  }
  v7 = MapControl_RootInfo___c_TypeInfo;
  warInfoList = this->fields.warInfoList;
  v9 = *(&MapControl_RootInfo___c_TypeInfo->_2.cctor_finished + 1);
  if ( isMainScnario )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(MapControl_RootInfo___c_TypeInfo, isMainScnario, isGrand);
      v7 = MapControl_RootInfo___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, isMainScnario, isGrand);
        static_fields = MapControl_RootInfo___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v12, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__, 0);
      v19 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v19->__9__8_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (MissionNaviTransitionBoardItem_o *)&v19->__9__8_0;
LABEL_23:
      sub_2213A04(p__9__8_0, (int32_t)_9__8_0, v13, v14, v15, v16, v17, v18);
    }
  }
  else if ( isGrand )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(MapControl_RootInfo___c_TypeInfo, isMainScnario, isGrand);
      v7 = MapControl_RootInfo___c_TypeInfo;
    }
    v21 = v7->static_fields;
    _9__8_0 = (System_Func_object__bool__o *)v21->__9__8_1;
    if ( !_9__8_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, isMainScnario, isGrand);
        v21 = MapControl_RootInfo___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v21->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v22, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__, 0);
      v23 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v23->__9__8_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (MissionNaviTransitionBoardItem_o *)&v23->__9__8_1;
      goto LABEL_23;
    }
  }
  else
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(MapControl_RootInfo___c_TypeInfo, isMainScnario, isGrand);
      v7 = MapControl_RootInfo___c_TypeInfo;
    }
    v24 = v7->static_fields;
    _9__8_0 = (System_Func_object__bool__o *)v24->__9__8_2;
    if ( !_9__8_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, isMainScnario, isGrand);
        v24 = MapControl_RootInfo___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)v24->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v25, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_2__, 0);
      v26 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v26->__9__8_2 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (MissionNaviTransitionBoardItem_o *)&v26->__9__8_2;
      goto LABEL_23;
    }
  }
  v27 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warInfoList,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v27,
                                                                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
}


// local variable allocation has failed, the output may be wrong!
bool MapControl_RootInfo__IsOpenedMainScenarioWar(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *warInfoList; // x0
  const MethodInfo *v6; // x1
  bool v7; // w20
  WarEntity_o *Mine; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0E1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_596D0E1 = 1;
  }
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  memset(&v11, 0, sizeof(v11));
  if ( !warInfoList )
    sub_2213CDC(0, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    warInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v11.fields._current )
      sub_2213CDC(0, v6);
    if ( *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&dword_14) == warId
      && (*((_BYTE *)&v11.fields._current->klass + (unsigned __int64)off_18) & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v11.fields._current, v6);
      if ( !Mine )
        sub_2213CDC(0, v9);
      if ( WarEntity__HasFlag(Mine, 128, 0) )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return v7;
}


void MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *warInfoList; // x22
  System_Predicate_object__o *v9; // x20
  unsigned int Index; // w0

  if ( (byte_596D0DD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_2213A60(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_2213A60(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__);
    sub_2213A60(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
    byte_596D0DD = 1;
  }
  v5 = sub_2213CCC(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  *(_DWORD *)(v5 + 16) = warId;
  if ( warInfoList )
  {
    v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_WarInfo__TypeInfo);
    System_Predicate_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      0);
    Index = System_Collections_Generic_List_object___FindIndex(
              warInfoList,
              (System_Predicate_T__o *)v9,
              (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v7 = Index;
      v6 = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
      if ( v6 )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v6,
          v7,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_2213CDC(v6, v7);
    }
  }
}


void MapControl_RootInfo__Reset(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *warInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_596D0DC = 1;
  }
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  memset(&v10, 0, sizeof(v10));
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      warInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_2213CDC(0, v4);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v10.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v7 = this->fields.warInfoList;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
}


void MapControl_RootInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D0E3 & 1) == 0 )
  {
    sub_2213A60(&MapControl_RootInfo___c_TypeInfo);
    byte_596D0E3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MapControl_RootInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MapControl_RootInfo___c_TypeInfo->static_fields->__9 = (struct MapControl_RootInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MapControl_RootInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapControl_RootInfo___c___ctor(MapControl_RootInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_0(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info || (this = (MapControl_RootInfo___c_o *)MapControl_WarInfo__GetMine(info, (const MethodInfo *)info)) == 0 )
    sub_2213CDC(this, info);
  return WarEntity__HasFlag((WarEntity_o *)this, 128, 0) && (info->fields.status & 1) == 0;
}


bool MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_1(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x2
  int v5; // w20
  BalanceConfig_c *v6; // x0

  if ( (byte_596D0E4 & 1) == 0 )
  {
    this = (MapControl_RootInfo___c_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596D0E4 = 1;
  }
  if ( !info || (this = (MapControl_RootInfo___c_o *)MapControl_WarInfo__GetMine(info, (const MethodInfo *)info)) == 0 )
    sub_2213CDC(this, info);
  v5 = *((_DWORD *)this + 14);
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, info, v4);
    v6 = BalanceConfig_TypeInfo;
  }
  return v5 == v6->static_fields->GrandBoardWarId && (info->fields.status & 1) == 0;
}


bool MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_2(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return (info->fields.status & 1) == 0;
}


void MapControl_RootInfo___c__DisplayClass3_0___ctor(
        MapControl_RootInfo___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MapControl_RootInfo___c__DisplayClass3_0___Remove_b__0(
        MapControl_RootInfo___c__DisplayClass3_0_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.warId == this->fields.warId;
}


void MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_int__c *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596D0BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_596D0BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_2213CDC(v10, v11);
  size = questInfoList->fields._size;
  v14 = questInfoList->fields._version + 1;
  questInfoList->fields._size = 0;
  questInfoList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questInfoList->fields._items, 0, size, 0);
  v15 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.questCount = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.availableQuestIdList = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.availableQuestIdList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void MapControl_SpotInfo__AddAvailableQuestId(MapControl_SpotInfo_o *this, int32_t questId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *availableQuestIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_596D0C3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    byte_596D0C3 = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList
    || (items = availableQuestIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++availableQuestIdList->fields._version,
        !items) )
  {
    sub_2213CDC(availableQuestIdList, *(_QWORD *)&questId);
  }
  size = availableQuestIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      availableQuestIdList,
      questId,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    availableQuestIdList->fields._size = size + 1;
    items->m_Items[size] = questId;
  }
}


MapControl_QuestInfo_o *MapControl_SpotInfo__AddChild(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v5; // x19
  System_Collections_Generic_List_object__o *questInfoList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_596D0C1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_2213A60(&MapControl_QuestInfo_TypeInfo);
    byte_596D0C1 = 1;
  }
  v5 = (MapControl_QuestInfo_o *)sub_2213CCC(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v5, 0);
  if ( !v5
    || (questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList,
        v5->fields.questId = questId,
        !questInfoList)
    || (items = questInfoList->fields._items,
        v15 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
        ++questInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(questInfoList, v7);
  }
  size = questInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      questInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    questInfoList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  return v5;
}


void MapControl_SpotInfo__AddFreeQuestCount(MapControl_SpotInfo_o *this, int32_t addCount, const MethodInfo *method)
{
  this->fields.freeQuestCount += addCount;
}


void MapControl_SpotInfo__AddQuestCount(MapControl_SpotInfo_o *this, int32_t questCount, const MethodInfo *method)
{
  this->fields.questCount += questCount;
}


System_Collections_Generic_List_int__o *MapControl_SpotInfo__GetAvailableQuestIdList(
        MapControl_SpotInfo_o *this,
        bool isInstance,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x20
  System_Collections_Generic_List_int__o *v6; // x19

  if ( (byte_596D0C2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596D0C2 = 1;
  }
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  if ( !isInstance )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71723804(
      v6,
      availableQuestIdList,
      (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
    return v6;
  }
  return (System_Collections_Generic_List_int__o *)availableQuestIdList;
}


int32_t MapControl_SpotInfo__GetDispType(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int32_t MapControl_SpotInfo__GetFreeQuestCount(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.freeQuestCount;
}


int32_t MapControl_SpotInfo__GetLayer(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotLayerMaster_o *SpotLayerMaster; // x0
  __int64 v4; // x1

  SpotLayerMaster = MapControl_SpotInfo__GetSpotLayerMaster(this, method);
  if ( !SpotLayerMaster )
    sub_2213CDC(0, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0);
}


int32_t MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_2213CDC(0, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *SpotMaster; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596D0C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    byte_596D0C4 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_2213CDC(0, v5);
    Entity = DataMasterBase_object__object__int___GetEntity(
               SpotMaster,
               this->fields.spotId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    this->fields.mine = (struct SpotEntity_o *)Entity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mine, (int32_t)Entity, v7, v8, v9, v10, v11, v12);
    return this->fields.mine;
  }
  return result;
}


System_Collections_Generic_List_MapControl_QuestInfo__o *MapControl_SpotInfo__GetQuestInfoList(
        MapControl_SpotInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.questInfoList;
}


int32_t MapControl_SpotInfo__GetQuestcount(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.questCount;
}


int32_t MapControl_SpotInfo__GetSpotID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


SpotLayerEntity_o *MapControl_SpotInfo__GetSpotLayerEntity(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotLayerEntity_o *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *SpotLayerMaster; // x0
  __int64 v5; // x1

  if ( (byte_596D0C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_596D0C6 = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotLayerMaster(
                                                                      this,
                                                                      method);
    if ( !SpotLayerMaster )
      sub_2213CDC(0, v5);
    DataMasterBase_object__object__int___TryGetEntity(
      SpotLayerMaster,
      (Il2CppObject **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    return this->fields.spotLayerEnt;
  }
  return result;
}


SpotLayerMaster_o *MapControl_SpotInfo__GetSpotLayerMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotLayerMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1
  Il2CppObject *Master_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596D0C7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D0C7 = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotLayerMaster___);
    p_spotLayerMaster->klass = (MissionNaviTransitionBoardItem_c *)Master_object;
    sub_2213A04(p_spotLayerMaster, (int32_t)Master_object, v8, v9, v10, v11, v12, v13);
    return (SpotLayerMaster_o *)p_spotLayerMaster->klass;
  }
  return result;
}


SpotMaster_o *MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1
  Il2CppObject *Master_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596D0C5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D0C5 = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
    p_spotMaster->klass = (MissionNaviTransitionBoardItem_c *)Master_object;
    sub_2213A04(p_spotMaster, (int32_t)Master_object, v8, v9, v10, v11, v12, v13);
    return (SpotMaster_o *)p_spotMaster->klass;
  }
  return result;
}


int32_t MapControl_SpotInfo__GetTouchType(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.touchType;
}


bool MapControl_SpotInfo__IsNextDisp(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType == 1 && this->fields._IsNext_k__BackingField;
}


void MapControl_SpotInfo__Reset(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *questInfoList; // x0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0C0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_596D0C0 = 1;
  }
  questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList;
  memset(&v10, 0, sizeof(v10));
  if ( questInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      questInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_2213CDC(0, v4);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v10.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v7 = this->fields.questInfoList;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
}


void MapControl_SpotInfo__SetDispType(MapControl_SpotInfo_o *this, int32_t dispType, const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void MapControl_SpotInfo__SetFreeQuestCount(
        MapControl_SpotInfo_o *this,
        int32_t freeQuestCount,
        const MethodInfo *method)
{
  this->fields.freeQuestCount = freeQuestCount;
}


void MapControl_SpotInfo__SetMine(
        MapControl_SpotInfo_o *this,
        int32_t spotId,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.spotId = spotId;
  if ( spotEnt )
  {
    this->fields.mine = spotEnt;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mine,
      (int32_t)spotEnt,
      (System_String_o *)spotEnt,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
}


void MapControl_SpotInfo__SetQuestcount(MapControl_SpotInfo_o *this, int32_t questCount, const MethodInfo *method)
{
  this->fields.questCount = questCount;
}


void MapControl_SpotInfo__SetSpotID(MapControl_SpotInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.spotId = value;
}


void MapControl_SpotInfo__SetTouchType(MapControl_SpotInfo_o *this, int32_t touchType, const MethodInfo *method)
{
  this->fields.touchType = touchType;
}


bool MapControl_SpotInfo__get_IsNext(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsNext_k__BackingField;
}


void MapControl_SpotInfo__set_IsNext(MapControl_SpotInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNext_k__BackingField = value;
}


void MapControl_SpotRoadInfo___ctor(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MapControl_SpotRoadInfo__GetDispType(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


SpotRoadEntity_o *MapControl_SpotRoadInfo__GetMine(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *SpotRoadMaster; // x0
  __int64 v4; // x1

  if ( (byte_596D0C8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
    byte_596D0C8 = 1;
  }
  SpotRoadMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetSpotRoadMaster(
                                                                   this,
                                                                   method);
  if ( !SpotRoadMaster )
    sub_2213CDC(0, v4);
  return (SpotRoadEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
}


int32_t MapControl_SpotRoadInfo__GetSpotRoadId(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotRoadId;
}


SpotRoadMaster_o *MapControl_SpotRoadInfo__GetSpotRoadMaster(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  SpotRoadMaster_o *result; // x0
  MissionNaviTransitionBoardItem_o *p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596D0C9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0C9 = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    p_spotRoadMaster->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object;
    sub_2213A04(p_spotRoadMaster, (int32_t)MasterData_object, v9, v10, v11, v12, v13, v14);
    return (SpotRoadMaster_o *)p_spotRoadMaster->klass;
  }
  return result;
}


void MapControl_SpotRoadInfo__Reset(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  this->fields.dispType = 0;
}


void MapControl_SpotRoadInfo__SetDispType(MapControl_SpotRoadInfo_o *this, int32_t dispType, const MethodInfo *method)
{
  this->fields.dispType = dispType;
}


void MapControl_SpotRoadInfo__SetMine(MapControl_SpotRoadInfo_o *this, int32_t spotRoadId, const MethodInfo *method)
{
  this->fields.spotRoadId = spotRoadId;
}


void MapControl_WarInfo___ctor(MapControl_WarInfo_o *this, int64_t dateTime, const MethodInfo *method)
{
  System_Collections_Generic_List_MapControl_MapInfo__c *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8
  int32_t size; // w2
  int v23; // w9

  if ( (byte_596D0D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    byte_596D0D2 = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = System_Collections_Generic_List_MapControl_MapInfo__TypeInfo;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v5);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mapInfoList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  this->fields.mine = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mine, 0, v13, v14, v15, v16, v17, v18);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_2213CDC(v19, v20);
  size = mapInfoList->fields._size;
  v23 = mapInfoList->fields._version + 1;
  mapInfoList->fields._size = 0;
  mapInfoList->fields._version = v23;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mapInfoList->fields._items, 0, size, 0);
  this->fields.mapUpdateState = 0;
  this->fields.createdDateTime = dateTime;
}


MapControl_MapInfo_o *MapControl_WarInfo__AddChild(MapControl_WarInfo_o *this, int32_t mapId, const MethodInfo *method)
{
  MapControl_MapInfo_o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_596D0D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_2213A60(&MapControl_MapInfo_TypeInfo);
    byte_596D0D4 = 1;
  }
  v5 = (MapControl_MapInfo_o *)sub_2213CCC(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v5, v6);
  if ( !v5
    || (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList,
        v5->fields.warId = this->fields.warId,
        v5->fields.mapId = mapId,
        !mapInfoList)
    || (items = mapInfoList->fields._items,
        v16 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__,
        ++mapInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(mapInfoList, v8);
  }
  size = mapInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    mapInfoList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
  }
  return v5;
}


MapControl_MapInfo_o *MapControl_WarInfo__GetActionMap(
        MapControl_WarInfo_o *this,
        int32_t commandType,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v9; // x1
  __int128 v11; // q0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  System_Predicate_object__o *v15; // x23
  System_Collections_Generic_List_object__o *monitor; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  bool v23; // w0
  System_Predicate_object__o *v24; // x23
  Il2CppClass *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Predicate_object__o *v32; // x23
  Il2CppClass *klass; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596D0D8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    sub_2213A60(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__);
    sub_2213A60(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__);
    sub_2213A60(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__);
    sub_2213A60(&MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
    byte_596D0D8 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v7 = sub_2213CCC(MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = target,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0) )
  {
    sub_2213CDC(mapInfoList, v9);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    &v40,
    mapInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v11 = *(_OWORD *)&v40.fields._list;
  v41.fields._current = v40.fields._current;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v41;
  *(_OWORD *)&v41.fields._list = v11;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v12 )
      break;
    current = v41.fields._current;
    if ( commandType > 1 )
    {
      if ( commandType == 2 )
      {
        if ( !v41.fields._current )
          sub_2213CDC(v12, v13);
        v32 = *(System_Predicate_object__o **)(v7 + 40);
        klass = v41.fields._current[3].klass;
        if ( !v32 )
        {
          v32 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v32,
            (Il2CppObject *)v7,
            Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__,
            0);
          *(_QWORD *)(v7 + 40) = v32;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)v32, v34, v35, v36, v37, v38, v39);
        }
        if ( !klass )
LABEL_36:
          sub_2213CDC(v12, v13);
        v23 = System_Collections_Generic_List_object___Exists(
                (System_Collections_Generic_List_object__o *)klass,
                (System_Predicate_T__o *)v32,
                (const MethodInfo_448429C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_32:
        if ( v23 )
          goto LABEL_35;
      }
      else if ( commandType == 3 )
      {
        if ( !v41.fields._current )
          sub_2213CDC(v12, v13);
        if ( HIDWORD(v41.fields._current[1].klass) == *(_DWORD *)(v7 + 16) )
          goto LABEL_35;
      }
    }
    else
    {
      if ( !commandType )
      {
        if ( !v41.fields._current )
          sub_2213CDC(v12, v13);
        v24 = *(System_Predicate_object__o **)(v7 + 24);
        v25 = v41.fields._current[2].klass;
        if ( !v24 )
        {
          v24 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v24,
            (Il2CppObject *)v7,
            Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__,
            0);
          *(_QWORD *)(v7 + 24) = v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v24, v26, v27, v28, v29, v30, v31);
        }
        if ( !v25 )
          goto LABEL_36;
        v23 = System_Collections_Generic_List_object___Exists(
                (System_Collections_Generic_List_object__o *)v25,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_448429C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
        goto LABEL_32;
      }
      if ( commandType == 1 )
      {
        if ( !v41.fields._current )
          sub_2213CDC(v12, v13);
        v15 = *(System_Predicate_object__o **)(v7 + 32);
        monitor = (System_Collections_Generic_List_object__o *)v41.fields._current[2].monitor;
        if ( !v15 )
        {
          v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v15,
            (Il2CppObject *)v7,
            Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__,
            0);
          *(_QWORD *)(v7 + 32) = v15;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v15, v17, v18, v19, v20, v21, v22);
        }
        if ( !monitor )
          goto LABEL_36;
        v23 = System_Collections_Generic_List_object___Exists(
                monitor,
                (System_Predicate_T__o *)v15,
                (const MethodInfo_448429C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
        goto LABEL_32;
      }
    }
  }
  current = 0;
LABEL_35:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return (MapControl_MapInfo_o *)current;
}


int64_t MapControl_WarInfo__GetCreatedDateTime(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return this->fields.createdDateTime;
}


int32_t MapControl_WarInfo__GetEventId(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_WarInfo__GetMine(this, method);
  if ( !Mine )
    sub_2213CDC(0, v3);
  return Mine->fields.eventId;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *MapControl_WarInfo__GetMap(MapControl_WarInfo_o *this, int32_t mapId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0D5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_596D0D5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !MapControl_WarInfo__IsMultiMap(this, *(const MethodInfo **)&mapId) )
  {
LABEL_11:
    mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
    if ( mapInfoList )
      return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                       mapInfoList,
                                       0,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
LABEL_15:
    sub_2213CDC(mapInfoList, v5);
  }
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    mapInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  do
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v7 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      goto LABEL_11;
    }
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_2213CDC(v7, v8);
  }
  while ( *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&dword_14) != mapId );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return (MapControl_MapInfo_o *)current;
}


System_Collections_Generic_List_MapControl_MapInfo__o *MapControl_WarInfo__GetMapList(
        MapControl_WarInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.mapInfoList;
}


int32_t MapControl_WarInfo__GetMapUpdateState(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_596D0DA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D0DA = 1;
  }
  result = this->fields.mapUpdateState;
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v6);
    if ( MapUpdateScheduleMaster__Any((MapUpdateScheduleMaster_o *)Master_object, this->fields.warId, 0) )
      result = 1;
    else
      result = 2;
    this->fields.mapUpdateState = result;
  }
  return result;
}


WarEntity_o *MapControl_WarInfo__GetMine(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596D0D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D0D9 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v5);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.mine,
      this->fields.warId,
      (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    return this->fields.mine;
  }
  return result;
}


MapControl_MapInfo_o *MapControl_WarInfo__GetNextMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x19
  __int64 v8; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596D0D6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_596D0D6 = 1;
  }
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  memset(&v10, 0, sizeof(v10));
  if ( !mapInfoList )
    sub_2213CDC(0, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    mapInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v5 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_2213CDC(v5, v6);
    if ( *((_BYTE *)&v10.fields._current->klass + (unsigned __int64)off_18) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return (MapControl_MapInfo_o *)current;
}


int32_t MapControl_WarInfo__GetStatus(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  int32_t v3; // w9

  status = this->fields.status;
  if ( (status & 1) != 0 )
    return 0;
  if ( (status & 2) != 0 )
    return 4;
  if ( (status & 8) != 0 )
    v3 = 3;
  else
    v3 = 1;
  if ( (status & 4) != 0 )
    return 2;
  else
    return v3;
}


int32_t MapControl_WarInfo__GetWarID(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool MapControl_WarInfo__IsClearedWarStatus(int32_t status, const MethodInfo *method)
{
  return (unsigned int)(status - 3) < 2;
}


bool MapControl_WarInfo__IsClosedWar(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  unsigned int status; // w8
  int v3; // w19
  WarEntity_o *Mine; // x0

  status = this->fields.status;
  if ( (status & 1) != 0 )
    goto LABEL_5;
  if ( (status & 2) != 0 )
  {
    v3 = 1;
    goto LABEL_7;
  }
  if ( (status & 4) != 0 )
LABEL_5:
    v3 = 0;
  else
    v3 = (status >> 3) & 1;
LABEL_7:
  Mine = MapControl_WarInfo__GetMine(this, method);
  return Mine && (v3 & WarEntity__HasFlag(Mine, 64, 0) & 1) != 0;
}


bool MapControl_WarInfo__IsEvent(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_WarInfo__GetMine(this, method);
  if ( !Mine )
    sub_2213CDC(0, v3);
  return WarEntity__HasFlag(Mine, 32, 0);
}


bool MapControl_WarInfo__IsMapUpdateStateEnabled(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return MapControl_WarInfo__GetMapUpdateState(this, method) == 1;
}


bool MapControl_WarInfo__IsMultiMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  MapControl_WarInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8

  v2 = this;
  if ( (byte_596D0D7 & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    byte_596D0D7 = 1;
  }
  mapInfoList = v2->fields.mapInfoList;
  if ( !mapInfoList )
    sub_2213CDC(this, method);
  return mapInfoList->fields._size > 1;
}


bool MapControl_WarInfo__IsStatusCheckFlagAvailable(MapControl_WarInfo_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.status & flag) != 0;
}


void MapControl_WarInfo__Reset(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  int32_t DEFAULT_WAR_CHECK_STATUS; // w8
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D0D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    byte_596D0D3 = 1;
  }
  DEFAULT_WAR_CHECK_STATUS = this->fields.DEFAULT_WAR_CHECK_STATUS;
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  memset(&v11, 0, sizeof(v11));
  this->fields.status = DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      mapInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_2213CDC(0, v5);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v11.fields._current, v5);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v8 = this->fields.mapInfoList;
    if ( !v8 )
      sub_2213CDC(v6, v7);
    size = v8->fields._size;
    v10 = v8->fields._version + 1;
    v8->fields._size = 0;
    v8->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
  }
}


void MapControl_WarInfo__SetMine(MapControl_WarInfo_o *this, int32_t warId, const MethodInfo *method)
{
  this->fields.warId = warId;
}


void MapControl_WarInfo__SetStatusCheckFlag(
        MapControl_WarInfo_o *this,
        int32_t flag,
        bool setTo,
        const MethodInfo *method)
{
  int32_t status; // w8
  int32_t v5; // w9

  status = this->fields.status;
  if ( ((status & flag) != 0) != setTo )
  {
    if ( setTo )
      v5 = flag;
    else
      v5 = -flag;
    this->fields.status = status + v5;
  }
}


void MapControl_WarInfo___c__DisplayClass17_0___ctor(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__0(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotId == this->fields.target;
}


bool MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotRoadId == this->fields.target;
}


bool MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapGimmickId == this->fields.target;
}