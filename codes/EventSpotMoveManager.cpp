void EventSpotMoveManager___cctor(const MethodInfo *method)
{
  if ( (byte_596A4D0 & 1) == 0 )
  {
    sub_2213A60(&EventSpotMoveManager_TypeInfo);
    byte_596A4D0 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A4CF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
    byte_596A4CF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventSpotMoveManager_o *v9; // x20
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_596A4C9 & 1) == 0 )
  {
    this = (EventSpotMoveManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
    byte_596A4C9 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)v9->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_2213CDC(this, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  float v9; // s8
  int32_t valueType; // w8
  DataManager_o *v11; // x20
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v14; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v17; // x20
  __int64 v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Time; // x0
  float v22; // s0
  int32_t data; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A4CC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A4CC = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_31;
  v9 = 0.0;
  valueType = spotPathEnt->fields.valueType;
  v11 = (DataManager_o *)Instance;
  if ( valueType != 2 )
  {
    if ( valueType != 1 )
      return v9;
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        v9 = 2.0;
        if ( SpotAddMaster__HasPrioredData((SpotAddMaster_o *)Instance, 3, spotPathEnt->fields.spotId, &data, 0)
          && (data & 0x80000000) == 0
          && data <= 1000 )
        {
          v9 = (float)data / 1000.0;
        }
        Instance = DataManager__GetMasterData_object_(
                     v11,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0);
          if ( v9 >= GoalRate )
            return GoalRate;
          return v9;
        }
      }
    }
LABEL_31:
    sub_2213CDC(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_31;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0);
  if ( Entity )
  {
    v14 = Entity;
    TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0);
    startedAt = v14->fields.startedAt;
    v17 = TotalEventRaidEntity;
    v18 = v14->fields.timeLimitAt - startedAt;
    if ( !SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0) || !v17 || (Time = v17->fields.defeatedAt, Time <= 0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v20);
      Time = NetworkManager__getTime(0);
    }
    v22 = (float)(Time - startedAt) / (float)v18;
    if ( v22 > 1.0 )
      v22 = 1.0;
    if ( v22 >= 0.0 )
      return v22;
    else
      return 0.0;
  }
  return v9;
}


void EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *current; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  __int64 v22; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v23; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A4C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_596A4C8 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  memset(&v24, 0, sizeof(v24));
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    eventSpotMoveDataList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v22 = 0;
  v23 = &v24;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_2213CDC(v4, v5);
    *(Il2CppClass **)((char *)&v24.fields._current->klass + (unsigned __int64)off_18) = 0;
    *(_DWORD *)((char *)&word_10 + (_QWORD)current) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)off_18 + (_QWORD)current), 0, v6, v7, v8, v9, v10, v11);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)&qword_20 + (_QWORD)current),
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    *(_DWORD *)((char *)&qword_28 + (_QWORD)current) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v19 = this->fields.eventSpotMoveDataList;
  if ( !v19 )
LABEL_13:
    sub_2213CDC(eventSpotMoveDataList, method);
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0);
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

  if ( (byte_596A4CE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_2213A60(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A4CE = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventSpotMoveManager___c_c *v4; // x0
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v8; // x21
  struct EventSpotMoveManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A4CD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
    sub_2213A60(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    sub_2213A60(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__);
    sub_2213A60(&EventSpotMoveManager___c_TypeInfo);
    byte_596A4CD = 1;
  }
  v4 = EventSpotMoveManager___c_TypeInfo;
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  if ( !*(&EventSpotMoveManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo, method, v2);
    v4 = EventSpotMoveManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__12_0 = (System_Func_object__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v8, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0);
    v9 = EventSpotMoveManager___c_TypeInfo->static_fields;
    v9->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__12_0, (int32_t)_9__12_0, v10, v11, v12, v13, v14, v15);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v8; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A4CA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_596A4CA = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  memset(&v9, 0, sizeof(v9));
  if ( !eventSpotMoveDataList )
    sub_2213CDC(0, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventSpotMoveDataList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v7 = 0;
  v8 = &v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(
      this,
      (EventSpotMoveManager_SpotMoveData_o *)v9.fields._current,
      isFocedMove,
      v6);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


void EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v6; // x20
  void *SpotPathEntity; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x19
  __int64 v16; // x2
  UnityEngine_Object_o *v17; // x22
  __int64 v18; // x2
  UnityEngine_Object_o *v19; // x22
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  SpotPathEntity_o *v23; // x22
  int32_t v24; // w23
  int32_t v25; // w24
  float v26; // s0
  float v27; // s8
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *Component_object; // x22
  __int64 v31; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v35; // x8
  float v36; // s11
  __int64 v37; // x2
  char *v38; // x21
  EventSpotMoveManager_c *v39; // x0
  __int64 v40; // x9
  float MOVE_SPEED; // s0
  System_Collections_Generic_List_object__o *v42; // x22
  EventDelegate_Callback_c *v43; // x0
  EventDelegate_Callback_o *v44; // x23
  EventDelegate_o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A4CB & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&EventSpotMoveManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__);
    sub_2213A60(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
    byte_596A4CB = 1;
  }
  v6 = sub_2213CCC(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_50;
  *(_QWORD *)(v6 + 16) = data;
  v15 = v6 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)data, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 16) )
    goto LABEL_50;
  v17 = *(UnityEngine_Object_o **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v16);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v17, 0, 0);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v15 )
    {
      v19 = *(UnityEngine_Object_o **)(*(_QWORD *)v15 + 32LL);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v18);
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v19, 0, 0);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v15 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v15 + 16LL),
                           v20);
        if ( SpotPathEntity )
        {
          v23 = (SpotPathEntity_o *)SpotPathEntity;
          v24 = *((_DWORD *)SpotPathEntity + 7);
          v25 = *((_DWORD *)SpotPathEntity + 8);
          if ( !*(&EventSpotMoveManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo, v8, v21);
          v26 = EventSpotMoveManager__CalcSpotPathRate(v24, v25, v23, v22);
          if ( *(_QWORD *)v15 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v15 + 32LL);
            if ( SpotPathEntity )
            {
              v27 = v26;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0);
              if ( *(_QWORD *)v15 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v15 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v27, 0);
                  if ( *(_QWORD *)v15 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v15 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
                      SpotPathEntity = (void *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
                      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
                      {
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v31);
                        UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
                      }
                      if ( *(_QWORD *)v15 )
                      {
                        Position = GameObjectExtensions__GetPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v15 + 24LL),
                                     0);
                        if ( *(_QWORD *)v15 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v15 + 32LL);
                          if ( SpotPathEntity )
                          {
                            x = Position.fields.x;
                            y = Position.fields.y;
                            z = Position.fields.z;
                            PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                    (Custom2dSplineMesh_o *)SpotPathEntity,
                                                    *((float *)SpotPathEntity + 17),
                                                    0);
                            *(UnityEngine_Vector3_o *)(v6 + 24) = PointAsWorldFlatten;
                            if ( isFocedMove )
                            {
                              v35 = *(_QWORD *)v15;
                              if ( !*(_QWORD *)v15 )
                                goto LABEL_50;
LABEL_37:
                              GameObjectExtensions__SetPosition(
                                *(UnityEngine_GameObject_o **)(v35 + 24),
                                PointAsWorldFlatten,
                                0);
                              return;
                            }
                            v35 = *(_QWORD *)v15;
                            v36 = sqrtf(
                                    (float)((float)(x - PointAsWorldFlatten.fields.x)
                                          * (float)(x - PointAsWorldFlatten.fields.x))
                                  + (float)((float)(y - PointAsWorldFlatten.fields.y)
                                          * (float)(y - PointAsWorldFlatten.fields.y)));
                            if ( v36 < 2.0 )
                            {
                              if ( !v35 )
                                goto LABEL_50;
                              goto LABEL_37;
                            }
                            if ( v35 )
                            {
                              SpotPathEntity = *(void **)(v35 + 24);
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = x;
                                  *((float *)SpotPathEntity + 33) = y;
                                  v38 = (char *)SpotPathEntity;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  *((float *)SpotPathEntity + 34) = z;
                                  v39 = EventSpotMoveManager_TypeInfo;
                                  v40 = *(_QWORD *)(v6 + 24);
                                  *((_DWORD *)v38 + 37) = *(_DWORD *)(v6 + 32);
                                  *(_QWORD *)(v38 + 140) = v40;
                                  if ( !*(&v39->_2.cctor_finished + 1) )
                                  {
                                    j_il2cpp_runtime_class_init_0(v39, v8, v37);
                                    v39 = EventSpotMoveManager_TypeInfo;
                                  }
                                  MOVE_SPEED = v39->static_fields->MOVE_SPEED;
                                  v42 = (System_Collections_Generic_List_object__o *)*((_QWORD *)v38 + 9);
                                  *((_DWORD *)v38 + 8) = 0;
                                  v43 = EventDelegate_Callback_TypeInfo;
                                  *((float *)v38 + 14) = v36 / MOVE_SPEED;
                                  v44 = (EventDelegate_Callback_o *)sub_2213CCC(v43);
                                  EventDelegate_Callback___ctor(
                                    v44,
                                    (Il2CppObject *)v6,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0);
                                  v45 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_56337280(v45, v44, 0);
                                  if ( v42 )
                                  {
                                    items = v42->fields._items;
                                    v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++v42->fields._version;
                                    if ( items )
                                    {
                                      size = v42->fields._size;
                                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          v42,
                                          (Il2CppObject *)v45,
                                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v55 = &items->obj.klass + size;
                                        v42->fields._size = size + 1;
                                        v55[4] = (Il2CppClass *)v45;
                                        sub_2213A04(
                                          (MissionNaviTransitionBoardItem_o *)(v55 + 4),
                                          (int32_t)v45,
                                          v46,
                                          v47,
                                          v48,
                                          v49,
                                          v50,
                                          v51);
                                      }
                                      UITweener__PlayForward((UITweener_o *)v38, 0);
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
LABEL_50:
    sub_2213CDC(SpotPathEntity, v8);
  }
}


void EventSpotMoveManager_SpotMoveData___ctor(EventSpotMoveManager_SpotMoveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSpotMoveManager_SpotMoveData__Clear(EventSpotMoveManager_SpotMoveData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventSpotMoveManager_SpotMoveData_o *v8; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.SpotObject, 0, v2, v3, v4, v5, v6, v7);
  v8->fields.SpotPathMesh = 0;
  v8 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v8 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8, 0, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


void EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A4D1 & 1) == 0 )
  {
    sub_2213A60(&EventSpotMoveManager___c_TypeInfo);
    byte_596A4D1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventSpotMoveManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, method);
  }
  v4->fields.State = 0;
}