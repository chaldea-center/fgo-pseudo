void EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C214E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
    byte_4C214E4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v3;
  sub_1C2D434(&this->fields);
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

  if ( (byte_4C214DE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
    byte_4C214DE = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v7 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_1C2D6EC(eventMapGimmickMoveDataList, data);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v9[4] = (Il2CppClass *)data;
    sub_1C2D434(v9 + 4);
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
      sub_1C2D6EC(calcTime, eventRaidEnt);
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
  if ( (byte_4C214E1 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    *(_QWORD *)&targetId = sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C214E1 = 1;
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
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
    sub_1C2D6EC(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventRaidMaster___);
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
  __int64 v5; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C214DD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_4C214DD = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    eventMapGimmickMoveDataList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C2D6EC(v4, v5);
    *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18) = 0;
    *(_DWORD *)((char *)&word_10 + (_QWORD)current) = 0;
    sub_1C2D434((char *)&off_18 + (_QWORD)current);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = 0;
    sub_1C2D434((char *)&qword_20 + (_QWORD)current);
    *(_DWORD *)((char *)&qword_28 + (_QWORD)current) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v7 = this->fields.eventMapGimmickMoveDataList;
  if ( !v7 )
LABEL_13:
    sub_1C2D6EC(eventMapGimmickMoveDataList, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
}


float EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C214E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C214E3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v4);
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
                     v6))
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
  __int64 v6; // x1

  if ( (byte_4C214E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C214E2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C214DF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_4C214DF = 1;
  }
  memset(&v6, 0, sizeof(v6));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    eventMapGimmickMoveDataList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v6,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v4,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v6.fields._current,
      v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


void EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 Master_object; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x20
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *v9; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v11; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v14; // x21
  float v15; // s0
  float v16; // s8
  Il2CppObject *Component_object; // x24
  int32_t valueType; // w8
  UnityEngine_GameObject_o *v19; // x0
  EventRaidEntity_o *v20; // x22
  float x; // s13
  float y; // s14
  float z; // s15
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

  if ( (byte_4C214E0 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__);
    sub_1C2D490(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
    byte_4C214E0 = 1;
  }
  v4 = sub_1C2D6DC(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = data;
  v7 = v4 + 16;
  Master_object = sub_1C2D434(v4 + 16);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_77;
  v8 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( (Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v7 )
      goto LABEL_77;
    v9 = *(UnityEngine_Object_o **)(*(_QWORD *)v7 + 32LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v7 || !Master_object )
        goto LABEL_77;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v7 + 16LL),
                               0);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v14 = MapGimmickPathEntity;
        v15 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v11);
        if ( !*(_QWORD *)v7 )
          goto LABEL_77;
        Master_object = *(_QWORD *)(*(_QWORD *)v7 + 24LL);
        if ( !Master_object )
          goto LABEL_77;
        v16 = v15;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (Master_object & 1) != 0 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)Component_object, 0);
        }
        valueType = v14->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_77;
          Master_object = (__int64)EventRaidMaster__GetEntity(
                                     (EventRaidMaster_o *)Master_object,
                                     targetId,
                                     targetNum,
                                     0);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v7 )
              goto LABEL_77;
            v20 = (EventRaidEntity_o *)Master_object;
            Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    0.0,
                                    0);
            if ( !*(_QWORD *)v7 )
              goto LABEL_77;
            Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            x = PointAsWorldFlatten.fields.x;
            y = PointAsWorldFlatten.fields.y;
            z = PointAsWorldFlatten.fields.z;
            v59 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v16, 0);
            v55 = v59.fields.y;
            v56 = v59.fields.x;
            v54 = v59.fields.z;
            if ( !*(_QWORD *)v7 )
              goto LABEL_77;
            v24 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(*(_QWORD *)v7 + 16LL), 1.0, v6);
            if ( !*(_QWORD *)v7 )
              goto LABEL_77;
            Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
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
            if ( !byte_4C20DA3 )
            {
              sub_1C2D490(&System_Math_TypeInfo);
              byte_4C20DA3 = 1;
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
            v33 = (float)(v25 - v16) * (float)v53;
            v34 = (float)*(int *)(*(_QWORD *)(Master_object + 184) + 284LL);
            if ( v33 > v34 )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = NetworkManager__getTime(0);
              v37 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v34, v20, v14, v36);
              if ( !*(_QWORD *)v7 )
                goto LABEL_77;
              Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
              if ( !Master_object )
                goto LABEL_77;
              v61 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v37, 0);
              *(UnityEngine_Vector3_o *)(v4 + 24) = v61;
              v38 = v61.fields.x;
              v39 = v61.fields.y;
              v40 = v61.fields.z;
              if ( !byte_4C20DA3 )
              {
                sub_1C2D490(&System_Math_TypeInfo);
                byte_4C20DA3 = 1;
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
                if ( *(_QWORD *)v7 )
                {
                  v19 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v7 + 24LL);
                  v57 = *(UnityEngine_Vector3_o *)(v4 + 24);
                  goto LABEL_66;
                }
LABEL_77:
                sub_1C2D6EC(Master_object, v6);
              }
            }
            if ( !*(_QWORD *)v7 )
              goto LABEL_77;
            Master_object = *(_QWORD *)(*(_QWORD *)v7 + 24LL);
            if ( !Master_object )
              goto LABEL_77;
            Master_object = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)Master_object,
                                       (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
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
            v47 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v47,
              (Il2CppObject *)v4,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0);
            v48 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
            EventDelegate___ctor_49170772(v48, v47, 0);
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
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &items->obj.klass + size;
              v43->fields._size = size + 1;
              v52[4] = (Il2CppClass *)v48;
              sub_1C2D434(v52 + 4);
            }
            UITweener__PlayForward(v44, 0);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v7 )
          {
            Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0);
              if ( *(_QWORD *)v7 )
              {
                Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v16, 0);
                  if ( *(_QWORD *)v7 )
                  {
                    Master_object = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
                    if ( Master_object )
                    {
                      v57 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                              (Custom2dSplineMesh_o *)Master_object,
                              *(float *)(Master_object + 68),
                              0);
                      if ( *(_QWORD *)v7 )
                      {
                        v19 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v7 + 24LL);
LABEL_66:
                        GameObjectExtensions__SetPosition(v19, v57, 0);
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
  sub_1C2D434(&v10->fields._MapGimmickObject_k__BackingField);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_1C2D434(v10);
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
  sub_1C2D434(&this->fields._MapGimmickObject_k__BackingField);
  v2->fields._MapGimmickPathMesh_k__BackingField = 0;
  v2 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v2 + 32);
  sub_1C2D434(v2);
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
  sub_1C2D434(&this->fields._MapGimmickObject_k__BackingField);
}


void EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_1C2D434(&this->fields._MapGimmickPathMesh_k__BackingField);
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
    sub_1C2D6EC(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0);
}