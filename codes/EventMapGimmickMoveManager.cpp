void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188D71 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo, v3);
    byte_4188D71 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0

  if ( (byte_4188D6B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__, data);
    byte_4188D6B = 1;
  }
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_B2C434(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventMapGimmickMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
}


float __fastcall EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
        int64_t calcTime,
        EventRaidEntity_o *eventRaidEnt,
        MapGimmickPathEntity_o *mapGimmickPathEnt,
        const MethodInfo *method)
{
  float v4; // s0

  if ( !eventRaidEnt )
    return 0.0;
  if ( !mapGimmickPathEnt )
    sub_B2C434(calcTime, eventRaidEnt);
  v4 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(
         mapGimmickPathEnt->fields.mapGimmickId,
         (float)(calcTime - eventRaidEnt->fields.startedAt) / (float)mapGimmickPathEnt->fields.moveTime,
         (const MethodInfo *)eventRaidEnt);
  return UnityEngine_Mathf__Clamp(v4, 0.0, 1.0, 0LL);
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
  if ( (byte_4188D6E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    sub_B2C35C(&Method_DataManager_GetMaster_EventRaidMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    *(_QWORD *)&targetId = sub_B2C35C(&NetworkManager_TypeInfo, v10);
    byte_4188D6E = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_26;
  valueType = mapGimmickMoveEnt->fields.valueType;
  v12 = 0.0;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v12,
               *(const MethodInfo **)&targetNum);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    ProgressNum = CondType__GetProgressNum(32, v6, 0LL, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *(_QWORD *)&targetId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
LABEL_26:
    sub_B2C434(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0LL);
  if ( Entity )
  {
    v16 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188D6A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v6);
    byte_4188D6A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v8);
    EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v9.fields.current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
LABEL_11:
    sub_B2C434(eventMapGimmickMoveDataList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  __int64 v3; // x1
  MapGimmickPathMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4188D70 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_MapGimmickPathMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188D70 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapGimmickPathMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                           Master_WarQuestSelectionMaster,
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
  MapGimmickPathReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1

  if ( (byte_4188D6F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4188D6F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapGimmickPathReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v7);
  return MapGimmickPathReleaseMaster__LimitMapGimmickPathRate(
           Master_WarQuestSelectionMaster,
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
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188D6C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v5);
    byte_4188D6C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v7 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v7,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v9.fields.current,
      v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
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
  void *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
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
  UnityEngine_Object_o *Component_srcLineSprite; // x24
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
  float v48; // s1
  float v49; // s2
  float v50; // s0
  float v51; // s11
  float v52; // s10
  float v53; // s0
  float v54; // s12
  float v55; // s0
  float v56; // s1
  float v57; // s2
  __int64 v58; // x8
  int v59; // s9
  float magnitude; // s13
  float v61; // s9
  float v62; // s8
  int64_t Time; // x0
  const MethodInfo *v64; // x3
  float v65; // s0
  __int64 v66; // x8
  int v67; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x21
  UITweener_o *v69; // x20
  EventDelegate_Callback_o *v70; // x22
  EventDelegate_o *v71; // x19
  float v72; // [xsp+Ch] [xbp-94h]
  MethodInfo methoda; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188D6D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, data);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_MapGimmickPathMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&EventDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__, v14);
    sub_B2C35C(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, v15);
    byte_4188D6D = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v16 = sub_B2C42C(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  EventMapGimmickMoveManager___c__DisplayClass7_0___ctor((EventMapGimmickMoveManager___c__DisplayClass7_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_73;
  *(_QWORD *)(v16 + 16) = data;
  v25 = v16 + 16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)data, v19, v20, v21, v22, v23, v24);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_73;
  v26 = *(UnityEngine_Object_o **)(*(_QWORD *)(v16 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (void *)UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( !*(_QWORD *)v25 )
      goto LABEL_73;
    v27 = *(UnityEngine_Object_o **)(*(_QWORD *)v25 + 32LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v27, 0LL, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( *(_QWORD *)v25 && Master_WarQuestSelectionMaster )
      {
        MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                                 (MapGimmickPathMaster_o *)Master_WarQuestSelectionMaster,
                                 *(_DWORD *)(*(_QWORD *)v25 + 16LL),
                                 0LL);
        if ( !MapGimmickPathEntity )
          return;
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v32 = MapGimmickPathEntity;
        v33 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v29);
        if ( *(_QWORD *)v25 )
        {
          Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 24LL);
          if ( Master_WarQuestSelectionMaster )
          {
            v34 = v33;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (void *)UnityEngine_Object__op_Inequality(
                                                       Component_srcLineSprite,
                                                       0LL,
                                                       0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
            }
            valueType = v32->fields.valueType;
            if ( valueType == 1 )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventRaidMaster___);
              if ( Master_WarQuestSelectionMaster )
              {
                Master_WarQuestSelectionMaster = EventRaidMaster__GetEntity(
                                                   (EventRaidMaster_o *)Master_WarQuestSelectionMaster,
                                                   targetId,
                                                   targetNum,
                                                   0LL);
                if ( !Master_WarQuestSelectionMaster )
                  return;
                if ( *(_QWORD *)v25 )
                {
                  v41 = (EventRaidEntity_o *)Master_WarQuestSelectionMaster;
                  Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    *(UnityEngine_Vector3_o *)&v42 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                       (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                       0.0,
                                                       0LL);
                    if ( *(_QWORD *)v25 )
                    {
                      Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                      if ( Master_WarQuestSelectionMaster )
                      {
                        v45 = v42;
                        v46 = v43;
                        v47 = v44;
                        *(UnityEngine_Vector3_o *)(&v48 - 1) = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                                 (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                                 v34,
                                                                 0LL);
                        v72 = v50;
                        if ( *(_QWORD *)v25 )
                        {
                          v51 = v48;
                          v52 = v49;
                          v53 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                                  *(_DWORD *)(*(_QWORD *)v25 + 16LL),
                                  1.0,
                                  v18);
                          if ( *(_QWORD *)v25 )
                          {
                            Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                            if ( Master_WarQuestSelectionMaster )
                            {
                              v54 = v53;
                              *(UnityEngine_Vector3_o *)&v55 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                                 (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                                 v53,
                                                                 0LL);
                              v58 = *(_QWORD *)(v16 + 16);
                              *(float *)(v16 + 24) = v55;
                              *(float *)(v16 + 28) = v56;
                              *(float *)(v16 + 32) = v57;
                              if ( v58 )
                              {
                                v59 = *(_DWORD *)(v58 + 40);
                                v74.fields.x = v55 - v45;
                                v74.fields.y = v56 - v46;
                                v74.fields.z = v57 - v47;
                                methoda.methodPointer = *(Il2CppMethodPointer *)&v74.fields.x;
                                *(float *)&methoda.invoker_method = v74.fields.z;
                                magnitude = UnityEngine_Vector3__get_magnitude(v74, &methoda);
                                Master_WarQuestSelectionMaster = BalanceConfig_TypeInfo;
                                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  Master_WarQuestSelectionMaster = BalanceConfig_TypeInfo;
                                }
                                if ( magnitude < 0.001 )
                                  goto LABEL_76;
                                v61 = (float)(v54 - v34) * (float)v59;
                                v62 = (float)*(int *)(*((_QWORD *)Master_WarQuestSelectionMaster + 23) + 252LL);
                                if ( v61 <= v62 )
                                  goto LABEL_77;
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                Time = NetworkManager__getTime(0LL);
                                v65 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
                                        Time + (__int64)v62,
                                        v41,
                                        v32,
                                        v64);
                                if ( !*(_QWORD *)v25 )
                                  goto LABEL_73;
                                Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                                if ( !Master_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                        (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                        v65,
                                                        0LL);
                                *(UnityEngine_Vector3_o *)(v16 + 24) = PointAsWorldFlatten;
                                PointAsWorldFlatten.fields.x = PointAsWorldFlatten.fields.x - v72;
                                PointAsWorldFlatten.fields.y = PointAsWorldFlatten.fields.y - v51;
                                PointAsWorldFlatten.fields.z = PointAsWorldFlatten.fields.z - v52;
                                methoda.methodPointer = *(Il2CppMethodPointer *)&PointAsWorldFlatten.fields.x;
                                *(float *)&methoda.invoker_method = PointAsWorldFlatten.fields.z;
                                v61 = v62;
                                if ( UnityEngine_Vector3__get_magnitude(PointAsWorldFlatten, &methoda) < 0.001 )
                                {
LABEL_76:
                                  if ( *(_QWORD *)v25 )
                                  {
                                    v40 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v25 + 24LL);
                                    v37 = *(_DWORD *)(v16 + 24);
                                    v38 = *(_DWORD *)(v16 + 28);
                                    v39 = *(_DWORD *)(v16 + 32);
                                    goto LABEL_59;
                                  }
                                }
                                else
                                {
LABEL_77:
                                  if ( *(_QWORD *)v25 )
                                  {
                                    Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 24LL);
                                    if ( Master_WarQuestSelectionMaster )
                                    {
                                      Master_WarQuestSelectionMaster = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                         (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                         (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                      if ( Master_WarQuestSelectionMaster )
                                      {
                                        *((float *)Master_WarQuestSelectionMaster + 30) = v72;
                                        *((float *)Master_WarQuestSelectionMaster + 31) = v51;
                                        *((float *)Master_WarQuestSelectionMaster + 32) = v52;
                                        *((_BYTE *)Master_WarQuestSelectionMaster + 144) = 1;
                                        v66 = *(_QWORD *)(v16 + 24);
                                        v67 = *(_DWORD *)(v16 + 32);
                                        *((float *)Master_WarQuestSelectionMaster + 12) = v61;
                                        *((_DWORD *)Master_WarQuestSelectionMaster + 6) = 0;
                                        *(_QWORD *)((char *)Master_WarQuestSelectionMaster + 132) = v66;
                                        *((_DWORD *)Master_WarQuestSelectionMaster + 35) = v67;
                                        v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)Master_WarQuestSelectionMaster + 8);
                                        v69 = (UITweener_o *)Master_WarQuestSelectionMaster;
                                        v70 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
                                        EventDelegate_Callback___ctor(
                                          v70,
                                          (Il2CppObject *)v16,
                                          Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
                                          0LL);
                                        v71 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
                                        EventDelegate___ctor_29723424(v71, v70, 0LL);
                                        if ( v68 )
                                        {
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                            v68,
                                            (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
                                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                          UITweener__PlayForward(v69, 0LL);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              if ( valueType != 2 )
                return;
              if ( *(_QWORD *)v25 )
              {
                Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                if ( Master_WarQuestSelectionMaster )
                {
                  Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster, 0LL);
                  if ( *(_QWORD *)v25 )
                  {
                    Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster, v34, 0LL);
                      if ( *(_QWORD *)v25 )
                      {
                        Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v25 + 32LL);
                        if ( Master_WarQuestSelectionMaster )
                        {
                          *(UnityEngine_Vector3_o *)&v37 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                             (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                             *((float *)Master_WarQuestSelectionMaster + 15),
                                                             0LL);
                          if ( *(_QWORD *)v25 )
                          {
                            v40 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v25 + 24LL);
LABEL_59:
                            GameObjectExtensions__SetPosition(v40, *(UnityEngine_Vector3_o *)&v37, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_73:
      sub_B2C434(Master_WarQuestSelectionMaster, v18);
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

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MapGimmickId_k__BackingField = mapGimmickId;
  v10->fields._MapGimmickObject_k__BackingField = mapGimmickObject;
  sub_B2C2F8(&v10->fields._MapGimmickObject_k__BackingField, mapGimmickObject);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_B2C2F8(v10, mapGimmickPathMesh);
  LODWORD(v10->monitor) = moveTime;
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        const MethodInfo *method)
{
  EventMapGimmickMoveManager_MapGimmickMoveData_o *v2; // x19

  v2 = this;
  this->fields._MapGimmickId_k__BackingField = 0;
  this->fields._MapGimmickObject_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._MapGimmickObject_k__BackingField, 0LL);
  v2->fields._MapGimmickPathMesh_k__BackingField = 0LL;
  v2 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v2 + 32);
  sub_B2C2F8(v2, 0LL);
  LODWORD(v2->monitor) = 0;
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
  this->fields._MapGimmickObject_k__BackingField = value;
  sub_B2C2F8(&this->fields._MapGimmickObject_k__BackingField, value);
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_B2C2F8(&this->fields._MapGimmickPathMesh_k__BackingField, value);
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
    sub_B2C434(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}