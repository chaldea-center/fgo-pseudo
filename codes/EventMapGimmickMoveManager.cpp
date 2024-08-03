void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00026 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo, v4);
    byte_4A00026 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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

  if ( (byte_4A00020 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__, data);
    byte_4A00020 = 1;
  }
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList
    || (items = eventMapGimmickMoveDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
        ++eventMapGimmickMoveDataList->fields._version,
        !items) )
  {
    sub_1B64324(eventMapGimmickMoveDataList);
  }
  size = eventMapGimmickMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventMapGimmickMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    eventMapGimmickMoveDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
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
      sub_1B64324(calcTime);
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
  if ( (byte_4A00023 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    sub_1B640C8(&Method_DataManager_GetMaster_EventRaidMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    *(_QWORD *)&targetId = sub_1B640C8(&NetworkManager_TypeInfo, v10);
    byte_4A00023 = 1;
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
    *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
    sub_1B64324(*(_QWORD *)&targetId);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventRaidMaster___);
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
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *current; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A0001F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v6);
    byte_4A0001F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    eventMapGimmickMoveDataList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v8 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v8);
    v17.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[1].monitor, 0, v9, v10);
    current[2].klass = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[2], 0, v12, v13);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  v14 = this->fields.eventMapGimmickMoveDataList;
  if ( !v14 )
LABEL_13:
    sub_1B64324(eventMapGimmickMoveDataList);
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4A00025 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_MapGimmickPathMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_4A00025 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0

  if ( (byte_4A00024 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_4A00024 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
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

  if ( (byte_4A00021 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v5);
    byte_4A00021 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventMapGimmickMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventMapGimmickMoveDataList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v7 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v7,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v9.fields._current,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
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
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x20
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *v22; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v24; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v27; // x21
  float v28; // s0
  float v29; // s8
  Il2CppObject *Component_object; // x24
  int32_t valueType; // w8
  int v32; // s0
  int v33; // s1
  int v34; // s2
  UnityEngine_GameObject_o *v35; // x0
  EventRaidEntity_o *v36; // x22
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s13
  float v41; // s14
  float v42; // s15
  const MethodInfo *v43; // x1
  float v44; // s0
  float v45; // s12
  __int64 v46; // x1
  float v47; // s0
  float v48; // s1
  float v49; // s2
  __int64 v50; // x8
  float v51; // s9
  float v52; // s10
  float v53; // s11
  float v54; // s13
  float v55; // s10
  float v56; // s9
  float v57; // s8
  float v58; // s12
  int64_t Time; // x0
  const MethodInfo *v60; // x3
  float v61; // s0
  __int64 v62; // x1
  float v63; // s8
  float v64; // s9
  float v65; // s10
  float v66; // s13
  float v67; // s9
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_object__o *v70; // x21
  UITweener_o *v71; // x20
  int v72; // w8
  __int64 v73; // x9
  EventDelegate_Callback_o *v74; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  EventDelegate_o *v77; // x19
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  int v84; // [xsp+8h] [xbp-98h]
  float z; // [xsp+Ch] [xbp-94h]
  float y; // [xsp+58h] [xbp-48h]
  float x; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00022 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, data);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_MapGimmickPathMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&EventDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__, v14);
    sub_1B640C8(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, v15);
    byte_4A00022 = 1;
  }
  v16 = sub_1B64314(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, data, method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_77;
  *(_QWORD *)(v16 + 16) = data;
  v20 = v16 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)data, v18, v19);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_77;
  v21 = *(UnityEngine_Object_o **)(*(_QWORD *)(v16 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (void *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(_QWORD *)v20 )
      goto LABEL_77;
    v22 = *(UnityEngine_Object_o **)(*(_QWORD *)v20 + 32LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( !*(_QWORD *)v20 || !Master_object )
        goto LABEL_77;
      MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                               (MapGimmickPathMaster_o *)Master_object,
                               *(_DWORD *)(*(_QWORD *)v20 + 16LL),
                               0LL);
      if ( MapGimmickPathEntity )
      {
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v27 = MapGimmickPathEntity;
        v28 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v24);
        if ( !*(_QWORD *)v20 )
          goto LABEL_77;
        Master_object = *(void **)(*(_QWORD *)v20 + 24LL);
        if ( !Master_object )
          goto LABEL_77;
        v29 = v28;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Component_object, 0LL);
        }
        valueType = v27->fields.valueType;
        if ( valueType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventRaidMaster___);
          if ( !Master_object )
            goto LABEL_77;
          Master_object = EventRaidMaster__GetEntity((EventRaidMaster_o *)Master_object, targetId, targetNum, 0LL);
          if ( Master_object )
          {
            if ( !*(_QWORD *)v20 )
              goto LABEL_77;
            v36 = (EventRaidEntity_o *)Master_object;
            Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            *(UnityEngine_Vector3_o *)&v37 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               0.0,
                                               0LL);
            if ( !*(_QWORD *)v20 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v40 = v37;
            v41 = v38;
            v42 = v39;
            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                    (Custom2dSplineMesh_o *)Master_object,
                                    v29,
                                    0LL);
            y = PointAsWorldFlatten.fields.y;
            x = PointAsWorldFlatten.fields.x;
            z = PointAsWorldFlatten.fields.z;
            if ( !*(_QWORD *)v20 )
              goto LABEL_77;
            v44 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(*(_DWORD *)(*(_QWORD *)v20 + 16LL), 1.0, v43);
            if ( !*(_QWORD *)v20 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
            if ( !Master_object )
              goto LABEL_77;
            v45 = v44;
            *(UnityEngine_Vector3_o *)&v47 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                               (Custom2dSplineMesh_o *)Master_object,
                                               v44,
                                               0LL);
            *(float *)(v16 + 24) = v47;
            v50 = *(_QWORD *)(v16 + 16);
            *(float *)(v16 + 28) = v48;
            *(float *)(v16 + 32) = v49;
            if ( !v50 )
              goto LABEL_77;
            v51 = v47;
            v52 = v48;
            v53 = v49;
            v84 = *(_DWORD *)(v50 + 40);
            if ( !byte_49F7113 )
            {
              sub_1B640C8(&System_Math_TypeInfo, v46);
              byte_49F7113 = 1;
            }
            v54 = v51 - v40;
            v55 = v52 - v41;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
            v56 = sqrtf((float)((float)(v53 - v42) * (float)(v53 - v42)) + (float)((float)(v54 * v54)
                                                                                 + (float)(v55 * v55)));
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Master_object = BalanceConfig_TypeInfo;
            }
            if ( v56 < 0.001 )
              goto LABEL_80;
            v57 = (float)(v45 - v29) * (float)v84;
            v58 = (float)*(int *)(*((_QWORD *)Master_object + 23) + 260LL);
            if ( v57 > v58 )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = NetworkManager__getTime(0LL);
              v61 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time + (__int64)v58, v36, v27, v60);
              if ( !*(_QWORD *)v20 )
                goto LABEL_77;
              Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
              if ( !Master_object )
                goto LABEL_77;
              v89 = Custom2dSplineMesh__GetPointAsWorldFlatten((Custom2dSplineMesh_o *)Master_object, v61, 0LL);
              *(UnityEngine_Vector3_o *)(v16 + 24) = v89;
              v63 = v89.fields.x;
              v64 = v89.fields.y;
              v65 = v89.fields.z;
              if ( !byte_49F7113 )
              {
                sub_1B640C8(&System_Math_TypeInfo, v62);
                byte_49F7113 = 1;
              }
              Master_object = System_Math_TypeInfo;
              v66 = v63 - x;
              v67 = v64 - y;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v57 = v58;
              if ( sqrtf((float)((float)(v65 - z) * (float)(v65 - z)) + (float)((float)(v66 * v66) + (float)(v67 * v67))) < 0.001 )
              {
LABEL_80:
                if ( *(_QWORD *)v20 )
                {
                  v35 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v20 + 24LL);
                  v32 = *(_DWORD *)(v16 + 24);
                  v33 = *(_DWORD *)(v16 + 28);
                  v34 = *(_DWORD *)(v16 + 32);
                  goto LABEL_66;
                }
LABEL_77:
                sub_1B64324(Master_object);
              }
            }
            if ( !*(_QWORD *)v20 )
              goto LABEL_77;
            Master_object = *(void **)(*(_QWORD *)v20 + 24LL);
            if ( !Master_object )
              goto LABEL_77;
            Master_object = UnityEngine_GameObject__AddComponent_object_(
                              (UnityEngine_GameObject_o *)Master_object,
                              (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
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
            *((float *)Master_object + 14) = v57;
            *((_DWORD *)Master_object + 8) = 0;
            *((_DWORD *)Master_object + 37) = v72;
            *(_QWORD *)((char *)Master_object + 140) = v73;
            v74 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v68, v69);
            EventDelegate_Callback___ctor(
              v74,
              (Il2CppObject *)v16,
              Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
              0LL);
            v77 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v75, v76);
            EventDelegate___ctor_46508544(v77, v74, 0LL);
            if ( !v70 )
              goto LABEL_77;
            items = v70->fields._items;
            v81 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++v70->fields._version;
            if ( !items )
              goto LABEL_77;
            size = v70->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v70,
                (Il2CppObject *)v77,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
            }
            else
            {
              v83 = &items->obj.klass + size;
              v70->fields._size = size + 1;
              v83[4] = (Il2CppClass *)v77;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)v77, v78, v79);
            }
            UITweener__PlayForward(v71, 0LL);
          }
        }
        else if ( valueType == 2 )
        {
          if ( *(_QWORD *)v20 )
          {
            Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
            if ( Master_object )
            {
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_object, 0LL);
              if ( *(_QWORD *)v20 )
              {
                Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
                if ( Master_object )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_object, v29, 0LL);
                  if ( *(_QWORD *)v20 )
                  {
                    Master_object = *(void **)(*(_QWORD *)v20 + 32LL);
                    if ( Master_object )
                    {
                      *(UnityEngine_Vector3_o *)&v32 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                         (Custom2dSplineMesh_o *)Master_object,
                                                         *((float *)Master_object + 17),
                                                         0LL);
                      if ( *(_QWORD *)v20 )
                      {
                        v35 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v20 + 24LL);
LABEL_66:
                        GameObjectExtensions__SetPosition(v35, *(UnityEngine_Vector3_o *)&v32, 0LL);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v10->fields._MapGimmickObject_k__BackingField,
    (int32_t)mapGimmickObject,
    v11,
    v12);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v10, (int32_t)mapGimmickPathMesh, v13, v14);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._MapGimmickObject_k__BackingField, 0, v2, v3);
  v4->fields._MapGimmickPathMesh_k__BackingField = 0LL;
  v4 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v4 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
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
  sub_1B6406C(
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
  sub_1B6406C(
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
    sub_1B64324(this);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}