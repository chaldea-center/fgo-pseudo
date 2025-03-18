void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C25E9A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo, v3);
    byte_4C25E9A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4C25E94 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__, data);
    byte_4C25E94 = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_1C3B9C0(eventMapGimmickMoveDataList, data);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
      sub_1C3B9C0(calcTime, eventRaidEnt);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t valueType; // w8
  float v12; // s8
  int64_t ProgressNum; // x21
  int v14; // w8
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v16; // x20
  int64_t Time; // x0
  const MethodInfo *v18; // x3

  v6 = targetId;
  if ( (byte_4C25E97 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    sub_1C3B764(&Method_DataManager_GetMaster_EventRaidMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestGroupMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    *(_QWORD *)&targetId = sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C25E97 = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_22;
  valueType = mapGimmickMoveEnt->fields.valueType;
  v12 = 0.0;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v12,
               *(const MethodInfo **)&targetNum);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    ProgressNum = CondType__GetProgressNum(32, v6, 0LL, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
    if ( *(_QWORD *)&targetId )
    {
      *(_QWORD *)&targetId = QuestGroupMaster__GetQuestIdListByGroupId(*(QuestGroupMaster_o **)&targetId, v6, 2, 0LL);
      if ( *(_QWORD *)&targetId )
      {
        v14 = *(_DWORD *)(*(_QWORD *)&targetId + 24LL);
        if ( v14 >= 1 )
          v12 = (float)ProgressNum / (float)v14;
        return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                 mapGimmickMoveEnt->fields.mapGimmickId,
                 v12,
                 *(const MethodInfo **)&targetNum);
      }
    }
LABEL_22:
    sub_1C3B9C0(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_22;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0LL);
  if ( Entity )
  {
    v16 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v12 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time, v16, mapGimmickMoveEnt, v18);
  }
  return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickMoveEnt->fields.mapGimmickId,
           v12,
           *(const MethodInfo **)&targetNum);
}


void __fastcall EventMapGimmickMoveManager__Clear(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *current; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v23; // x8
  int32_t size; // w2
  int v25; // w9
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C25E93 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__, v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v6);
    byte_4C25E93 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    eventMapGimmickMoveDataList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v8 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C3B9C0(v8, v9);
    v26.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1C3B708((PartyOrganizationUtility_o *)&current[1].monitor, 0LL, v10, v11, v12, v13, v14, v15);
    current[2].klass = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&current[2], 0LL, v17, v18, v19, v20, v21, v22);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v23 = this->fields.eventMapGimmickMoveDataList;
  if ( !v23 )
LABEL_13:
    sub_1C3B9C0(eventMapGimmickMoveDataList, method);
  size = v23->fields._size;
  v25 = v23->fields._version + 1;
  v23->fields._size = 0;
  v23->fields._version = v25;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v23->fields._items, 0, size, 0LL);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C25E99 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MapGimmickPathMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C25E99 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v5);
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
                     v7))
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4C25E98 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C25E98 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C25E95 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v4);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v5);
    byte_4C25E95 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventMapGimmickMoveDataList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v7 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v7,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v9.fields._current,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
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
  __int64 v16; // x19
  void *Master_object; // x0
  const MethodInfo *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x20
  UnityEngine_Object_o *v26; // x21
  UnityEngine_Object_o *v27; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v29; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v32; // x21
  float v33; // s0
  float v34; // s8
  Il2CppObject *Component_object; // x24
  int32_t valueType; // w8
  int v37; // s0
  int v38; // s1
  int v39; // s2
  UnityEngine_GameObject_o *v40; // x0
  EventRaidEntity_o *v41; // x22
  float v42; // s0
  float v43; // s1
  float v44; // s2
  float v45; // s13
  float v46; // s14
  float v47; // s15
  float v48; // s0
  float v49; // s12
  float v50; // s0
  float v51; // s1
  float v52; // s2
  __int64 v53; // x8
  float v54; // s9
  float v55; // s10
  float v56; // s11
  float v57; // s13
  float v58; // s10
  float v59; // s9
  float v60; // s8
  float v61; // s12
  int64_t Time; // x0
  const MethodInfo *v63; // x3
  float v64; // s0
  float v65; // s8
  float v66; // s9
  float v67; // s10
  float v68; // s13
  float v69; // s9
  System_Collections_Generic_List_object__o *v70; // x21
  UITweener_o *v71; // x20
  int v72; // w8
  __int64 v73; // x9
  EventDelegate_Callback_o *v74; // x22
  EventDelegate_o *v75; // x19
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  int v86; // [xsp+8h] [xbp-98h]
  float z; // [xsp+Ch] [xbp-94h]
  float y; // [xsp+58h] [xbp-48h]
  float x; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25E96 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, data);
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_MapGimmickPathMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&EventDelegate_TypeInfo, v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__, v14);
    sub_1C3B764(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, v15);
    byte_4C25E96 = 1;
  }
  v16 = sub_1C3B9B0(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_77;
  *(_QWORD *)(v16 + 16) = data;
  v25 = v16 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)data, v19, v20, v21, v22, v23, v24);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_77;
  v26 = *(UnityEngine_Object_o **)(*(_QWORD *)(v16 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (void *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v25 )
      goto LABEL_77;
    v27 = *(UnityEngine_Object_o **)(*(_QWORD *)v25 + 32LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v27, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v25 || !Master_object )
        goto LABEL_77;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v25 + 16LL),
                               0LL);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v32 = MapGimmickPathEntity;
        v33 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v29);
        if ( !*(_QWORD *)v25 )
          goto LABEL_77;
        Master_object = *(void **)(*(_QWORD *)v25 + 24LL);
        if ( !Master_object )
          goto LABEL_77;
        v34 = v33;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)Component_object, 0LL);
        }
        valueType = v32->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_77;
          Master_object = EventRaidMaster__GetEntity((EventRaidMaster_o *)Master_object, targetId, targetNum, 0LL);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v25 )
              goto LABEL_77;
            v41 = (EventRaidEntity_o *)Master_object;
            Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            *(UnityEngine_Vector3_o *)&v42 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               0.0,
                                               0LL);
            if ( !*(_QWORD *)v25 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v45 = v42;
            v46 = v43;
            v47 = v44;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    v34,
                                    0LL);
            y = PointAsWorldFlatten.fields.y;
            x = PointAsWorldFlatten.fields.x;
            z = PointAsWorldFlatten.fields.z;
            if ( !*(_QWORD *)v25 )
              goto LABEL_77;
            v48 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(*(_QWORD *)v25 + 16LL), 1.0, v18);
            if ( !*(_QWORD *)v25 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v49 = v48;
            *(UnityEngine_Vector3_o *)&v50 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               v48,
                                               0LL);
            *(float *)(v16 + 24) = v50;
            v53 = *(_QWORD *)(v16 + 16);
            *(float *)(v16 + 28) = v51;
            *(float *)(v16 + 32) = v52;
            if ( !v53 )
              goto LABEL_77;
            v54 = v50;
            v55 = v51;
            v56 = v52;
            v86 = *(_DWORD *)(v53 + 40);
            if ( !byte_4C1C513 )
            {
              sub_1C3B764(&System_Math_TypeInfo, v18);
              byte_4C1C513 = 1;
            }
            v57 = v54 - v45;
            v58 = v55 - v46;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
            v59 = sqrtf((float)((float)(v56 - v47) * (float)(v56 - v47)) + (float)((float)(v57 * v57)
                                                                                 + (float)(v58 * v58)));
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Master_object = BalanceConfig_TypeInfo;
            }
            if ( v59 < 0.001 )
              goto LABEL_80;
            v60 = (float)(v49 - v34) * (float)v86;
            v61 = (float)*(int *)(*((_QWORD *)Master_object + 23) + 260LL);
            if ( v60 > v61 )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = NetworkManager__getTime(0LL);
              v64 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v61, v41, v32, v63);
              if ( !*(_QWORD *)v25 )
                goto LABEL_77;
              Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
              if ( !Master_object )
                goto LABEL_77;
              v91 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v64, 0LL);
              *(UnityEngine_Vector3_o *)(v16 + 24) = v91;
              v65 = v91.fields.x;
              v66 = v91.fields.y;
              v67 = v91.fields.z;
              if ( !byte_4C1C513 )
              {
                sub_1C3B764(&System_Math_TypeInfo, v18);
                byte_4C1C513 = 1;
              }
              Master_object = System_Math_TypeInfo;
              v68 = v65 - x;
              v69 = v66 - y;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v60 = v61;
              if ( sqrtf((float)((float)(v67 - z) * (float)(v67 - z)) + (float)((float)(v68 * v68) + (float)(v69 * v69))) < 0.001 )
              {
LABEL_80:
                if ( *(_QWORD *)v25 )
                {
                  v40 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v25 + 24LL);
                  v37 = *(_DWORD *)(v16 + 24);
                  v38 = *(_DWORD *)(v16 + 28);
                  v39 = *(_DWORD *)(v16 + 32);
                  goto LABEL_66;
                }
LABEL_77:
                sub_1C3B9C0(Master_object, v18);
              }
            }
            if ( !*(_QWORD *)v25 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v25 + 24LL);
            if ( !Master_object )
              goto LABEL_77;
            Master_object = UnityEngine_GameObject__AddComponent_object_(
                              (UnityEngine_GameObject_o *)Master_object,
                              (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
            if ( !Master_object )
              goto LABEL_77;
            *((_BYTE *)Master_object + 152) = 1;
            v70 = (System_Collections_Generic_List_object__o *)*((_QWORD *)Master_object + 9);
            *((float *)Master_object + 32) = x;
            *((float *)Master_object + 33) = y;
            v71 = (UITweener_o *)Master_object;
            *((float *)Master_object + 34) = z;
            v72 = *(_DWORD *)(v16 + 32);
            v73 = *(_QWORD *)(v16 + 24);
            *((float *)Master_object + 14) = v60;
            *((_DWORD *)Master_object + 8) = 0;
            *((_DWORD *)Master_object + 37) = v72;
            *(_QWORD *)((char *)Master_object + 140) = v73;
            v74 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v74,
              (Il2CppObject *)v16,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0LL);
            v75 = (EventDelegate_o *)sub_1C3B9B0(EventDelegate_TypeInfo);
            EventDelegate___ctor_48222576(v75, v74, 0LL);
            if ( !v70 )
              goto LABEL_77;
            items = v70->fields._items;
            v83 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++v70->fields._version;
            if ( !items )
              goto LABEL_77;
            size = v70->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v70,
                (Il2CppObject *)v75,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v85 = &items->obj.klass + size;
              v70->fields._size = size + 1;
              v85[4] = (Il2CppClass *)v75;
              sub_1C3B708((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v75, v76, v77, v78, v79, v80, v81);
            }
            UITweener__PlayForward(v71, 0LL);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v25 )
          {
            Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0LL);
              if ( *(_QWORD *)v25 )
              {
                Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v34, 0LL);
                  if ( *(_QWORD *)v25 )
                  {
                    Master_object = *(void **)(*(_QWORD *)v25 + 32LL);
                    if ( Master_object )
                    {
                      *(UnityEngine_Vector3_o *)&v37 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                         (Custom2dSplineMesh_o *)Master_object,
                                                         *((float *)Master_object + 17),
                                                         0LL);
                      if ( *(_QWORD *)v25 )
                      {
                        v40 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v25 + 24LL);
LABEL_66:
                        GameObjectExtensions__SetPosition(v40, *(UnityEngine_Vector3_o *)&v37, 0LL);
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
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)v10, (int64_t)mapGimmickPathMesh, v17, v18, v19, v20, v21, v22);
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
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
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
  sub_1C3B708(
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
  sub_1C3B708(
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
    sub_1C3B9C0(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}