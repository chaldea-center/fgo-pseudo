void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BE03E0 & 1) == 0 )
  {
    sub_1C21E38(&EventSpotMoveManager_TypeInfo);
    byte_4BE03E0 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE03DF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
    byte_4BE03DF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4BE03D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__);
    byte_4BE03D9 = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1C22094(eventSpotMoveDataList, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4BE03DC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE03DC = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotAddMaster___);
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
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaceMaster___);
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
    sub_1C22094(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *current; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BE03D8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4BE03D8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    eventSpotMoveDataList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v4 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C22094(v4, v5);
    v22.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&current[1].monitor, 0LL, v6, v7, v8, v9, v10, v11);
    current[2].klass = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&current[2], 0LL, v13, v14, v15, v16, v17, v18);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v19 = this->fields.eventSpotMoveDataList;
  if ( !v19 )
LABEL_13:
    sub_1C22094(eventSpotMoveDataList, method);
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
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

  if ( (byte_4BE03DE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C21E38(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE03DE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BE03DD & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
    sub_1C21E38(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    sub_1C21E38(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__);
    sub_1C21E38(&EventSpotMoveManager___c_TypeInfo);
    byte_4BE03DD = 1;
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v6, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0LL);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)_9__12_0, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
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

  if ( (byte_4BE03DA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
    byte_4BE03DA = 1;
  }
  memset(&v8, 0, sizeof(v8));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1C22094(0LL, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    eventSpotMoveDataList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v6 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v8.fields._current, v6, v7);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
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
  Il2CppObject *Component_object; // x22
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
  __int64 v36; // x9
  UITweener_o *v37; // x21
  EventSpotMoveManager_c *v38; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v41; // x23
  EventDelegate_o *v42; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4BE03DB & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&EventDelegate_TypeInfo);
    sub_1C21E38(&EventSpotMoveManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__);
    sub_1C21E38(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
    byte_4BE03DB = 1;
  }
  v6 = sub_1C22084(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_49;
  *(_QWORD *)(v6 + 16) = data;
  v15 = v6 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)data, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 16) )
    goto LABEL_49;
  v16 = *(UnityEngine_Object_o **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v15 )
    {
      v17 = *(UnityEngine_Object_o **)(*(_QWORD *)v15 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
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
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
                        UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Component_object, 0LL);
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
                                                               *((float *)SpotPathEntity + 17),
                                                               0LL);
                            *(float *)(v6 + 24) = v32;
                            *(float *)(v6 + 28) = v33;
                            *(_DWORD *)(v6 + 32) = v34;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v15 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v15 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v32,
                                  0LL);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v15 )
                            {
                              SpotPathEntity = *(void **)(*(_QWORD *)v15 + 24LL);
                              v35 = sqrtf(
                                      (float)((float)(v29 - v32) * (float)(v29 - v32))
                                    + (float)((float)(v30 - v33) * (float)(v30 - v33)));
                              if ( v35 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = v29;
                                  *((float *)SpotPathEntity + 33) = v30;
                                  *((_DWORD *)SpotPathEntity + 34) = v31;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  v36 = *(_QWORD *)(v6 + 24);
                                  v37 = (UITweener_o *)SpotPathEntity;
                                  *((_DWORD *)SpotPathEntity + 37) = *(_DWORD *)(v6 + 32);
                                  *(_QWORD *)((char *)SpotPathEntity + 140) = v36;
                                  v38 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
                                    v38 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v37->fields.onFinished;
                                  MOVE_SPEED = v38->static_fields->MOVE_SPEED;
                                  v37->fields.method = 0;
                                  v37->fields.duration = v35 / MOVE_SPEED;
                                  v41 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
                                  EventDelegate_Callback___ctor(
                                    v41,
                                    (Il2CppObject *)v6,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0LL);
                                  v42 = (EventDelegate_o *)sub_1C22084(EventDelegate_TypeInfo);
                                  EventDelegate___ctor_47961380(v42, v41, 0LL);
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
                                          (Il2CppObject *)v42,
                                          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v52 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v52[4] = (Il2CppClass *)v42;
                                        sub_1C21DDC(
                                          (PartyOrganizationUtility_o *)(v52 + 4),
                                          (int64_t)v42,
                                          v43,
                                          v44,
                                          v45,
                                          v46,
                                          v47,
                                          v48);
                                      }
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
LABEL_49:
    sub_1C22094(SpotPathEntity, v8);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SpotObject, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.SpotPathMesh = 0LL;
  v8 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v8 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE03E1 & 1) == 0 )
  {
    sub_1C21E38(&EventSpotMoveManager___c_TypeInfo);
    byte_4BE03E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventSpotMoveManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventSpotMoveManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, method);
  }
  v4->fields.State = 0;
}