void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00039 & 1) == 0 )
  {
    sub_1B640C8(&EventSpotMoveManager_TypeInfo, v1);
    byte_4A00039 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00038 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v4);
    byte_4A00038 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSpotMoveManager__Add(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A00032 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data);
    byte_4A00032 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1B64324(eventSpotMoveDataList);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
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
  int32_t valueType; // w8
  DataManager_o *v13; // x20
  float v14; // s8
  bool HasPrioredData; // w0
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v18; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v21; // x20
  __int64 v22; // x21
  bool IsStopRaidDeadTime; // w0
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A00035 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotAddMaster___, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A00035 = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_26;
  valueType = spotPathEnt->fields.valueType;
  v13 = (DataManager_o *)Instance;
  v14 = 0.0;
  if ( valueType != 2 )
  {
    if ( valueType != 1 )
      return v14;
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v14 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v14 = (float)data / 1000.0;
        Instance = DataManager__GetMasterData_object_(
                     v13,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          if ( v14 >= GoalRate )
            return GoalRate;
          return v14;
        }
      }
    }
LABEL_26:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
  if ( Entity )
  {
    v18 = Entity;
    TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
    startedAt = v18->fields.startedAt;
    v21 = TotalEventRaidEntity;
    v22 = v18->fields.timeLimitAt - startedAt;
    IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
    if ( !v21 || !IsStopRaidDeadTime || (Time = v21->fields.defeatedAt, Time <= 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
    }
    return fmaxf(fminf((float)(Time - startedAt) / (float)v22, 1.0), 0.0);
  }
  return v14;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *current; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A00031 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v6);
    byte_4A00031 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    eventSpotMoveDataList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v8 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v8);
    v17.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[1].monitor, 0, v9, v10);
    current[2].klass = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[2], 0, v12, v13);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v14 = this->fields.eventSpotMoveDataList;
  if ( !v14 )
LABEL_13:
    sub_1B64324(eventSpotMoveDataList);
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00037 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId);
    sub_1B640C8(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A00037 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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
  EventSpotMoveManager___c_c *v7; // x0
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v10; // x21
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A00036 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method);
    sub_1B640C8(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v4);
    sub_1B640C8(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v5);
    sub_1B640C8(&EventSpotMoveManager___c_TypeInfo, v6);
    byte_4A00036 = 1;
  }
  v7 = EventSpotMoveManager___c_TypeInfo;
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  if ( !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo);
    v7 = EventSpotMoveManager___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventSpotMoveManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo,
                                                method,
                                                v2);
    System_Func_object__bool____ctor(_9__12_0, v10, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0LL);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v12, v13);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
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

  if ( (byte_4A00033 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v7);
    byte_4A00033 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    eventSpotMoveDataList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v9 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v11.fields._current, v9, v10);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x19
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Object_o *v20; // x22
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  SpotPathEntity_o *v23; // x22
  int32_t v24; // w23
  int32_t v25; // w24
  float v26; // s0
  float v27; // s8
  Il2CppObject *Component_object; // x22
  float v29; // s0
  float v30; // s1
  int v31; // s2
  float v32; // s8
  float v33; // s9
  int v34; // s10
  float v35; // s0
  float v36; // s1
  int v37; // s2
  float v38; // s11
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x9
  UITweener_o *v42; // x21
  EventSpotMoveManager_c *v43; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  EventDelegate_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0

  if ( (byte_4A00034 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, data);
    sub_1B640C8(&EventDelegate_TypeInfo, v6);
    sub_1B640C8(&EventSpotMoveManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v12);
    sub_1B640C8(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v13);
    byte_4A00034 = 1;
  }
  v14 = sub_1B64314(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, data, isFocedMove);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_49;
  *(_QWORD *)(v14 + 16) = data;
  v18 = v14 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)data, v16, v17);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_49;
  v19 = *(UnityEngine_Object_o **)(*(_QWORD *)(v14 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v18 )
    {
      v20 = *(UnityEngine_Object_o **)(*(_QWORD *)v18 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v18 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v18 + 16LL),
                           v21);
        if ( SpotPathEntity )
        {
          v23 = (SpotPathEntity_o *)SpotPathEntity;
          v25 = *((_DWORD *)SpotPathEntity + 7);
          v24 = *((_DWORD *)SpotPathEntity + 8);
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          v26 = EventSpotMoveManager__CalcSpotPathRate(v25, v24, v23, v22);
          if ( *(_QWORD *)v18 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v18 + 32LL);
            if ( SpotPathEntity )
            {
              v27 = v26;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v18 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v18 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v27, 0LL);
                  if ( *(_QWORD *)v18 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v18 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Component_object, 0LL);
                      }
                      if ( *(_QWORD *)v18 )
                      {
                        *(UnityEngine_Vector3_o *)&v29 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v18 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v18 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v18 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v32 = v29;
                            v33 = v30;
                            v34 = v31;
                            *(UnityEngine_Vector3_o *)&v35 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 17),
                                                               0LL);
                            *(float *)(v14 + 24) = v35;
                            *(float *)(v14 + 28) = v36;
                            *(_DWORD *)(v14 + 32) = v37;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v18 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v18 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v35,
                                  0LL);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v18 )
                            {
                              SpotPathEntity = *(void **)(*(_QWORD *)v18 + 24LL);
                              v38 = sqrtf(
                                      (float)((float)(v32 - v35) * (float)(v32 - v35))
                                    + (float)((float)(v33 - v36) * (float)(v33 - v36)));
                              if ( v38 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = v32;
                                  *((float *)SpotPathEntity + 33) = v33;
                                  *((_DWORD *)SpotPathEntity + 34) = v34;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  v41 = *(_QWORD *)(v14 + 24);
                                  v42 = (UITweener_o *)SpotPathEntity;
                                  *((_DWORD *)SpotPathEntity + 37) = *(_DWORD *)(v14 + 32);
                                  *(_QWORD *)((char *)SpotPathEntity + 140) = v41;
                                  v43 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v43 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v42->fields.onFinished;
                                  MOVE_SPEED = v43->static_fields->MOVE_SPEED;
                                  v42->fields.method = 0;
                                  v42->fields.duration = v38 / MOVE_SPEED;
                                  v46 = (EventDelegate_Callback_o *)sub_1B64314(
                                                                      EventDelegate_Callback_TypeInfo,
                                                                      v39,
                                                                      v40);
                                  EventDelegate_Callback___ctor(
                                    v46,
                                    (Il2CppObject *)v14,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0LL);
                                  v49 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v47, v48);
                                  EventDelegate___ctor_46508544(v49, v46, 0LL);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= items->max_length )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v49,
                                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v55 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v55[4] = (Il2CppClass *)v49;
                                        sub_1B6406C(
                                          (ServantStatusBattleListViewItem_o *)(v55 + 4),
                                          (int32_t)v49,
                                          v50,
                                          v51);
                                      }
                                      UITweener__PlayForward(v42, 0LL);
                                      if ( *(_QWORD *)v18 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v18 + 40LL) = 1;
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
    sub_1B64324(SpotPathEntity);
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
  int32_t v3; // w3
  EventSpotMoveManager_SpotMoveData_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  this->fields.SpotId = 0;
  this->fields.SpotObject = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SpotObject, 0, v2, v3);
  v4->fields.SpotPathMesh = 0LL;
  v4 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v4 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
  LODWORD(v4->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0003A & 1) == 0 )
  {
    sub_1B640C8(&EventSpotMoveManager___c_TypeInfo, v1);
    byte_4A0003A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventSpotMoveManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventSpotMoveManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
  v4->fields.State = 0;
}