void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AA01 & 1) == 0 )
  {
    sub_B2C35C(&EventSpotMoveManager_TypeInfo, v1);
    byte_418AA01 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418AA00 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v3);
    byte_418AA00 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0

  if ( (byte_418A9FA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data);
    byte_418A9FA = 1;
  }
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B2C434(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventSpotMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
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
  __int64 v12; // x1
  int32_t valueType; // w8
  DataManager_o *v14; // x20
  float v15; // s8
  bool HasPrioredData; // w0
  float v17; // s8
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v20; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v23; // x20
  __int64 v24; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A9FD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotAddMaster___, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418A9FD = 1;
  }
  data = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_25;
  valueType = spotPathEnt->fields.valueType;
  v14 = Instance;
  v15 = 0.0;
  if ( valueType == 2 )
  {
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !Instance )
      goto LABEL_25;
    Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
    if ( Entity )
    {
      v20 = Entity;
      TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
      startedAt = v20->fields.startedAt;
      v23 = TotalEventRaidEntity;
      v24 = v20->fields.timeLimitAt - startedAt;
      IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
      if ( !v23 || !IsStopRaidDeadTime || (Time = v23->fields.defeatedAt, Time <= 0) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
      }
      return fmaxf(fminf((float)(Time - startedAt) / (float)v24, 1.0), 0.0);
    }
  }
  else if ( valueType == 1 )
  {
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v17 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v17 = (float)data / 1000.0;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v14,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          return UnityEngine_Mathf__Min(v17, GoalRate, 0LL);
        }
      }
    }
LABEL_25:
    sub_B2C434(Instance, v12);
  }
  return v15;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A9F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v6);
    byte_418A9F9 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v8);
    EventSpotMoveManager_SpotMoveData__Clear((EventSpotMoveManager_SpotMoveData_o *)v9.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
LABEL_11:
    sub_B2C434(eventSpotMoveDataList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventSpotMoveDataList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
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
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A9FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId);
    sub_B2C35C(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A9FF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void __fastcall EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool __fastcall EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  EventSpotMoveManager___c_c *v8; // x0
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct EventSpotMoveManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418A9FE & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method);
    sub_B2C35C(&Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__, v3);
    sub_B2C35C(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v4);
    sub_B2C35C(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v5);
    sub_B2C35C(&EventSpotMoveManager___c_TypeInfo, v6);
    byte_418A9FE = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  v8 = EventSpotMoveManager___c_TypeInfo;
  if ( (BYTE3(EventSpotMoveManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v8 = EventSpotMoveManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v11,
      Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__);
    v12 = EventSpotMoveManager___c_TypeInfo->static_fields;
    v12->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
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

  if ( (byte_418A9FB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v7);
    byte_418A9FB = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B2C434(0LL, isFocedMove);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v9 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v11.fields.current, v9, v10);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x19
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  SpotPathEntity_o *v28; // x22
  int32_t v29; // w23
  int32_t v30; // w24
  float v31; // s0
  float v32; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float v34; // s0
  float v35; // s1
  int v36; // s2
  float v37; // s8
  float v38; // s9
  int v39; // s10
  float v40; // s0
  float v41; // s1
  int v42; // s2
  float v43; // s11
  int v44; // w9
  UITweener_o *v45; // x21
  EventSpotMoveManager_c *v46; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v49; // x23
  EventDelegate_o *v50; // x20

  if ( (byte_418A9FC & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, data);
    sub_B2C35C(&EventDelegate_TypeInfo, v6);
    sub_B2C35C(&EventSpotMoveManager_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v12);
    sub_B2C35C(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v13);
    byte_418A9FC = 1;
  }
  v14 = sub_B2C42C(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  EventSpotMoveManager___c__DisplayClass9_0___ctor((EventSpotMoveManager___c__DisplayClass9_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_52;
  *(_QWORD *)(v14 + 16) = data;
  v23 = v14 + 16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)data, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_52;
  v24 = *(UnityEngine_Object_o **)(*(_QWORD *)(v14 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v23 )
    {
      v25 = *(UnityEngine_Object_o **)(*(_QWORD *)v23 + 32LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v23 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v23 + 16LL),
                           v26);
        if ( SpotPathEntity )
        {
          v28 = (SpotPathEntity_o *)SpotPathEntity;
          v30 = *((_DWORD *)SpotPathEntity + 7);
          v29 = *((_DWORD *)SpotPathEntity + 8);
          if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          }
          v31 = EventSpotMoveManager__CalcSpotPathRate(v30, v29, v28, v27);
          if ( *(_QWORD *)v23 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v23 + 32LL);
            if ( SpotPathEntity )
            {
              v32 = v31;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v23 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v23 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v32, 0LL);
                  if ( *(_QWORD *)v23 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v23 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)SpotPathEntity,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
                      }
                      if ( *(_QWORD *)v23 )
                      {
                        *(UnityEngine_Vector3_o *)&v34 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v23 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v23 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v23 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v37 = v34;
                            v38 = v35;
                            v39 = v36;
                            *(UnityEngine_Vector3_o *)&v40 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 15),
                                                               0LL);
                            *(float *)(v14 + 24) = v40;
                            *(float *)(v14 + 28) = v41;
                            *(_DWORD *)(v14 + 32) = v42;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v23 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v23 + 24LL);
LABEL_43:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v40,
                                  0LL);
                                return;
                              }
                            }
                            else
                            {
                              v43 = sqrtf(
                                      (float)((float)(v37 - v40) * (float)(v37 - v40))
                                    + (float)((float)(v38 - v41) * (float)(v38 - v41)));
                              if ( *(_QWORD *)v23 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v23 + 24LL);
                                if ( v43 < 2.0 )
                                {
                                  v40 = *(float *)(v14 + 24);
                                  v41 = *(float *)(v14 + 28);
                                  v42 = *(_DWORD *)(v14 + 32);
                                  goto LABEL_43;
                                }
                                if ( SpotPathEntity )
                                {
                                  SpotPathEntity = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     (UnityEngine_GameObject_o *)SpotPathEntity,
                                                     (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                  if ( SpotPathEntity )
                                  {
                                    *((float *)SpotPathEntity + 30) = v37;
                                    *((float *)SpotPathEntity + 31) = v38;
                                    *((_DWORD *)SpotPathEntity + 32) = v39;
                                    *((_BYTE *)SpotPathEntity + 144) = 1;
                                    v44 = *(_DWORD *)(v14 + 32);
                                    v45 = (UITweener_o *)SpotPathEntity;
                                    *(_QWORD *)((char *)SpotPathEntity + 132) = *(_QWORD *)(v14 + 24);
                                    *((_DWORD *)SpotPathEntity + 35) = v44;
                                    v46 = EventSpotMoveManager_TypeInfo;
                                    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                      v46 = EventSpotMoveManager_TypeInfo;
                                    }
                                    onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45->fields.onFinished;
                                    MOVE_SPEED = v46->static_fields->MOVE_SPEED;
                                    v45->fields.style = 0;
                                    v45->fields.duration = v43 / MOVE_SPEED;
                                    v49 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
                                    EventDelegate_Callback___ctor(
                                      v49,
                                      (Il2CppObject *)v14,
                                      Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                      0LL);
                                    v50 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
                                    EventDelegate___ctor_29723424(v50, v49, 0LL);
                                    if ( onFinished )
                                    {
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                        onFinished,
                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
                                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                      UITweener__PlayForward(v45, 0LL);
                                      if ( *(_QWORD *)v23 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v23 + 40LL) = 1;
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
    sub_B2C434(SpotPathEntity, v16);
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
  sub_B2C2F8(&this->fields.SpotObject, 0LL);
  v2->fields.SpotPathMesh = 0LL;
  v2 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v2 + 32);
  sub_B2C2F8(v2, 0LL);
  LODWORD(v2->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0

  if ( (byte_418419A & 1) == 0 )
  {
    sub_B2C35C(&EventSpotMoveManager___c_TypeInfo, v1);
    byte_418419A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotMoveManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, method);
  }
  v4->fields.State = 0;
}