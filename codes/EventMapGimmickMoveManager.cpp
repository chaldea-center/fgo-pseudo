void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B115C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
    byte_42B115C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0

  if ( (byte_42B1156 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
    byte_42B1156 = 1;
  }
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_B52A5C(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventMapGimmickMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
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
    sub_B52A5C(calcTime, eventRaidEnt);
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
  int32_t valueType; // w8
  float v8; // s8
  int64_t ProgressNum; // x21
  int v10; // w8
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v12; // x20
  int64_t Time; // x0
  const MethodInfo *v14; // x3

  v6 = targetId;
  if ( (byte_42B1159 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    *(_QWORD *)&targetId = sub_B52984(&NetworkManager_TypeInfo);
    byte_42B1159 = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_26;
  valueType = mapGimmickMoveEnt->fields.valueType;
  v8 = 0.0;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v8,
               *(const MethodInfo **)&targetNum);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    ProgressNum = CondType__GetProgressNum(32, v6, 0LL, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *(_QWORD *)&targetId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
LABEL_26:
    sub_B52A5C(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0LL);
  if ( Entity )
  {
    v12 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1155 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_42B1155 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B52A5C(0LL, v4);
    EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v5.fields.current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
LABEL_11:
    sub_B52A5C(eventMapGimmickMoveDataList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  MapGimmickPathMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v6; // x3

  if ( (byte_42B115B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B115B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapGimmickPathMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v4);
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
  MapGimmickPathReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1

  if ( (byte_42B115A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B115A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapGimmickPathReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v6);
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
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1157 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
    byte_42B1157 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v6,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v4 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v4,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v6.fields.current,
      v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x20
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v17; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v20; // x21
  float v21; // s0
  float v22; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  int32_t valueType; // w8
  int v25; // s0
  int v26; // s1
  int v27; // s2
  UnityEngine_GameObject_o *v28; // x0
  EventRaidEntity_o *v29; // x22
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s13
  float v34; // s14
  float v35; // s15
  float v36; // s1
  float v37; // s2
  float v38; // s0
  float v39; // s11
  float v40; // s10
  float v41; // s0
  float v42; // s12
  float v43; // s0
  float v44; // s1
  float v45; // s2
  __int64 v46; // x8
  int v47; // s9
  float magnitude; // s13
  float v49; // s9
  float v50; // s8
  int64_t Time; // x0
  const MethodInfo *v52; // x3
  float v53; // s0
  __int64 v54; // x8
  int v55; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x21
  UITweener_o *v57; // x20
  EventDelegate_Callback_o *v58; // x22
  EventDelegate_o *v59; // x19
  float v60; // [xsp+Ch] [xbp-94h]
  MethodInfo methoda; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1158 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_B52984(&Method_DataManager_GetMaster_MapGimmickPathMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__);
    sub_B52984(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
    byte_42B1158 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v4 = sub_B52A54(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  EventMapGimmickMoveManager___c__DisplayClass7_0___ctor((EventMapGimmickMoveManager___c__DisplayClass7_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_73;
  *(_QWORD *)(v4 + 16) = data;
  v13 = v4 + 16;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)data, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_73;
  v14 = *(UnityEngine_Object_o **)(*(_QWORD *)(v4 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (void *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( !*(_QWORD *)v13 )
      goto LABEL_73;
    v15 = *(UnityEngine_Object_o **)(*(_QWORD *)v13 + 32LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( *(_QWORD *)v13 && Master_WarQuestSelectionMaster )
      {
        MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                                 (MapGimmickPathMaster_o *)Master_WarQuestSelectionMaster,
                                 *(_DWORD *)(*(_QWORD *)v13 + 16LL),
                                 0LL);
        if ( !MapGimmickPathEntity )
          return;
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v20 = MapGimmickPathEntity;
        v21 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v17);
        if ( *(_QWORD *)v13 )
        {
          Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 24LL);
          if ( Master_WarQuestSelectionMaster )
          {
            v22 = v21;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
              UnityEngine_Object__Destroy_35616956(Component_srcLineSprite, 0LL);
            }
            valueType = v20->fields.valueType;
            if ( valueType == 1 )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventRaidMaster___);
              if ( Master_WarQuestSelectionMaster )
              {
                Master_WarQuestSelectionMaster = EventRaidMaster__GetEntity(
                                                   (EventRaidMaster_o *)Master_WarQuestSelectionMaster,
                                                   targetId,
                                                   targetNum,
                                                   0LL);
                if ( !Master_WarQuestSelectionMaster )
                  return;
                if ( *(_QWORD *)v13 )
                {
                  v29 = (EventRaidEntity_o *)Master_WarQuestSelectionMaster;
                  Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    *(UnityEngine_Vector3_o *)&v30 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                       (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                       0.0,
                                                       0LL);
                    if ( *(_QWORD *)v13 )
                    {
                      Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                      if ( Master_WarQuestSelectionMaster )
                      {
                        v33 = v30;
                        v34 = v31;
                        v35 = v32;
                        *(UnityEngine_Vector3_o *)(&v36 - 1) = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                                 (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                                 v22,
                                                                 0LL);
                        v60 = v38;
                        if ( *(_QWORD *)v13 )
                        {
                          v39 = v36;
                          v40 = v37;
                          v41 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                                  *(_DWORD *)(*(_QWORD *)v13 + 16LL),
                                  1.0,
                                  v6);
                          if ( *(_QWORD *)v13 )
                          {
                            Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                            if ( Master_WarQuestSelectionMaster )
                            {
                              v42 = v41;
                              *(UnityEngine_Vector3_o *)&v43 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                                 (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                                 v41,
                                                                 0LL);
                              v46 = *(_QWORD *)(v4 + 16);
                              *(float *)(v4 + 24) = v43;
                              *(float *)(v4 + 28) = v44;
                              *(float *)(v4 + 32) = v45;
                              if ( v46 )
                              {
                                v47 = *(_DWORD *)(v46 + 40);
                                v62.fields.x = v43 - v33;
                                v62.fields.y = v44 - v34;
                                v62.fields.z = v45 - v35;
                                methoda.methodPointer = *(Il2CppMethodPointer *)&v62.fields.x;
                                *(float *)&methoda.invoker_method = v62.fields.z;
                                magnitude = UnityEngine_Vector3__get_magnitude(v62, &methoda);
                                Master_WarQuestSelectionMaster = BalanceConfig_TypeInfo;
                                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  Master_WarQuestSelectionMaster = BalanceConfig_TypeInfo;
                                }
                                if ( magnitude < 0.001 )
                                  goto LABEL_76;
                                v49 = (float)(v42 - v22) * (float)v47;
                                v50 = (float)*(int *)(*((_QWORD *)Master_WarQuestSelectionMaster + 23) + 252LL);
                                if ( v49 <= v50 )
                                  goto LABEL_77;
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                Time = NetworkManager__getTime(0LL);
                                v53 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
                                        Time + (__int64)v50,
                                        v29,
                                        v20,
                                        v52);
                                if ( !*(_QWORD *)v13 )
                                  goto LABEL_73;
                                Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                                if ( !Master_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                        (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                        v53,
                                                        0LL);
                                *(UnityEngine_Vector3_o *)(v4 + 24) = PointAsWorldFlatten;
                                PointAsWorldFlatten.fields.x = PointAsWorldFlatten.fields.x - v60;
                                PointAsWorldFlatten.fields.y = PointAsWorldFlatten.fields.y - v39;
                                PointAsWorldFlatten.fields.z = PointAsWorldFlatten.fields.z - v40;
                                methoda.methodPointer = *(Il2CppMethodPointer *)&PointAsWorldFlatten.fields.x;
                                *(float *)&methoda.invoker_method = PointAsWorldFlatten.fields.z;
                                v49 = v50;
                                if ( UnityEngine_Vector3__get_magnitude(PointAsWorldFlatten, &methoda) < 0.001 )
                                {
LABEL_76:
                                  if ( *(_QWORD *)v13 )
                                  {
                                    v28 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 24LL);
                                    v25 = *(_DWORD *)(v4 + 24);
                                    v26 = *(_DWORD *)(v4 + 28);
                                    v27 = *(_DWORD *)(v4 + 32);
                                    goto LABEL_59;
                                  }
                                }
                                else
                                {
LABEL_77:
                                  if ( *(_QWORD *)v13 )
                                  {
                                    Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 24LL);
                                    if ( Master_WarQuestSelectionMaster )
                                    {
                                      Master_WarQuestSelectionMaster = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                         (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                         (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                      if ( Master_WarQuestSelectionMaster )
                                      {
                                        *((float *)Master_WarQuestSelectionMaster + 30) = v60;
                                        *((float *)Master_WarQuestSelectionMaster + 31) = v39;
                                        *((float *)Master_WarQuestSelectionMaster + 32) = v40;
                                        *((_BYTE *)Master_WarQuestSelectionMaster + 144) = 1;
                                        v54 = *(_QWORD *)(v4 + 24);
                                        v55 = *(_DWORD *)(v4 + 32);
                                        *((float *)Master_WarQuestSelectionMaster + 12) = v49;
                                        *((_DWORD *)Master_WarQuestSelectionMaster + 6) = 0;
                                        *(_QWORD *)((char *)Master_WarQuestSelectionMaster + 132) = v54;
                                        *((_DWORD *)Master_WarQuestSelectionMaster + 35) = v55;
                                        v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)Master_WarQuestSelectionMaster + 8);
                                        v57 = (UITweener_o *)Master_WarQuestSelectionMaster;
                                        v58 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
                                        EventDelegate_Callback___ctor(
                                          v58,
                                          (Il2CppObject *)v4,
                                          Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
                                          0LL);
                                        v59 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
                                        EventDelegate___ctor_29649660(v59, v58, 0LL);
                                        if ( v56 )
                                        {
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                            v56,
                                            (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
                                            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                          UITweener__PlayForward(v57, 0LL);
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
              if ( *(_QWORD *)v13 )
              {
                Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                if ( Master_WarQuestSelectionMaster )
                {
                  Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster, 0LL);
                  if ( *(_QWORD *)v13 )
                  {
                    Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster, v22, 0LL);
                      if ( *(_QWORD *)v13 )
                      {
                        Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v13 + 32LL);
                        if ( Master_WarQuestSelectionMaster )
                        {
                          *(UnityEngine_Vector3_o *)&v25 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                             (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                             *((float *)Master_WarQuestSelectionMaster + 15),
                                                             0LL);
                          if ( *(_QWORD *)v13 )
                          {
                            v28 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 24LL);
LABEL_59:
                            GameObjectExtensions__SetPosition(v28, *(UnityEngine_Vector3_o *)&v25, 0LL);
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
      sub_B52A5C(Master_WarQuestSelectionMaster, v6);
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
  sub_B52920(&v10->fields._MapGimmickObject_k__BackingField);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_B52920(v10);
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
  sub_B52920(&this->fields._MapGimmickObject_k__BackingField);
  v2->fields._MapGimmickPathMesh_k__BackingField = 0LL;
  v2 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v2 + 32);
  sub_B52920(v2);
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
  sub_B52920(&this->fields._MapGimmickObject_k__BackingField);
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_B52920(&this->fields._MapGimmickPathMesh_k__BackingField);
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
    sub_B52A5C(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}