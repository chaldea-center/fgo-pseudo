void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EE24 & 1) == 0 )
  {
    sub_1B885B0(&EventSpotMoveManager_TypeInfo);
    byte_4A5EE24 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EE23 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
    byte_4A5EE23 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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

  if ( (byte_4A5EE1D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
    byte_4A5EE1D = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1B8880C(eventSpotMoveDataList, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
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


float __fastcall EventSpotMoveManager__CalcSpotPathRate(
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

  if ( (byte_4A5EE20 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE20 = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v11 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v11 = (float)data / 1000.0;
        Instance = DataManager__GetMasterData_object_(
                     v10,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          if ( v11 >= GoalRate )
            return GoalRate;
          return v11;
        }
      }
    }
LABEL_26:
    sub_1B8880C(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
  if ( Entity )
  {
    v15 = Entity;
    TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
    startedAt = v15->fields.startedAt;
    v18 = TotalEventRaidEntity;
    v19 = v15->fields.timeLimitAt - startedAt;
    IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
    if ( !v18 || !IsStopRaidDeadTime || (Time = v18->fields.defeatedAt, Time <= 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
    }
    return fmaxf(fminf((float)(Time - startedAt) / (float)v19, 1.0), 0.0);
  }
  return v11;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *current; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EE1C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4A5EE1C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    eventSpotMoveDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1B8880C(v4, v5);
    v14.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&current[1].monitor, 0, v6, v7);
    current[2].klass = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&current[2], 0, v9, v10);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v11 = this->fields.eventSpotMoveDataList;
  if ( !v11 )
LABEL_13:
    sub_1B8880C(eventSpotMoveDataList, method);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EE22 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EE22 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
  return (SpotPathEntity_o *)entity;
}


// attributes: thunk
void __fastcall EventSpotMoveManager__Init(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager__Clear(this, method);
}


bool __fastcall EventSpotMoveManager__IsSpotObjectMoving(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  EventSpotMoveManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5EE21 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
    sub_1B885B0(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    sub_1B885B0(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__);
    sub_1B885B0(&EventSpotMoveManager___c_TypeInfo);
    byte_4A5EE21 = 1;
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v6, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0LL);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v8, v9);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  bool v6; // w20
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EE1E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4A5EE1E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1B8880C(0LL, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    eventSpotMoveDataList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v6 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v8.fields._current, v6, v7);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x19
  UnityEngine_Object_o *v12; // x22
  UnityEngine_Object_o *v13; // x22
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  SpotPathEntity_o *v16; // x22
  int32_t v17; // w23
  int32_t v18; // w24
  float v19; // s0
  float v20; // s8
  Il2CppObject *Component_object; // x22
  float v22; // s0
  float v23; // s1
  int v24; // s2
  float v25; // s8
  float v26; // s9
  int v27; // s10
  float v28; // s0
  float v29; // s1
  int v30; // s2
  float v31; // s11
  __int64 v32; // x9
  UITweener_o *v33; // x21
  EventSpotMoveManager_c *v34; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v37; // x23
  EventDelegate_o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4A5EE1F & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&EventSpotMoveManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__);
    sub_1B885B0(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
    byte_4A5EE1F = 1;
  }
  v6 = sub_1B887FC(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_49;
  *(_QWORD *)(v6 + 16) = data;
  v11 = v6 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)data, v9, v10);
  if ( !*(_QWORD *)(v6 + 16) )
    goto LABEL_49;
  v12 = *(UnityEngine_Object_o **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v11 )
    {
      v13 = *(UnityEngine_Object_o **)(*(_QWORD *)v11 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v11 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v11 + 16LL),
                           v14);
        if ( SpotPathEntity )
        {
          v16 = (SpotPathEntity_o *)SpotPathEntity;
          v18 = *((_DWORD *)SpotPathEntity + 7);
          v17 = *((_DWORD *)SpotPathEntity + 8);
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
          v19 = EventSpotMoveManager__CalcSpotPathRate(v18, v17, v16, v15);
          if ( *(_QWORD *)v11 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v11 + 32LL);
            if ( SpotPathEntity )
            {
              v20 = v19;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v11 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v11 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v20, 0LL);
                  if ( *(_QWORD *)v11 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v11 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Component_object, 0LL);
                      }
                      if ( *(_QWORD *)v11 )
                      {
                        *(UnityEngine_Vector3_o *)&v22 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v11 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v11 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v11 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v25 = v22;
                            v26 = v23;
                            v27 = v24;
                            *(UnityEngine_Vector3_o *)&v28 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 17),
                                                               0LL);
                            *(float *)(v6 + 24) = v28;
                            *(float *)(v6 + 28) = v29;
                            *(_DWORD *)(v6 + 32) = v30;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v11 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v11 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v28,
                                  0LL);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v11 )
                            {
                              SpotPathEntity = *(void **)(*(_QWORD *)v11 + 24LL);
                              v31 = sqrtf(
                                      (float)((float)(v25 - v28) * (float)(v25 - v28))
                                    + (float)((float)(v26 - v29) * (float)(v26 - v29)));
                              if ( v31 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = v25;
                                  *((float *)SpotPathEntity + 33) = v26;
                                  *((_DWORD *)SpotPathEntity + 34) = v27;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  v32 = *(_QWORD *)(v6 + 24);
                                  v33 = (UITweener_o *)SpotPathEntity;
                                  *((_DWORD *)SpotPathEntity + 37) = *(_DWORD *)(v6 + 32);
                                  *(_QWORD *)((char *)SpotPathEntity + 140) = v32;
                                  v34 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v34 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v33->fields.onFinished;
                                  MOVE_SPEED = v34->static_fields->MOVE_SPEED;
                                  v33->fields.method = 0;
                                  v33->fields.duration = v31 / MOVE_SPEED;
                                  v37 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
                                  EventDelegate_Callback___ctor(
                                    v37,
                                    (Il2CppObject *)v6,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0LL);
                                  v38 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_46786736(v38, v37, 0LL);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v42 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= items->max_length )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v38,
                                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v44 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v44[4] = (Il2CppClass *)v38;
                                        sub_1B88554(
                                          (ServantStatusBattleListViewItem_o *)(v44 + 4),
                                          (int32_t)v38,
                                          v39,
                                          v40);
                                      }
                                      UITweener__PlayForward(v33, 0LL);
                                      if ( *(_QWORD *)v11 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v11 + 40LL) = 1;
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
    sub_1B8880C(SpotPathEntity, v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SpotObject, 0, v2, v3);
  v4->fields.SpotPathMesh = 0LL;
  v4 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v4 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, 0, v5, v6);
  LODWORD(v4->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EE25 & 1) == 0 )
  {
    sub_1B885B0(&EventSpotMoveManager___c_TypeInfo);
    byte_4A5EE25 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventSpotMoveManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, method);
  }
  v4->fields.State = 0;
}