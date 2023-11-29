void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD1F0 & 1) == 0 )
  {
    sub_B16FFC(&EventSpotMoveManager_TypeInfo, v1);
    byte_40FD1F0 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD1EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v6);
    byte_40FD1EF = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0

  if ( (byte_40FD1E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data);
    byte_40FD1E9 = 1;
  }
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventSpotMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
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
  WebViewManager_o *Instance; // x0
  int32_t valueType; // w8
  DataManager_o *v13; // x20
  float v14; // s8
  SpotAddMaster_o *v15; // x0
  bool HasPrioredData; // w0
  float v17; // s8
  EventRaceMaster_o *v18; // x0
  float GoalRate; // s0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v22; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v25; // x20
  __int64 v26; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD1EC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotAddMaster___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FD1EC = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_25;
  valueType = spotPathEnt->fields.valueType;
  v13 = (DataManager_o *)Instance;
  v14 = 0.0;
  if ( valueType == 2 )
  {
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_25;
    Entity = EventRaidMaster__GetEntity(MasterData_WarQuestSelectionMaster, eventId, raidId, 0LL);
    if ( Entity )
    {
      v22 = Entity;
      TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
      startedAt = v22->fields.startedAt;
      v25 = TotalEventRaidEntity;
      v26 = v22->fields.timeLimitAt - startedAt;
      IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
      if ( !v25 || !IsStopRaidDeadTime || (Time = v25->fields.defeatedAt, Time <= 0) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
      }
      return fmaxf(fminf((float)(Time - startedAt) / (float)v26, 1.0), 0.0);
    }
  }
  else if ( valueType == 1 )
  {
    if ( Instance )
    {
      v15 = (SpotAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( v15 )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(v15, 3, spotPathEnt->fields.spotId, &data, 0LL);
        v17 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v17 = (float)data / 1000.0;
        v18 = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v13,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( v18 )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       v18,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          return UnityEngine_Mathf__Min(v17, GoalRate, 0LL);
        }
      }
    }
LABEL_25:
    sub_B170D4();
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
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v8; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD1E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v6);
    byte_40FD1E8 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    EventSpotMoveManager_SpotMoveData__Clear((EventSpotMoveManager_SpotMoveData_o *)v9.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v8 = this->fields.eventSpotMoveDataList;
  if ( !v8 )
LABEL_11:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD1EE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD1EE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    spotId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  EventSpotMoveManager___c_c *v11; // x0
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct EventSpotMoveManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FD1ED & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method);
    sub_B16FFC(&Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__, v6);
    sub_B16FFC(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v7);
    sub_B16FFC(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v8);
    sub_B16FFC(&EventSpotMoveManager___c_TypeInfo, v9);
    byte_40FD1ED = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  v11 = EventSpotMoveManager___c_TypeInfo;
  if ( (BYTE3(EventSpotMoveManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v11 = EventSpotMoveManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v14,
      Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__);
    v15 = EventSpotMoveManager___c_TypeInfo->static_fields;
    v15->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
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

  if ( (byte_40FD1EA & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v7);
    byte_40FD1EA = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v9 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v11.fields.current, v9, v10);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x19
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x2
  SpotPathEntity_o *SpotPathEntity; // x0
  const MethodInfo *v28; // x3
  SpotPathEntity_o *v29; // x22
  int32_t targetValue; // w23
  int32_t targetId; // w24
  float v32; // s0
  Custom2dSplineMesh_o *v33; // x0
  float v34; // s8
  Custom2dSplineMesh_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float v38; // s0
  float v39; // s1
  int v40; // s2
  Custom2dSplineMesh_o *v41; // x0
  float v42; // s8
  float v43; // s9
  int v44; // s10
  float v45; // s0
  float v46; // s1
  int v47; // s2
  UnityEngine_GameObject_o *v48; // x0
  float v49; // s11
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int v55; // w9
  UITweener_o *v56; // x21
  EventSpotMoveManager_c *v57; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  EventDelegate_o *v65; // x20

  if ( (byte_40FD1EB & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, data);
    sub_B16FFC(&EventDelegate_TypeInfo, v7);
    sub_B16FFC(&EventSpotMoveManager_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v13);
    sub_B16FFC(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v14);
    byte_40FD1EB = 1;
  }
  v15 = sub_B170CC(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, data, isFocedMove, method, v4);
  EventSpotMoveManager___c__DisplayClass9_0___ctor((EventSpotMoveManager___c__DisplayClass9_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_52;
  *(_QWORD *)(v15 + 16) = data;
  v22 = v15 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)data, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v15 + 16) )
    goto LABEL_52;
  v23 = *(UnityEngine_Object_o **)(*(_QWORD *)(v15 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
  {
    if ( *(_QWORD *)v22 )
    {
      v24 = *(UnityEngine_Object_o **)(*(_QWORD *)v22 + 32LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v25 = UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( v25 )
        return;
      if ( *(_QWORD *)v22 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)v25,
                           *(_DWORD *)(*(_QWORD *)v22 + 16LL),
                           v26);
        if ( SpotPathEntity )
        {
          v29 = SpotPathEntity;
          targetId = SpotPathEntity->fields.targetId;
          targetValue = SpotPathEntity->fields.targetValue;
          if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          }
          v32 = EventSpotMoveManager__CalcSpotPathRate(targetId, targetValue, v29, v28);
          if ( *(_QWORD *)v22 )
          {
            v33 = *(Custom2dSplineMesh_o **)(*(_QWORD *)v22 + 32LL);
            if ( v33 )
            {
              v34 = v32;
              Custom2dSplineMesh__CreateMesh(v33, 0LL);
              if ( *(_QWORD *)v22 )
              {
                v35 = *(Custom2dSplineMesh_o **)(*(_QWORD *)v22 + 32LL);
                if ( v35 )
                {
                  Custom2dSplineMesh__SetPathRate(v35, v34, 0LL);
                  if ( *(_QWORD *)v22 )
                  {
                    v36 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v22 + 24LL);
                    if ( v36 )
                    {
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v36,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
                      {
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        UnityEngine_Object__Destroy_34809464(Component_srcLineSprite, 0LL);
                      }
                      if ( *(_QWORD *)v22 )
                      {
                        *(UnityEngine_Vector3_o *)&v38 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v22 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v22 )
                        {
                          v41 = *(Custom2dSplineMesh_o **)(*(_QWORD *)v22 + 32LL);
                          if ( v41 )
                          {
                            v42 = v38;
                            v43 = v39;
                            v44 = v40;
                            *(UnityEngine_Vector3_o *)&v45 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               v41,
                                                               v41->fields.PathRate,
                                                               0LL);
                            *(float *)(v15 + 24) = v45;
                            *(float *)(v15 + 28) = v46;
                            *(_DWORD *)(v15 + 32) = v47;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v22 )
                              {
                                v48 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v22 + 24LL);
LABEL_43:
                                GameObjectExtensions__SetPosition(v48, *(UnityEngine_Vector3_o *)&v45, 0LL);
                                return;
                              }
                            }
                            else
                            {
                              v49 = sqrtf(
                                      (float)((float)(v42 - v45) * (float)(v42 - v45))
                                    + (float)((float)(v43 - v46) * (float)(v43 - v46)));
                              if ( *(_QWORD *)v22 )
                              {
                                v48 = *(UnityEngine_GameObject_o **)(*(_QWORD *)v22 + 24LL);
                                if ( v49 < 2.0 )
                                {
                                  v45 = *(float *)(v15 + 24);
                                  v46 = *(float *)(v15 + 28);
                                  v47 = *(_DWORD *)(v15 + 32);
                                  goto LABEL_43;
                                }
                                if ( v48 )
                                {
                                  v50 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                          v48,
                                          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                  if ( v50 )
                                  {
                                    *(float *)&v50[3].fields.callbackQueue = v42;
                                    *((float *)&v50[3].fields.callbackQueue + 1) = v43;
                                    LODWORD(v50[4].klass) = v44;
                                    LOBYTE(v50[4].fields.m_CachedPtr) = 1;
                                    v55 = *(_DWORD *)(v15 + 32);
                                    v56 = (UITweener_o *)v50;
                                    *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)((char *)&v50[4].klass + 4) = *(Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c **)(v15 + 24);
                                    HIDWORD(v50[4].monitor) = v55;
                                    v57 = EventSpotMoveManager_TypeInfo;
                                    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                      v57 = EventSpotMoveManager_TypeInfo;
                                    }
                                    onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56->fields.onFinished;
                                    MOVE_SPEED = v57->static_fields->MOVE_SPEED;
                                    v56->fields.style = 0;
                                    v56->fields.duration = v49 / MOVE_SPEED;
                                    v60 = (EventDelegate_Callback_o *)sub_B170CC(
                                                                        EventDelegate_Callback_TypeInfo,
                                                                        v51,
                                                                        v52,
                                                                        v53,
                                                                        v54);
                                    EventDelegate_Callback___ctor(
                                      v60,
                                      (Il2CppObject *)v15,
                                      Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                      0LL);
                                    v65 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v61, v62, v63, v64);
                                    EventDelegate___ctor_29412484(v65, v60, 0LL);
                                    if ( onFinished )
                                    {
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                        onFinished,
                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
                                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                      UITweener__PlayForward(v56, 0LL);
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
    sub_B170D4();
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventSpotMoveManager_SpotMoveData_o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.SpotObject, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.SpotPathMesh = 0LL;
  v8 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v8 + 32);
  sub_B16F98((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7069 & 1) == 0 )
  {
    sub_B16FFC(&EventSpotMoveManager___c_TypeInfo, v1);
    byte_40F7069 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventSpotMoveManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventSpotMoveManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  }
  v4->fields.State = 0;
}