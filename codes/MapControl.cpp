void MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C23DCD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23DCD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventEnt = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventEnt, 0, v3, v4);
  v5 = StringLiteral_1/*""*/;
  this->fields.specialNoticeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.specialNoticeText, v5, v6, v7);
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
  CGThumbnailListItem_o *p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23DEE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DEE = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = (CGThumbnailListItem_o *)&this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    p_mapGimmickMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C2D434(p_mapGimmickMaster, (int32_t)MasterData_object, v9, v10);
    return (MapGimmickMaster_o *)p_mapGimmickMaster->klass;
  }
  return result;
}


MapGimmickEntity_o *MapControl_MapGimmickInfo__GetMine(MapControl_MapGimmickInfo_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *MapGimmickMaster; // x0
  __int64 v4; // x1

  if ( (byte_4C23DED & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
    byte_4C23DED = 1;
  }
  MapGimmickMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_MapGimmickInfo__GetMapGimmickMaster(
                                                                     this,
                                                                     method);
  if ( !MapGimmickMaster )
    sub_1C2D6EC(0, v4);
  return (MapGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x8
  int32_t v15; // w2
  int v16; // w9
  System_Collections_Generic_List_object__o *v17; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v21; // x8
  int32_t v22; // w2
  int v23; // w9

  if ( (byte_4C23DEF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    byte_4C23DEF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spotInfoList, (int32_t)v3, v4, v5);
  spotInfoList = this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_13;
  size = spotInfoList->fields._size;
  v10 = spotInfoList->fields._version + 1;
  spotInfoList->fields._size = 0;
  spotInfoList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotInfoList->fields._items, 0, size, 0);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spotRoadInfoList, (int32_t)v11, v12, v13);
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( !spotRoadInfoList )
    goto LABEL_13;
  v15 = spotRoadInfoList->fields._size;
  v16 = spotRoadInfoList->fields._version + 1;
  spotRoadInfoList->fields._size = 0;
  spotRoadInfoList->fields._version = v16;
  if ( v15 >= 1 )
    System_Array__Clear((System_Array_o *)spotRoadInfoList->fields._items, 0, v15, 0);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v17;
  p_mapGimmickInfoList = &this->fields.mapGimmickInfoList;
  sub_1C2D434((CGThumbnailListItem_o *)p_mapGimmickInfoList, (int32_t)v17, v19, v20);
  v21 = *p_mapGimmickInfoList;
  if ( !*p_mapGimmickInfoList )
LABEL_13:
    sub_1C2D6EC(v6, v7);
  v22 = v21->fields._size;
  v23 = v21->fields._version + 1;
  v21->fields._size = 0;
  v21->fields._version = v23;
  if ( v22 >= 1 )
    System_Array__Clear((System_Array_o *)v21->fields._items, 0, v22, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C23DF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C2D490(&MapControl_SpotInfo_TypeInfo);
    byte_4C23DF1 = 1;
  }
  v5 = (MapControl_SpotInfo_o *)sub_1C2D6DC(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v5, v6);
  if ( !v5
    || (v5->fields.spotId = spotId,
        (spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList) == 0)
    || (items = spotInfoList->fields._items,
        v12 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__,
        ++spotInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(spotInfoList, v8);
  }
  size = spotInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    spotInfoList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v5, v9, v10);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_4C23DF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C2D490(&MapControl_MapGimmickInfo_TypeInfo);
    byte_4C23DF3 = 1;
  }
  v5 = sub_1C2D6DC(MapControl_MapGimmickInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 20) = mapGimmickId,
        (mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList) == 0)
    || (items = mapGimmickInfoList->fields._items,
        v11 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
        ++mapGimmickInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(mapGimmickInfoList, v7);
  }
  size = mapGimmickInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapGimmickInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    mapGimmickInfoList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), v5, v8, v9);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_4C23DF2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C2D490(&MapControl_SpotRoadInfo_TypeInfo);
    byte_4C23DF2 = 1;
  }
  v5 = sub_1C2D6DC(MapControl_SpotRoadInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 20) = spotRoadId,
        (spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList) == 0)
    || (items = spotRoadInfoList->fields._items,
        v11 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__,
        ++spotRoadInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(spotRoadInfoList, v7);
  }
  size = spotRoadInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotRoadInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    spotRoadInfoList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), v5, v8, v9);
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
  CGThumbnailListItem_o *p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23DF4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DF4 = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = (CGThumbnailListItem_o *)&this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapMaster___);
    p_mapMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C2D434(p_mapMaster, (int32_t)MasterData_object, v9, v10);
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
    sub_1C2D6EC(0, v4);
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
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_4C23DF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4C23DF0 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&j, 0, sizeof(j));
  memset(&v23, 0, sizeof(v23));
  spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList;
  if ( spotInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      spotInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    for ( i = v22;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
          MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)i.fields._current, v4) )
    {
      if ( !i.fields._current )
        sub_1C2D6EC(0, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    for ( j = v22; ; LODWORD(j.fields._current[1].klass) = 0 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &j,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
      if ( !v11 )
        break;
      if ( !j.fields._current )
        sub_1C2D6EC(v11, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &j,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
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
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v23.fields._current )
      sub_1C2D6EC(v17, v18);
    *(_DWORD *)((char *)&v23.fields._current->klass + (unsigned __int64)&word_10) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  v19 = this->fields.mapGimmickInfoList;
  if ( !v19 )
LABEL_31:
    sub_1C2D6EC(v5, v6);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  p_mine = &this->fields.mine;
  result = this->fields.mine;
  if ( !result )
  {
    QuestPhaseMaster = MapControl_PhaseInfo__GetQuestPhaseMaster(this, method);
    if ( !QuestPhaseMaster )
      sub_1C2D6EC(0, v6);
    Entity = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0);
    this->fields.mine = Entity;
    sub_1C2D434((CGThumbnailListItem_o *)p_mine, (int32_t)Entity, v8, v9);
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
  CGThumbnailListItem_o *p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23DCC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DCC = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = (CGThumbnailListItem_o *)&this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    p_questPhaseMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C2D434(p_questPhaseMaster, (int32_t)MasterData_object, v9, v10);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8
  int32_t size; // w2
  int v11; // w9
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_4C23DD1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
    byte_4C23DD1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.phaseInfoList, (int32_t)v3, v4, v5);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_1C2D6EC(v6, v7);
  size = phaseInfoList->fields._size;
  v11 = phaseInfoList->fields._version + 1;
  phaseInfoList->fields._size = 0;
  phaseInfoList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)phaseInfoList->fields._items, 0, size, 0);
  this->fields.questEnt = 0;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_1C2D434((CGThumbnailListItem_o *)p_questEnt, 0, size, v8);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  MapControl_PhaseInfo_o *result; // x0

  if ( (byte_4C23DD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__);
    sub_1C2D490(&MapControl_PhaseInfo_TypeInfo);
    byte_4C23DD3 = 1;
  }
  v7 = sub_1C2D6DC(MapControl_PhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = questId,
        *(_DWORD *)(v7 + 20) = phase,
        (phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList) == 0)
    || (items = phaseInfoList->fields._items,
        v13 = Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__,
        ++phaseInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(phaseInfoList, v9);
  }
  size = phaseInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      phaseInfoList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    phaseInfoList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), v7, v10, v11);
  }
  result = (MapControl_PhaseInfo_o *)v7;
  ++this->fields.phaseCount;
  return result;
}


void MapControl_QuestInfo__AddSameGroupQuestIds(
        MapControl_QuestInfo_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v4; // x20
  il2cpp_array_size_t max_length; // x24
  MapControl_QuestInfo_o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  unsigned __int64 v10; // x23
  int32_t v11; // w22
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 questEnt_low; // x10

  v4 = this;
  if ( (byte_4C23DCE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    this = (MapControl_QuestInfo_o *)sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C23DCE = 1;
  }
  if ( questIds )
  {
    max_length = questIds->max_length;
    if ( (int)max_length >= 1 )
    {
      p_sameGroupQuestIds = (MapControl_QuestInfo_o **)&v4->fields.sameGroupQuestIds;
      if ( !v4->fields.sameGroupQuestIds )
      {
        v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v7,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
        *p_sameGroupQuestIds = (MapControl_QuestInfo_o *)v7;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.sameGroupQuestIds, (int32_t)v7, v8, v9);
      }
      v10 = 0;
      do
      {
        if ( v10 >= LODWORD(questIds->max_length) )
          sub_1C2D6F4(this, questIds, method);
        v11 = questIds->m_Items[v10];
        if ( v11 != v4->fields.questId )
        {
          this = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_20;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v11,
                                             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds
              || (v12 = *(_QWORD *)&this->fields.questId,
                  v13 = Method_System_Collections_Generic_List_int__Add__,
                  ++HIDWORD(this->fields.questEnt),
                  !v12) )
            {
LABEL_20:
              sub_1C2D6EC(this, questIds);
            }
            questEnt_low = SLODWORD(this->fields.questEnt);
            if ( (unsigned int)questEnt_low >= *(_DWORD *)(v12 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                v11,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.questEnt) = questEnt_low + 1;
              *(_DWORD *)(v12 + 4 * questEnt_low + 32) = v11;
            }
          }
        }
        ++v10;
      }
      while ( (unsigned int)max_length != v10 );
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
  System_Collections_Generic_List_object__o *phaseInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C23DD4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
    sub_1C2D490(&System_Predicate_MapControl_PhaseInfo__TypeInfo);
    sub_1C2D490(&Method_MapControl_QuestInfo___c__DisplayClass63_0__FindChild_b__0__);
    sub_1C2D490(&MapControl_QuestInfo___c__DisplayClass63_0_TypeInfo);
    byte_4C23DD4 = 1;
  }
  v5 = (MapControl_QuestInfo___c__DisplayClass63_0_o *)sub_1C2D6DC(MapControl_QuestInfo___c__DisplayClass63_0_TypeInfo);
  MapControl_QuestInfo___c__DisplayClass63_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.phase = phase,
        phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_PhaseInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_MapControl_QuestInfo___c__DisplayClass63_0__FindChild_b__0__,
          0),
        !phaseInfoList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (MapControl_PhaseInfo_o *)System_Collections_Generic_List_object___Find(
                                     phaseInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
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
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23DD9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DD9 = 1;
  }
  entity = 0;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1C2D6EC(Instance, v5);
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

  if ( (byte_4C23DDA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DDA = 1;
  }
  if ( !this->fields.questId )
    return 0;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
    {
      sub_1C2D6EC(Instance, v5);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v2 = this;
  if ( (byte_4C23DD8 & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__);
    byte_4C23DD8 = 1;
  }
  phaseInfoList = v2->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(0, v3);
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
    sub_1C2D6EC(0, v3);
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
  NetworkManager_c *v3; // x0
  int32_t questId; // w19
  int64_t userIdNumber; // x20

  if ( (byte_4C23DD0 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C23DD0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  questId = this->fields.questId;
  userIdNumber = v3->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(userIdNumber, questId, 1, -1, 0, 0);
}


bool MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4C23DCF & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C23DCF = 1;
  }
  questId = this->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40102980(questId, -1, 0, 0);
}


bool MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType != 0 && this->fields.dispType != 3;
}


bool MapControl_QuestInfo__IsDisplayQuestNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t PhaseMax; // w20
  QuestPhaseEntity_array *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  int32_t phaseCount; // w8
  int32_t v8; // w2

  if ( (byte_4C23DD6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C23DD6 = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object
      || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.questId, 0)) == 0 )
    {
      sub_1C2D6EC(Master_object, v5);
    }
    PhaseMax = Master_object->max_length;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v6 )
  {
    phaseCount = this->fields.phaseCount;
    if ( phaseCount + 1 < PhaseMax )
      v8 = phaseCount + 1;
    else
      v8 = PhaseMax;
    LOBYTE(v6) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                   (QuestBehaviorMaster_o *)v6,
                   this->fields.questId,
                   v8,
                   6,
                   0);
  }
  return (char)v6;
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
    sub_1C2D6EC(0, v10);
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
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23DD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    byte_4C23DD2 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      phaseInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v13.fields._current )
        sub_1C2D6EC(v6, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v10 = this->fields.phaseInfoList;
    if ( !v10 )
      sub_1C2D6EC(v8, v9);
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


// local variable allocation has failed, the output may be wrong!
void MapControl_QuestInfo__SetDispType_35964212(
        MapControl_QuestInfo_o *this,
        int32_t dispType,
        QuestReleaseEntity_o *questReleaseEntity,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v6; // x19
  MapControl_QuestInfo_o *v7; // x8
  MapControl_QuestInfo_o *v8; // x21
  int32_t type; // w1
  System_Nullable_int__o v10; // x0
  unsigned __int64 v11; // x1
  System_Nullable_Int32Enum__o v12; // x0
  int32_t v13; // w8
  int32_t imagePriority; // w9
  unsigned __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4C23DD7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_CondType_Kind__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_CondType_Kind___ctor__);
    this = (MapControl_QuestInfo_o *)sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C23DD7 = 1;
  }
  v6->fields.dispType = dispType;
  if ( questReleaseEntity )
    v7 = 0;
  else
    v7 = v6;
  if ( questReleaseEntity )
    v8 = v6;
  else
    v8 = 0;
  if ( questReleaseEntity )
  {
    type = questReleaseEntity->fields.type;
    v10 = (System_Nullable_int__o)&v15;
    v15 = 0;
    System_Nullable_int____ctor(v10, type, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
    if ( (_BYTE)v15 )
    {
      v11 = HIDWORD(v15);
      v12 = (System_Nullable_Int32Enum__o)&v15;
      v15 = 0;
      System_Nullable_Int32Enum____ctor(
        v12,
        v11,
        (const MethodInfo_38AF6C0 *)Method_System_Nullable_CondType_Kind___ctor__);
      v13 = HIDWORD(v15);
    }
    else
    {
      v13 = 0;
    }
    v6->fields._QuestReleaseType_k__BackingField = v13;
    v8->fields._QuestReleaseTargetID_k__BackingField = questReleaseEntity->fields.targetId;
    v8->fields._QuestReleaseValue_k__BackingField = questReleaseEntity->fields.value;
    v8->fields._QuestReleaseClosedID_k__BackingField = questReleaseEntity->fields.closedMessageId;
    imagePriority = questReleaseEntity->fields.imagePriority;
  }
  else
  {
    v6->fields._QuestReleaseType_k__BackingField = 0;
    if ( !v7 )
      sub_1C2D6EC(this, *(_QWORD *)&dispType);
    imagePriority = 0;
    v7->fields._QuestReleaseTargetID_k__BackingField = 0;
    v7->fields._QuestReleaseValue_k__BackingField = 0;
    v7->fields._QuestReleaseClosedID_k__BackingField = 0;
  }
  v6->fields._QuestReleaseImagePriority_k__BackingField = imagePriority;
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
  CGThumbnailListItem_o *p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4C23DD5 & 1) == 0 )
  {
    sub_1C2D490(&MapControl_SpotInfo_TypeInfo);
    byte_4C23DD5 = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = (CGThumbnailListItem_o *)&this->fields._SpotInfo_k__BackingField;
  klass = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v8 = (MapControl_SpotInfo_o *)sub_1C2D6DC(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v8, 0);
    p_SpotInfo_k__BackingField->klass = (CGThumbnailListItem_c *)v8;
    sub_1C2D434(p_SpotInfo_k__BackingField, (int32_t)v8, v9, v10);
    klass = p_SpotInfo_k__BackingField->klass;
    if ( !p_SpotInfo_k__BackingField->klass )
      sub_1C2D6EC(v11, v12);
  }
  klass[4] = value;
}


void MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C23DDB & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DDB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  this->fields.warId = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4C23DE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4C23DE0 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v4->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questId = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questPhase = v5->static_fields->_PhaseCnt_k__BackingField;
  if ( !byte_4C23DE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C23DE1 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.endTime = v5->static_fields->_EndTime_k__BackingField;
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
  const MethodInfo *v3; // x3

  this->fields._AreaBoardInfo_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._AreaBoardInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._SpotInfo_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._SpotInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MapControl_QuestInfo__set_WarInfo(
        MapControl_QuestInfo_o *this,
        MapControl_WarInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WarInfo_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._WarInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
    sub_1C2D6EC(this, 0);
  return n->fields.phase == this->fields.phase;
}


void MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  CGThumbnailListItem_o *p_fields; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  CGThumbnailListItem_c *klass; // x8
  int32_t namespaze; // w2
  int v11; // w9

  if ( (byte_4C23DFE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4C23DFE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v3;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1C2D434(p_fields, (int32_t)v3, v5, v6);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    sub_1C2D6EC(v7, v8);
  namespaze = (int32_t)klass->_1.namespaze;
  v11 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v11;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C23E01 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C2D490(&MapControl_WarInfo_TypeInfo);
    byte_4C23E01 = 1;
  }
  v7 = (MapControl_WarInfo_o *)sub_1C2D6DC(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v7, dateTime, v8);
  if ( !v7
    || (v7->fields.warId = warId,
        (warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList) == 0)
    || (items = warInfoList->fields._items,
        v14 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__,
        ++warInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(warInfoList, v10);
  }
  size = warInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warInfoList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    warInfoList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v7, v11, v12);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23E03 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4C23E03 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      warInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v6 )
        break;
      current = v12.fields._current;
      if ( !v12.fields._current )
        sub_1C2D6EC(v6, v7);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v12.fields._current, v7);
      if ( !Mine )
        sub_1C2D6EC(0, v10);
      if ( Mine->fields.eventId == eventId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v12,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
        return (MapControl_WarInfo_o *)current;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  }
  return 0;
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23E02 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4C23E02 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      warInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v6 )
        break;
      current = v12.fields._current;
      if ( !v12.fields._current )
        sub_1C2D6EC(v6, v7);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v12.fields._current, v7);
      if ( !Mine )
        sub_1C2D6EC(0, v10);
      if ( Mine->fields.id == warId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v12,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
        return (MapControl_WarInfo_o *)current;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  }
  return 0;
}


System_Collections_Generic_List_MapControl_WarInfo__o *MapControl_RootInfo__GetOpenedWarInfoList(
        MapControl_RootInfo_o *this,
        bool isMainScnario,
        bool isGrand,
        const MethodInfo *method)
{
  MapControl_RootInfo___c_c *v7; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x19
  struct MapControl_RootInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct MapControl_RootInfo___c_StaticFields *v14; // x0
  CGThumbnailListItem_o *p__9__8_0; // x0
  Il2CppObject *v16; // x21
  struct MapControl_RootInfo___c_StaticFields *v17; // x0
  Il2CppObject *v18; // x21
  struct MapControl_RootInfo___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4C23E05 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
    sub_1C2D490(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1C2D490(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__);
    sub_1C2D490(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__);
    sub_1C2D490(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_2__);
    sub_1C2D490(&MapControl_RootInfo___c_TypeInfo);
    byte_4C23E05 = 1;
  }
  v7 = MapControl_RootInfo___c_TypeInfo;
  warInfoList = this->fields.warInfoList;
  if ( !MapControl_RootInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapControl_RootInfo___c_TypeInfo);
    v7 = MapControl_RootInfo___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( isMainScnario )
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = MapControl_RootInfo___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v7->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v11, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__, 0);
      v14 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v14->__9__8_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (CGThumbnailListItem_o *)&v14->__9__8_0;
LABEL_19:
      sub_1C2D434(p__9__8_0, (int32_t)_9__8_0, v12, v13);
    }
  }
  else if ( isGrand )
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_1;
    if ( !_9__8_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = MapControl_RootInfo___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v7->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v16, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__, 0);
      v17 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v17->__9__8_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (CGThumbnailListItem_o *)&v17->__9__8_1;
      goto LABEL_19;
    }
  }
  else
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_2;
    if ( !_9__8_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = MapControl_RootInfo___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v7->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v18, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_2__, 0);
      v19 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v19->__9__8_2 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (CGThumbnailListItem_o *)&v19->__9__8_2;
      goto LABEL_19;
    }
  }
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warInfoList,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v20,
                                                                    (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
}


// local variable allocation has failed, the output may be wrong!
bool MapControl_RootInfo__IsOpenedMainScenarioWar(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  bool v8; // w20
  WarEntity_o *Mine; // x0
  __int64 v10; // x1
  int v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C23E04 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4C23E04 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( !warInfoList )
    sub_1C2D6EC(0, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    warInfoList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    v8 = v6;
    if ( !v6 )
      break;
    if ( !v14.fields._current )
      sub_1C2D6EC(v6, v7);
    if ( HIDWORD(v14.fields._current[1].klass) == warId && ((__int64)v14.fields._current[1].monitor & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v14.fields._current, v7);
      if ( !Mine )
        sub_1C2D6EC(0, v10);
      if ( WarEntity__HasFlag(Mine, 128, 0) )
      {
        v11 = 4;
        goto LABEL_13;
      }
    }
  }
  v11 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return v8 && v11 == 4;
}


void MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *warInfoList; // x20
  System_Predicate_object__o *v9; // x22
  unsigned int Index; // w0

  if ( (byte_4C23E00 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1C2D490(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1C2D490(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__);
    sub_1C2D490(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
    byte_4C23E00 = 1;
  }
  v5 = sub_1C2D6DC(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = warId;
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_WarInfo__TypeInfo);
    System_Predicate_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      0);
    Index = System_Collections_Generic_List_object___FindIndex(
              warInfoList,
              (System_Predicate_T__o *)v9,
              (const MethodInfo_378A3DC *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v7 = Index;
      v6 = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
      if ( v6 )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v6,
          v7,
          (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_1C2D6EC(v6, v7);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23DFF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    byte_4C23DFF = 1;
  }
  memset(&v10, 0, sizeof(v10));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      warInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C2D6EC(0, v4);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v10.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v7 = this->fields.warInfoList;
    if ( !v7 )
      sub_1C2D6EC(v5, v6);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C23E06 & 1) == 0 )
  {
    sub_1C2D490(&MapControl_RootInfo___c_TypeInfo);
    byte_4C23E06 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MapControl_RootInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MapControl_RootInfo___c_TypeInfo->static_fields->__9 = (struct MapControl_RootInfo___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MapControl_RootInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, info);
  return WarEntity__HasFlag((WarEntity_o *)this, 128, 0) && (info->fields.status & 1) == 0;
}


bool MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_1(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int monitor; // w20
  BalanceConfig_c *v5; // x0

  if ( (byte_4C23E07 & 1) == 0 )
  {
    this = (MapControl_RootInfo___c_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23E07 = 1;
  }
  if ( !info || (this = (MapControl_RootInfo___c_o *)MapControl_WarInfo__GetMine(info, (const MethodInfo *)info)) == 0 )
    sub_1C2D6EC(this, info);
  monitor = (int)this[3].monitor;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return monitor == v5->static_fields->GrandBoardWarId && (info->fields.status & 1) == 0;
}


bool MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_2(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.warId == this->fields.warId;
}


void MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x8
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_int__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C23DE2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4C23DE2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questInfoList, (int32_t)v3, v4, v5);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_1C2D6EC(v6, v7);
  size = questInfoList->fields._size;
  v10 = questInfoList->fields._version + 1;
  questInfoList->fields._size = 0;
  questInfoList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questInfoList->fields._items, 0, size, 0);
  this->fields.questCount = 0;
  v11 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.availableQuestIdList = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.availableQuestIdList, (int32_t)v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void MapControl_SpotInfo__AddAvailableQuestId(MapControl_SpotInfo_o *this, int32_t questId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *availableQuestIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4C23DE6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C23DE6 = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList
    || (items = availableQuestIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++availableQuestIdList->fields._version,
        !items) )
  {
    sub_1C2D6EC(availableQuestIdList, *(_QWORD *)&questId);
  }
  size = availableQuestIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      availableQuestIdList,
      questId,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_4C23DE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C2D490(&MapControl_QuestInfo_TypeInfo);
    byte_4C23DE4 = 1;
  }
  v5 = (MapControl_QuestInfo_o *)sub_1C2D6DC(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v5, 0);
  if ( !v5
    || (v5->fields.questId = questId,
        (questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList) == 0)
    || (items = questInfoList->fields._items,
        v11 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
        ++questInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(questInfoList, v7);
  }
  size = questInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      questInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    questInfoList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v5, v8, v9);
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
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x19
  System_Collections_Generic_List_int__o *v7; // x20

  if ( (byte_4C23DE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C23DE5 = 1;
  }
  if ( isInstance )
    return this->fields.availableQuestIdList;
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58115124(
    v7,
    availableQuestIdList,
    (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
  return v7;
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
    sub_1C2D6EC(0, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0);
}


int32_t MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_1C2D6EC(0, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *SpotMaster; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C23DE7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    byte_4C23DE7 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_1C2D6EC(0, v5);
    Entity = DataMasterBase_object__object__int___GetEntity(
               SpotMaster,
               this->fields.spotId,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    this->fields.mine = (struct SpotEntity_o *)Entity;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mine, (int32_t)Entity, v7, v8);
    return this->fields.mine;
  }
  return result;
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

  if ( (byte_4C23DE9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_4C23DE9 = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotLayerMaster(
                                                                      this,
                                                                      method);
    if ( !SpotLayerMaster )
      sub_1C2D6EC(0, v5);
    DataMasterBase_object__object__int___TryGetEntity(
      SpotLayerMaster,
      (Il2CppObject **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_3387DE4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    return this->fields.spotLayerEnt;
  }
  return result;
}


SpotLayerMaster_o *MapControl_SpotInfo__GetSpotLayerMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotLayerMaster_o *result; // x0
  CGThumbnailListItem_o *p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C23DEA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C23DEA = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = (CGThumbnailListItem_o *)&this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotLayerMaster___);
    p_spotLayerMaster->klass = (CGThumbnailListItem_c *)Master_object;
    sub_1C2D434(p_spotLayerMaster, (int32_t)Master_object, v7, v8);
    return (SpotLayerMaster_o *)p_spotLayerMaster->klass;
  }
  return result;
}


SpotMaster_o *MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotMaster_o *result; // x0
  CGThumbnailListItem_o *p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C23DE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C23DE8 = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = (CGThumbnailListItem_o *)&this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SpotMaster___);
    p_spotMaster->klass = (CGThumbnailListItem_c *)Master_object;
    sub_1C2D434(p_spotMaster, (int32_t)Master_object, v7, v8);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23DE3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C23DE3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList;
  if ( questInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      questInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C2D6EC(0, v4);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v10.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v7 = this->fields.questInfoList;
    if ( !v7 )
      sub_1C2D6EC(v5, v6);
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
  this->fields.spotId = spotId;
  if ( spotEnt )
  {
    this->fields.mine = spotEnt;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mine, (int32_t)spotEnt, (int32_t)spotEnt, method);
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

  if ( (byte_4C23DEB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
    byte_4C23DEB = 1;
  }
  SpotRoadMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetSpotRoadMaster(
                                                                   this,
                                                                   method);
  if ( !SpotRoadMaster )
    sub_1C2D6EC(0, v4);
  return (SpotRoadEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_3387D98 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
}


int32_t MapControl_SpotRoadInfo__GetSpotRoadId(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotRoadId;
}


SpotRoadMaster_o *MapControl_SpotRoadInfo__GetSpotRoadMaster(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  SpotRoadMaster_o *result; // x0
  CGThumbnailListItem_o *p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C23DEC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DEC = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = (CGThumbnailListItem_o *)&this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    p_spotRoadMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C2D434(p_spotRoadMaster, (int32_t)MasterData_object, v9, v10);
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
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8
  int32_t size; // w2
  int v14; // w9

  if ( (byte_4C23DF5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    byte_4C23DF5 = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mapInfoList, (int32_t)v5, v6, v7);
  this->fields.mine = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mine, 0, v8, v9);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1C2D6EC(v10, v11);
  size = mapInfoList->fields._size;
  v14 = mapInfoList->fields._version + 1;
  mapInfoList->fields._size = 0;
  mapInfoList->fields._version = v14;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C23DF7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C2D490(&MapControl_MapInfo_TypeInfo);
    byte_4C23DF7 = 1;
  }
  v5 = (MapControl_MapInfo_o *)sub_1C2D6DC(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v5, v6);
  if ( !v5
    || (v5->fields.warId = this->fields.warId,
        v5->fields.mapId = mapId,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0)
    || (items = mapInfoList->fields._items,
        v12 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__,
        ++mapInfoList->fields._version,
        !items) )
  {
    sub_1C2D6EC(mapInfoList, v8);
  }
  size = mapInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapInfoList,
      (Il2CppObject *)v5,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    mapInfoList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v5, v9, v10);
  }
  return v5;
}


MapControl_MapInfo_o *MapControl_WarInfo__GetActionMap(
        MapControl_WarInfo_o *this,
        int32_t commandType,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *current; // x24
  __int64 v8; // x20
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v10; // x1
  System_Predicate_object__o **v11; // x21
  System_Predicate_object__o **v12; // x22
  System_Predicate_object__o **v13; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // kr00_8
  System_Predicate_object__o *v17; // x26
  Il2CppClass *klass; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool v21; // w0
  System_Predicate_object__o *v22; // x26
  Il2CppClass *v23; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Predicate_object__o *v26; // x26
  System_Collections_Generic_List_object__o *monitor; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C23DFB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    sub_1C2D490(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C2D490(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C2D490(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__);
    sub_1C2D490(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__);
    sub_1C2D490(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__);
    sub_1C2D490(&MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
    byte_4C23DFB = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v8 = sub_1C2D6DC(MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = target,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0) )
  {
    sub_1C2D6EC(mapInfoList, v10);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    mapInfoList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v11 = (System_Predicate_object__o **)(v8 + 24);
  v12 = (System_Predicate_object__o **)(v8 + 32);
  v13 = (System_Predicate_object__o **)(v8 + 40);
  v32 = v31;
  while ( 2 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( v14 )
    {
      v16 = current;
      current = v32.fields._current;
      switch ( commandType )
      {
        case 0:
          if ( !v32.fields._current )
            sub_1C2D6EC(v14, v15);
          v17 = *v11;
          klass = v32.fields._current[2].klass;
          if ( !*v11 )
          {
            v17 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v17,
              (Il2CppObject *)v8,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__,
              0);
            *v11 = v17;
            sub_1C2D434((CGThumbnailListItem_o *)(v8 + 24), (int32_t)v17, v19, v20);
          }
          if ( !klass )
            sub_1C2D6EC(v14, v15);
          v21 = System_Collections_Generic_List_object___Exists(
                  (System_Collections_Generic_List_object__o *)klass,
                  (System_Predicate_T__o *)v17,
                  (const MethodInfo_378A1B0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
          goto LABEL_28;
        case 1:
          if ( !v32.fields._current )
            sub_1C2D6EC(v14, v15);
          v26 = *v12;
          monitor = (System_Collections_Generic_List_object__o *)v32.fields._current[2].monitor;
          if ( !*v12 )
          {
            v26 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
            System_Predicate_object____ctor(
              v26,
              (Il2CppObject *)v8,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__,
              0);
            *v12 = v26;
            sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v26, v28, v29);
          }
          if ( !monitor )
            sub_1C2D6EC(v14, v15);
          v21 = System_Collections_Generic_List_object___Exists(
                  monitor,
                  (System_Predicate_T__o *)v26,
                  (const MethodInfo_378A1B0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
          goto LABEL_28;
        case 2:
          if ( !v32.fields._current )
            sub_1C2D6EC(v14, v15);
          v22 = *v13;
          v23 = v32.fields._current[3].klass;
          if ( !*v13 )
          {
            v22 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
            System_Predicate_object____ctor(
              v22,
              (Il2CppObject *)v8,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__,
              0);
            *v13 = v22;
            sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), (int32_t)v22, v24, v25);
          }
          if ( !v23 )
            sub_1C2D6EC(v14, v15);
          v21 = System_Collections_Generic_List_object___Exists(
                  (System_Collections_Generic_List_object__o *)v23,
                  (System_Predicate_T__o *)v22,
                  (const MethodInfo_378A1B0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_28:
          if ( v21 )
            goto LABEL_29;
          continue;
        case 3:
          if ( !v32.fields._current )
            sub_1C2D6EC(v14, v15);
          if ( HIDWORD(v32.fields._current[1].klass) != *(_DWORD *)(v8 + 16) )
            continue;
LABEL_29:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
          break;
        default:
          current = v16;
          continue;
      }
    }
    else
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v32,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      return 0;
    }
    return (MapControl_MapInfo_o *)current;
  }
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
    sub_1C2D6EC(0, v3);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23DF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_4C23DF8 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !MapControl_WarInfo__IsMultiMap(this, *(const MethodInfo **)&mapId) )
  {
LABEL_11:
    mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
    if ( mapInfoList )
      return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                       mapInfoList,
                                       0,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
LABEL_15:
    sub_1C2D6EC(mapInfoList, v5);
  }
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    mapInfoList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  do
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v7 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      goto LABEL_11;
    }
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_1C2D6EC(v7, v8);
  }
  while ( *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&dword_14) != mapId );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4C23DFD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C23DFD = 1;
  }
  result = this->fields.mapUpdateState;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    if ( !Master_object )
      sub_1C2D6EC(0, v5);
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

  if ( (byte_4C23DFC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23DFC = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
    {
      sub_1C2D6EC(Instance, v5);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.mine,
      this->fields.warId,
      (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    return this->fields.mine;
  }
  return result;
}


MapControl_MapInfo_o *MapControl_WarInfo__GetNextMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23DF9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
    byte_4C23DF9 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1C2D6EC(0, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    mapInfoList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v5 )
      break;
    current = v8.fields._current;
    if ( !v8.fields._current )
      sub_1C2D6EC(v5, v6);
    if ( *((_BYTE *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v8,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      return (MapControl_MapInfo_o *)current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return 0;
}


int32_t MapControl_WarInfo__GetStatus(MapControl_WarInfo_o *this, const MethodInfo *method)
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


int32_t MapControl_WarInfo__GetWarID(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool MapControl_WarInfo__IsClosedWar(MapControl_WarInfo_o *this, const MethodInfo *method)
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
    HasFlag = WarEntity__HasFlag(Mine, 64, 0);
    if ( v3 <= 1 && HasFlag )
      return 1;
  }
  return result;
}


bool MapControl_WarInfo__IsEvent(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  WarEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_WarInfo__GetMine(this, method);
  if ( !Mine )
    sub_1C2D6EC(0, v3);
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
  if ( (byte_4C23DFA & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__);
    byte_4C23DFA = 1;
  }
  mapInfoList = v2->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1C2D6EC(this, method);
  return mapInfoList->fields._size > 1;
}


bool MapControl_WarInfo__IsStatusCheckFlagAvailable(MapControl_WarInfo_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.status & flag) != 0;
}


void MapControl_WarInfo__Reset(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23DF6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    byte_4C23DF6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      mapInfoList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C2D6EC(0, v4);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v10.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v7 = this->fields.mapInfoList;
    if ( !v7 )
      sub_1C2D6EC(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.spotId == this->fields.target;
}


bool MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.spotRoadId == this->fields.target;
}


bool MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.mapGimmickId == this->fields.target;
}