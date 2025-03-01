void __fastcall MapControl___ctor(MapControl_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapControl_AreaBoardInfo___ctor(MapControl_AreaBoardInfo_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  void *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFA3EB & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFA3EB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEnt = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.eventEnt, 0LL, v3, v4, v5, v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.specialNoticeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.specialNoticeText, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  PartyOrganizationUtility_o *p_mapGimmickMaster; // x19
  MapGimmickMaster_o *mapGimmickMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFA405 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapGimmickMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BFA405 = 1;
  }
  mapGimmickMaster = this->fields.mapGimmickMaster;
  p_mapGimmickMaster = (PartyOrganizationUtility_o *)&this->fields.mapGimmickMaster;
  result = mapGimmickMaster;
  if ( !mapGimmickMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2E388(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
    p_mapGimmickMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C2E0D0(p_mapGimmickMaster, (int64_t)MasterData_object, v10, v11, v12, v13, v14, v15);
    return (MapGimmickMaster_o *)p_mapGimmickMaster->klass;
  }
  return result;
}


MapGimmickEntity_o *__fastcall MapControl_MapGimmickInfo__GetMine(
        MapControl_MapGimmickInfo_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *MapGimmickMaster; // x0
  __int64 v4; // x1

  if ( (byte_4BFA404 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__, method);
    byte_4BFA404 = 1;
  }
  MapGimmickMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_MapGimmickInfo__GetMapGimmickMaster(
                                                                     this,
                                                                     method);
  if ( !MapGimmickMaster )
    sub_1C2E388(0LL, v4);
  return (MapGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 MapGimmickMaster,
                                 this->fields.mapGimmickId,
                                 (const MethodInfo_327B180 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__GetEntity__);
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
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *spotInfoList; // x8
  int32_t size; // w2
  int v22; // w9
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *spotRoadInfoList; // x8
  int32_t v31; // w2
  int v32; // w9
  System_Collections_Generic_List_object__o *v33; // x20
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o **p_mapGimmickInfoList; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v41; // x8
  int32_t v42; // w2
  int v43; // w9

  if ( (byte_4BFA406 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v8);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v9);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v10);
    byte_4BFA406 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.spotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v11;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.spotInfoList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  spotInfoList = this->fields.spotInfoList;
  if ( !spotInfoList )
    goto LABEL_13;
  size = spotInfoList->fields._size;
  v22 = spotInfoList->fields._version + 1;
  spotInfoList->fields._size = 0;
  spotInfoList->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotInfoList->fields._items, 0, size, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.spotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v23;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.spotRoadInfoList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  spotRoadInfoList = this->fields.spotRoadInfoList;
  if ( !spotRoadInfoList )
    goto LABEL_13;
  v31 = spotRoadInfoList->fields._size;
  v32 = spotRoadInfoList->fields._version + 1;
  spotRoadInfoList->fields._size = 0;
  spotRoadInfoList->fields._version = v32;
  if ( v31 >= 1 )
    System_Array__Clear((System_Array_o *)spotRoadInfoList->fields._items, 0, v31, 0LL);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.mapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v33;
  p_mapGimmickInfoList = &this->fields.mapGimmickInfoList;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_mapGimmickInfoList, (int64_t)v33, v35, v36, v37, v38, v39, v40);
  v41 = *p_mapGimmickInfoList;
  if ( !*p_mapGimmickInfoList )
LABEL_13:
    sub_1C2E388(v18, v19);
  v42 = v41->fields._size;
  v43 = v41->fields._version + 1;
  v41->fields._size = 0;
  v41->fields._version = v43;
  if ( v42 >= 1 )
    System_Array__Clear((System_Array_o *)v41->fields._items, 0, v42, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall MapControl_MapInfo__AddChild(
        MapControl_MapInfo_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_SpotInfo_o *v6; // x19
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *spotInfoList; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4BFA408 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, *(_QWORD *)&spotId);
    sub_1C2E12C(&MapControl_SpotInfo_TypeInfo, v5);
    byte_4BFA408 = 1;
  }
  v6 = (MapControl_SpotInfo_o *)sub_1C2E378(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v6, v7);
  if ( !v6
    || (v6->fields.spotId = spotId,
        (spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList) == 0LL)
    || (items = spotInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__,
        ++spotInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(spotInfoList, v9);
  }
  size = spotInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    spotInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v6, v10, v11, v12, v13, v14, v15);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapGimmickInfo_o *__fastcall MapControl_MapInfo__AddMapGimmick(
        MapControl_MapInfo_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x19
  System_Collections_Generic_List_object__o *mapGimmickInfoList; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4BFA40A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, *(_QWORD *)&mapGimmickId);
    sub_1C2E12C(&MapControl_MapGimmickInfo_TypeInfo, v5);
    byte_4BFA40A = 1;
  }
  v6 = sub_1C2E378(MapControl_MapGimmickInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6
    || (*(_DWORD *)(v6 + 20) = mapGimmickId,
        (mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList) == 0LL)
    || (items = mapGimmickInfoList->fields._items,
        v16 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
        ++mapGimmickInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(mapGimmickInfoList, v8);
  }
  size = mapGimmickInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapGimmickInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    mapGimmickInfoList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
  }
  return (MapControl_MapGimmickInfo_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotRoadInfo_o *__fastcall MapControl_MapInfo__AddSpotRoad(
        MapControl_MapInfo_o *this,
        int32_t spotRoadId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x19
  System_Collections_Generic_List_object__o *spotRoadInfoList; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4BFA409 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, *(_QWORD *)&spotRoadId);
    sub_1C2E12C(&MapControl_SpotRoadInfo_TypeInfo, v5);
    byte_4BFA409 = 1;
  }
  v6 = sub_1C2E378(MapControl_SpotRoadInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6
    || (*(_DWORD *)(v6 + 20) = spotRoadId,
        (spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList) == 0LL)
    || (items = spotRoadInfoList->fields._items,
        v16 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__,
        ++spotRoadInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(spotRoadInfoList, v8);
  }
  size = spotRoadInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotRoadInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    spotRoadInfoList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
  }
  return (MapControl_SpotRoadInfo_o *)v6;
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
  PartyOrganizationUtility_o *p_mapMaster; // x19
  MapMaster_o *mapMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFA40B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_MapMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BFA40B = 1;
  }
  mapMaster = this->fields.mapMaster;
  p_mapMaster = (PartyOrganizationUtility_o *)&this->fields.mapMaster;
  result = mapMaster;
  if ( !mapMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2E388(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_MapMaster___);
    p_mapMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C2E0D0(p_mapMaster, (int64_t)MasterData_object, v10, v11, v12, v13, v14, v15);
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
    sub_1C2E388(0LL, v4);
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
  System_Collections_Generic_List_object__o *spotInfoList; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  System_Collections_Generic_List_object__o *spotRoadInfoList; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v27; // x8
  int32_t v28; // w2
  int v29; // w9
  System_Collections_Generic_List_object__o *mapGimmickInfoList; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *v33; // x8
  int32_t v34; // w2
  int v35; // w9
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o j; // [xsp+30h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-40h] BYREF

  if ( (byte_4BFA407 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    byte_4BFA407 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&j, 0, sizeof(j));
  memset(&v37, 0, sizeof(v37));
  spotInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotInfoList;
  if ( spotInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      spotInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    for ( i = v36;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
          MapControl_SpotInfo__Reset((MapControl_SpotInfo_o *)i.fields._current, v18) )
    {
      if ( !i.fields._current )
        sub_1C2E388(0LL, v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    v21 = this->fields.spotInfoList;
    if ( !v21 )
      goto LABEL_31;
    size = v21->fields._size;
    v23 = v21->fields._version + 1;
    v21->fields._size = 0;
    v21->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
  }
  spotRoadInfoList = (System_Collections_Generic_List_object__o *)this->fields.spotRoadInfoList;
  if ( spotRoadInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      spotRoadInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__GetEnumerator__);
    for ( j = v36; ; LODWORD(j.fields._current[1].klass) = 0 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &j,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__MoveNext__);
      if ( !v25 )
        break;
      if ( !j.fields._current )
        sub_1C2E388(v25, v26);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &j,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotRoadInfo__Dispose__);
    v27 = this->fields.spotRoadInfoList;
    if ( !v27 )
      goto LABEL_31;
    v28 = v27->fields._size;
    v29 = v27->fields._version + 1;
    v27->fields._size = 0;
    v27->fields._version = v29;
    if ( v28 >= 1 )
      System_Array__Clear((System_Array_o *)v27->fields._items, 0, v28, 0LL);
  }
  mapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapGimmickInfoList;
  if ( !mapGimmickInfoList )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    mapGimmickInfoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__GetEnumerator__);
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__MoveNext__);
    if ( !v31 )
      break;
    if ( !v37.fields._current )
      sub_1C2E388(v31, v32);
    LODWORD(v37.fields._current[1].klass) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapGimmickInfo__Dispose__);
  v33 = this->fields.mapGimmickInfoList;
  if ( !v33 )
LABEL_31:
    sub_1C2E388(v19, v20);
  v34 = v33->fields._size;
  v35 = v33->fields._version + 1;
  v33->fields._size = 0;
  v33->fields._version = v35;
  if ( v34 >= 1 )
    System_Array__Clear((System_Array_o *)v33->fields._items, 0, v34, 0LL);
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
      sub_1C2E388(0LL, v6);
    Entity = QuestPhaseMaster__GetEntity(QuestPhaseMaster, this->fields.questId, this->fields.phase, 0LL);
    this->fields.mine = Entity;
    sub_1C2E0D0((PartyOrganizationUtility_o *)p_mine, (int64_t)Entity, v8, v9, v10, v11, v12, v13);
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
  __int64 v3; // x1
  QuestPhaseMaster_o *result; // x0
  PartyOrganizationUtility_o *p_questPhaseMaster; // x19
  QuestPhaseMaster_o *questPhaseMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFA3EA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BFA3EA = 1;
  }
  questPhaseMaster = this->fields.questPhaseMaster;
  p_questPhaseMaster = (PartyOrganizationUtility_o *)&this->fields.questPhaseMaster;
  result = questPhaseMaster;
  if ( !questPhaseMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2E388(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    p_questPhaseMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C2E0D0(p_questPhaseMaster, (int64_t)MasterData_object, v10, v11, v12, v13, v14, v15);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8
  int64_t size; // x2
  int v21; // w9
  struct QuestEntity_o **p_questEnt; // x19

  if ( (byte_4BFA3EF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo, v4);
    byte_4BFA3EF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_PhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo___ctor__);
  this->fields.phaseInfoList = (struct System_Collections_Generic_List_MapControl_PhaseInfo__o *)v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.phaseInfoList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  phaseInfoList = this->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_1C2E388(v12, v13);
  size = (unsigned int)phaseInfoList->fields._size;
  v21 = phaseInfoList->fields._version + 1;
  phaseInfoList->fields._size = 0;
  phaseInfoList->fields._version = v21;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)phaseInfoList->fields._items, 0, size, 0LL);
  this->fields.questEnt = 0LL;
  p_questEnt = &this->fields.questEnt;
  *((_DWORD *)p_questEnt - 1) = 0;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_questEnt, 0LL, size, v14, v15, v16, v17, v18);
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
  int64_t v8; // x20
  System_Collections_Generic_List_object__o *phaseInfoList; // x0
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
  MapControl_PhaseInfo_o *result; // x0

  if ( (byte_4BFA3F1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__, *(_QWORD *)&questId);
    sub_1C2E12C(&MapControl_PhaseInfo_TypeInfo, v7);
    byte_4BFA3F1 = 1;
  }
  v8 = sub_1C2E378(MapControl_PhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_DWORD *)(v8 + 20) = phase,
        (phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList) == 0LL)
    || (items = phaseInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_MapControl_PhaseInfo__Add__,
        ++phaseInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(phaseInfoList, v10);
  }
  size = phaseInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      phaseInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    phaseInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
  }
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
  MapControl_QuestInfo_o **p_sameGroupQuestIds; // x21
  System_Collections_Generic_List_int__o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  unsigned __int64 v17; // x23
  int32_t v18; // w22
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 questEnt_low; // x10

  v4 = this;
  if ( (byte_4BFA3EC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, questIds);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    this = (MapControl_QuestInfo_o *)sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4BFA3EC = 1;
  }
  if ( questIds )
  {
    v8 = *(_QWORD *)&questIds->max_length;
    if ( (int)v8 >= 1 )
    {
      p_sameGroupQuestIds = (MapControl_QuestInfo_o **)&v4->fields.sameGroupQuestIds;
      if ( !v4->fields.sameGroupQuestIds )
      {
        v10 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v10,
          (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
        *p_sameGroupQuestIds = (MapControl_QuestInfo_o *)v10;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v4->fields.sameGroupQuestIds,
          (int64_t)v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      v17 = 0LL;
      do
      {
        if ( v17 >= questIds->max_length )
          sub_1C2E390(this, questIds);
        v18 = questIds->m_Items[v17 + 1];
        if ( v18 != v4->fields.questId )
        {
          this = *p_sameGroupQuestIds;
          if ( !*p_sameGroupQuestIds )
            goto LABEL_20;
          this = (MapControl_QuestInfo_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v18,
                                             (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *p_sameGroupQuestIds;
            if ( !*p_sameGroupQuestIds
              || (v19 = *(_QWORD *)&this->fields.questId,
                  v20 = Method_System_Collections_Generic_List_int__Add__,
                  ++HIDWORD(this->fields.questEnt),
                  !v19) )
            {
LABEL_20:
              sub_1C2E388(this, questIds);
            }
            questEnt_low = SLODWORD(this->fields.questEnt);
            if ( (unsigned int)questEnt_low >= *(_DWORD *)(v19 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                v18,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.questEnt) = questEnt_low + 1;
              *(_DWORD *)(v19 + 4 * questEnt_low + 32) = v18;
            }
          }
        }
        ++v17;
      }
      while ( (unsigned int)v8 != v17 );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
MapControl_PhaseInfo_o *__fastcall MapControl_QuestInfo__FindChild(
        MapControl_QuestInfo_o *this,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *phaseInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BFA3F2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__, *(_QWORD *)&phase);
    sub_1C2E12C(&System_Predicate_MapControl_PhaseInfo__TypeInfo, v5);
    sub_1C2E12C(&Method_MapControl_QuestInfo___c__DisplayClass55_0__FindChild_b__0__, v6);
    sub_1C2E12C(&MapControl_QuestInfo___c__DisplayClass55_0_TypeInfo, v7);
    byte_4BFA3F2 = 1;
  }
  v8 = sub_1C2E378(MapControl_QuestInfo___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = phase,
        phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList,
        v12 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_PhaseInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_MapControl_QuestInfo___c__DisplayClass55_0__FindChild_b__0__,
          0LL),
        !phaseInfoList) )
  {
    sub_1C2E388(v9, v10);
  }
  return (MapControl_PhaseInfo_o *)System_Collections_Generic_List_object___Find(
                                     phaseInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__Find__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t PhaseMax; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA3F6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1C2E12C(&NetworkManager_TypeInfo, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BFA3F6 = 1;
  }
  entity = 0LL;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v7);
    byte_4BF81D5 = 1;
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
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_15:
    sub_1C2E388(Instance, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  QuestEntity_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BFA3F7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BFA3F7 = 1;
  }
  if ( !this->fields.questId )
    return 0LL;
  result = this->fields.questEnt;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
    {
      sub_1C2E388(Instance, v7);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.questEnt,
      this->fields.questId,
      (const MethodInfo_327B1CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    return this->fields.questEnt;
  }
  return result;
}


int32_t __fastcall MapControl_QuestInfo__GetPhaseMax(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *phaseInfoList; // x8

  v2 = this;
  if ( (byte_4BFA3F5 & 1) == 0 )
  {
    this = (MapControl_QuestInfo_o *)sub_1C2E12C(
                                       &Method_System_Collections_Generic_List_MapControl_PhaseInfo__get_Count__,
                                       method);
    byte_4BFA3F5 = 1;
  }
  phaseInfoList = v2->fields.phaseInfoList;
  if ( !phaseInfoList )
    sub_1C2E388(this, method);
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
    sub_1C2E388(0LL, v3);
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
    sub_1C2E388(0LL, v3);
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
  NetworkManager_c *v4; // x0
  int32_t questId; // w19
  int64_t userIdNumber; // x20

  if ( (byte_4BFA3EE & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, method);
    sub_1C2E12C(&NetworkManager_TypeInfo, v3);
    byte_4BFA3EE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    byte_4BF81D5 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  questId = this->fields.questId;
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(userIdNumber, questId, 1, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsClear(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4BFA3ED & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, method);
    byte_4BFA3ED = 1;
  }
  questId = this->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38902436(questId, -1, 0, 0LL);
}


bool __fastcall MapControl_QuestInfo__IsDisaplayable(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  return this->fields.dispType != 0 && this->fields.dispType != 3;
}


bool __fastcall MapControl_QuestInfo__IsDisplayQuestNextIcon(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t PhaseMax; // w20
  QuestPhaseEntity_array *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  int32_t phaseCount; // w8
  int32_t v10; // w2

  if ( (byte_4BFA3F4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    byte_4BFA3F4 = 1;
  }
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(this, method);
  if ( !PhaseMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object
      || (Master_object = QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, this->fields.questId, 0LL)) == 0LL )
    {
      sub_1C2E388(Master_object, v7);
    }
    PhaseMax = Master_object->max_length;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( v8 )
  {
    phaseCount = this->fields.phaseCount;
    if ( phaseCount + 1 < PhaseMax )
      v10 = phaseCount + 1;
    else
      v10 = PhaseMax;
    LOBYTE(v8) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                   (QuestBehaviorMaster_o *)v8,
                   this->fields.questId,
                   v10,
                   6,
                   0LL);
  }
  return (char)v8;
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
    sub_1C2E388(0LL, v10);
  return v9->fields.type == 1;
}


void __fastcall MapControl_QuestInfo__Reset(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_int__o *sameGroupQuestIds; // x8
  int v9; // w9
  System_Collections_Generic_List_object__o *phaseInfoList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_MapControl_PhaseInfo__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA3F0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__, v7);
    byte_4BFA3F0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  sameGroupQuestIds = this->fields.sameGroupQuestIds;
  if ( sameGroupQuestIds )
  {
    v9 = sameGroupQuestIds->fields._version + 1;
    sameGroupQuestIds->fields._size = 0;
    sameGroupQuestIds->fields._version = v9;
  }
  phaseInfoList = (System_Collections_Generic_List_object__o *)this->fields.phaseInfoList;
  if ( phaseInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      phaseInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_PhaseInfo__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__MoveNext__);
      if ( !v11 )
        break;
      if ( !v18.fields._current )
        sub_1C2E388(v11, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_PhaseInfo__Dispose__);
    v15 = this->fields.phaseInfoList;
    if ( !v15 )
      sub_1C2E388(v13, v14);
    size = v15->fields._size;
    v17 = v15->fields._version + 1;
    v15->fields._size = 0;
    v15->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
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
  _DWORD *klass; // x8
  PartyOrganizationUtility_o *p_SpotInfo_k__BackingField; // x20
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // t1
  MapControl_SpotInfo_o *v8; // x21
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4BFA3F3 & 1) == 0 )
  {
    sub_1C2E12C(&MapControl_SpotInfo_TypeInfo, *(_QWORD *)&value);
    byte_4BFA3F3 = 1;
  }
  SpotInfo_k__BackingField = this->fields._SpotInfo_k__BackingField;
  p_SpotInfo_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._SpotInfo_k__BackingField;
  klass = SpotInfo_k__BackingField;
  if ( !SpotInfo_k__BackingField )
  {
    v8 = (MapControl_SpotInfo_o *)sub_1C2E378(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v8, v9);
    p_SpotInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)v8;
    sub_1C2E0D0(p_SpotInfo_k__BackingField, (int64_t)v8, v10, v11, v12, v13, v14, v15);
    klass = p_SpotInfo_k__BackingField->klass;
    if ( !p_SpotInfo_k__BackingField->klass )
      sub_1C2E388(v16, v17);
  }
  klass[4] = value;
}


void __fastcall MapControl_QuestInfo__SetTerminalParamsValue(MapControl_QuestInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4BFA3F8 & 1) == 0 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFA3F8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFA281 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  this->fields.warId = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4BFA461 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4BFA461 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapControl_QuestInfo__SetSpotID(this, v4->static_fields->_SpotId_k__BackingField, v2);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v5);
    byte_4BF8444 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questId = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BF8443 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BF8443 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.questPhase = v6->static_fields->_PhaseCnt_k__BackingField;
  if ( !byte_4BFA462 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BFA462 = 1;
  }
  if ( !v6->_2.cctor_finished )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AreaBoardInfo_k__BackingField = value;
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
  sub_1C2E0D0(
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
    sub_1C2E388(this, 0LL);
  return n->fields.phase == this->fields.phase;
}


void __fastcall MapControl_RootInfo___ctor(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  PartyOrganizationUtility_c *klass; // x8
  int32_t namespaze; // w2
  int v17; // w9

  if ( (byte_4BFA415 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_4BFA415 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.warInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v5;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  sub_1C2E0D0(p_fields, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    sub_1C2E388(v13, v14);
  namespaze = (int32_t)klass->_1.namespaze;
  v17 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v17;
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
  MapControl_WarInfo_o *v8; // x19
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_object__o *warInfoList; // x0
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

  if ( (byte_4BFA418 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, *(_QWORD *)&warId);
    sub_1C2E12C(&MapControl_WarInfo_TypeInfo, v7);
    byte_4BFA418 = 1;
  }
  v8 = (MapControl_WarInfo_o *)sub_1C2E378(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v8, dateTime, v9);
  if ( !v8
    || (v8->fields.warId = warId,
        (warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList) == 0LL)
    || (items = warInfoList->fields._items,
        v19 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__,
        ++warInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(warInfoList, v11);
  }
  size = warInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      warInfoList,
      (Il2CppObject *)v8,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    warInfoList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v8;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v8, v12, v13, v14, v15, v16, v17);
  }
  return v8;
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
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA41A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v7);
    byte_4BFA41A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      warInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v9 )
        break;
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_1C2E388(v9, v10);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v15.fields._current, v10);
      if ( !Mine )
        sub_1C2E388(0LL, v13);
      if ( Mine->fields.eventId == eventId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v15,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
        return (MapControl_WarInfo_o *)current;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  WarEntity_o *Mine; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA419 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v7);
    byte_4BFA419 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      warInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
      if ( !v9 )
        break;
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_1C2E388(v9, v10);
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v15.fields._current, v10);
      if ( !Mine )
        sub_1C2E388(0LL, v13);
      if ( Mine->fields.id == warId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v15,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
        return (MapControl_WarInfo_o *)current;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MapControl_WarInfo__o *__fastcall MapControl_RootInfo__GetOpenedWarInfoList(
        MapControl_RootInfo_o *this,
        bool isMainScnario,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MapControl_RootInfo___c_c *v10; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList; // x19
  struct MapControl_RootInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct MapControl_RootInfo___c_StaticFields *v21; // x0
  PartyOrganizationUtility_o *p__9__8_0; // x0
  Il2CppObject *v23; // x21
  struct MapControl_RootInfo___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4BFA41C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, isMainScnario);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___, v5);
    sub_1C2E12C(&System_Func_MapControl_WarInfo__bool__TypeInfo, v6);
    sub_1C2E12C(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__, v7);
    sub_1C2E12C(&Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__, v8);
    sub_1C2E12C(&MapControl_RootInfo___c_TypeInfo, v9);
    byte_4BFA41C = 1;
  }
  v10 = MapControl_RootInfo___c_TypeInfo;
  warInfoList = this->fields.warInfoList;
  if ( !MapControl_RootInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapControl_RootInfo___c_TypeInfo);
    v10 = MapControl_RootInfo___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( isMainScnario )
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = MapControl_RootInfo___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v10->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v14, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_0__, 0LL);
      v21 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v21->__9__8_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (PartyOrganizationUtility_o *)&v21->__9__8_0;
LABEL_14:
      sub_1C2E0D0(p__9__8_0, (int64_t)_9__8_0, v15, v16, v17, v18, v19, v20);
    }
  }
  else
  {
    _9__8_0 = (System_Func_object__bool__o *)static_fields->__9__8_1;
    if ( !_9__8_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = MapControl_RootInfo___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v10->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_MapControl_WarInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__8_0, v23, Method_MapControl_RootInfo___c__GetOpenedWarInfoList_b__8_1__, 0LL);
      v24 = MapControl_RootInfo___c_TypeInfo->static_fields;
      v24->__9__8_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__8_0;
      p__9__8_0 = (PartyOrganizationUtility_o *)&v24->__9__8_1;
      goto LABEL_14;
    }
  }
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warInfoList,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v25,
                                                                    (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
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
  System_Collections_Generic_List_object__o *warInfoList; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  bool v11; // w20
  WarEntity_o *Mine; // x0
  __int64 v13; // x1
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BFA41B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v7);
    byte_4BFA41B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( !warInfoList )
    sub_1C2E388(0LL, *(_QWORD *)&warId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    warInfoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    v11 = v9;
    if ( !v9 )
      break;
    if ( !v17.fields._current )
      sub_1C2E388(v9, v10);
    if ( HIDWORD(v17.fields._current[1].klass) == warId && ((__int64)v17.fields._current[1].monitor & 1) == 0 )
    {
      Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v17.fields._current, v10);
      if ( !Mine )
        sub_1C2E388(0LL, v13);
      if ( WarEntity__HasFlag(Mine, 128, 0LL) )
      {
        v14 = 4;
        goto LABEL_13;
      }
    }
  }
  v14 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return v11 && v14 == 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MapControl_RootInfo__Remove(MapControl_RootInfo_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *warInfoList; // x20
  System_Predicate_object__o *v13; // x22
  unsigned int Index; // w0

  if ( (byte_4BFA417 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v5);
    sub_1C2E12C(&System_Predicate_MapControl_WarInfo__TypeInfo, v6);
    sub_1C2E12C(&Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__, v7);
    sub_1C2E12C(&MapControl_RootInfo___c__DisplayClass3_0_TypeInfo, v8);
    byte_4BFA417 = 1;
  }
  v9 = sub_1C2E378(MapControl_RootInfo___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_DWORD *)(v9 + 16) = warId;
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    v13 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_WarInfo__TypeInfo);
    System_Predicate_object____ctor(
      v13,
      (Il2CppObject *)v9,
      Method_MapControl_RootInfo___c__DisplayClass3_0__Remove_b__0__,
      0LL);
    Index = System_Collections_Generic_List_object___FindIndex(
              warInfoList,
              (System_Predicate_T__o *)v13,
              (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    if ( Index != -1 )
    {
      v11 = Index;
      v10 = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
      if ( v10 )
      {
        System_Collections_Generic_List_object___RemoveAt(
          v10,
          v11,
          (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
        return;
      }
LABEL_9:
      sub_1C2E388(v10, v11);
    }
  }
}


void __fastcall MapControl_RootInfo__Reset(MapControl_RootInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *warInfoList; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_MapControl_WarInfo__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA416 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v6);
    byte_4BFA416 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  warInfoList = (System_Collections_Generic_List_object__o *)this->fields.warInfoList;
  if ( warInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      warInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1C2E388(0LL, v8);
      MapControl_WarInfo__Reset((MapControl_WarInfo_o *)v14.fields._current, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    v11 = this->fields.warInfoList;
    if ( !v11 )
      sub_1C2E388(v9, v10);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
  }
}


void __fastcall MapControl_RootInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFA41D & 1) == 0 )
  {
    sub_1C2E12C(&MapControl_RootInfo___c_TypeInfo, v1);
    byte_4BFA41D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(MapControl_RootInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MapControl_RootInfo___c_TypeInfo->static_fields->__9 = (struct MapControl_RootInfo___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)MapControl_RootInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, info);
  return WarEntity__HasFlag((WarEntity_o *)this, 128, 0LL) && (info->fields.status & 1) == 0;
}


bool __fastcall MapControl_RootInfo___c___GetOpenedWarInfoList_b__8_1(
        MapControl_RootInfo___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


void __fastcall MapControl_SpotInfo___ctor(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *questInfoList; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_int__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BFA3F9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v6);
    byte_4BFA3F9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.questInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.questInfoList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  questInfoList = this->fields.questInfoList;
  if ( !questInfoList )
    sub_1C2E388(v14, v15);
  size = questInfoList->fields._size;
  v18 = questInfoList->fields._version + 1;
  questInfoList->fields._size = 0;
  questInfoList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questInfoList->fields._items, 0, size, 0LL);
  this->fields.questCount = 0;
  v19 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.availableQuestIdList = v19;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.availableQuestIdList,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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

  if ( (byte_4BFA3FD & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&questId);
    byte_4BFA3FD = 1;
  }
  availableQuestIdList = this->fields.availableQuestIdList;
  if ( !availableQuestIdList
    || (items = availableQuestIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++availableQuestIdList->fields._version,
        !items) )
  {
    sub_1C2E388(availableQuestIdList, *(_QWORD *)&questId);
  }
  size = availableQuestIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      availableQuestIdList,
      questId,
      *(const MethodInfo_364E888 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  __int64 v5; // x1
  MapControl_QuestInfo_o *v6; // x19
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *questInfoList; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4BFA3FB & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, *(_QWORD *)&questId);
    sub_1C2E12C(&MapControl_QuestInfo_TypeInfo, v5);
    byte_4BFA3FB = 1;
  }
  v6 = (MapControl_QuestInfo_o *)sub_1C2E378(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v6, v7);
  if ( !v6
    || (v6->fields.questId = questId,
        (questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList) == 0LL)
    || (items = questInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
        ++questInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(questInfoList, v9);
  }
  size = questInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      questInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    questInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v6, v10, v11, v12, v13, v14, v15);
  }
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
  System_Collections_Generic_IEnumerable_T__o *availableQuestIdList; // x19
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_4BFA3FC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor___77707560, isInstance);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4BFA3FC = 1;
  }
  if ( isInstance )
    return this->fields.availableQuestIdList;
  availableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.availableQuestIdList;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56942940(
    v8,
    availableQuestIdList,
    (const MethodInfo_364E15C *)Method_System_Collections_Generic_List_int___ctor___77707560);
  return v8;
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
    sub_1C2E388(0LL, v4);
  return SpotLayerMaster__GetParentLayerBySpotId(SpotLayerMaster, this->fields.spotId, 0LL);
}


int32_t __fastcall MapControl_SpotInfo__GetMapID(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *Mine; // x0
  __int64 v3; // x1

  Mine = MapControl_SpotInfo__GetMine(this, method);
  if ( !Mine )
    sub_1C2E388(0LL, v3);
  return Mine->fields.mapId;
}


SpotEntity_o *__fastcall MapControl_SpotInfo__GetMine(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  SpotEntity_o *result; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *SpotMaster; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BFA3FE & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, method);
    byte_4BFA3FE = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    SpotMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotMaster(this, method);
    if ( !SpotMaster )
      sub_1C2E388(0LL, v5);
    Entity = DataMasterBase_object__object__int___GetEntity(
               SpotMaster,
               this->fields.spotId,
               (const MethodInfo_327B180 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    this->fields.mine = (struct SpotEntity_o *)Entity;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mine, (int64_t)Entity, v7, v8, v9, v10, v11, v12);
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
  DataMasterBase_TMaster__TEntity__PKType__o *SpotLayerMaster; // x0
  __int64 v5; // x1

  if ( (byte_4BFA400 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, method);
    byte_4BFA400 = 1;
  }
  result = this->fields.spotLayerEnt;
  if ( !result )
  {
    SpotLayerMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotInfo__GetSpotLayerMaster(
                                                                      this,
                                                                      method);
    if ( !SpotLayerMaster )
      sub_1C2E388(0LL, v5);
    DataMasterBase_object__object__int___TryGetEntity(
      SpotLayerMaster,
      (Il2CppObject **)&this->fields.spotLayerEnt,
      this->fields.spotId,
      (const MethodInfo_327B1CC *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
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
  PartyOrganizationUtility_o *p_spotLayerMaster; // x19
  SpotLayerMaster_o *spotLayerMaster; // t1
  Il2CppObject *Master_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BFA401 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_SpotLayerMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFA401 = 1;
  }
  spotLayerMaster = this->fields.spotLayerMaster;
  p_spotLayerMaster = (PartyOrganizationUtility_o *)&this->fields.spotLayerMaster;
  result = spotLayerMaster;
  if ( !spotLayerMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SpotLayerMaster___);
    p_spotLayerMaster->klass = (PartyOrganizationUtility_c *)Master_object;
    sub_1C2E0D0(p_spotLayerMaster, (int64_t)Master_object, v8, v9, v10, v11, v12, v13);
    return (SpotLayerMaster_o *)p_spotLayerMaster->klass;
  }
  return result;
}


SpotMaster_o *__fastcall MapControl_SpotInfo__GetSpotMaster(MapControl_SpotInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SpotMaster_o *result; // x0
  PartyOrganizationUtility_o *p_spotMaster; // x19
  SpotMaster_o *spotMaster; // t1
  Il2CppObject *Master_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BFA3FF & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_SpotMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFA3FF = 1;
  }
  spotMaster = this->fields.spotMaster;
  p_spotMaster = (PartyOrganizationUtility_o *)&this->fields.spotMaster;
  result = spotMaster;
  if ( !spotMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SpotMaster___);
    p_spotMaster->klass = (PartyOrganizationUtility_c *)Master_object;
    sub_1C2E0D0(p_spotMaster, (int64_t)Master_object, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_object__o *questInfoList; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA3FA & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v6);
    byte_4BFA3FA = 1;
  }
  memset(&v14, 0, sizeof(v14));
  questInfoList = (System_Collections_Generic_List_object__o *)this->fields.questInfoList;
  if ( questInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      questInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1C2E388(0LL, v8);
      MapControl_QuestInfo__Reset((MapControl_QuestInfo_o *)v14.fields._current, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v11 = this->fields.questInfoList;
    if ( !v11 )
      sub_1C2E388(v9, v10);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
    sub_1C2E0D0(
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
  DataMasterBase_TMaster__TEntity__PKType__o *SpotRoadMaster; // x0
  __int64 v4; // x1

  if ( (byte_4BFA402 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__, method);
    byte_4BFA402 = 1;
  }
  SpotRoadMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)MapControl_SpotRoadInfo__GetSpotRoadMaster(
                                                                   this,
                                                                   method);
  if ( !SpotRoadMaster )
    sub_1C2E388(0LL, v4);
  return (SpotRoadEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               SpotRoadMaster,
                               this->fields.spotRoadId,
                               (const MethodInfo_327B180 *)Method_DataMasterBase_SpotRoadMaster__SpotRoadEntity__int__GetEntity__);
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
  PartyOrganizationUtility_o *p_spotRoadMaster; // x19
  SpotRoadMaster_o *spotRoadMaster; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BFA403 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_SpotRoadMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BFA403 = 1;
  }
  spotRoadMaster = this->fields.spotRoadMaster;
  p_spotRoadMaster = (PartyOrganizationUtility_o *)&this->fields.spotRoadMaster;
  result = spotRoadMaster;
  if ( !spotRoadMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2E388(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
    p_spotRoadMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C2E0D0(p_spotRoadMaster, (int64_t)MasterData_object, v10, v11, v12, v13, v14, v15);
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x8
  int32_t size; // w2
  int v24; // w9

  if ( (byte_4BFA40C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, dateTime);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v6);
    byte_4BFA40C = 1;
  }
  this->fields.DEFAULT_WAR_CHECK_STATUS = 7;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.mapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mapInfoList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  this->fields.mine = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mine, 0LL, v14, v15, v16, v17, v18, v19);
  mapInfoList = this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1C2E388(v20, v21);
  size = mapInfoList->fields._size;
  v24 = mapInfoList->fields._version + 1;
  mapInfoList->fields._size = 0;
  mapInfoList->fields._version = v24;
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
  __int64 v5; // x1
  MapControl_MapInfo_o *v6; // x19
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4BFA40E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, *(_QWORD *)&mapId);
    sub_1C2E12C(&MapControl_MapInfo_TypeInfo, v5);
    byte_4BFA40E = 1;
  }
  v6 = (MapControl_MapInfo_o *)sub_1C2E378(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v6, v7);
  if ( !v6
    || (v6->fields.warId = this->fields.warId,
        v6->fields.mapId = mapId,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0LL)
    || (items = mapInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__,
        ++mapInfoList->fields._version,
        !items) )
  {
    sub_1C2E388(mapInfoList, v9);
  }
  size = mapInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mapInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    mapInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v6, v10, v11, v12, v13, v14, v15);
  }
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
  __int64 v22; // x20
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x24
  System_Predicate_object__o **v26; // x21
  System_Predicate_object__o **v27; // x22
  System_Predicate_object__o **v28; // x23
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_Predicate_object__o *v31; // x26
  Il2CppClass *klass; // x25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool v39; // w0
  System_Predicate_object__o *v40; // x26
  Il2CppClass *v41; // x25
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Predicate_object__o *v48; // x26
  System_Collections_Generic_List_object__o *monitor; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BFA412 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__,
      *(_QWORD *)&commandType);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v14);
    sub_1C2E12C(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v15);
    sub_1C2E12C(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v16);
    sub_1C2E12C(&System_Predicate_MapControl_SpotInfo__TypeInfo, v17);
    sub_1C2E12C(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__, v18);
    sub_1C2E12C(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__, v19);
    sub_1C2E12C(&Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__, v20);
    sub_1C2E12C(&MapControl_WarInfo___c__DisplayClass17_0_TypeInfo, v21);
    byte_4BFA412 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v22 = sub_1C2E378(MapControl_WarInfo___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22
    || (*(_DWORD *)(v22 + 16) = target,
        (mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList) == 0LL) )
  {
    sub_1C2E388(mapInfoList, v24);
  }
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    mapInfoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v26 = (System_Predicate_object__o **)(v22 + 24);
  v27 = (System_Predicate_object__o **)(v22 + 32);
  v28 = (System_Predicate_object__o **)(v22 + 40);
  v58 = v57;
  while ( 2 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( v29 )
    {
      current = v58.fields._current;
      switch ( commandType )
      {
        case 0:
          if ( !v58.fields._current )
            sub_1C2E388(v29, v30);
          v31 = *v26;
          klass = v58.fields._current[2].klass;
          if ( !*v26 )
          {
            v31 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v31,
              (Il2CppObject *)v22,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__0__,
              0LL);
            *v26 = v31;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)v31, v33, v34, v35, v36, v37, v38);
          }
          if ( !klass )
            sub_1C2E388(v29, v30);
          v39 = System_Collections_Generic_List_object___Exists(
                  (System_Collections_Generic_List_object__o *)klass,
                  (System_Predicate_T__o *)v31,
                  (const MethodInfo_366BED8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Exists__);
          goto LABEL_28;
        case 1:
          if ( !v58.fields._current )
            sub_1C2E388(v29, v30);
          v48 = *v27;
          monitor = (System_Collections_Generic_List_object__o *)v58.fields._current[2].monitor;
          if ( !*v27 )
          {
            v48 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
            System_Predicate_object____ctor(
              v48,
              (Il2CppObject *)v22,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__1__,
              0LL);
            *v27 = v48;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v48, v50, v51, v52, v53, v54, v55);
          }
          if ( !monitor )
            sub_1C2E388(v29, v30);
          v39 = System_Collections_Generic_List_object___Exists(
                  monitor,
                  (System_Predicate_T__o *)v48,
                  (const MethodInfo_366BED8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Exists__);
          goto LABEL_28;
        case 2:
          if ( !v58.fields._current )
            sub_1C2E388(v29, v30);
          v40 = *v28;
          v41 = v58.fields._current[3].klass;
          if ( !*v28 )
          {
            v40 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
            System_Predicate_object____ctor(
              v40,
              (Il2CppObject *)v22,
              Method_MapControl_WarInfo___c__DisplayClass17_0__GetActionMap_b__2__,
              0LL);
            *v28 = v40;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 40), (int64_t)v40, v42, v43, v44, v45, v46, v47);
          }
          if ( !v41 )
            sub_1C2E388(v29, v30);
          v39 = System_Collections_Generic_List_object___Exists(
                  (System_Collections_Generic_List_object__o *)v41,
                  (System_Predicate_T__o *)v40,
                  (const MethodInfo_366BED8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Exists__);
LABEL_28:
          if ( v39 )
            goto LABEL_29;
          continue;
        case 3:
          if ( !v58.fields._current )
            sub_1C2E388(v29, v30);
          if ( HIDWORD(v58.fields._current[1].klass) != *(_DWORD *)(v22 + 16) )
            continue;
LABEL_29:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v58,
            (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
          break;
        default:
          continue;
      }
    }
    else
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v58,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
    sub_1C2E388(0LL, v3);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BFA40F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v8);
    byte_4BFA40F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !MapControl_WarInfo__IsMultiMap(this, *(const MethodInfo **)&mapId) )
  {
LABEL_11:
    mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
    if ( mapInfoList )
      return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                       mapInfoList,
                                       0,
                                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
LABEL_15:
    sub_1C2E388(mapInfoList, v9);
  }
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    mapInfoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  do
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v11 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      goto LABEL_11;
    }
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C2E388(v11, v12);
  }
  while ( HIDWORD(v15.fields._current[1].klass) != mapId );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
  __int64 v3; // x1
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4BFA414 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_MapUpdateScheduleMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFA414 = 1;
  }
  result = this->fields.mapUpdateState;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_MapUpdateScheduleMaster___);
    if ( !Master_object )
      sub_1C2E388(0LL, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarEntity_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BFA413 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BFA413 = 1;
  }
  result = this->fields.mine;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
    {
      sub_1C2E388(Instance, v7);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      (Il2CppObject **)&this->fields.mine,
      this->fields.warId,
      (const MethodInfo_327B1CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA410 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__, v7);
    byte_4BFA410 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1C2E388(0LL, method);
  if ( mapInfoList->fields._size == 1 )
    return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___get_Item(
                                     mapInfoList,
                                     0,
                                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MapControl_MapInfo__get_Item__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    mapInfoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C2E388(v10, v11);
    if ( LOBYTE(v13.fields._current[1].monitor) )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
      return (MapControl_MapInfo_o *)current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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
    sub_1C2E388(0LL, v3);
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
  if ( (byte_4BFA411 & 1) == 0 )
  {
    this = (MapControl_WarInfo_o *)sub_1C2E12C(
                                     &Method_System_Collections_Generic_List_MapControl_MapInfo__get_Count__,
                                     method);
    byte_4BFA411 = 1;
  }
  mapInfoList = v2->fields.mapInfoList;
  if ( !mapInfoList )
    sub_1C2E388(this, method);
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
  System_Collections_Generic_List_object__o *mapInfoList; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_MapControl_MapInfo__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA40D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v6);
    byte_4BFA40D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  mapInfoList = (System_Collections_Generic_List_object__o *)this->fields.mapInfoList;
  this->fields.status = this->fields.DEFAULT_WAR_CHECK_STATUS;
  if ( mapInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      mapInfoList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1C2E388(0LL, v8);
      MapControl_MapInfo__Reset((MapControl_MapInfo_o *)v14.fields._current, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    v11 = this->fields.mapInfoList;
    if ( !v11 )
      sub_1C2E388(v9, v10);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
    sub_1C2E388(this, 0LL);
  return x->fields.spotId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__1(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.spotRoadId == this->fields.target;
}


bool __fastcall MapControl_WarInfo___c__DisplayClass17_0___GetActionMap_b__2(
        MapControl_WarInfo___c__DisplayClass17_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.mapGimmickId == this->fields.target;
}