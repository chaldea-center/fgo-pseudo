void __fastcall EventMapGimmickMoveManager___ctor(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9B26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo, v5, v6, v7);
    byte_42E9B26 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData___ctor__);
  this->fields.eventMapGimmickMoveDataList = (struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventMapGimmickMoveManager__Add(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0

  if ( (byte_42E9B20 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    byte_42E9B20 = 1;
  }
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_B5D69C(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventMapGimmickMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Add__);
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
    sub_B5D69C(calcTime, eventRaidEnt);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t valueType; // w8
  float v20; // s8
  int64_t ProgressNum; // x21
  int v22; // w8
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v24; // x20
  int64_t Time; // x0
  const MethodInfo *v26; // x3

  v6 = targetId;
  if ( (byte_42E9B23 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetNum, (_DWORD)mapGimmickMoveEnt, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventRaidMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    *(_QWORD *)&targetId = sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    byte_42E9B23 = 1;
  }
  if ( !mapGimmickMoveEnt )
    goto LABEL_26;
  valueType = mapGimmickMoveEnt->fields.valueType;
  v20 = 0.0;
  if ( valueType != 1 )
  {
    if ( valueType != 2 )
      return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
               mapGimmickMoveEnt->fields.mapGimmickId,
               v20,
               *(const MethodInfo **)&targetNum);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    ProgressNum = CondType__GetProgressNum(32, v6, 0LL, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    *(_QWORD *)&targetId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
    if ( *(_QWORD *)&targetId )
    {
      *(_QWORD *)&targetId = QuestGroupMaster__GetQuestIdListByGroupId(*(QuestGroupMaster_o **)&targetId, v6, 2, 0LL);
      if ( *(_QWORD *)&targetId )
      {
        v22 = *(_DWORD *)(*(_QWORD *)&targetId + 24LL);
        if ( v22 >= 1 )
          v20 = (float)ProgressNum / (float)v22;
        return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                 mapGimmickMoveEnt->fields.mapGimmickId,
                 v20,
                 *(const MethodInfo **)&targetNum);
      }
    }
LABEL_26:
    sub_B5D69C(*(_QWORD *)&targetId, *(_QWORD *)&targetNum);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&targetId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventRaidMaster___);
  if ( !*(_QWORD *)&targetId )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity(*(EventRaidMaster_o **)&targetId, v6, targetNum, 0LL);
  if ( Entity )
  {
    v24 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v20 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(Time, v24, mapGimmickMoveEnt, v26);
  }
  return EventMapGimmickMoveManager__LimitMapGimmickPathRate(
           mapGimmickMoveEnt->fields.mapGimmickId,
           v20,
           *(const MethodInfo **)&targetNum);
}


void __fastcall EventMapGimmickMoveManager__Clear(EventMapGimmickMoveManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9B1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42E9B1F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v18);
    EventMapGimmickMoveManager_MapGimmickMoveData__Clear(
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v19.fields.current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
LABEL_11:
    sub_B5D69C(eventMapGimmickMoveDataList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__Clear__);
}


float __fastcall EventMapGimmickMoveManager__GetRemainingDistance(int32_t mapGimmickId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MapGimmickPathMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42E9B25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_MapGimmickPathMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9B25 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapGimmickPathMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
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
                     v11))
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
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  MapGimmickPathReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1

  if ( (byte_42E9B24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    byte_42E9B24 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (MapGimmickPathReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapGimmickPathReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__o *eventMapGimmickMoveDataList; // x0
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9B21 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E9B21 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventMapGimmickMoveDataList = this->fields.eventMapGimmickMoveDataList;
  if ( !eventMapGimmickMoveDataList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventMapGimmickMoveDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMapGimmickMoveManager_MapGimmickMoveData__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__MoveNext__);
    if ( !v15 )
      break;
    EventMapGimmickMoveManager__UpdateMapGimmickPosition(
      (EventMapGimmickMoveManager_o *)v15,
      (EventMapGimmickMoveManager_MapGimmickMoveData_o *)v17.fields.current,
      v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMapGimmickMoveManager_MapGimmickMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMapGimmickMoveManager__UpdateMapGimmickPosition(
        EventMapGimmickMoveManager_o *this,
        EventMapGimmickMoveManager_MapGimmickMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  __int64 v41; // x19
  void *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x20
  UnityEngine_Object_o *v51; // x21
  UnityEngine_Object_o *v52; // x21
  MapGimmickPathEntity_o *MapGimmickPathEntity; // x0
  const MethodInfo *v54; // x3
  int32_t targetId; // w22
  int32_t targetNum; // w23
  MapGimmickPathEntity_o *v57; // x21
  float v58; // s0
  float v59; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  int32_t valueType; // w8
  int v62; // s0
  int v63; // s1
  int v64; // s2
  UnityEngine_GameObject_o *v65; // x0
  EventRaidEntity_o *v66; // x22
  float v67; // s0
  float v68; // s1
  float v69; // s2
  float v70; // s13
  float v71; // s14
  float v72; // s15
  float v73; // s1
  float v74; // s2
  float v75; // s0
  float v76; // s11
  float v77; // s10
  float v78; // s0
  float v79; // s12
  float v80; // s0
  float v81; // s1
  float v82; // s2
  __int64 v83; // x8
  int v84; // s9
  float magnitude; // s13
  float v86; // s9
  float v87; // s8
  int64_t Time; // x0
  const MethodInfo *v89; // x3
  float v90; // s0
  __int64 v91; // x8
  int v92; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x21
  UITweener_o *v94; // x20
  EventDelegate_Callback_o *v95; // x22
  EventDelegate_o *v96; // x19
  float v97; // [xsp+Ch] [xbp-94h]
  MethodInfo methoda; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9B22 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventRaidMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_MapGimmickPathMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EventDelegate_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__, v35, v36, v37);
    sub_B5D5C4(&EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo, v38, v39, v40);
    byte_42E9B22 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v41 = sub_B5D694(EventMapGimmickMoveManager___c__DisplayClass7_0_TypeInfo);
  EventMapGimmickMoveManager___c__DisplayClass7_0___ctor((EventMapGimmickMoveManager___c__DisplayClass7_0_o *)v41, 0LL);
  if ( !v41 )
    goto LABEL_73;
  *(_QWORD *)(v41 + 16) = data;
  v50 = v41 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 16), (System_Int32_array **)data, v44, v45, v46, v47, v48, v49);
  if ( !*(_QWORD *)(v41 + 16) )
    goto LABEL_73;
  v51 = *(UnityEngine_Object_o **)(*(_QWORD *)(v41 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (void *)UnityEngine_Object__op_Equality(v51, 0LL, 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
  {
    if ( !*(_QWORD *)v50 )
      goto LABEL_73;
    v52 = *(UnityEngine_Object_o **)(*(_QWORD *)v50 + 32LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v52, 0LL, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_MapGimmickPathMaster___);
      if ( *(_QWORD *)v50 && Master_WarQuestSelectionMaster )
      {
        MapGimmickPathEntity = MapGimmickPathMaster__GetMapGimmickPathEntity(
                                 (MapGimmickPathMaster_o *)Master_WarQuestSelectionMaster,
                                 *(_DWORD *)(*(_QWORD *)v50 + 16LL),
                                 0LL);
        if ( !MapGimmickPathEntity )
          return;
        targetId = MapGimmickPathEntity->fields.targetId;
        targetNum = MapGimmickPathEntity->fields.targetNum;
        v57 = MapGimmickPathEntity;
        v58 = EventMapGimmickMoveManager__CalcMapGimmickPathRate(targetId, targetNum, MapGimmickPathEntity, v54);
        if ( *(_QWORD *)v50 )
        {
          Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 24LL);
          if ( Master_WarQuestSelectionMaster )
          {
            v59 = v58;
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
              UnityEngine_Object__Destroy_35620236(Component_srcLineSprite, 0LL);
            }
            valueType = v57->fields.valueType;
            if ( valueType == 1 )
            {
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventRaidMaster___);
              if ( Master_WarQuestSelectionMaster )
              {
                Master_WarQuestSelectionMaster = EventRaidMaster__GetEntity(
                                                   (EventRaidMaster_o *)Master_WarQuestSelectionMaster,
                                                   targetId,
                                                   targetNum,
                                                   0LL);
                if ( !Master_WarQuestSelectionMaster )
                  return;
                if ( *(_QWORD *)v50 )
                {
                  v66 = (EventRaidEntity_o *)Master_WarQuestSelectionMaster;
                  Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    *(UnityEngine_Vector3_o *)&v67 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                       (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                       0.0,
                                                       0LL);
                    if ( *(_QWORD *)v50 )
                    {
                      Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                      if ( Master_WarQuestSelectionMaster )
                      {
                        v70 = v67;
                        v71 = v68;
                        v72 = v69;
                        *(UnityEngine_Vector3_o *)(&v73 - 1) = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                                 (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                                 v59,
                                                                 0LL);
                        v97 = v75;
                        if ( *(_QWORD *)v50 )
                        {
                          v76 = v73;
                          v77 = v74;
                          v78 = EventMapGimmickMoveManager__LimitMapGimmickPathRate(
                                  *(_DWORD *)(*(_QWORD *)v50 + 16LL),
                                  1.0,
                                  v43);
                          if ( *(_QWORD *)v50 )
                          {
                            Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                            if ( Master_WarQuestSelectionMaster )
                            {
                              v79 = v78;
                              *(UnityEngine_Vector3_o *)&v80 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                                 (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                                 v78,
                                                                 0LL);
                              v83 = *(_QWORD *)(v41 + 16);
                              *(float *)(v41 + 24) = v80;
                              *(float *)(v41 + 28) = v81;
                              *(float *)(v41 + 32) = v82;
                              if ( v83 )
                              {
                                v84 = *(_DWORD *)(v83 + 40);
                                v99.fields.x = v80 - v70;
                                v99.fields.y = v81 - v71;
                                v99.fields.z = v82 - v72;
                                methoda.methodPointer = *(Il2CppMethodPointer *)&v99.fields.x;
                                *(float *)&methoda.invoker_method = v99.fields.z;
                                magnitude = UnityEngine_Vector3__get_magnitude(v99, &methoda);
                                Master_WarQuestSelectionMaster = BalanceConfig_TypeInfo;
                                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  Master_WarQuestSelectionMaster = BalanceConfig_TypeInfo;
                                }
                                if ( magnitude < 0.001 )
                                  goto LABEL_76;
                                v86 = (float)(v79 - v59) * (float)v84;
                                v87 = (float)*(int *)(*((_QWORD *)Master_WarQuestSelectionMaster + 23) + 252LL);
                                if ( v86 <= v87 )
                                  goto LABEL_77;
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                Time = NetworkManager__getTime(0LL);
                                v90 = EventMapGimmickMoveManager__CalcEventRaidMoveRateFromTime(
                                        Time + (__int64)v87,
                                        v66,
                                        v57,
                                        v89);
                                if ( !*(_QWORD *)v50 )
                                  goto LABEL_73;
                                Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                                if ( !Master_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                        (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                        v90,
                                                        0LL);
                                *(UnityEngine_Vector3_o *)(v41 + 24) = PointAsWorldFlatten;
                                PointAsWorldFlatten.fields.x = PointAsWorldFlatten.fields.x - v97;
                                PointAsWorldFlatten.fields.y = PointAsWorldFlatten.fields.y - v76;
                                PointAsWorldFlatten.fields.z = PointAsWorldFlatten.fields.z - v77;
                                methoda.methodPointer = *(Il2CppMethodPointer *)&PointAsWorldFlatten.fields.x;
                                *(float *)&methoda.invoker_method = PointAsWorldFlatten.fields.z;
                                v86 = v87;
                                if ( UnityEngine_Vector3__get_magnitude(PointAsWorldFlatten, &methoda) < 0.001 )
                                {
LABEL_76:
                                  if ( *(_QWORD *)v50 )
                                  {
                                    v65 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v50 + 24LL);
                                    v62 = *(_DWORD *)(v41 + 24);
                                    v63 = *(_DWORD *)(v41 + 28);
                                    v64 = *(_DWORD *)(v41 + 32);
                                    goto LABEL_59;
                                  }
                                }
                                else
                                {
LABEL_77:
                                  if ( *(_QWORD *)v50 )
                                  {
                                    Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 24LL);
                                    if ( Master_WarQuestSelectionMaster )
                                    {
                                      Master_WarQuestSelectionMaster = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                         (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                         (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                      if ( Master_WarQuestSelectionMaster )
                                      {
                                        *((float *)Master_WarQuestSelectionMaster + 30) = v97;
                                        *((float *)Master_WarQuestSelectionMaster + 31) = v76;
                                        *((float *)Master_WarQuestSelectionMaster + 32) = v77;
                                        *((_BYTE *)Master_WarQuestSelectionMaster + 144) = 1;
                                        v91 = *(_QWORD *)(v41 + 24);
                                        v92 = *(_DWORD *)(v41 + 32);
                                        *((float *)Master_WarQuestSelectionMaster + 12) = v86;
                                        *((_DWORD *)Master_WarQuestSelectionMaster + 6) = 0;
                                        *(_QWORD *)((char *)Master_WarQuestSelectionMaster + 132) = v91;
                                        *((_DWORD *)Master_WarQuestSelectionMaster + 35) = v92;
                                        v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)Master_WarQuestSelectionMaster + 8);
                                        v94 = (UITweener_o *)Master_WarQuestSelectionMaster;
                                        v95 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
                                        EventDelegate_Callback___ctor(
                                          v95,
                                          (Il2CppObject *)v41,
                                          Method_EventMapGimmickMoveManager___c__DisplayClass7_0__UpdateMapGimmickPosition_b__0__,
                                          0LL);
                                        v96 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
                                        EventDelegate___ctor_29822308(v96, v95, 0LL);
                                        if ( v93 )
                                        {
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                            v93,
                                            (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
                                            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                          UITweener__PlayForward(v94, 0LL);
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
              if ( *(_QWORD *)v50 )
              {
                Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                if ( Master_WarQuestSelectionMaster )
                {
                  Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster, 0LL);
                  if ( *(_QWORD *)v50 )
                  {
                    Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                    if ( Master_WarQuestSelectionMaster )
                    {
                      Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster, v59, 0LL);
                      if ( *(_QWORD *)v50 )
                      {
                        Master_WarQuestSelectionMaster = *(void **)(*(_QWORD *)v50 + 32LL);
                        if ( Master_WarQuestSelectionMaster )
                        {
                          *(UnityEngine_Vector3_o *)&v62 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                             (Custom2dSplineMesh_o *)Master_WarQuestSelectionMaster,
                                                             *((float *)Master_WarQuestSelectionMaster + 15),
                                                             0LL);
                          if ( *(_QWORD *)v50 )
                          {
                            v65 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v50 + 24LL);
LABEL_59:
                            GameObjectExtensions__SetPosition(v65, *(UnityEngine_Vector3_o *)&v62, 0LL);
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v43);
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
  sub_B5D560(&v10->fields._MapGimmickObject_k__BackingField);
  v10->fields._MapGimmickPathMesh_k__BackingField = mapGimmickPathMesh;
  v10 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v10 + 32);
  sub_B5D560(v10);
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
  sub_B5D560(&this->fields._MapGimmickObject_k__BackingField);
  v2->fields._MapGimmickPathMesh_k__BackingField = 0LL;
  v2 = (EventMapGimmickMoveManager_MapGimmickMoveData_o *)((char *)v2 + 32);
  sub_B5D560(v2);
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
  sub_B5D560(&this->fields._MapGimmickObject_k__BackingField);
}


void __fastcall EventMapGimmickMoveManager_MapGimmickMoveData__set_MapGimmickPathMesh(
        EventMapGimmickMoveManager_MapGimmickMoveData_o *this,
        Custom2dSplineMesh_o *value,
        const MethodInfo *method)
{
  this->fields._MapGimmickPathMesh_k__BackingField = value;
  sub_B5D560(&this->fields._MapGimmickPathMesh_k__BackingField);
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
    sub_B5D69C(this, method);
  GameObjectExtensions__SetPosition(data->fields._MapGimmickObject_k__BackingField, this->fields.endPos, 0LL);
}