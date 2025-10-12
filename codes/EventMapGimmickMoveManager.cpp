void EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C31BB3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
    byte_4C31BB3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v3;
  sub_1C32BC4(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass **v9; // x8

  if ( (byte_4C31BAD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
    byte_4C31BAD = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v7 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_1C32E7C(eventMapGimmickMoveDataList);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v9[4] = (Il2CppClass *)data;
    sub_1C32BC4(v9 + 4, data);
  }
}


float EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
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
      sub_1C32E7C(calcTime);
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
float EventMapGimmickMoveManager__CalcMapGimmickPathRate(
        int32_t targetId,
        int32_t targetNum,
        MapGimmickPathEntity_o *mapGimmickMoveEnt,
        const MethodInfo *method)
{
  int32_t v6; // w20
  int32_t valueType; // w8
  float v8; // s8
  int64_t ProgressNum; // x21
  int v10; // w8
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v12; // x20
  int64_t Time; // x0
  const MethodInfo *v14; // x3

  v6 = targetId;
  if ( (byte_4C31BB0 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    *(_QWORD *)&targetId = sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31BB0 = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_22;
  valueType = mapGimmickMoveEnt->fields.valueType;
  v8 = 0.0;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v8,
               *(const MethodInfo **)&targetNum);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    ProgressNum = CondType__GetProgressNum(32, v6, 0, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
    if ( *(_QWORD *)&targetId )
    {
      *(_QWORD *)&targetId = QuestGroupMaster__GetQuestIdListByGroupId(*(QuestGroupMaster_o **)&targetId, v6, 2, 0);
      if ( *(_QWORD *)&targetId )
      {
        v10 = *(_DWORD *)(*(_QWORD *)&targetId + 24LL);
        if ( v10 >= 1 )
          v8 = (float)ProgressNum / (float)v10;
        return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                 mapGimmickMoveEnt->fields.mapGimmickId,
                 v8,
                 *(const MethodInfo **)&targetNum);
      }
    }
LABEL_22:
    sub_1C32E7C(*(_QWORD *)&targetId);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_22;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0);
  if ( Entity )
  {
    v12 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    v8 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time, v12, mapGimmickMoveEnt, v14);
  }
  return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickMoveEnt->fields.mapGimmickId,
           v8,
           *(const MethodInfo **)&targetNum);
}


void EventMapGimmickMoveManager__Clear(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C31BAC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_4C31BAC = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventMapGimmickMoveDataList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C32E7C(v4);
    *(Il2CppClass **)((char *)&v9.fields._current->klass + (unsigned __int64)&off_18) = 0;
    *(_DWORD *)((char *)&word_10 + (_QWORD)current) = 0;
    sub_1C32BC4((char *)&off_18 + (_QWORD)current, 0);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = 0;
    sub_1C32BC4((char *)&qword_20 + (_QWORD)current, 0);
    *(_DWORD *)((char *)&qword_28 + (_QWORD)current) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v6 = this->fields.eventMapGimmickMoveDataList;
  if ( !v6 )
LABEL_13:
    sub_1C32E7C(eventMapGimmickMoveDataList);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


float EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C31BB2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C31BB2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
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
                     v5))
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
  Il2CppObject *Master_object; // x0

  if ( (byte_4C31BB1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C31BB1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
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
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31BAE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_4C31BAE = 1;
  }
  memset(&v6, 0, sizeof(v6));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    eventMapGimmickMoveDataList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v6,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v4,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v6.fields._current,
      v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


void EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 Master_object; // x0
  __int64 v6; // x20
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v10; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v13; // x21
  float v14; // s0
  float v15; // s8
  Il2CppObject *Component_object; // x24
  int32_t valueType; // w8
  UnityEngine_GameObject_o *v18; // x0
  EventRaidEntity_o *v19; // x22
  float x; // s13
  float y; // s14
  float z; // s15
  const MethodInfo *v23; // x1
  float v24; // s0
  float v25; // s12
  __int64 v26; // x8
  float v27; // s9
  float v28; // s10
  float v29; // s11
  float v30; // s13
  float v31; // s10
  float v32; // s9
  float v33; // s8
  float v34; // s12
  int64_t Time; // x0
  const MethodInfo *v36; // x3
  float v37; // s0
  float v38; // s8
  float v39; // s9
  float v40; // s10
  float v41; // s13
  float v42; // s9
  System_Collections_Generic_List_object__o *v43; // x21
  UITweener_o *v44; // x20
  int v45; // w8
  __int64 v46; // x9
  EventDelegate_Callback_o *v47; // x22
  EventDelegate_o *v48; // x19
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  int v53; // [xsp+8h] [xbp-98h]
  float v54; // [xsp+Ch] [xbp-94h]
  float v55; // [xsp+58h] [xbp-48h]
  float v56; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31BAF & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__);
    sub_1C32C20(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
    byte_4C31BAF = 1;
  }
  v4 = sub_1C32E6C(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = data;
  v6 = v4 + 16;
  Master_object = sub_1C32BC4(v4 + 16, data);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_77;
  v7 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( (Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v6 )
      goto LABEL_77;
    v8 = *(UnityEngine_Object_o **)(*(_QWORD *)v6 + 32LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v6 || !Master_object )
        goto LABEL_77;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v6 + 16LL),
                               0);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v13 = MapGimmickPathEntity;
        v14 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v10);
        if ( !*(_QWORD *)v6 )
          goto LABEL_77;
        Master_object = *(_QWORD *)(*(_QWORD *)v6 + 24LL);
        if ( !Master_object )
          goto LABEL_77;
        v15 = v14;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)Component_object, 0);
        }
        valueType = v13->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_77;
          Master_object = (__int64)EventRaidMaster__GetEntity(
                                     (EventRaidMaster_o *)Master_object,
                                     targetId,
                                     targetNum,
                                     0);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v6 )
              goto LABEL_77;
            v19 = (EventRaidEntity_o *)Master_object;
            Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    0.0,
                                    0);
            if ( !*(_QWORD *)v6 )
              goto LABEL_77;
            Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            x = PointAsWorldFlatten.fields.x;
            y = PointAsWorldFlatten.fields.y;
            z = PointAsWorldFlatten.fields.z;
            v59 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v15, 0);
            v55 = v59.fields.y;
            v56 = v59.fields.x;
            v54 = v59.fields.z;
            if ( !*(_QWORD *)v6 )
              goto LABEL_77;
            v24 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(*(_QWORD *)v6 + 16LL), 1.0, v23);
            if ( !*(_QWORD *)v6 )
              goto LABEL_77;
            Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v25 = v24;
            v60 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v24, 0);
            *(float *)(v4 + 24) = v60.fields.x;
            v26 = *(_QWORD *)(v4 + 16);
            *(float *)(v4 + 28) = v60.fields.y;
            *(float *)(v4 + 32) = v60.fields.z;
            if ( !v26 )
              goto LABEL_77;
            v27 = v60.fields.x;
            v28 = v60.fields.y;
            v29 = v60.fields.z;
            v53 = *(_DWORD *)(v26 + 40);
            if ( !byte_4C313D3 )
            {
              sub_1C32C20(&System_Math_TypeInfo);
              byte_4C313D3 = 1;
            }
            v30 = v27 - x;
            v31 = v28 - y;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            Master_object = (__int64)BalanceConfig_TypeInfo;
            v32 = sqrtf((float)((float)(v29 - z) * (float)(v29 - z)) + (float)((float)(v30 * v30) + (float)(v31 * v31)));
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Master_object = (__int64)BalanceConfig_TypeInfo;
            }
            if ( v32 < 0.001 )
              goto LABEL_80;
            v33 = (float)(v25 - v15) * (float)v53;
            v34 = (float)*(int *)(*(_QWORD *)(Master_object + 184) + 284LL);
            if ( v33 > v34 )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = NetworkManager__getTime(0);
              v37 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v34, v19, v13, v36);
              if ( !*(_QWORD *)v6 )
                goto LABEL_77;
              Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
              if ( !Master_object )
                goto LABEL_77;
              v61 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v37, 0);
              *(UnityEngine_Vector3_o *)(v4 + 24) = v61;
              v38 = v61.fields.x;
              v39 = v61.fields.y;
              v40 = v61.fields.z;
              if ( !byte_4C313D3 )
              {
                sub_1C32C20(&System_Math_TypeInfo);
                byte_4C313D3 = 1;
              }
              Master_object = (__int64)System_Math_TypeInfo;
              v41 = v38 - v56;
              v42 = v39 - v55;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                Master_object = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v33 = v34;
              if ( sqrtf((float)((float)(v40 - v54) * (float)(v40 - v54)) + (float)((float)(v41 * v41)
                                                                                  + (float)(v42 * v42))) < 0.001 )
              {
LABEL_80:
                if ( *(_QWORD *)v6 )
                {
                  v18 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v6 + 24LL);
                  v57 = *(UnityEngine_Vector3_o *)(v4 + 24);
                  goto LABEL_66;
                }
LABEL_77:
                sub_1C32E7C(Master_object);
              }
            }
            if ( !*(_QWORD *)v6 )
              goto LABEL_77;
            Master_object = *(_QWORD *)(*(_QWORD *)v6 + 24LL);
            if ( !Master_object )
              goto LABEL_77;
            Master_object = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)Master_object,
                                       (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
            if ( !Master_object )
              goto LABEL_77;
            *(_BYTE *)(Master_object + 152) = 1;
            v43 = *(System_Collections_Generic_List_object__o **)(Master_object + 72);
            *(float *)(Master_object + 128) = v56;
            *(float *)(Master_object + 132) = v55;
            v44 = (UITweener_o *)Master_object;
            *(float *)(Master_object + 136) = v54;
            v45 = *(_DWORD *)(v4 + 32);
            v46 = *(_QWORD *)(v4 + 24);
            *(float *)(Master_object + 56) = v33;
            *(_DWORD *)(Master_object + 32) = 0;
            *(_DWORD *)(Master_object + 148) = v45;
            *(_QWORD *)(Master_object + 140) = v46;
            v47 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v47,
              (Il2CppObject *)v4,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0);
            v48 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
            EventDelegate___ctor_49230836(v48, v47, 0);
            if ( !v43 )
              goto LABEL_77;
            items = v43->fields._items;
            v50 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_77;
            size = v43->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                (Il2CppObject *)v48,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &items->obj.klass + size;
              v43->fields._size = size + 1;
              v52[4] = (Il2CppClass *)v48;
              sub_1C32BC4(v52 + 4, v48);
            }
            UITweener__PlayForward(v44, 0);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v6 )
          {
            Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0);
              if ( *(_QWORD *)v6 )
              {
                Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v15, 0);
                  if ( *(_QWORD *)v6 )
                  {
                    Master_object = *(_QWORD *)(*(_QWORD *)v6 + 32LL);
                    if ( Master_object )
                    {
                      v57 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                              (Custom2dSplineMesh_o *)Master_object,
                              *(float *)(Master_object + 68),
                              0);
                      if ( *(_QWORD *)v6 )
                      {
                        v18 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v6 + 24LL);
LABEL_66:
                        GameObjectExtensions__SetPosition(v18, v57, 0);
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


void EventMapGimmickMoveManager_MapGimmickMoveData___ctor(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        int32_t mapGimmickId,
        UnityEngine_GameObject_o *mapGimmickObject,
        Custom2dSplineMesh_o *mapGimmickPathMesh,
        int32_t moveTime,
        const MethodInfo *method)
{
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v10; // x23

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._MapGimmickId_k__BackingField = mapGimmickId;
  v10->fields._MapGimmickObject_k__BackingField = mapGimmickObject;
  sub_1C32BC4(&v10->fields._MapGimmickObject_k__BackingField, mapGimmickObject);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_1C32BC4(v10, mapGimmickPathMesh);
  LODWORD(v10->monitor) = moveTime;
}


void EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v2; // x19

  v2 = this;
  this->fields._MapGimmickId_k__BackingField = 0;
  this->fields._MapGimmickObject_k__BackingField = 0;
  sub_1C32BC4(&this->fields._MapGimmickObject_k__BackingField, 0);
  v2->fields._MapGimmickPathMesh_k__BackingField = 0;
  v2 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v2 + 32);
  sub_1C32BC4(v2, 0);
  LODWORD(v2->monitor) = 0;
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
  this->fields._MapGimmickObject_k__BackingField = value;
  sub_1C32BC4(&this->fields._MapGimmickObject_k__BackingField, value);
}


void EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_1C32BC4(&this->fields._MapGimmickPathMesh_k__BackingField, value);
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
    sub_1C32E7C(this);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0);
}