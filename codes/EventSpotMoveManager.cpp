void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  if ( (byte_43556A0 & 1) == 0 )
  {
    sub_B70694(&EventSpotMoveManager_TypeInfo);
    byte_43556A0 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435569F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
    byte_435569F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0

  if ( (byte_4355699 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
    byte_4355699 = 1;
  }
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B7076C(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventSpotMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
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


float __fastcall EventSpotMoveManager__CalcSpotPathRate(
        int32_t eventId,
        int32_t raidId,
        SpotPathEntity_o *spotPathEnt,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t valueType; // w8
  DataManager_o *v10; // x20
  float v11; // s8
  bool HasPrioredData; // w0
  float v13; // s8
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v16; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v19; // x20
  __int64 v20; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435569C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435569C = 1;
  }
  data = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_25;
  valueType = spotPathEnt->fields.valueType;
  v10 = Instance;
  v11 = 0.0;
  if ( valueType == 2 )
  {
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !Instance )
      goto LABEL_25;
    Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
    if ( Entity )
    {
      v16 = Entity;
      TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
      startedAt = v16->fields.startedAt;
      v19 = TotalEventRaidEntity;
      v20 = v16->fields.timeLimitAt - startedAt;
      IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
      if ( !v19 || !IsStopRaidDeadTime || (Time = v19->fields.defeatedAt, Time <= 0) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
      }
      return fmaxf(fminf((float)(Time - startedAt) / (float)v20, 1.0), 0.0);
    }
  }
  else if ( valueType == 1 )
  {
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v13 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v13 = (float)data / 1000.0;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v10,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          return UnityEngine_Mathf__Min(v13, GoalRate, 0LL);
        }
      }
    }
LABEL_25:
    sub_B7076C(Instance, v8);
  }
  return v11;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4355698 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4355698 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7076C(0LL, v4);
    EventSpotMoveManager_SpotMoveData__Clear((EventSpotMoveManager_SpotMoveData_o *)v5.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
LABEL_11:
    sub_B7076C(eventSpotMoveDataList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventSpotMoveDataList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
}


System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *__fastcall EventSpotMoveManager__GetEventSpotMoveDataList(
        EventSpotMoveManager_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSpotMoveDataList;
}


SpotPathEntity_o *__fastcall EventSpotMoveManager__GetSpotPathEntity(
        EventSpotMoveManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435569E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_B70694(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435569E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v5);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_21C049C *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void __fastcall EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool __fastcall EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  EventSpotMoveManager___c_c *v4; // x0
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v7; // x21
  struct EventSpotMoveManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_435569D & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
    sub_B70694(&Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__);
    sub_B70694(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    sub_B70694(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__);
    sub_B70694(&EventSpotMoveManager___c_TypeInfo);
    byte_435569D = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  v4 = EventSpotMoveManager___c_TypeInfo;
  if ( (BYTE3(EventSpotMoveManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v4 = EventSpotMoveManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v7,
      Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__);
    v8 = EventSpotMoveManager___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  bool v6; // w20
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435569A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_435569A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B7076C(0LL, isFocedMove);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v6 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v8.fields.current, v6, v7);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v6; // x20
  void *SpotPathEntity; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x19
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Object_o *v17; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  SpotPathEntity_o *v20; // x22
  int32_t v21; // w23
  int32_t v22; // w24
  float v23; // s0
  float v24; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float v26; // s0
  float v27; // s1
  int v28; // s2
  float v29; // s8
  float v30; // s9
  int v31; // s10
  float v32; // s0
  float v33; // s1
  int v34; // s2
  float v35; // s11
  int v36; // w9
  UITweener_o *v37; // x21
  EventSpotMoveManager_c *v38; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v41; // x23
  EventDelegate_o *v42; // x20

  if ( (byte_435569B & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&EventSpotMoveManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__);
    sub_B70694(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
    byte_435569B = 1;
  }
  v6 = sub_B70764(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  EventSpotMoveManager___c__DisplayClass9_0___ctor((EventSpotMoveManager___c__DisplayClass9_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_52;
  *(_QWORD *)(v6 + 16) = data;
  v15 = v6 + 16;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)data, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 16) )
    goto LABEL_52;
  v16 = *(UnityEngine_Object_o **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v15 )
    {
      v17 = *(UnityEngine_Object_o **)(*(_QWORD *)v15 + 32LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v15 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v15 + 16LL),
                           v18);
        if ( SpotPathEntity )
        {
          v20 = (SpotPathEntity_o *)SpotPathEntity;
          v22 = *((_DWORD *)SpotPathEntity + 7);
          v21 = *((_DWORD *)SpotPathEntity + 8);
          if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          }
          v23 = EventSpotMoveManager__CalcSpotPathRate(v22, v21, v20, v19);
          if ( *(_QWORD *)v15 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v15 + 32LL);
            if ( SpotPathEntity )
            {
              v24 = v23;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v15 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v15 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v24, 0LL);
                  if ( *(_QWORD *)v15 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v15 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)SpotPathEntity,
                                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_36067208(Component_srcLineSprite, 0LL);
                      }
                      if ( *(_QWORD *)v15 )
                      {
                        *(UnityEngine_Vector3_o *)&v26 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v15 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v15 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v15 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v29 = v26;
                            v30 = v27;
                            v31 = v28;
                            *(UnityEngine_Vector3_o *)&v32 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 15),
                                                               0LL);
                            *(float *)(v6 + 24) = v32;
                            *(float *)(v6 + 28) = v33;
                            *(_DWORD *)(v6 + 32) = v34;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v15 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v15 + 24LL);
LABEL_43:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v32,
                                  0LL);
                                return;
                              }
                            }
                            else
                            {
                              v35 = sqrtf(
                                      (float)((float)(v29 - v32) * (float)(v29 - v32))
                                    + (float)((float)(v30 - v33) * (float)(v30 - v33)));
                              if ( *(_QWORD *)v15 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v15 + 24LL);
                                if ( v35 < 2.0 )
                                {
                                  v32 = *(float *)(v6 + 24);
                                  v33 = *(float *)(v6 + 28);
                                  v34 = *(_DWORD *)(v6 + 32);
                                  goto LABEL_43;
                                }
                                if ( SpotPathEntity )
                                {
                                  SpotPathEntity = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     (UnityEngine_GameObject_o *)SpotPathEntity,
                                                     (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                  if ( SpotPathEntity )
                                  {
                                    *((float *)SpotPathEntity + 30) = v29;
                                    *((float *)SpotPathEntity + 31) = v30;
                                    *((_DWORD *)SpotPathEntity + 32) = v31;
                                    *((_BYTE *)SpotPathEntity + 144) = 1;
                                    v36 = *(_DWORD *)(v6 + 32);
                                    v37 = (UITweener_o *)SpotPathEntity;
                                    *(_QWORD *)((char *)SpotPathEntity + 132) = *(_QWORD *)(v6 + 24);
                                    *((_DWORD *)SpotPathEntity + 35) = v36;
                                    v38 = EventSpotMoveManager_TypeInfo;
                                    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                      v38 = EventSpotMoveManager_TypeInfo;
                                    }
                                    onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37->fields.onFinished;
                                    MOVE_SPEED = v38->static_fields->MOVE_SPEED;
                                    v37->fields.style = 0;
                                    v37->fields.duration = v35 / MOVE_SPEED;
                                    v41 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
                                    EventDelegate_Callback___ctor(
                                      v41,
                                      (Il2CppObject *)v6,
                                      Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                      0LL);
                                    v42 = (EventDelegate_o *)sub_B70764(EventDelegate_TypeInfo);
                                    EventDelegate___ctor_29875020(v42, v41, 0LL);
                                    if ( onFinished )
                                    {
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                        onFinished,
                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
                                        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                      UITweener__PlayForward(v37, 0LL);
                                      if ( *(_QWORD *)v15 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v15 + 40LL) = 1;
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
    sub_B7076C(SpotPathEntity, v8);
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
  sub_B70630(&this->fields.SpotObject);
  v2->fields.SpotPathMesh = 0LL;
  v2 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v2 + 32);
  sub_B70630(v2);
  LODWORD(v2->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0

  if ( (byte_434EA77 & 1) == 0 )
  {
    sub_B70694(&EventSpotMoveManager___c_TypeInfo);
    byte_434EA77 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotMoveManager___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, method);
  }
  v4->fields.State = 0;
}