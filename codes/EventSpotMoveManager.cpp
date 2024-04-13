void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC0C5 & 1) == 0 )
  {
    sub_B5D5C4(&EventSpotMoveManager_TypeInfo, v1, v2, v3);
    byte_42EC0C5 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
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

  if ( (byte_42EC0C4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v5, v6, v7);
    byte_42EC0C4 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0

  if ( (byte_42EC0BE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    byte_42EC0BE = 1;
  }
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B5D69C(0LL, data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventSpotMoveDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  int32_t valueType; // w8
  DataManager_o *v22; // x20
  float v23; // s8
  bool HasPrioredData; // w0
  float v25; // s8
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v28; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v31; // x20
  __int64 v32; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EC0C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, raidId, (_DWORD)spotPathEnt, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotAddMaster___, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EC0C1 = 1;
  }
  data = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_25;
  valueType = spotPathEnt->fields.valueType;
  v22 = Instance;
  v23 = 0.0;
  if ( valueType == 2 )
  {
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
    if ( !Instance )
      goto LABEL_25;
    Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
    if ( Entity )
    {
      v28 = Entity;
      TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
      startedAt = v28->fields.startedAt;
      v31 = TotalEventRaidEntity;
      v32 = v28->fields.timeLimitAt - startedAt;
      IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
      if ( !v31 || !IsStopRaidDeadTime || (Time = v31->fields.defeatedAt, Time <= 0) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
      }
      return fmaxf(fminf((float)(Time - startedAt) / (float)v32, 1.0), 0.0);
    }
  }
  else if ( valueType == 1 )
  {
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v25 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v25 = (float)data / 1000.0;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v22,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          return UnityEngine_Mathf__Min(v25, GoalRate, 0LL);
        }
      }
    }
LABEL_25:
    sub_B5D69C(Instance, v20);
  }
  return v23;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EC0BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42EC0BD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v18);
    EventSpotMoveManager_SpotMoveData__Clear((EventSpotMoveManager_SpotMoveData_o *)v19.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
LABEL_11:
    sub_B5D69C(eventSpotMoveDataList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventSpotMoveDataList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC0C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotPathMaster___, spotId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EC0C3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void __fastcall EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool __fastcall EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  EventSpotMoveManager___c_c *v18; // x0
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v21; // x21
  struct EventSpotMoveManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EC0C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v11, v12, v13);
    sub_B5D5C4(&EventSpotMoveManager___c_TypeInfo, v14, v15, v16);
    byte_42EC0C2 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  v18 = EventSpotMoveManager___c_TypeInfo;
  if ( (BYTE3(EventSpotMoveManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v18 = EventSpotMoveManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v21,
      Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_EventSpotMoveManager_SpotMoveData__bool___ctor__);
    v22 = EventSpotMoveManager___c_TypeInfo->static_fields;
    v22->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *eventSpotMoveDataList; // x0
  bool v16; // w20
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC0BF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__,
      v12,
      v13,
      v14);
    byte_42EC0BF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  eventSpotMoveDataList = this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_B5D69C(0LL, isFocedMove);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventSpotMoveDataList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v16 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v18.fields.current, v16, v17);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  __int64 v30; // x20
  void *SpotPathEntity; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x19
  UnityEngine_Object_o *v40; // x22
  UnityEngine_Object_o *v41; // x22
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  SpotPathEntity_o *v44; // x22
  int32_t v45; // w23
  int32_t v46; // w24
  float v47; // s0
  float v48; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  float v50; // s0
  float v51; // s1
  int v52; // s2
  float v53; // s8
  float v54; // s9
  int v55; // s10
  float v56; // s0
  float v57; // s1
  int v58; // s2
  float v59; // s11
  int v60; // w9
  UITweener_o *v61; // x21
  EventSpotMoveManager_c *v62; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v65; // x23
  EventDelegate_o *v66; // x20

  if ( (byte_42EC0C0 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)data, isFocedMove, method);
    sub_B5D5C4(&EventDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&EventSpotMoveManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v24, v25, v26);
    sub_B5D5C4(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v27, v28, v29);
    byte_42EC0C0 = 1;
  }
  v30 = sub_B5D694(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  EventSpotMoveManager___c__DisplayClass9_0___ctor((EventSpotMoveManager___c__DisplayClass9_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_52;
  *(_QWORD *)(v30 + 16) = data;
  v39 = v30 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)data, v33, v34, v35, v36, v37, v38);
  if ( !*(_QWORD *)(v30 + 16) )
    goto LABEL_52;
  v40 = *(UnityEngine_Object_o **)(*(_QWORD *)(v30 + 16) + 24LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v39 )
    {
      v41 = *(UnityEngine_Object_o **)(*(_QWORD *)v39 + 32LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v41, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v39 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v39 + 16LL),
                           v42);
        if ( SpotPathEntity )
        {
          v44 = (SpotPathEntity_o *)SpotPathEntity;
          v46 = *((_DWORD *)SpotPathEntity + 7);
          v45 = *((_DWORD *)SpotPathEntity + 8);
          if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          }
          v47 = EventSpotMoveManager__CalcSpotPathRate(v46, v45, v44, v43);
          if ( *(_QWORD *)v39 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v39 + 32LL);
            if ( SpotPathEntity )
            {
              v48 = v47;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v39 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v39 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v48, 0LL);
                  if ( *(_QWORD *)v39 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v39 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)SpotPathEntity,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_35620236(Component_srcLineSprite, 0LL);
                      }
                      if ( *(_QWORD *)v39 )
                      {
                        *(UnityEngine_Vector3_o *)&v50 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v39 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v39 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v39 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v53 = v50;
                            v54 = v51;
                            v55 = v52;
                            *(UnityEngine_Vector3_o *)&v56 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 15),
                                                               0LL);
                            *(float *)(v30 + 24) = v56;
                            *(float *)(v30 + 28) = v57;
                            *(_DWORD *)(v30 + 32) = v58;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v39 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v39 + 24LL);
LABEL_43:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v56,
                                  0LL);
                                return;
                              }
                            }
                            else
                            {
                              v59 = sqrtf(
                                      (float)((float)(v53 - v56) * (float)(v53 - v56))
                                    + (float)((float)(v54 - v57) * (float)(v54 - v57)));
                              if ( *(_QWORD *)v39 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v39 + 24LL);
                                if ( v59 < 2.0 )
                                {
                                  v56 = *(float *)(v30 + 24);
                                  v57 = *(float *)(v30 + 28);
                                  v58 = *(_DWORD *)(v30 + 32);
                                  goto LABEL_43;
                                }
                                if ( SpotPathEntity )
                                {
                                  SpotPathEntity = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                     (UnityEngine_GameObject_o *)SpotPathEntity,
                                                     (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                  if ( SpotPathEntity )
                                  {
                                    *((float *)SpotPathEntity + 30) = v53;
                                    *((float *)SpotPathEntity + 31) = v54;
                                    *((_DWORD *)SpotPathEntity + 32) = v55;
                                    *((_BYTE *)SpotPathEntity + 144) = 1;
                                    v60 = *(_DWORD *)(v30 + 32);
                                    v61 = (UITweener_o *)SpotPathEntity;
                                    *(_QWORD *)((char *)SpotPathEntity + 132) = *(_QWORD *)(v30 + 24);
                                    *((_DWORD *)SpotPathEntity + 35) = v60;
                                    v62 = EventSpotMoveManager_TypeInfo;
                                    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                      v62 = EventSpotMoveManager_TypeInfo;
                                    }
                                    onFinished = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v61->fields.onFinished;
                                    MOVE_SPEED = v62->static_fields->MOVE_SPEED;
                                    v61->fields.style = 0;
                                    v61->fields.duration = v59 / MOVE_SPEED;
                                    v65 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
                                    EventDelegate_Callback___ctor(
                                      v65,
                                      (Il2CppObject *)v30,
                                      Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                      0LL);
                                    v66 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
                                    EventDelegate___ctor_29822308(v66, v65, 0LL);
                                    if ( onFinished )
                                    {
                                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                        onFinished,
                                        (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
                                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
                                      UITweener__PlayForward(v61, 0LL);
                                      if ( *(_QWORD *)v39 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v39 + 40LL) = 1;
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
    sub_B5D69C(SpotPathEntity, v32);
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
  sub_B5D560(&this->fields.SpotObject);
  v2->fields.SpotPathMesh = 0LL;
  v2 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v2 + 32);
  sub_B5D560(v2);
  LODWORD(v2->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5692 & 1) == 0 )
  {
    sub_B5D5C4(&EventSpotMoveManager___c_TypeInfo, v1, v2, v3);
    byte_42E5692 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventSpotMoveManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, method);
  }
  v4->fields.State = 0;
}