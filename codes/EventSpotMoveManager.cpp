void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6AA1D & 1) == 0 )
  {
    sub_1BE4ACC(&EventSpotMoveManager_TypeInfo, v1);
    byte_4B6AA1D = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B6AA1C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v3);
    byte_4B6AA1C = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B6AA16 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data);
    byte_4B6AA16 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1BE4D28(eventSpotMoveDataList, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  }
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t valueType; // w8
  DataManager_o *v14; // x20
  float v15; // s8
  bool HasPrioredData; // w0
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v19; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v22; // x20
  __int64 v23; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B6AA19 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SpotAddMaster___, v8);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B6AA19 = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_26;
  valueType = spotPathEnt->fields.valueType;
  v14 = (DataManager_o *)Instance;
  v15 = 0.0;
  if ( valueType != 2 )
  {
    if ( valueType != 1 )
      return v15;
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v15 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v15 = (float)data / 1000.0;
        Instance = DataManager__GetMasterData_object_(
                     v14,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          if ( v15 >= GoalRate )
            return GoalRate;
          return v15;
        }
      }
    }
LABEL_26:
    sub_1BE4D28(Instance, v12);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
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
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
    }
    return fmaxf(fminf((float)(Time - startedAt) / (float)v23, 1.0), 0.0);
  }
  return v15;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *current; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v23; // x8
  int32_t size; // w2
  int v25; // w9
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B6AA15 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v6);
    byte_4B6AA15 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    eventSpotMoveDataList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v8 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1BE4D28(v8, v9);
    v26.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&current[1].monitor, 0LL, v10, v11, v12, v13, v14, v15);
    current[2].klass = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&current[2], 0LL, v17, v18, v19, v20, v21, v22);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v23 = this->fields.eventSpotMoveDataList;
  if ( !v23 )
LABEL_13:
    sub_1BE4D28(eventSpotMoveDataList, method);
  size = v23->fields._size;
  v25 = v23->fields._version + 1;
  v23->fields._size = 0;
  v23->fields._version = v25;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v23->fields._items, 0, size, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6AA1B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId);
    sub_1BE4ACC(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6AA1B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_31FD818 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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
  EventSpotMoveManager___c_c *v6; // x0
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v9; // x21
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B6AA1A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method);
    sub_1BE4ACC(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v3);
    sub_1BE4ACC(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v4);
    sub_1BE4ACC(&EventSpotMoveManager___c_TypeInfo, v5);
    byte_4B6AA1A = 1;
  }
  v6 = EventSpotMoveManager___c_TypeInfo;
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  if ( !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v6 = EventSpotMoveManager___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v6->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventSpotMoveManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v9, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0LL);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
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
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  bool v9; // w20
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B6AA17 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v7);
    byte_4B6AA17 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1BE4D28(0LL, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    eventSpotMoveDataList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v9 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v11.fields._current, v9, v10);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
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
  Il2CppObject *Component_object; // x22
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
  __int64 v44; // x9
  UITweener_o *v45; // x21
  EventSpotMoveManager_c *v46; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v49; // x23
  EventDelegate_o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0

  if ( (byte_4B6AA18 & 1) == 0 )
  {
    sub_1BE4ACC(&EventDelegate_Callback_TypeInfo, data);
    sub_1BE4ACC(&EventDelegate_TypeInfo, v6);
    sub_1BE4ACC(&EventSpotMoveManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v8);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v12);
    sub_1BE4ACC(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v13);
    byte_4B6AA18 = 1;
  }
  v14 = sub_1BE4D18(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_49;
  *(_QWORD *)(v14 + 16) = data;
  v23 = v14 + 16;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)data, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_49;
  v24 = *(UnityEngine_Object_o **)(*(_QWORD *)(v14 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v23 )
    {
      v25 = *(UnityEngine_Object_o **)(*(_QWORD *)v23 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
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
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      SpotPathEntity = (void *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
                      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
                      {
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        UnityEngine_Object__Destroy_70452000((UnityEngine_Object_o *)Component_object, 0LL);
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
                                                               *((float *)SpotPathEntity + 17),
                                                               0LL);
                            *(float *)(v14 + 24) = v40;
                            *(float *)(v14 + 28) = v41;
                            *(_DWORD *)(v14 + 32) = v42;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v23 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v23 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v40,
                                  0LL);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v23 )
                            {
                              SpotPathEntity = *(void **)(*(_QWORD *)v23 + 24LL);
                              v43 = sqrtf(
                                      (float)((float)(v37 - v40) * (float)(v37 - v40))
                                    + (float)((float)(v38 - v41) * (float)(v38 - v41)));
                              if ( v43 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = v37;
                                  *((float *)SpotPathEntity + 33) = v38;
                                  *((_DWORD *)SpotPathEntity + 34) = v39;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  v44 = *(_QWORD *)(v14 + 24);
                                  v45 = (UITweener_o *)SpotPathEntity;
                                  *((_DWORD *)SpotPathEntity + 37) = *(_DWORD *)(v14 + 32);
                                  *(_QWORD *)((char *)SpotPathEntity + 140) = v44;
                                  v46 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v46 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v45->fields.onFinished;
                                  MOVE_SPEED = v46->static_fields->MOVE_SPEED;
                                  v45->fields.method = 0;
                                  v45->fields.duration = v43 / MOVE_SPEED;
                                  v49 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
                                  EventDelegate_Callback___ctor(
                                    v49,
                                    (Il2CppObject *)v14,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0LL);
                                  v50 = (EventDelegate_o *)sub_1BE4D18(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_47636304(v50, v49, 0LL);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v58 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= items->max_length )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v50,
                                          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v60 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v60[4] = (Il2CppClass *)v50;
                                        sub_1BE4A70(
                                          (PartyOrganizationUtility_o *)(v60 + 4),
                                          (int64_t)v50,
                                          v51,
                                          v52,
                                          v53,
                                          v54,
                                          v55,
                                          v56);
                                      }
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
LABEL_49:
    sub_1BE4D28(SpotPathEntity, v16);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSpotMoveManager_SpotMoveData_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.SpotObject, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.SpotPathMesh = 0LL;
  v8 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v8 + 32);
  sub_1BE4A70((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6AA1E & 1) == 0 )
  {
    sub_1BE4ACC(&EventSpotMoveManager___c_TypeInfo, v1);
    byte_4B6AA1E = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventSpotMoveManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, method);
  }
  v4->fields.State = 0;
}