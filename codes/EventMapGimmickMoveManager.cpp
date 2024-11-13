void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19F81 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo, v5, v6);
    byte_4B19F81 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B19F7B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
      data,
      method);
    byte_4B19F7B = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_1BCAA3C(eventMapGimmickMoveDataList, data);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


float __fastcall EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
        int64_t calcTime,
        EventRaidEntity_o *eventRaidEnt,
        MapGimmickPathEntity_o *mapGimmickPathEnt,
        const MethodInfo *method)
{
  float v4; // s8
  float v5; // s0

  v4 = 0.0;
  if ( eventRaidEnt )
  {
    if ( !mapGimmickPathEnt )
      sub_1BCAA3C(calcTime, eventRaidEnt);
    v5 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickPathEnt->fields.mapGimmickId,
           (float)(calcTime - eventRaidEnt->fields.startedAt) / (float)mapGimmickPathEnt->fields.moveTime,
           (const MethodInfo *)eventRaidEnt);
    if ( v5 >= 0.0 )
      return fminf(v5, 1.0);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall EventMapGimmickMoveManager__CalcMapGimmickPathRate(
        int32_t targetId,
        int32_t targetNum,
        MapGimmickPathEntity_o *mapGimmickMoveEnt,
        const MethodInfo *method)
{
  int32_t v6; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t valueType; // w8
  float v16; // s8
  __int64 v17; // x1
  int64_t ProgressNum; // x21
  int v19; // w8
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v21; // x20
  int64_t Time; // x0
  const MethodInfo *v23; // x3

  v6 = targetId;
  if ( (byte_4B19F7E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetNum, mapGimmickMoveEnt);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRaidMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    *(_QWORD *)&targetId = sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    byte_4B19F7E = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_22;
  valueType = mapGimmickMoveEnt->fields.valueType;
  v16 = 0.0;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v16,
               *(const MethodInfo **)&targetNum);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetNum);
    ProgressNum = CondType__GetProgressNum(32, v6, 0LL, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
    if ( *(_QWORD *)&targetId )
    {
      *(_QWORD *)&targetId = QuestGroupMaster__GetQuestIdListByGroupId(*(QuestGroupMaster_o **)&targetId, v6, 2, 0LL);
      if ( *(_QWORD *)&targetId )
      {
        v19 = *(_DWORD *)(*(_QWORD *)&targetId + 24LL);
        if ( v19 >= 1 )
          v16 = (float)ProgressNum / (float)v19;
        return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                 mapGimmickMoveEnt->fields.mapGimmickId,
                 v16,
                 *(const MethodInfo **)&targetNum);
      }
    }
LABEL_22:
    sub_1BCAA3C(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetNum);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_22;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0LL);
  if ( Entity )
  {
    v21 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetNum);
    Time = NetworkManager__getTime(0LL);
    v16 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time, v21, mapGimmickMoveEnt, v23);
  }
  return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickMoveEnt->fields.mapGimmickId,
           v16,
           *(const MethodInfo **)&targetNum);
}


void __fastcall EventMapGimmickMoveManager__Clear(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *current; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19F7A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v10,
      v11);
    byte_4B19F7A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    eventMapGimmickMoveDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v13 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1BCAA3C(v13, v14);
    v31.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1BCA784((PartyOrganizationUtility_o *)&current[1].monitor, 0LL, v15, v16, v17, v18, v19, v20);
    current[2].klass = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&current[2], 0LL, v22, v23, v24, v25, v26, v27);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v28 = this->fields.eventMapGimmickMoveDataList;
  if ( !v28 )
LABEL_13:
    sub_1BCAA3C(eventMapGimmickMoveDataList, method);
  size = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B19F80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapGimmickPathMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B19F80 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                           (MapGimmickPathMaster_o *)Master_object,
                           mapGimmickId,
                           0LL);
  if ( MapGimmickPathEntity )
    return (float)(1.0
                 - EventMapGimmickMoveManager__CalcMapGimmickPathRate(
                     MapGimmickPathEntity->fields.targetId,
                     MapGimmickPathEntity->fields.targetNum,
                     MapGimmickPathEntity,
                     v9))
         * (float)MapGimmickPathEntity->fields.distance;
  else
    return 0.0;
}


// attributes: thunk
void __fastcall EventMapGimmickMoveManager__Init(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  EventMapGimmickMoveManager__Clear(this, method);
}


float __fastcall EventMapGimmickMoveManager__LimitMapGimmickPathRate(
        int32_t mapGimmickId,
        float currentRate,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B19F7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___, method, v3);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B19F7F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return MapGimmickPathReleaseMaster__LimitMapGimmickPathRate(
           (MapGimmickPathReleaseMaster_o *)Master_object,
           mapGimmickId,
           currentRate,
           0LL);
}


void __fastcall EventMapGimmickMoveManager__UpdateAllMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19F7C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v8,
      v9);
    byte_4B19F7C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    eventMapGimmickMoveDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v11 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v11,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v13.fields._current,
      v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v29; // x19
  void *Master_object; // x0
  const MethodInfo *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x20
  UnityEngine_Object_o *v39; // x21
  UnityEngine_Object_o *v40; // x21
  __int64 v41; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v43; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v46; // x21
  float v47; // s0
  float v48; // s8
  __int64 v49; // x1
  Il2CppObject *Component_object; // x24
  int32_t valueType; // w8
  int v52; // s0
  int v53; // s1
  int v54; // s2
  UnityEngine_GameObject_o *v55; // x0
  EventRaidEntity_o *v56; // x22
  float v57; // s0
  float v58; // s1
  float v59; // s2
  float v60; // s13
  float v61; // s14
  float v62; // s15
  float v63; // s0
  float v64; // s12
  __int64 v65; // x2
  float v66; // s0
  float v67; // s1
  float v68; // s2
  __int64 v69; // x8
  float v70; // s9
  float v71; // s10
  float v72; // s11
  float v73; // s13
  float v74; // s10
  float v75; // s9
  float v76; // s8
  float v77; // s12
  int64_t Time; // x0
  const MethodInfo *v79; // x3
  float v80; // s0
  __int64 v81; // x2
  float v82; // s8
  float v83; // s9
  float v84; // s10
  float v85; // s13
  float v86; // s9
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_object__o *v89; // x21
  UITweener_o *v90; // x20
  int v91; // w8
  __int64 v92; // x9
  EventDelegate_Callback_o *v93; // x22
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  EventDelegate_o *v97; // x19
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  Il2CppClass **v107; // x0
  int v108; // [xsp+8h] [xbp-98h]
  float z; // [xsp+Ch] [xbp-94h]
  float y; // [xsp+58h] [xbp-48h]
  float x; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F7D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, data, method);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRaidMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapGimmickPathMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__, v25, v26);
    sub_1BCA7E0(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, v27, v28);
    byte_4B19F7D = 1;
  }
  v29 = sub_1BCAA2C(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_77;
  *(_QWORD *)(v29 + 16) = data;
  v38 = v29 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)data, v32, v33, v34, v35, v36, v37);
  if ( !*(_QWORD *)(v29 + 16) )
    goto LABEL_77;
  v39 = *(UnityEngine_Object_o **)(*(_QWORD *)(v29 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  Master_object = (void *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v38 )
      goto LABEL_77;
    v40 = *(UnityEngine_Object_o **)(*(_QWORD *)v38 + 32LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( !UnityEngine_Object__op_Equality(v40, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v38 || !Master_object )
        goto LABEL_77;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v38 + 16LL),
                               0LL);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v46 = MapGimmickPathEntity;
        v47 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v43);
        if ( !*(_QWORD *)v38 )
          goto LABEL_77;
        Master_object = *(void **)(*(_QWORD *)v38 + 24LL);
        if ( !Master_object )
          goto LABEL_77;
        v48 = v47;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
        Master_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
          UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Component_object, 0LL);
        }
        valueType = v46->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_77;
          Master_object = EventRaidMaster__GetEntity((EventRaidMaster_o *)Master_object, targetId, targetNum, 0LL);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v38 )
              goto LABEL_77;
            v56 = (EventRaidEntity_o *)Master_object;
            Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            *(UnityEngine_Vector3_o *)&v57 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               0.0,
                                               0LL);
            if ( !*(_QWORD *)v38 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v60 = v57;
            v61 = v58;
            v62 = v59;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    v48,
                                    0LL);
            y = PointAsWorldFlatten.fields.y;
            x = PointAsWorldFlatten.fields.x;
            z = PointAsWorldFlatten.fields.z;
            if ( !*(_QWORD *)v38 )
              goto LABEL_77;
            v63 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(*(_QWORD *)v38 + 16LL), 1.0, v31);
            if ( !*(_QWORD *)v38 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v64 = v63;
            *(UnityEngine_Vector3_o *)&v66 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               v63,
                                               0LL);
            *(float *)(v29 + 24) = v66;
            v69 = *(_QWORD *)(v29 + 16);
            *(float *)(v29 + 28) = v67;
            *(float *)(v29 + 32) = v68;
            if ( !v69 )
              goto LABEL_77;
            v70 = v66;
            v71 = v67;
            v72 = v68;
            v108 = *(_DWORD *)(v69 + 40);
            if ( !byte_4B109C3 )
            {
              sub_1BCA7E0(&System_Math_TypeInfo, v31, v65);
              byte_4B109C3 = 1;
            }
            v73 = v70 - v60;
            v74 = v71 - v61;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
            Master_object = BalanceConfig_TypeInfo;
            v75 = sqrtf((float)((float)(v72 - v62) * (float)(v72 - v62)) + (float)((float)(v73 * v73)
                                                                                 + (float)(v74 * v74)));
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
              Master_object = BalanceConfig_TypeInfo;
            }
            if ( v75 < 0.001 )
              goto LABEL_80;
            v76 = (float)(v64 - v48) * (float)v108;
            v77 = (float)*(int *)(*((_QWORD *)Master_object + 23) + 260LL);
            if ( v76 > v77 )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
              Time = NetworkManager__getTime(0LL);
              v80 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v77, v56, v46, v79);
              if ( !*(_QWORD *)v38 )
                goto LABEL_77;
              Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
              if ( !Master_object )
                goto LABEL_77;
              v113 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v80, 0LL);
              *(UnityEngine_Vector3_o *)(v29 + 24) = v113;
              v82 = v113.fields.x;
              v83 = v113.fields.y;
              v84 = v113.fields.z;
              if ( !byte_4B109C3 )
              {
                sub_1BCA7E0(&System_Math_TypeInfo, v31, v81);
                byte_4B109C3 = 1;
              }
              Master_object = System_Math_TypeInfo;
              v85 = v82 - x;
              v86 = v83 - y;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
              v76 = v77;
              if ( sqrtf((float)((float)(v84 - z) * (float)(v84 - z)) + (float)((float)(v85 * v85) + (float)(v86 * v86))) < 0.001 )
              {
LABEL_80:
                if ( *(_QWORD *)v38 )
                {
                  v55 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v38 + 24LL);
                  v52 = *(_DWORD *)(v29 + 24);
                  v53 = *(_DWORD *)(v29 + 28);
                  v54 = *(_DWORD *)(v29 + 32);
                  goto LABEL_66;
                }
LABEL_77:
                sub_1BCAA3C(Master_object, v31);
              }
            }
            if ( !*(_QWORD *)v38 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v38 + 24LL);
            if ( !Master_object )
              goto LABEL_77;
            Master_object = UnityEngine_GameObject__AddComponent_object_(
                              (UnityEngine_GameObject_o *)Master_object,
                              (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
            if ( !Master_object )
              goto LABEL_77;
            *((_BYTE *)Master_object + 152) = 1;
            v89 = (System_Collections_Generic_List_object__o *)*((_QWORD *)Master_object + 9);
            *((float *)Master_object + 32) = x;
            *((float *)Master_object + 33) = y;
            v90 = (UITweener_o *)Master_object;
            *((float *)Master_object + 34) = z;
            v91 = *(_DWORD *)(v29 + 32);
            v92 = *(_QWORD *)(v29 + 24);
            *((float *)Master_object + 14) = v76;
            *((_DWORD *)Master_object + 8) = 0;
            *((_DWORD *)Master_object + 37) = v91;
            *(_QWORD *)((char *)Master_object + 140) = v92;
            v93 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v31, v87, v88);
            EventDelegate_Callback___ctor(
              v93,
              (Il2CppObject *)v29,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0LL);
            v97 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v94, v95, v96);
            EventDelegate___ctor_47348668(v97, v93, 0LL);
            if ( !v89 )
              goto LABEL_77;
            items = v89->fields._items;
            v105 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++v89->fields._version;
            if ( !items )
              goto LABEL_77;
            size = v89->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v89,
                (Il2CppObject *)v97,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v107 = &items->obj.klass + size;
              v89->fields._size = size + 1;
              v107[4] = (Il2CppClass *)v97;
              sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 4), (int64_t)v97, v98, v99, v100, v101, v102, v103);
            }
            UITweener__PlayForward(v90, 0LL);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v38 )
          {
            Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0LL);
              if ( *(_QWORD *)v38 )
              {
                Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v48, 0LL);
                  if ( *(_QWORD *)v38 )
                  {
                    Master_object = *(void **)(*(_QWORD *)v38 + 32LL);
                    if ( Master_object )
                    {
                      *(UnityEngine_Vector3_o *)&v52 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                         (Custom2dSplineMesh_o *)Master_object,
                                                         *((float *)Master_object + 17),
                                                         0LL);
                      if ( *(_QWORD *)v38 )
                      {
                        v55 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v38 + 24LL);
LABEL_66:
                        GameObjectExtensions__SetPosition(v55, *(UnityEngine_Vector3_o *)&v52, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_77;
        }
      }
    }
  }
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData___ctor(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t mapGimmickId,
        UnityEngine_GameObject_o *mapGimmickObject,
        Custom2dSplineMesh_o *mapGimmickPathMesh,
        int32_t moveTime,
        const MethodInfo *method)
{
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MapGimmickId_k__BackingField = mapGimmickId;
  v10->fields._MapGimmickObject_k__BackingField = mapGimmickObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields._MapGimmickObject_k__BackingField,
    (int64_t)mapGimmickObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)mapGimmickPathMesh, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = moveTime;
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = this;
  this->fields._MapGimmickId_k__BackingField = 0;
  this->fields._MapGimmickObject_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MapGimmickObject_k__BackingField,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8->fields._MapGimmickPathMesh_k__BackingField = 0LL;
  v8 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v8 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


int32_t __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__get_MapGimmickId(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MapGimmickId_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventMapGimmickMoveManager_MapGimmickMoveData__get_MapGimmickObject(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MapGimmickObject_k__BackingField;
}


Custom2dSplineMesh_o *__fastcall EventMapGimmickMoveManager_MapGimmickMoveData__get_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MapGimmickPathMesh_k__BackingField;
}


int32_t __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__get_MoveTime(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MoveTime_k__BackingField;
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickId(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MapGimmickId_k__BackingField = value;
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickObject(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapGimmickObject_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MapGimmickObject_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MapGimmickPathMesh_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MoveTime(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MoveTime_k__BackingField = value;
}


void __fastcall EventMapGimmickMoveManager___c__DisplayClass7_0___ctor(
        EventMapGimmickMoveManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMapGimmickMoveManager___c__DisplayClass7_0___UpdateMapGimmickPosition_b__0(
        EventMapGimmickMoveManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  struct EventMapGimmickMoveManager_MapGimmickMoveData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}