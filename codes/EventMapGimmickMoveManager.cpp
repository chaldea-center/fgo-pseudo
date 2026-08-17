void EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A4BD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
    byte_596A4BD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventMapGimmickMoveManager_o *v9; // x20
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_596A4B7 & 1) == 0 )
  {
    this = (EventMapGimmickMoveManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
    byte_596A4B7 = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)v9->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_2213CDC(this, data);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


float EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
        int64_t calcTime,
        EventRaidEntity_o *eventRaidEnt,
        MapGimmickPathEntity_o *mapGimmickPathEnt,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1

  if ( !eventRaidEnt )
    return 0.0;
  if ( !mapGimmickPathEnt )
    sub_2213CDC(calcTime, eventRaidEnt);
  v4 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(
         mapGimmickPathEnt->fields.mapGimmickId,
         (float)(calcTime - eventRaidEnt->fields.startedAt) / (float)mapGimmickPathEnt->fields.moveTime,
         (const MethodInfo *)eventRaidEnt);
  v5 = 1.0;
  if ( v4 <= 1.0 )
    v5 = v4;
  if ( v4 >= 0.0 )
    return v5;
  else
    return 0.0;
}


// local variable allocation has failed, the output may be wrong!
float EventMapGimmickMoveManager__CalcMapGimmickPathRate(
        int32_t targetId,
        int32_t targetNum,
        MapGimmickPathEntity_o *mapGimmickMoveEnt,
        const MethodInfo *method)
{
  int32_t v6; // w20
  float v7; // s8
  int32_t valueType; // w8
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t ProgressNum; // x21
  int v12; // w8
  EventRaidEntity_o *Entity; // x0
  __int64 v14; // x2
  EventRaidEntity_o *v15; // x20
  int64_t Time; // x0
  const MethodInfo *v17; // x3

  v6 = targetId;
  if ( (byte_596A4BA & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    *(_QWORD *)&targetId = sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A4BA = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_22;
  v7 = 0.0;
  valueType = mapGimmickMoveEnt->fields.valueType;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v7,
               *(const MethodInfo **)&targetNum);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetNum, mapGimmickMoveEnt);
    ProgressNum = CondType__GetProgressNum(32, v6, 0, 0, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
    if ( *(_QWORD *)&targetId )
    {
      *(_QWORD *)&targetId = QuestGroupMaster__GetQuestIdListByGroupId(*(QuestGroupMaster_o **)&targetId, v6, 2, 0);
      if ( *(_QWORD *)&targetId )
      {
        v12 = *(_DWORD *)(*(_QWORD *)&targetId + 24LL);
        if ( v12 >= 1 )
          v7 = (float)ProgressNum / (float)v12;
        return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                 mapGimmickMoveEnt->fields.mapGimmickId,
                 v7,
                 *(const MethodInfo **)&targetNum);
      }
    }
LABEL_22:
    sub_2213CDC(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetNum, mapGimmickMoveEnt);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_22;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0);
  if ( Entity )
  {
    v15 = Entity;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetNum, v14);
    Time = NetworkManager__getTime(0);
    v7 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time, v15, mapGimmickMoveEnt, v17);
  }
  return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickMoveEnt->fields.mapGimmickId,
           v7,
           *(const MethodInfo **)&targetNum);
}


void EventMapGimmickMoveManager__Clear(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *current; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  __int64 v22; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v23; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A4B6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_596A4B6 = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  memset(&v24, 0, sizeof(v24));
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    eventMapGimmickMoveDataList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  v22 = 0;
  v23 = &v24;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_2213CDC(v4, v5);
    *(Il2CppClass **)((char *)&v24.fields._current->klass + (unsigned __int64)off_18) = 0;
    *(_DWORD *)((char *)&word_10 + (_QWORD)current) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)off_18 + (_QWORD)current), 0, v6, v7, v8, v9, v10, v11);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)&qword_20 + (_QWORD)current),
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    *(_DWORD *)((char *)&qword_28 + (_QWORD)current) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v19 = this->fields.eventMapGimmickMoveDataList;
  if ( !v19 )
LABEL_13:
    sub_2213CDC(eventMapGimmickMoveDataList, method);
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0);
}


float EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_596A4BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596A4BC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                           (MapGimmickPathMaster_o *)Master_object,
                           mapGimmickId,
                           0);
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
void EventMapGimmickMoveManager__Init(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  EventMapGimmickMoveManager__Clear(this, method);
}


float EventMapGimmickMoveManager__LimitMapGimmickPathRate(
        int32_t mapGimmickId,
        float currentRate,
        const MethodInfo *method)
{
  __int64 v3; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_596A4BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596A4BB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return MapGimmickPathReleaseMaster__LimitMapGimmickPathRate(
           (MapGimmickPathReleaseMaster_o *)Master_object,
           mapGimmickId,
           currentRate,
           0);
}


void EventMapGimmickMoveManager__UpdateAllMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v7; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596A4B8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_596A4B8 = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  memset(&v8, 0, sizeof(v8));
  if ( !eventMapGimmickMoveDataList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    eventMapGimmickMoveDataList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  v6 = 0;
  v7 = &v8;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v4,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v8.fields._current,
      v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


void EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *Master_object; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x20
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x2
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v21; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v24; // x21
  float v25; // s0
  float v26; // s8
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Component_object; // x24
  __int64 v30; // x2
  int32_t valueType; // w8
  UnityEngine_GameObject_o *v32; // x0
  EventRaidEntity_o *v33; // x22
  float x; // s13
  float y; // s14
  float z; // s15
  __int64 v37; // x8
  float v38; // s11
  float v39; // s0
  float v40; // s12
  __int64 v41; // x2
  __int64 v42; // x8
  float v43; // s9
  float v44; // s10
  float v45; // s13
  int v46; // s14
  float v47; // s9
  float v48; // s12
  float v49; // s8
  float v50; // s9
  float v51; // s10
  int64_t Time; // x0
  const MethodInfo *v53; // x3
  float v54; // s0
  float v55; // s0
  __int64 v56; // x8
  UITweener_o *v57; // x20
  int v58; // w8
  __int64 v59; // x9
  __int64 v60; // x21
  EventDelegate_Callback_c *v61; // x0
  EventDelegate_Callback_o *v62; // x22
  EventDelegate_o *v63; // x19
  unsigned __int64 v64; // [xsp+0h] [xbp-A0h] BYREF
  float v65; // [xsp+8h] [xbp-98h]
  float v66; // [xsp+58h] [xbp-48h]
  float v67; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A4B9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__);
    sub_2213A60(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
    byte_596A4B9 = 1;
  }
  v65 = 0.0;
  v64 = 0;
  v4 = sub_2213CCC(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_73;
  *(_QWORD *)(v4 + 16) = data;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)data, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_73;
  v15 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v14);
  Master_object = (void *)UnityEngine_Object__op_Equality(v15, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v13 )
      goto LABEL_73;
    v17 = *(UnityEngine_Object_o **)(*(_QWORD *)v13 + 32LL);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v16);
    if ( !UnityEngine_Object__op_Equality(v17, 0, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v13 || !Master_object )
        goto LABEL_73;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v13 + 16LL),
                               0);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v24 = MapGimmickPathEntity;
        v25 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v21);
        if ( !*(_QWORD *)v13 )
          goto LABEL_73;
        Master_object = *(void **)(*(_QWORD *)v13 + 24LL);
        if ( !Master_object )
          goto LABEL_73;
        v26 = v25;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
        Master_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v30);
          UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
        }
        valueType = v24->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v30);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_73;
          Master_object = EventRaidMaster__GetEntity((EventRaidMaster_o *)Master_object, targetId, targetNum, 0);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v13 )
              goto LABEL_73;
            v33 = (EventRaidEntity_o *)Master_object;
            Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
            if ( !Master_object )
              goto LABEL_73;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    0.0,
                                    0);
            if ( !*(_QWORD *)v13 )
              goto LABEL_73;
            Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
            if ( !Master_object )
              goto LABEL_73;
            x = PointAsWorldFlatten.fields.x;
            y = PointAsWorldFlatten.fields.y;
            z = PointAsWorldFlatten.fields.z;
            v70 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v26, 0);
            v37 = *(_QWORD *)v13;
            v66 = v70.fields.z;
            v67 = v70.fields.y;
            if ( !v37 )
              goto LABEL_73;
            v38 = v70.fields.x;
            v39 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(v37 + 16), 1.0, v6);
            if ( !*(_QWORD *)v13 )
              goto LABEL_73;
            Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
            if ( !Master_object )
              goto LABEL_73;
            v40 = v39;
            v71 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v39, 0);
            *(float *)(v4 + 24) = v71.fields.x;
            v42 = *(_QWORD *)(v4 + 16);
            *(float *)(v4 + 28) = v71.fields.y;
            *(float *)(v4 + 32) = v71.fields.z;
            if ( !v42 )
              goto LABEL_73;
            v43 = v71.fields.x - x;
            v44 = v71.fields.y - y;
            v45 = v71.fields.z - z;
            v46 = *(_DWORD *)(v42 + 40);
            v64 = __PAIR64__(LODWORD(v44), LODWORD(v43));
            v65 = v71.fields.z - z;
            if ( !byte_5969AE2 )
            {
              sub_2213A60(&System_Math_TypeInfo);
              byte_5969AE2 = 1;
            }
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v41);
            Master_object = BalanceConfig_TypeInfo;
            v47 = sqrtf((float)((float)(v43 * v43) + (float)(v44 * v44)) + (float)(v45 * v45));
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v41);
              Master_object = BalanceConfig_TypeInfo;
            }
            if ( v47 < 0.001 )
            {
              if ( *(_QWORD *)v13 )
              {
                v68 = *(UnityEngine_Vector3_o *)(v4 + 24);
                v32 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 24LL);
                goto LABEL_56;
              }
LABEL_73:
              sub_2213CDC(Master_object, v6);
            }
            v48 = (float)(v40 - v26) * (float)v46;
            v49 = (float)*(int *)(*((_QWORD *)Master_object + 23) + 284LL);
            if ( v48 <= v49 )
            {
              v51 = v66;
              v50 = v67;
              v56 = *(_QWORD *)v13;
            }
            else
            {
              v51 = v66;
              v50 = v67;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v41);
              Time = NetworkManager__getTime(0);
              v54 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v49, v33, v24, v53);
              if ( !*(_QWORD *)v13 )
                goto LABEL_73;
              Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
              if ( !Master_object )
                goto LABEL_73;
              v72 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v54, 0);
              *(UnityEngine_Vector3_o *)(v4 + 24) = v72;
              *(float *)&v64 = v72.fields.x - v38;
              *((float *)&v64 + 1) = v72.fields.y - v50;
              v65 = v72.fields.z - v51;
              v55 = sub_244F1C8(&v64, 0);
              v56 = *(_QWORD *)(v4 + 16);
              if ( v55 < 0.001 )
              {
                if ( !v56 )
                  goto LABEL_73;
                GameObjectExtensions__SetPosition(
                  *(UnityEngine_GameObject_o **)(v56 + 24),
                  *(UnityEngine_Vector3_o *)(v4 + 24),
                  0);
                return;
              }
              v48 = v49;
            }
            if ( !v56 )
              goto LABEL_73;
            Master_object = *(void **)(v56 + 24);
            if ( !Master_object )
              goto LABEL_73;
            Master_object = UnityEngine_GameObject__AddComponent_object_(
                              (UnityEngine_GameObject_o *)Master_object,
                              (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
            if ( !Master_object )
              goto LABEL_73;
            *((float *)Master_object + 32) = v38;
            *((float *)Master_object + 33) = v50;
            *((_BYTE *)Master_object + 152) = 1;
            v57 = (UITweener_o *)Master_object;
            *((float *)Master_object + 34) = v51;
            v58 = *(_DWORD *)(v4 + 32);
            v59 = *(_QWORD *)(v4 + 24);
            *((float *)Master_object + 14) = v48;
            v60 = *((_QWORD *)Master_object + 9);
            *((_DWORD *)Master_object + 37) = v58;
            *(_QWORD *)((char *)Master_object + 140) = v59;
            v61 = EventDelegate_Callback_TypeInfo;
            v57->fields.method = 0;
            v62 = (EventDelegate_Callback_o *)sub_2213CCC(v61);
            EventDelegate_Callback___ctor(
              v62,
              (Il2CppObject *)v4,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0);
            v63 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
            EventDelegate___ctor_56337280(v63, v62, 0);
            if ( !v60 )
              goto LABEL_73;
            sub_1FFEDA8(v60, v63, Method_System_Collections_Generic_List_EventDelegate__Add__);
            UITweener__PlayForward(v57, 0);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v13 )
          {
            Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0);
              if ( *(_QWORD *)v13 )
              {
                Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v26, 0);
                  if ( *(_QWORD *)v13 )
                  {
                    Master_object = *(void **)(*(_QWORD *)v13 + 32LL);
                    if ( Master_object )
                    {
                      v68 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                              (Custom2dSplineMesh_o *)Master_object,
                              *((float *)Master_object + 17),
                              0);
                      if ( *(_QWORD *)v13 )
                      {
                        v32 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 24LL);
LABEL_56:
                        GameObjectExtensions__SetPosition(v32, v68, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_73;
        }
      }
    }
  }
}


void EventMapGimmickMoveManager_MapGimmickMoveData___ctor(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t mapGimmickId,
        UnityEngine_GameObject_o *mapGimmickObject,
        Custom2dSplineMesh_o *mapGimmickPathMesh,
        int32_t moveTime,
        const MethodInfo *method)
{
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._MapGimmickId_k__BackingField = mapGimmickId;
  v10->fields._MapGimmickObject_k__BackingField = mapGimmickObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields._MapGimmickObject_k__BackingField,
    (int32_t)mapGimmickObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)mapGimmickPathMesh, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = moveTime;
}


void EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v8; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  this->fields._MapGimmickId_k__BackingField = 0;
  this->fields._MapGimmickObject_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapGimmickObject_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8->fields._MapGimmickPathMesh_k__BackingField = 0;
  v8 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v8 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8, 0, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


int32_t EventMapGimmickMoveManager_MapGimmickMoveData__get_MapGimmickId(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MapGimmickId_k__BackingField;
}


UnityEngine_GameObject_o *EventMapGimmickMoveManager_MapGimmickMoveData__get_MapGimmickObject(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MapGimmickObject_k__BackingField;
}


Custom2dSplineMesh_o *EventMapGimmickMoveManager_MapGimmickMoveData__get_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MapGimmickPathMesh_k__BackingField;
}


int32_t EventMapGimmickMoveManager_MapGimmickMoveData__get_MoveTime(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  return this->fields._MoveTime_k__BackingField;
}


void EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickId(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MapGimmickId_k__BackingField = value;
}


void EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickObject(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapGimmickObject_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapGimmickObject_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapGimmickPathMesh_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMapGimmickMoveManager_MapGimmickMoveData__set_MoveTime(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MoveTime_k__BackingField = value;
}


void EventMapGimmickMoveManager___c__DisplayClass7_0___ctor(
        EventMapGimmickMoveManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMapGimmickMoveManager___c__DisplayClass7_0___UpdateMapGimmickPosition_b__0(
        EventMapGimmickMoveManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  struct EventMapGimmickMoveManager_MapGimmickMoveData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0);
}