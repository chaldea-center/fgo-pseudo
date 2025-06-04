void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B061EC & 1) == 0 )
  {
    sub_1BC3008(&EventSpotMoveManager_TypeInfo, v1);
    byte_4B061EC = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B061EB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v3);
    byte_4B061EB = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4B061E5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data);
    byte_4B061E5 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1BC3264(eventSpotMoveDataList, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
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

  if ( (byte_4B061E8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SpotAddMaster___, v8);
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B061E8 = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SpotAddMaster___);
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
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventRaceMaster___);
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
    sub_1BC3264(Instance, v12);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B061E4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v6);
    byte_4B061E4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    eventSpotMoveDataList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v8 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1BC3264(v8, v9);
    v18.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&current[1].monitor, 0, v10, v11);
    current[2].klass = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&current[2], 0, v13, v14);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v15 = this->fields.eventSpotMoveDataList;
  if ( !v15 )
LABEL_13:
    sub_1BC3264(eventSpotMoveDataList, method);
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
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

  if ( (byte_4B061EA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId);
    sub_1BC3008(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B061EA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_32AF0BC *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B061E9 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method);
    sub_1BC3008(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v3);
    sub_1BC3008(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v4);
    sub_1BC3008(&EventSpotMoveManager___c_TypeInfo, v5);
    byte_4B061E9 = 1;
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v9, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0LL);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v11, v12);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
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

  if ( (byte_4B061E6 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v7);
    byte_4B061E6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1BC3264(0LL, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    eventSpotMoveDataList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v9 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v11.fields._current, v9, v10);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x19
  UnityEngine_Object_o *v20; // x22
  UnityEngine_Object_o *v21; // x22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  SpotPathEntity_o *v24; // x22
  int32_t v25; // w23
  int32_t v26; // w24
  float v27; // s0
  float v28; // s8
  Il2CppObject *Component_object; // x22
  float v30; // s0
  float v31; // s1
  int v32; // s2
  float v33; // s8
  float v34; // s9
  int v35; // s10
  float v36; // s0
  float v37; // s1
  int v38; // s2
  float v39; // s11
  __int64 v40; // x9
  UITweener_o *v41; // x21
  EventSpotMoveManager_c *v42; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v45; // x23
  EventDelegate_o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4B061E7 & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, data);
    sub_1BC3008(&EventDelegate_TypeInfo, v6);
    sub_1BC3008(&EventSpotMoveManager_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v8);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v12);
    sub_1BC3008(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v13);
    byte_4B061E7 = 1;
  }
  v14 = sub_1BC3254(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_49;
  *(_QWORD *)(v14 + 16) = data;
  v19 = v14 + 16;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)data, v17, v18);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_49;
  v20 = *(UnityEngine_Object_o **)(*(_QWORD *)(v14 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v19 )
    {
      v21 = *(UnityEngine_Object_o **)(*(_QWORD *)v19 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v19 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v19 + 16LL),
                           v22);
        if ( SpotPathEntity )
        {
          v24 = (SpotPathEntity_o *)SpotPathEntity;
          v26 = *((_DWORD *)SpotPathEntity + 7);
          v25 = *((_DWORD *)SpotPathEntity + 8);
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          v27 = EventSpotMoveManager__CalcSpotPathRate(v26, v25, v24, v23);
          if ( *(_QWORD *)v19 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v19 + 32LL);
            if ( SpotPathEntity )
            {
              v28 = v27;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v19 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v19 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v28, 0LL);
                  if ( *(_QWORD *)v19 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v19 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)Component_object, 0LL);
                      }
                      if ( *(_QWORD *)v19 )
                      {
                        *(UnityEngine_Vector3_o *)&v30 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v19 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v19 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v19 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v33 = v30;
                            v34 = v31;
                            v35 = v32;
                            *(UnityEngine_Vector3_o *)&v36 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 17),
                                                               0LL);
                            *(float *)(v14 + 24) = v36;
                            *(float *)(v14 + 28) = v37;
                            *(_DWORD *)(v14 + 32) = v38;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v19 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v19 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v36,
                                  0LL);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v19 )
                            {
                              SpotPathEntity = *(void **)(*(_QWORD *)v19 + 24LL);
                              v39 = sqrtf(
                                      (float)((float)(v33 - v36) * (float)(v33 - v36))
                                    + (float)((float)(v34 - v37) * (float)(v34 - v37)));
                              if ( v39 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = v33;
                                  *((float *)SpotPathEntity + 33) = v34;
                                  *((_DWORD *)SpotPathEntity + 34) = v35;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  v40 = *(_QWORD *)(v14 + 24);
                                  v41 = (UITweener_o *)SpotPathEntity;
                                  *((_DWORD *)SpotPathEntity + 37) = *(_DWORD *)(v14 + 32);
                                  *(_QWORD *)((char *)SpotPathEntity + 140) = v40;
                                  v42 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v42 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v41->fields.onFinished;
                                  MOVE_SPEED = v42->static_fields->MOVE_SPEED;
                                  v41->fields.method = 0;
                                  v41->fields.duration = v39 / MOVE_SPEED;
                                  v45 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
                                  EventDelegate_Callback___ctor(
                                    v45,
                                    (Il2CppObject *)v14,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0LL);
                                  v46 = (EventDelegate_o *)sub_1BC3254(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_48365464(v46, v45, 0LL);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v50 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= items->max_length )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v46,
                                          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v52 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v52[4] = (Il2CppClass *)v46;
                                        sub_1BC2FAC((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
                                      }
                                      UITweener__PlayForward(v41, 0LL);
                                      if ( *(_QWORD *)v19 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v19 + 40LL) = 1;
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
    sub_1BC3264(SpotPathEntity, v16);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  EventSpotMoveManager_SpotMoveData_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.SpotObject, 0, v2, v3);
  v4->fields.SpotPathMesh = 0LL;
  v4 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v4 + 32);
  sub_1BC2FAC((CGThumbnailListItem_o *)v4, 0, v5, v6);
  LODWORD(v4->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B061ED & 1) == 0 )
  {
    sub_1BC3008(&EventSpotMoveManager___c_TypeInfo, v1);
    byte_4B061ED = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventSpotMoveManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, method);
  }
  v4->fields.State = 0;
}