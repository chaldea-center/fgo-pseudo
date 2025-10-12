void EventSpotMoveManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C31BC6 & 1) == 0 )
  {
    sub_1C32C20(&EventSpotMoveManager_TypeInfo);
    byte_4C31BC6 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C31BC5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
    byte_4C31BC5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v3;
  sub_1C32BC4(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass **v9; // x8

  if ( (byte_4C31BBF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
    byte_4C31BBF = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v7 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1C32E7C(eventSpotMoveDataList);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v9[4] = (Il2CppClass *)data;
    sub_1C32BC4(v9 + 4, data);
  }
}


float EventSpotMoveManager__CalcDistance(
        EventSpotMoveManager_o *this,
        float x1,
        float y1,
        float x2,
        float y2,
        const MethodInfo *method)
{
  return sqrtf((float)((float)(x1 - x2) * (float)(x1 - x2)) + (float)((float)(y1 - y2) * (float)(y1 - y2)));
}


float EventSpotMoveManager__CalcSpotPathRate(
        int32_t eventId,
        int32_t raidId,
        SpotPathEntity_o *spotPathEnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t valueType; // w8
  DataManager_o *v9; // x20
  float v10; // s8
  bool HasPrioredData; // w0
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v14; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v17; // x20
  __int64 v18; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C31BC2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31BC2 = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_26;
  valueType = spotPathEnt->fields.valueType;
  v9 = (DataManager_o *)Instance;
  v10 = 0.0;
  if ( valueType != 2 )
  {
    if ( valueType != 1 )
      return v10;
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0);
        v10 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v10 = (float)data / 1000.0;
        Instance = DataManager__GetMasterData_object_(
                     v9,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0);
          if ( v10 >= GoalRate )
            return GoalRate;
          return v10;
        }
      }
    }
LABEL_26:
    sub_1C32E7C(Instance);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0);
  if ( Entity )
  {
    v14 = Entity;
    TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0);
    startedAt = v14->fields.startedAt;
    v17 = TotalEventRaidEntity;
    v18 = v14->fields.timeLimitAt - startedAt;
    IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0);
    if ( !v17 || !IsStopRaidDeadTime || (Time = v17->fields.defeatedAt, Time <= 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
    }
    return fmaxf(fminf((float)(Time - startedAt) / (float)v18, 1.0), 0.0);
  }
  return v10;
}


void EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C31BBE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4C31BBE = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventSpotMoveDataList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C32E7C(v4);
    *(Il2CppClass **)((char *)&v9.fields._current->klass + (unsigned __int64)&off_18) = 0;
    *(_DWORD *)((char *)&word_10 + (_QWORD)current) = 0;
    sub_1C32BC4((char *)&off_18 + (_QWORD)current, 0);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = 0;
    sub_1C32BC4((char *)&qword_20 + (_QWORD)current, 0);
    *(_DWORD *)((char *)&qword_28 + (_QWORD)current) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v6 = this->fields.eventSpotMoveDataList;
  if ( !v6 )
LABEL_13:
    sub_1C32E7C(eventSpotMoveDataList);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *EventSpotMoveManager__GetEventSpotMoveDataList(
        EventSpotMoveManager_o *this,
        const MethodInfo *method)
{
  return this->fields.eventSpotMoveDataList;
}


SpotPathEntity_o *EventSpotMoveManager__GetSpotPathEntity(
        EventSpotMoveManager_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C31BC4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C32C20(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31BC4 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_3396884 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0

  if ( (byte_4C31BC3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
    sub_1C32C20(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    sub_1C32C20(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__);
    sub_1C32C20(&EventSpotMoveManager___c_TypeInfo);
    byte_4C31BC3 = 1;
  }
  v3 = EventSpotMoveManager___c_TypeInfo;
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  if ( !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v3 = EventSpotMoveManager___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v3->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventSpotMoveManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v6, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1C32BC4(&static_fields->__9__12_0, _9__12_0);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_30C6790 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


void EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  bool v6; // w20
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C31BC0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4C31BC0 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    eventSpotMoveDataList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v6 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v8.fields._current, v6, v7);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


void EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 SpotPathEntity; // x0
  __int64 v8; // x19
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Object_o *v10; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  SpotPathEntity_o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w24
  float v16; // s0
  float v17; // s8
  Il2CppObject *Component_object; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  float v22; // s11
  __int64 v23; // x9
  UITweener_o *v24; // x21
  EventSpotMoveManager_c *v25; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v28; // x23
  EventDelegate_o *v29; // x20
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31BC1 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&EventSpotMoveManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__);
    sub_1C32C20(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
    byte_4C31BC1 = 1;
  }
  v6 = sub_1C32E6C(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_49;
  *(_QWORD *)(v6 + 16) = data;
  v8 = v6 + 16;
  SpotPathEntity = sub_1C32BC4(v6 + 16, data);
  if ( !*(_QWORD *)(v6 + 16) )
    goto LABEL_49;
  v9 = *(UnityEngine_Object_o **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( (SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v8 )
    {
      v10 = *(UnityEngine_Object_o **)(*(_QWORD *)v8 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SpotPathEntity = UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( (SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v8 )
      {
        SpotPathEntity = (__int64)EventSpotMoveManager__GetSpotPathEntity(
                                    (EventSpotMoveManager_o *)SpotPathEntity,
                                    *(_DWORD *)(*(_QWORD *)v8 + 16LL),
                                    v11);
        if ( SpotPathEntity )
        {
          v13 = (SpotPathEntity_o *)SpotPathEntity;
          v15 = *(_DWORD *)(SpotPathEntity + 28);
          v14 = *(_DWORD *)(SpotPathEntity + 32);
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          v16 = EventSpotMoveManager__CalcSpotPathRate(v15, v14, v13, v12);
          if ( *(_QWORD *)v8 )
          {
            SpotPathEntity = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
            if ( SpotPathEntity )
            {
              v17 = v16;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0);
              if ( *(_QWORD *)v8 )
              {
                SpotPathEntity = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v17, 0);
                  if ( *(_QWORD *)v8 )
                  {
                    SpotPathEntity = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      SpotPathEntity = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                      if ( (SpotPathEntity & 1) != 0 )
                      {
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)Component_object, 0);
                      }
                      if ( *(_QWORD *)v8 )
                      {
                        Position = GameObjectExtensions__GetPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v8 + 24LL),
                                     0);
                        if ( *(_QWORD *)v8 )
                        {
                          SpotPathEntity = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
                          if ( SpotPathEntity )
                          {
                            x = Position.fields.x;
                            y = Position.fields.y;
                            z = Position.fields.z;
                            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                    (Custom2dSplineMesh_o *)SpotPathEntity,
                                                    *(float *)(SpotPathEntity + 68),
                                                    0);
                            *(UnityEngine_Vector3_o *)(v6 + 24) = PointAsWorldFlatten;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v8 )
                              {
                                SpotPathEntity = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  PointAsWorldFlatten,
                                  0);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v8 )
                            {
                              SpotPathEntity = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
                              v22 = sqrtf(
                                      (float)((float)(x - PointAsWorldFlatten.fields.x)
                                            * (float)(x - PointAsWorldFlatten.fields.x))
                                    + (float)((float)(y - PointAsWorldFlatten.fields.y)
                                            * (float)(y - PointAsWorldFlatten.fields.y)));
                              if ( v22 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                                            (UnityEngine_GameObject_o *)SpotPathEntity,
                                                            (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *(float *)(SpotPathEntity + 128) = x;
                                  *(float *)(SpotPathEntity + 132) = y;
                                  *(float *)(SpotPathEntity + 136) = z;
                                  *(_BYTE *)(SpotPathEntity + 152) = 1;
                                  v23 = *(_QWORD *)(v6 + 24);
                                  v24 = (UITweener_o *)SpotPathEntity;
                                  *(_DWORD *)(SpotPathEntity + 148) = *(_DWORD *)(v6 + 32);
                                  *(_QWORD *)(SpotPathEntity + 140) = v23;
                                  v25 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v25 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v24->fields.onFinished;
                                  MOVE_SPEED = v25->static_fields->MOVE_SPEED;
                                  v24->fields.method = 0;
                                  v24->fields.duration = v22 / MOVE_SPEED;
                                  v28 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
                                  EventDelegate_Callback___ctor(
                                    v28,
                                    (Il2CppObject *)v6,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0);
                                  v29 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_49230836(v29, v28, 0);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v31 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v29,
                                          *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v33 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v33[4] = (Il2CppClass *)v29;
                                        sub_1C32BC4(v33 + 4, v29);
                                      }
                                      UITweener__PlayForward(v24, 0);
                                      if ( *(_QWORD *)v8 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v8 + 40LL) = 1;
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
    sub_1C32E7C(SpotPathEntity);
  }
}


void EventSpotMoveManager_SpotMoveData___ctor(EventSpotMoveManager_SpotMoveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotMoveManager_SpotMoveData__Clear(EventSpotMoveManager_SpotMoveData_o *this, const MethodInfo *method)
{
  EventSpotMoveManager_SpotMoveData_o *v2; // x19

  v2 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0;
  sub_1C32BC4(&this->fields.SpotObject, 0);
  v2->fields.SpotPathMesh = 0;
  v2 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v2 + 32);
  sub_1C32BC4(v2, 0);
  LODWORD(v2->monitor) = 0;
}


void EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C31BC7 & 1) == 0 )
  {
    sub_1C32C20(&EventSpotMoveManager___c_TypeInfo);
    byte_4C31BC7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v1;
  sub_1C32BC4(EventSpotMoveManager___c_TypeInfo->static_fields, v1);
}


void EventSpotMoveManager___c___ctor(EventSpotMoveManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventSpotMoveManager___c___IsSpotObjectMoving_b__12_0(
        EventSpotMoveManager___c_o *this,
        EventSpotMoveManager_SpotMoveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.State == 1;
}


void EventSpotMoveManager___c__DisplayClass9_0___ctor(
        EventSpotMoveManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotMoveManager___c__DisplayClass9_0___UpdateSpotPosition_b__0(
        EventSpotMoveManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  struct EventSpotMoveManager_SpotMoveData_o *data; // x8
  struct EventSpotMoveManager_SpotMoveData_o *v4; // x8

  data = this->fields.data;
  if ( !data
    || (GameObjectExtensions__SetPosition(data->fields.SpotObject, this->fields.endPos, 0), (v4 = this->fields.data) == 0) )
  {
    sub_1C32E7C(this);
  }
  v4->fields.State = 0;
}