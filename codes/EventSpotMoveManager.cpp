void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42179FA & 1) == 0 )
  {
    sub_B0D8A4(&EventSpotMoveManager_TypeInfo, v1);
    byte_42179FA = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42179F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v4);
    byte_42179F9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0

  if ( (byte_42179F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data);
    byte_42179F3 = 1;
  }
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventSpotMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
}


float __fastcall EventSpotMoveManager__CalcDistance(
        EventSpotMoveManager_o *this,
        float x1,
        float y1,
        float x2,
        float y2,
        const MethodInfo *method)
{
  return sqrtf((float)((float)(x1 - x2) * (float)(x1 - x2)) + (float)((float)(y1 - y2) * (float)(y1 - y2)));
}


// local variable allocation has failed, the output may be wrong!
float __fastcall EventSpotMoveManager__CalcSpotPathRate(
        int32_t eventId,
        int32_t raidId,
        SpotPathEntity_o *spotPathEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  int32_t valueType; // w8
  DataManager_o *v13; // x20
  float v14; // s8
  bool HasPrioredData; // w0
  float v16; // s8
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v19; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v22; // x20
  __int64 v23; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42179F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotAddMaster___, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_42179F6 = 1;
  }
  data = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_25;
  valueType = spotPathEnt->fields.valueType;
  v13 = Instance;
  v14 = 0.0;
  if ( valueType == 2 )
  {
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !Instance )
      goto LABEL_25;
    Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
    if ( Entity )
    {
      v19 = Entity;
      TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
      startedAt = v19->fields.startedAt;
      v22 = TotalEventRaidEntity;
      v23 = v19->fields.timeLimitAt - startedAt;
      IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
      if ( !v22 || !IsStopRaidDeadTime || (Time = v22->fields.defeatedAt, Time <= 0) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
      }
      return fmaxf(fminf((float)(Time - startedAt) / (float)v23, 1.0), 0.0);
    }
  }
  else if ( valueType == 1 )
  {
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v16 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v16 = (float)data / 1000.0;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v13,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          return UnityEngine_Mathf__Min(v16, GoalRate, 0LL);
        }
      }
    }
LABEL_25:
    sub_B0D97C(Instance);
  }
  return v14;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42179F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v6);
    byte_42179F2 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    EventSpotMoveManager_SpotMoveData__Clear((EventSpotMoveManager_SpotMoveData_o *)v8.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
LABEL_11:
    sub_B0D97C(eventSpotMoveDataList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventSpotMoveDataList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
}


System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *__fastcall EventSpotMoveManager__GetEventSpotMoveDataList(
        EventSpotMoveManager_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSpotMoveDataList;
}


// local variable allocation has failed, the output may be wrong!
SpotPathEntity_o *__fastcall EventSpotMoveManager__GetSpotPathEntity(
        EventSpotMoveManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42179F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42179F8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void __fastcall EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool __fastcall EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  EventSpotMoveManager___c_c *v9; // x0
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v12; // x21
  struct EventSpotMoveManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42179F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method);
    sub_B0D8A4(&Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v6);
    sub_B0D8A4(&EventSpotMoveManager___c_TypeInfo, v7);
    byte_42179F7 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  v9 = EventSpotMoveManager___c_TypeInfo;
  if ( (BYTE3(EventSpotMoveManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v9 = EventSpotMoveManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v12,
      Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__);
    v13 = EventSpotMoveManager___c_TypeInfo->static_fields;
    v13->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  bool v9; // w20
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42179F4 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v7);
    byte_42179F4 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v9 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v11.fields.current, v9, v10);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  void *SpotPathEntity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x19
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  SpotPathEntity_o *v27; // x22
  int32_t v28; // w23
  int32_t v29; // w24
  float v30; // s0
  float v31; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float v33; // s0
  float v34; // s1
  int v35; // s2
  float v36; // s8
  float v37; // s9
  int v38; // s10
  float v39; // s0
  float v40; // s1
  int v41; // s2
  float v42; // s11
  __int64 v43; // x1
  __int64 v44; // x2
  int v45; // w9
  UITweener_o *v46; // x21
  EventSpotMoveManager_c *v47; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  EventDelegate_o *v53; // x20

  if ( (byte_42179F5 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, data);
    sub_B0D8A4(&EventDelegate_TypeInfo, v6);
    sub_B0D8A4(&EventSpotMoveManager_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v12);
    sub_B0D8A4(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v13);
    byte_42179F5 = 1;
  }
  v14 = sub_B0D974(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, data, isFocedMove);
  EventSpotMoveManager___c__DisplayClass9_0___ctor((EventSpotMoveManager___c__DisplayClass9_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_52;
  *(_QWORD *)(v14 + 16) = data;
  v22 = v14 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)data, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_52;
  v23 = *(UnityEngine_Object_o **)(*(_QWORD *)(v14 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v22 )
    {
      v24 = *(UnityEngine_Object_o **)(*(_QWORD *)v22 + 32LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v22 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v22 + 16LL),
                           v25);
        if ( SpotPathEntity )
        {
          v27 = (SpotPathEntity_o *)SpotPathEntity;
          v29 = *((_DWORD *)SpotPathEntity + 7);
          v28 = *((_DWORD *)SpotPathEntity + 8);
          if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          }
          v30 = EventSpotMoveManager__CalcSpotPathRate(v29, v28, v27, v26);
          if ( *(_QWORD *)v22 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v22 + 32LL);
            if ( SpotPathEntity )
            {
              v31 = v30;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v22 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v22 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v31, 0LL);
                  if ( *(_QWORD *)v22 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v22 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)SpotPathEntity,
                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      SpotPathEntity = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
                      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
                      {
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        UnityEngine_Object__Destroy_34935276(Component_srcLineSprite, 0LL);
                      }
                      if ( *(_QWORD *)v22 )
                      {
                        *(UnityEngine_Vector3_o *)&v33 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v22 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v22 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v22 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v36 = v33;
                            v37 = v34;
                            v38 = v35;
                            *(UnityEngine_Vector3_o *)&v39 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 15),
                                                               0LL);
                            *(float *)(v14 + 24) = v39;
                            *(float *)(v14 + 28) = v40;
                            *(_DWORD *)(v14 + 32) = v41;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v22 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v22 + 24LL);
LABEL_43:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v39,
                                  0LL);
                                return;
                              }
                            }
                            else
                            {
                              v42 = sqrtf(
                                      (float)((float)(v36 - v39) * (float)(v36 - v39))
                                    + (float)((float)(v37 - v40) * (float)(v37 - v40)));
                              if ( *(_QWORD *)v22 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v22 + 24LL);
                                if ( v42 < 2.0 )
                                {
                                  v39 = *(float *)(v14 + 24);
                                  v40 = *(float *)(v14 + 28);
                                  v41 = *(_DWORD *)(v14 + 32);
                                  goto LABEL_43;
                                }
                                if ( SpotPathEntity )
                                {
                                  SpotPathEntity = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     (UnityEngine_GameObject_o *)SpotPathEntity,
                                                     (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                  if ( SpotPathEntity )
                                  {
                                    *((float *)SpotPathEntity + 30) = v36;
                                    *((float *)SpotPathEntity + 31) = v37;
                                    *((_DWORD *)SpotPathEntity + 32) = v38;
                                    *((_BYTE *)SpotPathEntity + 144) = 1;
                                    v45 = *(_DWORD *)(v14 + 32);
                                    v46 = (UITweener_o *)SpotPathEntity;
                                    *(_QWORD *)((char *)SpotPathEntity + 132) = *(_QWORD *)(v14 + 24);
                                    *((_DWORD *)SpotPathEntity + 35) = v45;
                                    v47 = EventSpotMoveManager_TypeInfo;
                                    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                      v47 = EventSpotMoveManager_TypeInfo;
                                    }
                                    onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46->fields.onFinished;
                                    MOVE_SPEED = v47->static_fields->MOVE_SPEED;
                                    v46->fields.style = 0;
                                    v46->fields.duration = v42 / MOVE_SPEED;
                                    v50 = (EventDelegate_Callback_o *)sub_B0D974(
                                                                        EventDelegate_Callback_TypeInfo,
                                                                        v43,
                                                                        v44);
                                    EventDelegate_Callback___ctor(
                                      v50,
                                      (Il2CppObject *)v14,
                                      Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                      0LL);
                                    v53 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v51, v52);
                                    EventDelegate___ctor_28889248(v53, v50, 0LL);
                                    if ( onFinished )
                                    {
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                        onFinished,
                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
                                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                      UITweener__PlayForward(v46, 0LL);
                                      if ( *(_QWORD *)v22 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v22 + 40LL) = 1;
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
        }
      }
    }
LABEL_52:
    sub_B0D97C(SpotPathEntity);
  }
}


void __fastcall EventSpotMoveManager_SpotMoveData___ctor(
        EventSpotMoveManager_SpotMoveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager_SpotMoveData__Clear(
        EventSpotMoveManager_SpotMoveData_o *this,
        const MethodInfo *method)
{
  EventSpotMoveManager_SpotMoveData_o *v2; // x19

  v2 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0LL;
  sub_B0D840(&this->fields.SpotObject, 0LL);
  v2->fields.SpotPathMesh = 0LL;
  v2 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v2 + 32);
  sub_B0D840(v2, 0LL);
  LODWORD(v2->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0

  if ( (byte_4210F16 & 1) == 0 )
  {
    sub_B0D8A4(&EventSpotMoveManager___c_TypeInfo, v1);
    byte_4210F16 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventSpotMoveManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotMoveManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventSpotMoveManager___c___ctor(EventSpotMoveManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSpotMoveManager___c___IsSpotObjectMoving_b__12_0(
        EventSpotMoveManager___c_o *this,
        EventSpotMoveManager_SpotMoveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.State == 1;
}


void __fastcall EventSpotMoveManager___c__DisplayClass9_0___ctor(
        EventSpotMoveManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager___c__DisplayClass9_0___UpdateSpotPosition_b__0(
        EventSpotMoveManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  struct EventSpotMoveManager_SpotMoveData_o *data; // x8
  struct EventSpotMoveManager_SpotMoveData_o *v4; // x8

  data = this->fields.data;
  if ( !data
    || (GameObjectExtensions__SetPosition(data->fields.SpotObject, this->fields.endPos, 0LL),
        (v4 = this->fields.data) == 0LL) )
  {
    sub_B0D97C(this);
  }
  v4->fields.State = 0;
}