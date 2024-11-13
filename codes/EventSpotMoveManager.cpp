void __fastcall EventSpotMoveManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19F94 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSpotMoveManager_TypeInfo, v1, v2);
    byte_4B19F94 = 1;
  }
  LODWORD(EventSpotMoveManager_TypeInfo->static_fields->MOVE_SPEED) = (struct EventSpotMoveManager_StaticFields)1123024896;
}


void __fastcall EventSpotMoveManager___ctor(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19F93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo, v5, v6);
    byte_4B19F93 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData___ctor__);
  this->fields.eventSpotMoveDataList = (struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B19F8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__, data, method);
    byte_4B19F8D = 1;
  }
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList
    || (items = eventSpotMoveDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Add__,
        ++eventSpotMoveDataList->fields._version,
        !items) )
  {
    sub_1BCAA3C(eventSpotMoveDataList, data);
  }
  size = eventSpotMoveDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventSpotMoveDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventSpotMoveDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int32_t valueType; // w8
  DataManager_o *v18; // x20
  float v19; // s8
  bool HasPrioredData; // w0
  float GoalRate; // s0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v23; // x21
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  int64_t startedAt; // x22
  TotalEventRaidEntity_o *v26; // x20
  __int64 v27; // x21
  bool IsStopRaidDeadTime; // w0
  __int64 v29; // x1
  int64_t Time; // x0
  int32_t data; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19F90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, *(_QWORD *)&raidId, spotPathEnt);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotAddMaster___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B19F90 = 1;
  }
  data = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !spotPathEnt )
    goto LABEL_26;
  valueType = spotPathEnt->fields.valueType;
  v18 = (DataManager_o *)Instance;
  v19 = 0.0;
  if ( valueType != 2 )
  {
    if ( valueType != 1 )
      return v19;
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotAddMaster___);
      if ( Instance )
      {
        HasPrioredData = SpotAddMaster__HasPrioredData(
                           (SpotAddMaster_o *)Instance,
                           3,
                           spotPathEnt->fields.spotId,
                           &data,
                           0LL);
        v19 = 2.0;
        if ( (unsigned int)data <= 0x3E8 && HasPrioredData )
          v19 = (float)data / 1000.0;
        Instance = DataManager__GetMasterData_object_(
                     v18,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___);
        if ( Instance )
        {
          GoalRate = EventRaceMaster__GetGoalRate(
                       (EventRaceMaster_o *)Instance,
                       spotPathEnt->fields.targetId / 100,
                       spotPathEnt->fields.targetId % 100,
                       spotPathEnt->fields.targetValue,
                       0LL);
          if ( v19 >= GoalRate )
            return GoalRate;
          return v19;
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(Instance, v16);
  }
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)Instance, eventId, raidId, 0LL);
  if ( Entity )
  {
    v23 = Entity;
    TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(Entity, 0LL);
    startedAt = v23->fields.startedAt;
    v26 = TotalEventRaidEntity;
    v27 = v23->fields.timeLimitAt - startedAt;
    IsStopRaidDeadTime = SpotPathEntity__IsStopRaidDeadTime(spotPathEnt, 0LL);
    if ( !v26 || !IsStopRaidDeadTime || (Time = v26->fields.defeatedAt, Time <= 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
      Time = NetworkManager__getTime(0LL);
    }
    return fmaxf(fminf((float)(Time - startedAt) / (float)v27, 1.0), 0.0);
  }
  return v19;
}


void __fastcall EventSpotMoveManager__Clear(EventSpotMoveManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *current; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19F8C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v10, v11);
    byte_4B19F8C = 1;
  }
  memset(&v31, 0, sizeof(v31));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    eventSpotMoveDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__);
    if ( !v13 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1BCAA3C(v13, v14);
    v31.fields._current[1].monitor = 0LL;
    LODWORD(current[1].klass) = 0;
    sub_1BCA784((PartyOrganizationUtility_o *)&current[1].monitor, 0LL, v15, v16, v17, v18, v19, v20);
    current[2].klass = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&current[2], 0LL, v22, v23, v24, v25, v26, v27);
    LODWORD(current[2].monitor) = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
  v28 = this->fields.eventSpotMoveDataList;
  if ( !v28 )
LABEL_13:
    sub_1BCAA3C(eventSpotMoveDataList, method);
  size = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19F92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotPathMaster___, *(_QWORD *)&spotId, method);
    sub_1BCA7E0(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B19F92 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    spotId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__TryGetEntity__);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventSpotMoveManager___c_c *v11; // x0
  System_Collections_Generic_List_T__o *eventSpotMoveDataList; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct EventSpotMoveManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19F91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___, method, v2);
    sub_1BCA7E0(&System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, v7, v8);
    sub_1BCA7E0(&EventSpotMoveManager___c_TypeInfo, v9, v10);
    byte_4B19F91 = 1;
  }
  v11 = EventSpotMoveManager___c_TypeInfo;
  eventSpotMoveDataList = (System_Collections_Generic_List_T__o *)this->fields.eventSpotMoveDataList;
  if ( !EventSpotMoveManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSpotMoveManager___c_TypeInfo, method);
    v11 = EventSpotMoveManager___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v11->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = EventSpotMoveManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_EventSpotMoveManager_SpotMoveData__bool__TypeInfo,
                                                method,
                                                v2,
                                                v3);
    System_Func_object__bool____ctor(_9__12_0, v14, Method_EventSpotMoveManager___c__IsSpotObjectMoving_b__12_0__, 0LL);
    static_fields = EventSpotMoveManager___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_EventSpotMoveManager_SpotMoveData__bool__o *)_9__12_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return BasicHelper__Any_object_(
           eventSpotMoveDataList,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventSpotMoveManager_SpotMoveData___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateAllSpotPosition(
        EventSpotMoveManager_o *this,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *eventSpotMoveDataList; // x0
  bool v12; // w20
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19F8E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__,
      isFocedMove,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__, v9, v10);
    byte_4B19F8E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventSpotMoveDataList = (System_Collections_Generic_List_object__o *)this->fields.eventSpotMoveDataList;
  if ( !eventSpotMoveDataList )
    sub_1BCAA3C(0LL, isFocedMove);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    eventSpotMoveDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventSpotMoveManager_SpotMoveData__GetEnumerator__);
  v12 = isFocedMove;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__MoveNext__) )
    EventSpotMoveManager__UpdateSpotPosition(this, (EventSpotMoveManager_SpotMoveData_o *)v14.fields._current, v12, v13);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventSpotMoveManager_SpotMoveData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSpotMoveManager__UpdateSpotPosition(
        EventSpotMoveManager_o *this,
        EventSpotMoveManager_SpotMoveData_o *data,
        bool isFocedMove,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  void *SpotPathEntity; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x19
  UnityEngine_Object_o *v32; // x22
  UnityEngine_Object_o *v33; // x22
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  SpotPathEntity_o *v36; // x22
  int32_t v37; // w23
  int32_t v38; // w24
  float v39; // s0
  float v40; // s8
  __int64 v41; // x1
  Il2CppObject *Component_object; // x22
  float v43; // s0
  float v44; // s1
  int v45; // s2
  float v46; // s8
  float v47; // s9
  int v48; // s10
  float v49; // s0
  float v50; // s1
  int v51; // s2
  float v52; // s11
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x9
  UITweener_o *v56; // x21
  EventSpotMoveManager_c *v57; // x0
  System_Collections_Generic_List_object__o *onFinished; // x22
  float MOVE_SPEED; // s0
  EventDelegate_Callback_o *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  EventDelegate_o *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0

  if ( (byte_4B19F8F & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, data, isFocedMove);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&EventSpotMoveManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__, v18, v19);
    sub_1BCA7E0(&EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, v20, v21);
    byte_4B19F8F = 1;
  }
  v22 = sub_1BCAA2C(EventSpotMoveManager___c__DisplayClass9_0_TypeInfo, data, isFocedMove, method);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_49;
  *(_QWORD *)(v22 + 16) = data;
  v31 = v22 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)data, v25, v26, v27, v28, v29, v30);
  if ( !*(_QWORD *)(v22 + 16) )
    goto LABEL_49;
  v32 = *(UnityEngine_Object_o **)(*(_QWORD *)(v22 + 16) + 24LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)SpotPathEntity & 1) == 0 )
  {
    if ( *(_QWORD *)v31 )
    {
      v33 = *(UnityEngine_Object_o **)(*(_QWORD *)v31 + 32LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      SpotPathEntity = (void *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
        return;
      if ( *(_QWORD *)v31 )
      {
        SpotPathEntity = EventSpotMoveManager__GetSpotPathEntity(
                           (EventSpotMoveManager_o *)SpotPathEntity,
                           *(_DWORD *)(*(_QWORD *)v31 + 16LL),
                           v34);
        if ( SpotPathEntity )
        {
          v36 = (SpotPathEntity_o *)SpotPathEntity;
          v38 = *((_DWORD *)SpotPathEntity + 7);
          v37 = *((_DWORD *)SpotPathEntity + 8);
          if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo, v24);
          v39 = EventSpotMoveManager__CalcSpotPathRate(v38, v37, v36, v35);
          if ( *(_QWORD *)v31 )
          {
            SpotPathEntity = *(void **)(*(_QWORD *)v31 + 32LL);
            if ( SpotPathEntity )
            {
              v40 = v39;
              Custom2dSplineMesh__CreateMesh((Custom2dSplineMesh_o *)SpotPathEntity, 0LL);
              if ( *(_QWORD *)v31 )
              {
                SpotPathEntity = *(void **)(*(_QWORD *)v31 + 32LL);
                if ( SpotPathEntity )
                {
                  Custom2dSplineMesh__SetPathRate((Custom2dSplineMesh_o *)SpotPathEntity, v40, 0LL);
                  if ( *(_QWORD *)v31 )
                  {
                    SpotPathEntity = *(void **)(*(_QWORD *)v31 + 24LL);
                    if ( SpotPathEntity )
                    {
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)SpotPathEntity,
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
                      SpotPathEntity = (void *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
                      if ( ((unsigned __int8)SpotPathEntity & 1) != 0 )
                      {
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
                        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Component_object, 0LL);
                      }
                      if ( *(_QWORD *)v31 )
                      {
                        *(UnityEngine_Vector3_o *)&v43 = GameObjectExtensions__GetPosition(
                                                           (UnityEngine_GameObject_o *)*(_QWORD *)(*(_QWORD *)v31 + 24LL),
                                                           0LL);
                        if ( *(_QWORD *)v31 )
                        {
                          SpotPathEntity = *(void **)(*(_QWORD *)v31 + 32LL);
                          if ( SpotPathEntity )
                          {
                            v46 = v43;
                            v47 = v44;
                            v48 = v45;
                            *(UnityEngine_Vector3_o *)&v49 = Custom2dSplineMesh__GetPointAsWorldFlatten(
                                                               (Custom2dSplineMesh_o *)SpotPathEntity,
                                                               *((float *)SpotPathEntity + 17),
                                                               0LL);
                            *(float *)(v22 + 24) = v49;
                            *(float *)(v22 + 28) = v50;
                            *(_DWORD *)(v22 + 32) = v51;
                            if ( isFocedMove )
                            {
                              if ( *(_QWORD *)v31 )
                              {
                                SpotPathEntity = *(void **)(*(_QWORD *)v31 + 24LL);
LABEL_37:
                                GameObjectExtensions__SetPosition(
                                  (UnityEngine_GameObject_o *)SpotPathEntity,
                                  *(UnityEngine_Vector3_o *)&v49,
                                  0LL);
                                return;
                              }
                            }
                            else if ( *(_QWORD *)v31 )
                            {
                              SpotPathEntity = *(void **)(*(_QWORD *)v31 + 24LL);
                              v52 = sqrtf(
                                      (float)((float)(v46 - v49) * (float)(v46 - v49))
                                    + (float)((float)(v47 - v50) * (float)(v47 - v50)));
                              if ( v52 < 2.0 )
                                goto LABEL_37;
                              if ( SpotPathEntity )
                              {
                                SpotPathEntity = UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)SpotPathEntity,
                                                   (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
                                if ( SpotPathEntity )
                                {
                                  *((float *)SpotPathEntity + 32) = v46;
                                  *((float *)SpotPathEntity + 33) = v47;
                                  *((_DWORD *)SpotPathEntity + 34) = v48;
                                  *((_BYTE *)SpotPathEntity + 152) = 1;
                                  v55 = *(_QWORD *)(v22 + 24);
                                  v56 = (UITweener_o *)SpotPathEntity;
                                  *((_DWORD *)SpotPathEntity + 37) = *(_DWORD *)(v22 + 32);
                                  *(_QWORD *)((char *)SpotPathEntity + 140) = v55;
                                  v57 = EventSpotMoveManager_TypeInfo;
                                  if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo, v24);
                                    v57 = EventSpotMoveManager_TypeInfo;
                                  }
                                  onFinished = (System_Collections_Generic_List_object__o *)v56->fields.onFinished;
                                  MOVE_SPEED = v57->static_fields->MOVE_SPEED;
                                  v56->fields.method = 0;
                                  v56->fields.duration = v52 / MOVE_SPEED;
                                  v60 = (EventDelegate_Callback_o *)sub_1BCAA2C(
                                                                      EventDelegate_Callback_TypeInfo,
                                                                      v24,
                                                                      v53,
                                                                      v54);
                                  EventDelegate_Callback___ctor(
                                    v60,
                                    (Il2CppObject *)v22,
                                    Method_EventSpotMoveManager___c__DisplayClass9_0__UpdateSpotPosition_b__0__,
                                    0LL);
                                  v64 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v61, v62, v63);
                                  EventDelegate___ctor_47348668(v64, v60, 0LL);
                                  if ( onFinished )
                                  {
                                    items = onFinished->fields._items;
                                    v72 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                                    ++onFinished->fields._version;
                                    if ( items )
                                    {
                                      size = onFinished->fields._size;
                                      if ( (unsigned int)size >= items->max_length )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          onFinished,
                                          (Il2CppObject *)v64,
                                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v74 = &items->obj.klass + size;
                                        onFinished->fields._size = size + 1;
                                        v74[4] = (Il2CppClass *)v64;
                                        sub_1BCA784(
                                          (PartyOrganizationUtility_o *)(v74 + 4),
                                          (int64_t)v64,
                                          v65,
                                          v66,
                                          v67,
                                          v68,
                                          v69,
                                          v70);
                                      }
                                      UITweener__PlayForward(v56, 0LL);
                                      if ( *(_QWORD *)v31 )
                                      {
                                        *(_DWORD *)(*(_QWORD *)v31 + 40LL) = 1;
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
    sub_1BCAA3C(SpotPathEntity, v24);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SpotObject, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.SpotPathMesh = 0LL;
  v8 = (EventSpotMoveManager_SpotMoveData_o *)((char *)v8 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = 0;
}


void __fastcall EventSpotMoveManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19F95 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSpotMoveManager___c_TypeInfo, v1, v2);
    byte_4B19F95 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventSpotMoveManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventSpotMoveManager___c_TypeInfo->static_fields->__9 = (struct EventSpotMoveManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventSpotMoveManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, method);
  }
  v4->fields.State = 0;
}