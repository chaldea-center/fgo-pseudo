void __fastcall MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12F31 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12F31 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventEnt, 0LL, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.specialNoticeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.specialNoticeText, (int64_t)v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MapGimmickMaster_o *result; // x0
  PartyOrganizationUtility_o *p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12F4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapGimmickMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B12F4B = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = (PartyOrganizationUtility_o *)&this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    p_mapGimmickMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_mapGimmickMaster, (int64_t)MasterData_object, v12, v13, v14, v15, v16, v17);
    return (MapGimmickMaster_o *)p_mapGimmickMaster->klass;
  }
  return result;
}


MapGimmickEntity_o *__fastcall MapControl_MapGimmickInfo__GetMine(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *MapGimmickMaster; // x0
  __int64 v5; // x1

  if ( (byte_4B12F4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__, method, v2);
    byte_4B12F4A = 1;
  }
  MapGimmickMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_MapGimmickInfo__GetMapGimmickMaster(
                                                                     this,
                                                                     method);
  if ( !MapGimmickMaster )
    sub_1BCAA3C(0LL, v5);
  return (MapGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x8
  __int64 size; // x2
  int v35; // w9
  System_Collections_Generic_List_object__o *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x3
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x8
  __int64 v45; // x2
  int v46; // w9
  System_Collections_Generic_List_object__o *v47; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v55; // x8
  int32_t v56; // w2
  int v57; // w9

  if ( (byte_4B12F4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v18, v19);
    byte_4B12F4C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotInfoList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  spotInfoList = this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_13;
  size = (unsigned int)spotInfoList->fields._size;
  v35 = spotInfoList->fields._version + 1;
  spotInfoList->fields._size = 0;
  spotInfoList->fields._version = v35;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)spotInfoList->fields._items, 0, size, 0LL);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo,
                                                       v31,
                                                       size,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotRoadInfoList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( !spotRoadInfoList )
    goto LABEL_13;
  v45 = (unsigned int)spotRoadInfoList->fields._size;
  v46 = spotRoadInfoList->fields._version + 1;
  spotRoadInfoList->fields._size = 0;
  spotRoadInfoList->fields._version = v46;
  if ( (int)v45 >= 1 )
    System_Array__Clear((System_Array_o *)spotRoadInfoList->fields._items, 0, v45, 0LL);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo,
                                                       v31,
                                                       v45,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v47;
  p_mapGimmickInfoList = &this->fields.mapGimmickInfoList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_mapGimmickInfoList, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  v55 = *p_mapGimmickInfoList;
  if ( !*p_mapGimmickInfoList )
LABEL_13:
    sub_1BCAA3C(v30, v31);
  v56 = v55->fields._size;
  v57 = v55->fields._version + 1;
  v55->fields._size = 0;
  v55->fields._version = v57;
  if ( v56 >= 1 )
    System_Array__Clear((System_Array_o *)v55->fields._items, 0, v56, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall MapControl_MapInfo__AddChild(
        MapControl_MapInfo_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  MapControl_SpotInfo_o *v8; // x19
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *spotInfoList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B12F4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, *(_QWORD *)&spotId, method);
    sub_1BCA7E0(&MapControl_SpotInfo_TypeInfo, v6, v7);
    byte_4B12F4E = 1;
  }
  v8 = (MapControl_SpotInfo_o *)sub_1BCAA2C(MapControl_SpotInfo_TypeInfo, *(_QWORD *)&spotId, method, v3);
  MapControl_SpotInfo___ctor(v8, v9);
  if ( !v8
    || (v8->fields.spotId = spotId,
        (spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList) == 0LL)
    || (items = spotInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__,
        ++spotInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(spotInfoList, v11);
  }
  size = spotInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    spotInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v8, v12, v13, v14, v15, v16, v17);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapGimmickInfo_o *__fastcall MapControl_MapInfo__AddMapGimmick(
        MapControl_MapInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t v8; // x19
  System_Collections_Generic_List_object__o *mapGimmickInfoList; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4B12F50 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
      *(_QWORD *)&mapGimmickId,
      method);
    sub_1BCA7E0(&MapControl_MapGimmickInfo_TypeInfo, v6, v7);
    byte_4B12F50 = 1;
  }
  v8 = sub_1BCAA2C(MapControl_MapGimmickInfo_TypeInfo, *(_QWORD *)&mapGimmickId, method, v3);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 20) = mapGimmickId,
        (mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList) == 0LL)
    || (items = mapGimmickInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
        ++mapGimmickInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(mapGimmickInfoList, v10);
  }
  size = mapGimmickInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapGimmickInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    mapGimmickInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
  }
  return (MapControl_MapGimmickInfo_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotRoadInfo_o *__fastcall MapControl_MapInfo__AddSpotRoad(
        MapControl_MapInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t v8; // x19
  System_Collections_Generic_List_object__o *spotRoadInfoList; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4B12F4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, *(_QWORD *)&spotRoadId, method);
    sub_1BCA7E0(&MapControl_SpotRoadInfo_TypeInfo, v6, v7);
    byte_4B12F4F = 1;
  }
  v8 = sub_1BCAA2C(MapControl_SpotRoadInfo_TypeInfo, *(_QWORD *)&spotRoadId, method, v3);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 20) = spotRoadId,
        (spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList) == 0LL)
    || (items = spotRoadInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__,
        ++spotRoadInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(spotRoadInfoList, v10);
  }
  size = spotRoadInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotRoadInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    spotRoadInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
  }
  return (MapControl_SpotRoadInfo_o *)v8;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MapMaster_o *result; // x0
  PartyOrganizationUtility_o *p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12F51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B12F51 = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = (PartyOrganizationUtility_o *)&this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___);
    p_mapMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_mapMaster, (int64_t)MasterData_object, v12, v13, v14, v15, v16, v17);
    return (MapMaster_o *)p_mapMaster->klass;
  }
  return result;
}


MapEntity_o *__fastcall MapControl_MapInfo__GetMine(MapControl_MapInfo_o *this, const MethodInfo *method)
{
  MapMaster_o *MapMaster; // x0
  __int64 v4; // x1

  MapMaster = MapControl_MapInfo__GetMapMaster(this, method);
  if ( !MapMaster )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *spotInfoList; // x0
  const MethodInfo *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v36; // x8
  int32_t size; // w2
  int v38; // w9
  System_Collections_Generic_List_object__o *spotRoadInfoList; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v42; // x8
  int32_t v43; // w2
  int v44; // w9
  System_Collections_Generic_List_object__o *mapGimmickInfoList; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v48; // x8
  int32_t v49; // w2
  int v50; // w9
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_4B12F4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v30, v31);
    byte_4B12F4D = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&j, 0, sizeof(j));
  memset(&v52, 0, sizeof(v52));
  spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList;
  if ( spotInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      spotInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    for ( i = v51;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
          MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)i.fields._current, v33) )
    {
      if ( !i.fields._current )
        sub_1BCAA3C(0LL, v33);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    v36 = this->fields.spotInfoList;
    if ( !v36 )
      goto LABEL_31;
    size = v36->fields._size;
    v38 = v36->fields._version + 1;
    v36->fields._size = 0;
    v36->fields._version = v38;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v36->fields._items, 0, size, 0LL);
  }
  spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList;
  if ( spotRoadInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      spotRoadInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    for ( j = v51; ; LODWORD(j.fields._current[1].klass) = 0 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &j,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
      if ( !v40 )
        break;
      if ( !j.fields._current )
        sub_1BCAA3C(v40, v41);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &j,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    v42 = this->fields.spotRoadInfoList;
    if ( !v42 )
      goto LABEL_31;
    v43 = v42->fields._size;
    v44 = v42->fields._version + 1;
    v42->fields._size = 0;
    v42->fields._version = v44;
    if ( v43 >= 1 )
      System_Array__Clear((System_Array_o *)v42->fields._items, 0, v43, 0LL);
  }
  mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList;
  if ( !mapGimmickInfoList )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    mapGimmickInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v46 )
      break;
    if ( !v52.fields._current )
      sub_1BCAA3C(v46, v47);
    LODWORD(v52.fields._current[1].klass) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  v48 = this->fields.mapGimmickInfoList;
  if ( !v48 )
LABEL_31:
    sub_1BCAA3C(v34, v35);
  v49 = v48->fields._size;
  v50 = v48->fields._version + 1;
  v48->fields._size = 0;
  v48->fields._version = v50;
  if ( v49 >= 1 )
    System_Array__Clear((System_Array_o *)v48->fields._items, 0, v49, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  p_mine = &this->fields.mine;
  result = this->fields.mine;
  if ( !result )
  {
    QuestPhaseMaster = MapControl_PhaseInfo__GetQuestPhaseMaster(this, method);
    if ( !QuestPhaseMaster )
      sub_1BCAA3C(0LL, v6);
    Entity = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0LL);
    this->fields.mine = Entity;
    sub_1BCA784((PartyOrganizationUtility_o *)p_mine, (int64_t)Entity, v8, v9, v10, v11, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  QuestPhaseMaster_o *result; // x0
  PartyOrganizationUtility_o *p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12F30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B12F30 = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = (PartyOrganizationUtility_o *)&this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    p_questPhaseMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_questPhaseMaster, (int64_t)MasterData_object, v12, v13, v14, v15, v16, v17);
    return (QuestPhaseMaster_o *)p_questPhaseMaster->klass;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8
  int64_t size; // x2
  int v27; // w9
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_4B12F35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo, v6, v7);
    byte_4B12F35 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.phaseInfoList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_1BCAA3C(v18, v19);
  size = (unsigned int)phaseInfoList->fields._size;
  v27 = phaseInfoList->fields._version + 1;
  phaseInfoList->fields._size = 0;
  phaseInfoList->fields._version = v27;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)phaseInfoList->fields._items, 0, size, 0LL);
  this->fields.questEnt = 0LL;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)p_questEnt, 0LL, size, v20, v21, v22, v23, v24);
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
  __int64 v8; // x2
  int64_t v9; // x20
  System_Collections_Generic_List_object__o *phaseInfoList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  MapControl_PhaseInfo_o *result; // x0

  if ( (byte_4B12F37 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&MapControl_PhaseInfo_TypeInfo, v7, v8);
    byte_4B12F37 = 1;
  }
  v9 = sub_1BCAA2C(MapControl_PhaseInfo_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = questId,
        *(_DWORD *)(v9 + 20) = phase,
        (phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList) == 0LL)
    || (items = phaseInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__,
        ++phaseInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(phaseInfoList, v11);
  }
  size = phaseInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      phaseInfoList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    phaseInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), v9, v12, v13, v14, v15, v16, v17);
  }
  result = (MapControl_PhaseInfo_o *)v9;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x24
  MapControl_QuestInfo_o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  unsigned __int64 v21; // x23
  int32_t v22; // w22
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 questEnt_low; // x10

  v5 = this;
  if ( (byte_4B12F32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, questIds, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    this = (MapControl_QuestInfo_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B12F32 = 1;
  }
  if ( questIds )
  {
    v12 = *(_QWORD *)&questIds->max_length;
    if ( (int)v12 >= 1 )
    {
      p_sameGroupQuestIds = (MapControl_QuestInfo_o **)&v5->fields.sameGroupQuestIds;
      if ( !v5->fields.sameGroupQuestIds )
      {
        v14 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          questIds,
                                                          method,
                                                          v3);
        System_Collections_Generic_List_int____ctor(
          v14,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        *p_sameGroupQuestIds = (MapControl_QuestInfo_o *)v14;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v5->fields.sameGroupQuestIds,
          (int64_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      v21 = 0LL;
      do
      {
        if ( v21 >= questIds->max_length )
          sub_1BCAA44(this, questIds);
        v22 = questIds->m_Items[v21 + 1];
        if ( v22 != v5->fields.questId )
        {
          this = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_20;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v22,
                                             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds
              || (v23 = *(_QWORD *)&this->fields.questId,
                  v24 = Method_System_Collections_Generic_List_int__Add__,
                  ++HIDWORD(this->fields.questEnt),
                  !v23) )
            {
LABEL_20:
              sub_1BCAA3C(this, questIds);
            }
            questEnt_low = SLODWORD(this->fields.questEnt);
            if ( (unsigned int)questEnt_low >= *(_DWORD *)(v23 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                v22,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.questEnt) = questEnt_low + 1;
              *(_DWORD *)(v23 + 4 * questEnt_low + 32) = v22;
            }
          }
        }
        ++v21;
      }
      while ( (unsigned int)v12 != v21 );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__FindChild(
        MapControl_QuestInfo_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *phaseInfoList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B12F38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__, *(_QWORD *)&phase, method);
    sub_1BCA7E0(&System_Predicate_MapControl_PhaseInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MapControl_QuestInfo___c__DisplayClass55_0__FindChild_b__0__, v8, v9);
    sub_1BCA7E0(&MapControl_QuestInfo___c__DisplayClass55_0_TypeInfo, v10, v11);
    byte_4B12F38 = 1;
  }
  v12 = sub_1BCAA2C(MapControl_QuestInfo___c__DisplayClass55_0_TypeInfo, *(_QWORD *)&phase, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = phase,
        phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_PhaseInfo__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_MapControl_QuestInfo___c__DisplayClass55_0__FindChild_b__0__,
          0LL),
        !phaseInfoList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (MapControl_PhaseInfo_o *)System_Collections_Generic_List_object___Find(
                                     phaseInfoList,
                                     (System_Predicate_T__o *)v18,
                                     (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
}


int32_t __fastcall MapControl_QuestInfo__GetActConsumeCost(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19

  v2 = this;
  LODWORD(this) = this->fields._fixedCostVal_k__BackingField;
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    this = (MapControl_QuestInfo_o *)MapControl_QuestInfo__GetMine(v2, method);
    if ( this )
      LODWORD(this) = QuestEntity__getActConsume((QuestEntity_o *)this, v2->fields.costCalcVal, 0LL);
  }
  return (int)this;
}


int32_t __fastcall MapControl_QuestInfo__GetClearPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t PhaseMax; // w20
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12F3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12F3C = 1;
  }
  entity = 0LL;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_11;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         (int64_t)Instance,
         this->fields.questId,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_11:
    sub_1BCAA3C(Instance, v10);
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


bool __fastcall MapControl_QuestInfo__GetIsNotItemConsume(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotItemConsume;
}


QuestEntity_o *__fastcall MapControl_QuestInfo__GetMine(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  QuestEntity_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B12F3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12F3D = 1;
  }
  if ( !this->fields.questId )
    return 0LL;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v10);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t __fastcall MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapControl_QuestInfo_o *v3; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v3 = this;
  if ( (byte_4B12F3B & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_1BCA7E0(
                                       &Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__,
                                       method,
                                       v2);
    byte_4B12F3B = 1;
  }
  phaseInfoList = v3->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(0LL, v3);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t UserId; // x0
  __int64 v7; // x1
  int32_t questId; // w19
  int64_t v9; // x20

  if ( (byte_4B12F34 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B12F34 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  questId = this->fields.questId;
  v9 = UserId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
  return CondType__IsQuestPhaseClear(v9, questId, 1, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t questId; // w19

  if ( (byte_4B12F33 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B12F33 = 1;
  }
  questId = this->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType != 0 && this->fields.dispType != 3;
}


bool __fastcall MapControl_QuestInfo__IsDisplayQuestNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int32_t PhaseMax; // w20
  QuestPhaseEntity_array *Master_object; // x0
  Il2CppObject *v11; // x0
  int32_t phaseCount; // w8
  int32_t v13; // w2

  if ( (byte_4B12F3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B12F3A = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object
      || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.questId, 0LL)) == 0LL )
    {
      sub_1BCAA3C(Master_object, v8);
    }
    PhaseMax = Master_object->max_length;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v11 )
  {
    phaseCount = this->fields.phaseCount;
    if ( phaseCount + 1 < PhaseMax )
      v13 = phaseCount + 1;
    else
      v13 = PhaseMax;
    LOBYTE(v11) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                    (QuestBehaviorMaster_o *)v11,
                    this->fields.questId,
                    v13,
                    6,
                    0LL);
  }
  return (char)v11;
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
    sub_1BCAA3C(0LL, v10);
  return v9->fields.type == 1;
}


void __fastcall MapControl_QuestInfo__Reset(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_int__o *sameGroupQuestIds; // x8
  int v15; // w9
  System_Collections_Generic_List_object__o *phaseInfoList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__, v12, v13);
    byte_4B12F36 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
  if ( sameGroupQuestIds )
  {
    v15 = sameGroupQuestIds->fields._version + 1;
    sameGroupQuestIds->fields._size = 0;
    sameGroupQuestIds->fields._version = v15;
  }
  phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList;
  if ( phaseInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      phaseInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v17 )
        break;
      if ( !v24.fields._current )
        sub_1BCAA3C(v17, v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v21 = this->fields.phaseInfoList;
    if ( !v21 )
      sub_1BCAA3C(v19, v20);
    size = v21->fields._size;
    v23 = v21->fields._version + 1;
    v21->fields._size = 0;
    v21->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
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


void __fastcall MapControl_QuestInfo__SetIsNotItemConsume(
        MapControl_QuestInfo_o *this,
        bool isNot,
        const MethodInfo *method)
{
  this->fields.isNotItemConsume = isNot;
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
  __int64 v3; // x3
  _DWORD *klass; // x8
  PartyOrganizationUtility_o *p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v9; // x21
  const MethodInfo *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B12F39 & 1) == 0 )
  {
    sub_1BCA7E0(&MapControl_SpotInfo_TypeInfo, *(_QWORD *)&value, method);
    byte_4B12F39 = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._SpotInfo_k__BackingField;
  klass = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v9 = (MapControl_SpotInfo_o *)sub_1BCAA2C(MapControl_SpotInfo_TypeInfo, *(_QWORD *)&value, method, v3);
    MapControl_SpotInfo___ctor(v9, v10);
    p_SpotInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v9;
    sub_1BCA784(p_SpotInfo_k__BackingField, (int64_t)v9, v11, v12, v13, v14, v15, v16);
    klass = p_SpotInfo_k__BackingField->klass;
    if ( !p_SpotInfo_k__BackingField->klass )
      sub_1BCAA3C(v17, v18);
  }
  klass[4] = value;
}


void __fastcall MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4B12F3E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12F3E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  this->fields.warId = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12FA7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4B12FA7 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v4->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B12DC3 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questId = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questPhase = v7->static_fields->_PhaseCnt_k__BackingField;
  if ( !byte_4B12FA8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4B12FA8 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  this->fields.endTime = v7->static_fields->_EndTime_k__BackingField;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AreaBoardInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AreaBoardInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SpotInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SpotInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapControl_QuestInfo__set_WarInfo(
        MapControl_QuestInfo_o *this,
        MapControl_WarInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._WarInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._WarInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MapControl_QuestInfo__set_fixedCostVal(
        MapControl_QuestInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._fixedCostVal_k__BackingField = value;
}


void __fastcall MapControl_QuestInfo___c__DisplayClass55_0___ctor(
        MapControl_QuestInfo___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapControl_QuestInfo___c__DisplayClass55_0___FindChild_b__0(
        MapControl_QuestInfo___c__DisplayClass55_0_o *this,
        MapControl_PhaseInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.phase == this->fields.phase;
}


void __fastcall MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  PartyOrganizationUtility_c *klass; // x8
  int32_t namespaze; // w2
  int v23; // w9

  if ( (byte_4B12F5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v6, v7);
    byte_4B12F5B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v11;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  sub_1BCA784(p_fields, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    sub_1BCAA3C(v19, v20);
  namespaze = (int32_t)klass->_1.namespaze;
  v23 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v23;
  if ( namespaze >= 1 )
    System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_WarInfo_o *__fastcall MapControl_RootInfo__AddChild(
        MapControl_RootInfo_o *this,
        int32_t warId,
        int64_t dateTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  MapControl_WarInfo_o *v9; // x19
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4B12F5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, *(_QWORD *)&warId, dateTime);
    sub_1BCA7E0(&MapControl_WarInfo_TypeInfo, v7, v8);
    byte_4B12F5E = 1;
  }
  v9 = (MapControl_WarInfo_o *)sub_1BCAA2C(MapControl_WarInfo_TypeInfo, *(_QWORD *)&warId, dateTime, method);
  MapControl_WarInfo___ctor(v9, dateTime, v10);
  if ( !v9
    || (v9->fields.warId = warId,
        (warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList) == 0LL)
    || (items = warInfoList->fields._items,
        v20 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__,
        ++warInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(warInfoList, v12);
  }
  size = warInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warInfoList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    warInfoList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v9, v13, v14, v15, v16, v17, v18);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByEventID(
        MapControl_RootInfo_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F60 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v9, v10);
    byte_4B12F60 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      warInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_1BCAA3C(v12, v13);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v18.fields._current, v13);
      if ( !Mine )
        sub_1BCAA3C(0LL, v16);
      if ( Mine->fields.eventId == eventId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v18,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
        return (MapControl_WarInfo_o *)current;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
MapControl_WarInfo_o *__fastcall MapControl_RootInfo__GetChildByWarID(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F5F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v9, v10);
    byte_4B12F5F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      warInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_1BCAA3C(v12, v13);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v18.fields._current, v13);
      if ( !Mine )
        sub_1BCAA3C(0LL, v16);
      if ( Mine->fields.id == warId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v18,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
        return (MapControl_WarInfo_o *)current;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MapControl_WarInfo__o *__fastcall MapControl_RootInfo__GetOpenedWarInfoList(
        MapControl_RootInfo_o *this,
        bool isMainScnario,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  MapControl_RootInfo___c_c *v16; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x19
  struct MapControl_RootInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct MapControl_RootInfo___c_StaticFields *v27; // x0
  PartyOrganizationUtility_o *p__9__8_0; // x0
  Il2CppObject *v29; // x21
  struct MapControl_RootInfo___c_StaticFields *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_4B12F62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, isMainScnario, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___, v6, v7);
    sub_1BCA7E0(&System_Func_MapControl_WarInfo__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__, v10, v11);
    sub_1BCA7E0(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__, v12, v13);
    sub_1BCA7E0(&MapControl_RootInfo___c_TypeInfo, v14, v15);
    byte_4B12F62 = 1;
  }
  v16 = MapControl_RootInfo___c_TypeInfo;
  warInfoList = this->fields.warInfoList;
  if ( !MapControl_RootInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapControl_RootInfo___c_TypeInfo, isMainScnario);
    v16 = MapControl_RootInfo___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  if ( isMainScnario )
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, isMainScnario);
        v16 = MapControl_RootInfo___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v16->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_MapControl_WarInfo__bool__TypeInfo,
                                                 isMainScnario,
                                                 method,
                                                 v3);
      System_Func_object__bool____ctor(_9__8_0, v20, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__, 0LL);
      v27 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v27->__9__8_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (PartyOrganizationUtility_o *)&v27->__9__8_0;
LABEL_14:
      sub_1BCA784(p__9__8_0, (int64_t)_9__8_0, v21, v22, v23, v24, v25, v26);
    }
  }
  else
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_1;
    if ( !_9__8_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, isMainScnario);
        v16 = MapControl_RootInfo___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v16->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_MapControl_WarInfo__bool__TypeInfo,
                                                 isMainScnario,
                                                 method,
                                                 v3);
      System_Func_object__bool____ctor(_9__8_0, v29, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__, 0LL);
      v30 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v30->__9__8_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (PartyOrganizationUtility_o *)&v30->__9__8_1;
      goto LABEL_14;
    }
  }
  v31 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warInfoList,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v31,
                                                                    (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapControl_RootInfo__IsOpenedMainScenarioWar(
        MapControl_RootInfo_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  bool v14; // w20
  WarEntity_o *Mine; // x0
  __int64 v16; // x1
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B12F61 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v9, v10);
    byte_4B12F61 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( !warInfoList )
    sub_1BCAA3C(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    warInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    v14 = v12;
    if ( !v12 )
      break;
    if ( !v20.fields._current )
      sub_1BCAA3C(v12, v13);
    if ( HIDWORD(v20.fields._current[1].klass) == warId && ((__int64)v20.fields._current[1].monitor & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v20.fields._current, v13);
      if ( !Mine )
        sub_1BCAA3C(0LL, v16);
      if ( WarEntity__HasFlag(Mine, 128, 0LL) )
      {
        v17 = 4;
        goto LABEL_13;
      }
    }
  }
  v17 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return v14 && v17 == 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *warInfoList; // x20
  System_Predicate_object__o *v20; // x22
  unsigned int Index; // w0

  if ( (byte_4B12F5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v6, v7);
    sub_1BCA7E0(&System_Predicate_MapControl_WarInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__, v10, v11);
    sub_1BCA7E0(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo, v12, v13);
    byte_4B12F5D = 1;
  }
  v14 = sub_1BCAA2C(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&warId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_DWORD *)(v14 + 16) = warId;
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    v20 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_WarInfo__TypeInfo, v16, v17, v18);
    System_Predicate_object____ctor(
      v20,
      (Il2CppObject *)v14,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      0LL);
    Index = System_Collections_Generic_List_object___FindIndex(
              warInfoList,
              (System_Predicate_T__o *)v20,
              (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v16 = Index;
      v15 = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
      if ( v15 )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v15,
          v16,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_1BCAA3C(v15, v16);
    }
  }
}


void __fastcall MapControl_RootInfo__Reset(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v10, v11);
    byte_4B12F5C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      warInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1BCAA3C(0LL, v13);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v19.fields._current, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v16 = this->fields.warInfoList;
    if ( !v16 )
      sub_1BCAA3C(v14, v15);
    size = v16->fields._size;
    v18 = v16->fields._version + 1;
    v16->fields._size = 0;
    v16->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
  }
}


void __fastcall MapControl_RootInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12F63 & 1) == 0 )
  {
    sub_1BCA7E0(&MapControl_RootInfo___c_TypeInfo, v1, v2);
    byte_4B12F63 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MapControl_RootInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MapControl_RootInfo___c_TypeInfo->static_fields->__9 = (struct MapControl_RootInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MapControl_RootInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MapControl_RootInfo___c___ctor(MapControl_RootInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_0(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info || (this = (MapControl_RootInfo___c_o *)MapControl_WarInfo__GetMine(info, (const MethodInfo *)info)) == 0LL )
    sub_1BCAA3C(this, info);
  return WarEntity__HasFlag((WarEntity_o *)this, 128, 0LL) && (info->fields.status & 1) == 0;
}


bool __fastcall MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_1(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return (info->fields.status & 1) == 0;
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


void __fastcall MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x8
  __int64 size; // x2
  int v27; // w9
  System_Collections_Generic_List_int__o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B12F3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10, v11);
    byte_4B12F3F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questInfoList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_1BCAA3C(v22, v23);
  size = (unsigned int)questInfoList->fields._size;
  v27 = questInfoList->fields._version + 1;
  questInfoList->fields._size = 0;
  questInfoList->fields._version = v27;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)questInfoList->fields._items, 0, size, 0LL);
  this->fields.questCount = 0;
  v28 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    size,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.availableQuestIdList = v28;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.availableQuestIdList,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_SpotInfo__AddAvailableQuestId(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *availableQuestIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4B12F43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&questId, method);
    byte_4B12F43 = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList
    || (items = availableQuestIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++availableQuestIdList->fields._version,
        !items) )
  {
    sub_1BCAA3C(availableQuestIdList, *(_QWORD *)&questId);
  }
  size = availableQuestIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      availableQuestIdList,
      questId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    availableQuestIdList->fields._size = size + 1;
    items->m_Items[size + 1] = questId;
  }
}


// local variable allocation has failed, the output may be wrong!
MapControl_QuestInfo_o *__fastcall MapControl_SpotInfo__AddChild(
        MapControl_SpotInfo_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  MapControl_QuestInfo_o *v8; // x19
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *questInfoList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B12F41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&MapControl_QuestInfo_TypeInfo, v6, v7);
    byte_4B12F41 = 1;
  }
  v8 = (MapControl_QuestInfo_o *)sub_1BCAA2C(MapControl_QuestInfo_TypeInfo, *(_QWORD *)&questId, method, v3);
  MapControl_QuestInfo___ctor(v8, v9);
  if ( !v8
    || (v8->fields.questId = questId,
        (questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList) == 0LL)
    || (items = questInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
        ++questInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(questInfoList, v11);
  }
  size = questInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      questInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    questInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v8, v12, v13, v14, v15, v16, v17);
  }
  return v8;
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x19
  System_Collections_Generic_List_int__o *v10; // x20

  if ( (byte_4B12F42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, isInstance, method);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v6, v7);
    byte_4B12F42 = 1;
  }
  if ( isInstance )
    return this->fields.availableQuestIdList;
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  v10 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    isInstance,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor_56116492(
    v10,
    availableQuestIdList,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  return v10;
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
    sub_1BCAA3C(0LL, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0LL);
}


int32_t __fastcall MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_1BCAA3C(0LL, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *__fastcall MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotEntity_o *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *SpotMaster; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12F44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, method, v2);
    byte_4B12F44 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_1BCAA3C(0LL, v6);
    Entity = DataMasterBase_object__object__int___GetEntity(
               SpotMaster,
               this->fields.spotId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    this->fields.mine = (struct SpotEntity_o *)Entity;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mine, (int64_t)Entity, v8, v9, v10, v11, v12, v13);
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
  __int64 v2; // x2
  SpotLayerEntity_o *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *SpotLayerMaster; // x0
  __int64 v6; // x1

  if ( (byte_4B12F46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, method, v2);
    byte_4B12F46 = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotLayerMaster(
                                                                      this,
                                                                      method);
    if ( !SpotLayerMaster )
      sub_1BCAA3C(0LL, v6);
    DataMasterBase_object__object__int___TryGetEntity(
      SpotLayerMaster,
      (Il2CppObject **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    return this->fields.spotLayerEnt;
  }
  return result;
}


SpotLayerMaster_o *__fastcall MapControl_SpotInfo__GetSpotLayerMaster(
        MapControl_SpotInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SpotLayerMaster_o *result; // x0
  PartyOrganizationUtility_o *p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1
  Il2CppObject *Master_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B12F47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotLayerMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B12F47 = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = (PartyOrganizationUtility_o *)&this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotLayerMaster___);
    p_spotLayerMaster->klass = (PartyOrganizationUtility_c *)Master_object;
    sub_1BCA784(p_spotLayerMaster, (int64_t)Master_object, v10, v11, v12, v13, v14, v15);
    return (SpotLayerMaster_o *)p_spotLayerMaster->klass;
  }
  return result;
}


SpotMaster_o *__fastcall MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SpotMaster_o *result; // x0
  PartyOrganizationUtility_o *p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1
  Il2CppObject *Master_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B12F45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B12F45 = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = (PartyOrganizationUtility_o *)&this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
    p_spotMaster->klass = (PartyOrganizationUtility_c *)Master_object;
    sub_1BCA784(p_spotMaster, (int64_t)Master_object, v10, v11, v12, v13, v14, v15);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *questInfoList; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v10, v11);
    byte_4B12F40 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList;
  if ( questInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      questInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1BCAA3C(0LL, v13);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v19.fields._current, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v16 = this->fields.questInfoList;
    if ( !v16 )
      sub_1BCAA3C(v14, v15);
    size = v16->fields._size;
    v18 = v16->fields._version + 1;
    v16->fields._size = 0;
    v16->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.spotId = spotId;
  if ( spotEnt )
  {
    this->fields.mine = spotEnt;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mine,
      (int64_t)spotEnt,
      (int64_t)spotEnt,
      (int32_t)method,
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
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *SpotRoadMaster; // x0
  __int64 v5; // x1

  if ( (byte_4B12F48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__, method, v2);
    byte_4B12F48 = 1;
  }
  SpotRoadMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetSpotRoadMaster(
                                                                   this,
                                                                   method);
  if ( !SpotRoadMaster )
    sub_1BCAA3C(0LL, v5);
  return (SpotRoadEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
}


int32_t __fastcall MapControl_SpotRoadInfo__GetSpotRoadId(MapControl_SpotRoadInfo_o *this, const MethodInfo *method)
{
  return this->fields.spotRoadId;
}


SpotRoadMaster_o *__fastcall MapControl_SpotRoadInfo__GetSpotRoadMaster(
        MapControl_SpotRoadInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SpotRoadMaster_o *result; // x0
  PartyOrganizationUtility_o *p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12F49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotRoadMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B12F49 = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = (PartyOrganizationUtility_o *)&this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    p_spotRoadMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_spotRoadMaster, (int64_t)MasterData_object, v12, v13, v14, v15, v16, v17);
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


void __fastcall MapControl_WarInfo___ctor(MapControl_WarInfo_o *this, int64_t dateTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_List_object__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8
  int32_t size; // w2
  int v29; // w9

  if ( (byte_4B12F52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, dateTime, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v7, v8);
    byte_4B12F52 = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_MapInfo__TypeInfo,
                                                       v9,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapInfoList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  this->fields.mine = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mine, 0LL, v19, v20, v21, v22, v23, v24);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1BCAA3C(v25, v26);
  size = mapInfoList->fields._size;
  v29 = mapInfoList->fields._version + 1;
  mapInfoList->fields._size = 0;
  mapInfoList->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mapInfoList->fields._items, 0, size, 0LL);
  this->fields.mapUpdateState = 0;
  this->fields.createdDateTime = dateTime;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__AddChild(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  MapControl_MapInfo_o *v8; // x19
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B12F54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, *(_QWORD *)&mapId, method);
    sub_1BCA7E0(&MapControl_MapInfo_TypeInfo, v6, v7);
    byte_4B12F54 = 1;
  }
  v8 = (MapControl_MapInfo_o *)sub_1BCAA2C(MapControl_MapInfo_TypeInfo, *(_QWORD *)&mapId, method, v3);
  MapControl_MapInfo___ctor(v8, v9);
  if ( !v8
    || (v8->fields.warId = this->fields.warId,
        v8->fields.mapId = mapId,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0LL)
    || (items = mapInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__,
        ++mapInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(mapInfoList, v11);
  }
  size = mapInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    mapInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v8, v12, v13, v14, v15, v16, v17);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetActionMap(
        MapControl_WarInfo_o *this,
        int32_t commandType,
        int32_t target,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x24
  System_Predicate_object__o **v41; // x21
  System_Predicate_object__o **v42; // x22
  System_Predicate_object__o **v43; // x23
  _BOOL8 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Predicate_object__o *v48; // x26
  Il2CppClass *klass; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  bool v56; // w0
  System_Predicate_object__o *v57; // x26
  Il2CppClass *v58; // x25
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Predicate_object__o *v65; // x26
  System_Collections_Generic_List_object__o *monitor; // x25
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12F58 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__,
      *(_QWORD *)&commandType,
      *(_QWORD *)&target);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotInfo__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__, v29, v30);
    sub_1BCA7E0(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__, v31, v32);
    sub_1BCA7E0(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__, v33, v34);
    sub_1BCA7E0(&MapControl_WarInfo___c__DisplayClass17_0_TypeInfo, v35, v36);
    byte_4B12F58 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v37 = sub_1BCAA2C(
          MapControl_WarInfo___c__DisplayClass17_0_TypeInfo,
          *(_QWORD *)&commandType,
          *(_QWORD *)&target,
          method);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37
    || (*(_DWORD *)(v37 + 16) = target,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0LL) )
  {
    sub_1BCAA3C(mapInfoList, v39);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    mapInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v41 = (System_Predicate_object__o **)(v37 + 24);
  v42 = (System_Predicate_object__o **)(v37 + 32);
  v43 = (System_Predicate_object__o **)(v37 + 40);
  v75 = v74;
  while ( 2 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( v44 )
    {
      current = v75.fields._current;
      switch ( commandType )
      {
        case 0:
          if ( !v75.fields._current )
            sub_1BCAA3C(v44, v45);
          v48 = *v41;
          klass = v75.fields._current[2].klass;
          if ( !*v41 )
          {
            v48 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                  v45,
                                                  v46,
                                                  v47);
            System_Predicate_object____ctor(
              v48,
              (Il2CppObject *)v37,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__,
              0LL);
            *v41 = v48;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)v48, v50, v51, v52, v53, v54, v55);
          }
          if ( !klass )
            sub_1BCAA3C(v44, v45);
          v56 = System_Collections_Generic_List_object___Exists(
                  (System_Collections_Generic_List_object__o *)klass,
                  (System_Predicate_T__o *)v48,
                  (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
          goto LABEL_28;
        case 1:
          if ( !v75.fields._current )
            sub_1BCAA3C(v44, v45);
          v65 = *v42;
          monitor = (System_Collections_Generic_List_object__o *)v75.fields._current[2].monitor;
          if ( !*v42 )
          {
            v65 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_MapControl_SpotRoadInfo__TypeInfo,
                                                  v45,
                                                  v46,
                                                  v47);
            System_Predicate_object____ctor(
              v65,
              (Il2CppObject *)v37,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__,
              0LL);
            *v42 = v65;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v65, v67, v68, v69, v70, v71, v72);
          }
          if ( !monitor )
            sub_1BCAA3C(v44, v45);
          v56 = System_Collections_Generic_List_object___Exists(
                  monitor,
                  (System_Predicate_T__o *)v65,
                  (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
          goto LABEL_28;
        case 2:
          if ( !v75.fields._current )
            sub_1BCAA3C(v44, v45);
          v57 = *v43;
          v58 = v75.fields._current[3].klass;
          if ( !*v43 )
          {
            v57 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                                  v45,
                                                  v46,
                                                  v47);
            System_Predicate_object____ctor(
              v57,
              (Il2CppObject *)v37,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__,
              0LL);
            *v43 = v57;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 40), (int64_t)v57, v59, v60, v61, v62, v63, v64);
          }
          if ( !v58 )
            sub_1BCAA3C(v44, v45);
          v56 = System_Collections_Generic_List_object___Exists(
                  (System_Collections_Generic_List_object__o *)v58,
                  (System_Predicate_T__o *)v57,
                  (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_28:
          if ( v56 )
            goto LABEL_29;
          continue;
        case 3:
          if ( !v75.fields._current )
            sub_1BCAA3C(v44, v45);
          if ( HIDWORD(v75.fields._current[1].klass) != *(_DWORD *)(v37 + 16) )
            continue;
LABEL_29:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v75,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
          break;
        default:
          continue;
      }
    }
    else
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v75,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      return 0LL;
    }
    return (MapControl_MapInfo_o *)current;
  }
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
    sub_1BCAA3C(0LL, v3);
  return Mine->fields.eventId;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetMap(
        MapControl_WarInfo_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12F55 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__,
      *(_QWORD *)&mapId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v11, v12);
    byte_4B12F55 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !MapControl_WarInfo__IsMultiMap(this, *(const MethodInfo **)&mapId) )
  {
LABEL_11:
    mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
    if ( mapInfoList )
      return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                       mapInfoList,
                                       0,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
LABEL_15:
    sub_1BCAA3C(mapInfoList, v13);
  }
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    mapInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  do
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v15 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      goto LABEL_11;
    }
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1BCAA3C(v15, v16);
  }
  while ( HIDWORD(v19.fields._current[1].klass) != mapId );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4B12F5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B12F5A = 1;
  }
  result = this->fields.mapUpdateState;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    if ( !Master_object )
      sub_1BCAA3C(0LL, v8);
    if ( MapUpdateScheduleMaster__Any((MapUpdateScheduleMaster_o *)Master_object, this->fields.warId, 0LL) )
      result = 1;
    else
      result = 2;
    this->fields.mapUpdateState = result;
  }
  return result;
}


WarEntity_o *__fastcall MapControl_WarInfo__GetMine(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  WarEntity_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B12F59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12F59 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v10);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.mine,
      this->fields.warId,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    return this->fields.mine;
  }
  return result;
}


MapControl_MapInfo_o *__fastcall MapControl_WarInfo__GetNextMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v12, v13);
    byte_4B12F56 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1BCAA3C(0LL, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    mapInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v16 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1BCAA3C(v16, v17);
    if ( LOBYTE(v19.fields._current[1].monitor) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      return (MapControl_MapInfo_o *)current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
    sub_1BCAA3C(0LL, v3);
  return WarEntity__HasFlag(Mine, 32, 0LL);
}


bool __fastcall MapControl_WarInfo__IsMapUpdateStateEnabled(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  return MapControl_WarInfo__GetMapUpdateState(this, method) == 1;
}


bool __fastcall MapControl_WarInfo__IsMultiMap(MapControl_WarInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MapControl_WarInfo_o *v3; // x19
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8

  v3 = this;
  if ( (byte_4B12F57 & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__,
                                     method,
                                     v2);
    byte_4B12F57 = 1;
  }
  mapInfoList = v3->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12F53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v10, v11);
    byte_4B12F53 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      mapInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v19.fields._current )
        sub_1BCAA3C(0LL, v13);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v19.fields._current, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v16 = this->fields.mapInfoList;
    if ( !v16 )
      sub_1BCAA3C(v14, v15);
    size = v16->fields._size;
    v18 = v16->fields._version + 1;
    v16->fields._size = 0;
    v16->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
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
  if ( ((status & flag) != 0) != setTo )
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.spotId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.spotRoadId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.mapGimmickId == this->fields.target;
}