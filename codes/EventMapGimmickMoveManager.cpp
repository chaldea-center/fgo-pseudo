void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EE11 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
    byte_4A5EE11 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A5EE0B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
    byte_4A5EE0B = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_1B8880C(eventMapGimmickMoveDataList, data);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
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
      sub_1B8880C(calcTime, eventRaidEnt);
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
  int32_t valueType; // w8
  float v8; // s8
  int64_t ProgressNum; // x21
  int v10; // w8
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v12; // x20
  int64_t Time; // x0
  const MethodInfo *v14; // x3

  v6 = targetId;
  if ( (byte_4A5EE0E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    *(_QWORD *)&targetId = sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5EE0E = 1;
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
    ProgressNum = CondType__GetProgressNum(32, v6, 0LL, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
    if ( *(_QWORD *)&targetId )
    {
      *(_QWORD *)&targetId = QuestGroupMaster__GetQuestIdListByGroupId(*(QuestGroupMaster_o **)&targetId, v6, 2, 0LL);
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
    sub_1B8880C(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_22;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0LL);
  if ( Entity )
  {
    v12 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v8 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time, v12, mapGimmickMoveEnt, v14);
  }
  return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickMoveEnt->fields.mapGimmickId,
           v8,
           *(const MethodInfo **)&targetNum);
}


void __fastcall EventMapGimmickMoveManager__Clear(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *current; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EE0A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_4A5EE0A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    eventMapGimmickMoveDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1B8880C(v4, v5);
    v14.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&current[1].monitor, 0, v6, v7);
    current[2].klass = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&current[2], 0, v9, v10);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v11 = this->fields.eventMapGimmickMoveDataList;
  if ( !v11 )
LABEL_13:
    sub_1B8880C(eventMapGimmickMoveDataList, method);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4A5EE10 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5EE10 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
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
                     v6))
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4A5EE0F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5EE0F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
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
  System_Collections_Generic_List_object__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EE0C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_4A5EE0C = 1;
  }
  memset(&v6, 0, sizeof(v6));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    eventMapGimmickMoveDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v6,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v4,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v6.fields._current,
      v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *Master_object; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v13; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v16; // x21
  float v17; // s0
  float v18; // s8
  Il2CppObject *Component_object; // x24
  int32_t valueType; // w8
  int v21; // s0
  int v22; // s1
  int v23; // s2
  UnityEngine_GameObject_o *v24; // x0
  EventRaidEntity_o *v25; // x22
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s13
  float v30; // s14
  float v31; // s15
  float v32; // s0
  float v33; // s12
  float v34; // s0
  float v35; // s1
  float v36; // s2
  __int64 v37; // x8
  float v38; // s9
  float v39; // s10
  float v40; // s11
  float v41; // s13
  float v42; // s10
  float v43; // s9
  float v44; // s8
  float v45; // s12
  int64_t Time; // x0
  const MethodInfo *v47; // x3
  float v48; // s0
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float v52; // s13
  float v53; // s9
  System_Collections_Generic_List_object__o *v54; // x21
  UITweener_o *v55; // x20
  int v56; // w8
  __int64 v57; // x9
  EventDelegate_Callback_o *v58; // x22
  EventDelegate_o *v59; // x19
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  int v66; // [xsp+8h] [xbp-98h]
  float z; // [xsp+Ch] [xbp-94h]
  float y; // [xsp+58h] [xbp-48h]
  float x; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EE0D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__);
    sub_1B885B0(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
    byte_4A5EE0D = 1;
  }
  v4 = sub_1B887FC(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = data;
  v9 = v4 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)data, v7, v8);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_77;
  v10 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (void *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v9 )
      goto LABEL_77;
    v11 = *(UnityEngine_Object_o **)(*(_QWORD *)v9 + 32LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v9 || !Master_object )
        goto LABEL_77;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v9 + 16LL),
                               0LL);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v16 = MapGimmickPathEntity;
        v17 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v13);
        if ( !*(_QWORD *)v9 )
          goto LABEL_77;
        Master_object = *(void **)(*(_QWORD *)v9 + 24LL);
        if ( !Master_object )
          goto LABEL_77;
        v18 = v17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Component_object, 0LL);
        }
        valueType = v16->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_77;
          Master_object = EventRaidMaster__GetEntity((EventRaidMaster_o *)Master_object, targetId, targetNum, 0LL);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v9 )
              goto LABEL_77;
            v25 = (EventRaidEntity_o *)Master_object;
            Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            *(UnityEngine_Vector3_o *)&v26 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               0.0,
                                               0LL);
            if ( !*(_QWORD *)v9 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v29 = v26;
            v30 = v27;
            v31 = v28;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    v18,
                                    0LL);
            y = PointAsWorldFlatten.fields.y;
            x = PointAsWorldFlatten.fields.x;
            z = PointAsWorldFlatten.fields.z;
            if ( !*(_QWORD *)v9 )
              goto LABEL_77;
            v32 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(*(_QWORD *)v9 + 16LL), 1.0, v6);
            if ( !*(_QWORD *)v9 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v33 = v32;
            *(UnityEngine_Vector3_o *)&v34 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               v32,
                                               0LL);
            *(float *)(v4 + 24) = v34;
            v37 = *(_QWORD *)(v4 + 16);
            *(float *)(v4 + 28) = v35;
            *(float *)(v4 + 32) = v36;
            if ( !v37 )
              goto LABEL_77;
            v38 = v34;
            v39 = v35;
            v40 = v36;
            v66 = *(_DWORD *)(v37 + 40);
            if ( !byte_4A55CE3 )
            {
              sub_1B885B0(&System_Math_TypeInfo);
              byte_4A55CE3 = 1;
            }
            v41 = v38 - v29;
            v42 = v39 - v30;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
            v43 = sqrtf((float)((float)(v40 - v31) * (float)(v40 - v31)) + (float)((float)(v41 * v41)
                                                                                 + (float)(v42 * v42)));
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Master_object = BalanceConfig_TypeInfo;
            }
            if ( v43 < 0.001 )
              goto LABEL_80;
            v44 = (float)(v33 - v18) * (float)v66;
            v45 = (float)*(int *)(*((_QWORD *)Master_object + 23) + 260LL);
            if ( v44 > v45 )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = NetworkManager__getTime(0LL);
              v48 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v45, v25, v16, v47);
              if ( !*(_QWORD *)v9 )
                goto LABEL_77;
              Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
              if ( !Master_object )
                goto LABEL_77;
              v71 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v48, 0LL);
              *(UnityEngine_Vector3_o *)(v4 + 24) = v71;
              v49 = v71.fields.x;
              v50 = v71.fields.y;
              v51 = v71.fields.z;
              if ( !byte_4A55CE3 )
              {
                sub_1B885B0(&System_Math_TypeInfo);
                byte_4A55CE3 = 1;
              }
              Master_object = System_Math_TypeInfo;
              v52 = v49 - x;
              v53 = v50 - y;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v44 = v45;
              if ( sqrtf((float)((float)(v51 - z) * (float)(v51 - z)) + (float)((float)(v52 * v52) + (float)(v53 * v53))) < 0.001 )
              {
LABEL_80:
                if ( *(_QWORD *)v9 )
                {
                  v24 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 24LL);
                  v21 = *(_DWORD *)(v4 + 24);
                  v22 = *(_DWORD *)(v4 + 28);
                  v23 = *(_DWORD *)(v4 + 32);
                  goto LABEL_66;
                }
LABEL_77:
                sub_1B8880C(Master_object, v6);
              }
            }
            if ( !*(_QWORD *)v9 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v9 + 24LL);
            if ( !Master_object )
              goto LABEL_77;
            Master_object = UnityEngine_GameObject__AddComponent_object_(
                              (UnityEngine_GameObject_o *)Master_object,
                              (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
            if ( !Master_object )
              goto LABEL_77;
            *((_BYTE *)Master_object + 152) = 1;
            v54 = (System_Collections_Generic_List_object__o *)*((_QWORD *)Master_object + 9);
            *((float *)Master_object + 32) = x;
            *((float *)Master_object + 33) = y;
            v55 = (UITweener_o *)Master_object;
            *((float *)Master_object + 34) = z;
            v56 = *(_DWORD *)(v4 + 32);
            v57 = *(_QWORD *)(v4 + 24);
            *((float *)Master_object + 14) = v44;
            *((_DWORD *)Master_object + 8) = 0;
            *((_DWORD *)Master_object + 37) = v56;
            *(_QWORD *)((char *)Master_object + 140) = v57;
            v58 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(
              v58,
              (Il2CppObject *)v4,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0LL);
            v59 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
            EventDelegate___ctor_46786736(v59, v58, 0LL);
            if ( !v54 )
              goto LABEL_77;
            items = v54->fields._items;
            v63 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++v54->fields._version;
            if ( !items )
              goto LABEL_77;
            size = v54->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v54,
                (Il2CppObject *)v59,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = &items->obj.klass + size;
              v54->fields._size = size + 1;
              v65[4] = (Il2CppClass *)v59;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
            }
            UITweener__PlayForward(v55, 0LL);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v9 )
          {
            Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0LL);
              if ( *(_QWORD *)v9 )
              {
                Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v18, 0LL);
                  if ( *(_QWORD *)v9 )
                  {
                    Master_object = *(void **)(*(_QWORD *)v9 + 32LL);
                    if ( Master_object )
                    {
                      *(UnityEngine_Vector3_o *)&v21 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                         (Custom2dSplineMesh_o *)Master_object,
                                                         *((float *)Master_object + 17),
                                                         0LL);
                      if ( *(_QWORD *)v9 )
                      {
                        v24 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 24LL);
LABEL_66:
                        GameObjectExtensions__SetPosition(v24, *(UnityEngine_Vector3_o *)&v21, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MapGimmickId_k__BackingField = mapGimmickId;
  v10->fields._MapGimmickObject_k__BackingField = mapGimmickObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v10->fields._MapGimmickObject_k__BackingField,
    (int32_t)mapGimmickObject,
    v11,
    v12);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10, (int32_t)mapGimmickPathMesh, v13, v14);
  LODWORD(v10->monitor) = moveTime;
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  this->fields._MapGimmickId_k__BackingField = 0;
  this->fields._MapGimmickObject_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._MapGimmickObject_k__BackingField, 0, v2, v3);
  v4->fields._MapGimmickPathMesh_k__BackingField = 0LL;
  v4 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v4 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
  LODWORD(v4->monitor) = 0;
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

  this->fields._MapGimmickObject_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapGimmickObject_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapGimmickPathMesh_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
    sub_1B8880C(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}