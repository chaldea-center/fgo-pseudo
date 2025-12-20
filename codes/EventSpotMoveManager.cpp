void EventSpotMoveManager___cctor(const MethodInfo *method)
{
  if ( (byte_4D268B1 & 1) == 0 )
  {
    sub_1C94098(&EventSpotMoveManager_TypeInfo);
    byte_4D268B1 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4D268B0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
    byte_4D268B0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v3;
  sub_1C9403C(&this->fields, v3);
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

  if ( (byte_4D268AA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
    byte_4D268AA = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v7 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1C942F0(eventSpotMoveDataList, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v9[4] = (Il2CppClass *)data;
    sub_1C9403C(v9 + 4, data);
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
  __int64 v8; // x1
  int32_t valueType; // w8
  DataManager_o *v10; // x20
  float v11; // s8
  bool HasPrioredData; // w0
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v15; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v18; // x20
  __int64 v19; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D268AD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D268AD = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_26;
  valueType = spotPathEnt->fields.valueType;
  v10 = (DataManager_o *)Instance;
  v11 = 0.0;
  if ( valueType != 2 )
  {
    if ( valueType != 1 )
      return v11;
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0);
        v11 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v11 = (float)data / 1000.0;
        Instance = DataManager__GetMasterData_object_(
                     v10,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0);
          if ( v11 >= GoalRate )
            return GoalRate;
          return v11;
        }
      }
    }
LABEL_26:
    sub_1C942F0(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0);
  if ( Entity )
  {
    v15 = Entity;
    TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0);
    startedAt = v15->fields.startedAt;
    v18 = TotalEventRaidEntity;
    v19 = v15->fields.timeLimitAt - startedAt;
    IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0);
    if ( !v18 || !IsStopRaidDeadTime || (Time = v18->fields.defeatedAt, Time <= 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
    }
    return fmaxf(fminf((float)(Time - startedAt) / (float)v19, 1.0), 0.0);
  }
  return v11;
}


void EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D268A9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4D268A9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    eventSpotMoveDataList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C942F0(v4, v5);
    *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18) = 0;
    *(_DWORD *)((char *)&word_10 + (_QWORD)current) = 0;
    sub_1C9403C((char *)&off_18 + (_QWORD)current, 0);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = 0;
    sub_1C9403C((char *)&qword_20 + (_QWORD)current, 0);
    *(_DWORD *)((char *)&qword_28 + (_QWORD)current) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v7 = this->fields.eventSpotMoveDataList;
  if ( !v7 )
LABEL_13:
    sub_1C942F0(eventSpotMoveDataList, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
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
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D268AF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C94098(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D268AF = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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

  if ( (byte_4D268AE & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
    sub_1C94098(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    sub_1C94098(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__);
    sub_1C94098(&EventSpotMoveManager___c_TypeInfo);
    byte_4D268AE = 1;
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v6, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1C9403C(&static_fields->__9__12_0, _9__12_0);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_3185468 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  bool v6; // w20
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D268AB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4D268AB = 1;
  }
  memset(&v8, 0, sizeof(v8));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1C942F0(0, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    eventSpotMoveDataList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v6 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v8.fields._current, v6, v7);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


void EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 SpotPathEntity; // x0
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_Object_o *v10; // x22
  UnityEngine_Object_o *v11; // x22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  SpotPathEntity_o *v14; // x22
  int32_t v15; // w23
  int32_t v16; // w24
  float v17; // s0
  float v18; // s8
  Il2CppObject *Component_object; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s11
  __int64 v24; // x9
  UITweener_o *v25; // x21
  EventSpotMoveManager_c *v26; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v29; // x23
  EventDelegate_o *v30; // x20
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D268AC & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&EventSpotMoveManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__);
    sub_1C94098(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
    byte_4D268AC = 1;
  }
  v6 = sub_1C942E4(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_49;
  *(_QWORD *)(v6 + 16) = data;
  v9 = v6 + 16;
  SpotPathEntity = sub_1C9403C(v6 + 16, data);
  if ( !*(_QWORD *)(v6 + 16) )
    goto LABEL_49;
  v10 = *(UnityEngine_Object_o **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = UnityEngine_Object__op_Equality(v10, 0, 0);
  if ( (SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v9 )
    {
      v11 = *(UnityEngine_Object_o **)(*(_QWORD *)v9 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SpotPathEntity = UnityEngine_Object__op_Equality(v11, 0, 0);
      if ( (SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v9 )
      {
        SpotPathEntity = (__int64)EventSpotMoveManager__GetSpotPathEntity(
                                    (EventSpotMoveManager_o *)SpotPathEntity,
                                    *(_DWORD *)(*(_QWORD *)v9 + 16LL),
                                    v12);
        if ( SpotPathEntity )
        {
          v14 = (SpotPathEntity_o *)SpotPathEntity;
          v16 = *(_DWORD *)(SpotPathEntity + 28);
          v15 = *(_DWORD *)(SpotPathEntity + 32);
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          v17 = EventSpotMoveManager__CalcSpotPathRate(v16, v15, v14, v13);
          if ( *(_QWORD *)v9 )
          {
            SpotPathEntity = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
            if ( SpotPathEntity )
            {
              v18 = v17;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0);
              if ( *(_QWORD *)v9 )
              {
                SpotPathEntity = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v18, 0);
                  if ( *(_QWORD *)v9 )
                  {
                    SpotPathEntity = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      SpotPathEntity = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                      if ( (SpotPathEntity & 1) != 0 )
                      {
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)Component_object, 0);
                      }
                      if ( *(_QWORD *)v9 )
                      {
                        Position = GameObjectExtensions__GetPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v9 + 24LL),
                                     0);
                        if ( *(_QWORD *)v9 )
                        {
                          SpotPathEntity = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
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
                              if ( *(_QWORD *)v9 )
                              {
                                SpotPathEntity = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  PointAsWorldFlatten,
                                  0);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v9 )
                            {
                              SpotPathEntity = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
                              v23 = sqrtf(
                                      (float)((float)(x - PointAsWorldFlatten.fields.x)
                                            * (float)(x - PointAsWorldFlatten.fields.x))
                                    + (float)((float)(y - PointAsWorldFlatten.fields.y)
                                            * (float)(y - PointAsWorldFlatten.fields.y)));
                              if ( v23 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                                            (UnityEngine_GameObject_o *)SpotPathEntity,
                                                            (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *(float *)(SpotPathEntity + 128) = x;
                                  *(float *)(SpotPathEntity + 132) = y;
                                  *(float *)(SpotPathEntity + 136) = z;
                                  *(_BYTE *)(SpotPathEntity + 152) = 1;
                                  v24 = *(_QWORD *)(v6 + 24);
                                  v25 = (UITweener_o *)SpotPathEntity;
                                  *(_DWORD *)(SpotPathEntity + 148) = *(_DWORD *)(v6 + 32);
                                  *(_QWORD *)(SpotPathEntity + 140) = v24;
                                  v26 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v26 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v25->fields.onFinished;
                                  MOVE_SPEED = v26->static_fields->MOVE_SPEED;
                                  v25->fields.method = 0;
                                  v25->fields.duration = v23 / MOVE_SPEED;
                                  v29 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
                                  EventDelegate_Callback___ctor(
                                    v29,
                                    (Il2CppObject *)v6,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0);
                                  v30 = (EventDelegate_o *)sub_1C942E4(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_49964596(v30, v29, 0);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v32 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v30,
                                          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v34 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v34[4] = (Il2CppClass *)v30;
                                        sub_1C9403C(v34 + 4, v30);
                                      }
                                      UITweener__PlayForward(v25, 0);
                                      if ( *(_QWORD *)v9 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v9 + 40LL) = 1;
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
    sub_1C942F0(SpotPathEntity, v8);
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
  sub_1C9403C(&this->fields.SpotObject, 0);
  v2->fields.SpotPathMesh = 0;
  v2 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v2 + 32);
  sub_1C9403C(v2, 0);
  LODWORD(v2->monitor) = 0;
}


void EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D268B2 & 1) == 0 )
  {
    sub_1C94098(&EventSpotMoveManager___c_TypeInfo);
    byte_4D268B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v1;
  sub_1C9403C(EventSpotMoveManager___c_TypeInfo->static_fields, v1);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, method);
  }
  v4->fields.State = 0;
}