void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method, v2);
    byte_4B163E4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    167,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__CheckTutorial(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callbackAfter,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  EventTutorialMaster_o *Master_object; // x0
  __int64 v18; // x1
  EventTutorialMaster_o *v19; // x26
  const MethodInfo *v20; // [xsp+8h] [xbp-58h]

  if ( (byte_4B163D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind, callbackAfter);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    byte_4B163D0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&openKind);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v19 = Master_object;
  if ( eventId > 0 )
  {
    if ( Master_object )
    {
      EventTutorialMaster__checkTutorial(
        Master_object,
        eventId,
        openKind,
        callbackAfter,
        qId,
        bPhase,
        bWave,
        bTurn,
        0,
        v20);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Master_object, v18);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v19 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_40027116(
    v19,
    (System_Collections_Generic_List_int__o *)Master_object,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__CheckTutorialNotSaveFlag(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callbackAfter,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  int v14; // w25
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v23; // w9
  EventTutorialMaster_o *v24; // x26
  const MethodInfo *v25; // [xsp+8h] [xbp-58h]

  v14 = eventId;
  if ( (byte_4B163D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind, callbackAfter);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v17, v18);
    *(_QWORD *)&eventId = sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v19, v20);
    byte_4B163D1 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_13;
  size = checkedEntityList->fields._size;
  v23 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v23;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&openKind);
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v24 = *(EventTutorialMaster_o **)&eventId;
  if ( v14 > 0 )
  {
    if ( *(_QWORD *)&eventId )
    {
      EventTutorialMaster__checkTutorial(
        *(EventTutorialMaster_o **)&eventId,
        v14,
        openKind,
        callbackAfter,
        qId,
        bPhase,
        bWave,
        bTurn,
        1,
        v25);
      return;
    }
LABEL_13:
    sub_1BCAA3C(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v24 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_40027116(
    v24,
    *(System_Collections_Generic_List_int__o **)&eventId,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    v25);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4B163D2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v1, v2);
    method = (const MethodInfo *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_EventTutorialEntity__Clear__,
                                   v3,
                                   v4);
    byte_4B163D2 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1BCAA3C(method, v1);
  size = checkedEntityList->fields._size;
  v7 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B163CD & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo, args, method);
    byte_4B163CD = 1;
  }
  v5 = sub_1BCAA2C(EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo, args, method, v3);
  EventTutorialMaster__CoCheckTutorialLocal_d__8___ctor((EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)args, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B163D3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo, method, v2);
    byte_4B163D3 = 1;
  }
  v5 = sub_1BCAA2C(EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo, method, v2, v3);
  EventTutorialMaster__CoroutineCheckTutorial_d__14___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__14_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)args, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetAvailableEventTutorialEntitys(
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  if ( (byte_4B163E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds, *(_QWORD *)&qId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B163E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v16);
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKinds,
           qId,
           bPhase,
           bWave,
           bTurn,
           v17);
}


EventTutorialEntity_array *__fastcall EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_object__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4B163D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v5, v6);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_EventTutorialEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__, v11, v12);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass18_0_TypeInfo, v13, v14);
    byte_4B163D7 = 1;
  }
  v15 = sub_1BCAA2C(EventTutorialMaster___c__DisplayClass18_0_TypeInfo, method, v2, v3);
  EventTutorialMaster___c__DisplayClass18_0___ctor((EventTutorialMaster___c__DisplayClass18_0_o *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = args;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)args, v18, v19, v20, v21, v22, v23);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventTutorialEntity__bool__TypeInfo, v25, v26, v27);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v15,
    Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v29,
                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialEntity_o *__fastcall EventTutorialMaster__GetEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B163E5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&flagType);
    byte_4B163E5 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B163E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind, targetIds);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B163E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return EventTutorialMaster__getEventTutorialEntity(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetIds,
           v11);
}


System_Collections_Generic_List_int__o *__fastcall EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 id; // x1
  EventEntity_array *EnableEntityList; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_int__o *v17; // x20
  int max_length; // w8
  unsigned int v19; // w21
  EventEntity_o *v20; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  if ( (byte_4B163DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B163DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BCAA44(Instance, id);
      v20 = EnableEntityList->m_Items[v19];
      if ( !v20 )
        break;
      if ( !v17 )
        break;
      id = (unsigned int)v20->fields.id;
      items = v17->fields._items;
      v22 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v17,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v19 >= max_length )
        return v17;
    }
LABEL_17:
    sub_1BCAA3C(Instance, id);
  }
  return v17;
}


bool __fastcall EventTutorialMaster__IsOpenCondition(
        EventTutorialEntity_o *data,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventTutorialEntity_o *v5; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventIds; // x0

  v5 = data;
  if ( (byte_4B163D8 & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, args, method);
    byte_4B163D8 = 1;
  }
  if ( !v5 )
    goto LABEL_12;
  if ( (v5->fields.eventId & 0x80000000) == 0 )
  {
    if ( args )
    {
      EventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_EventTutorialArgs__get_EventIds(
                                                                        args,
                                                                        0LL);
      if ( !System_Linq_Enumerable__Contains_int_(
              EventIds,
              v5->fields.eventId,
              (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_1BCAA3C(data, args);
  }
  if ( !args )
    goto LABEL_12;
LABEL_9:
  if ( v5->fields.openType == args->fields.openKind )
    return EventTutorialEntity__isOpenCondition(
             v5,
             args->fields.qId,
             args->fields.bPhase,
             args->fields.bWave,
             args->fields.bTurn,
             v3);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__IsTutorialAvailable(
        int32_t eventId,
        int32_t openKind,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7

  if ( (byte_4B163D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind, *(_QWORD *)&qId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B163D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v16);
  }
  return EventTutorialMaster__isTutorialAvailable(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           qId,
           bPhase,
           bWave,
           bTurn,
           v17);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__IsTutorialDataExists(
        int32_t eventId,
        int32_t openKind,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        bool isChkEventId,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+0h] [xbp-60h]

  if ( (byte_4B163D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind, *(_QWORD *)&qId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B163D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v18);
  }
  return EventTutorialMaster__isTutorialDataExists(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           qId,
           bPhase,
           bWave,
           bTurn,
           isChkEventId,
           v20);
}


void __fastcall EventTutorialMaster__OpenTutorialImages(System_Int32_array *imageIds, const MethodInfo *method)
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  CommonUI_o *v16; // x20
  EventTutorialMaster___c_c *v17; // x8
  System_Action_o *_9__21_0; // x21
  Il2CppObject *v19; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B163DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, v8, v9);
    sub_1BCA7E0(&EventTutorialMaster___c_TypeInfo, v10, v11);
    byte_4B163DA = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (CommonUI_o *)Instance;
    v17 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v13);
      v17 = EventTutorialMaster___c_TypeInfo;
    }
    _9__21_0 = v17->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, v13);
        v17 = EventTutorialMaster___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__21_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(_9__21_0, v19, Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = _9__21_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)_9__21_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( !v16 )
LABEL_15:
      sub_1BCAA3C(Instance, v13);
    CommonUI__OpenTutorialImageDialog_30792800(v16, imageIds, -1, 0, _9__21_0, 0LL, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B163D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind, callback);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B163D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_40032684(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B163DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind, callback);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B163DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v18);
  }
  EventTutorialMaster__showTutorialWithoutCheck_40032884(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    qId,
    bPhase,
    bWave,
    bTurn,
    v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__TryGetEntity(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B163E6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B163E6 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4B163DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B163DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__checkTutorial(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callbackAfter,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        bool notSave,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  const MethodInfo *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  MethodInfo *v57; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v59; // x8
  unsigned __int64 v60; // x27
  EventTutorialEntity_o *v61; // x20
  _BOOL8 v62; // x0
  __int64 v63; // x1
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v66; // x3
  int32_t v67; // w8
  const MethodInfo *v68; // x2
  __int64 v69; // x3
  System_String_o *v70; // x4
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int32_t flagType; // w22
  int32_t v74; // w23
  System_Action_o *v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x8
  __int64 v86; // x1
  const MethodInfo *v87; // x2
  __int64 v88; // x3
  System_Action_o *v89; // x22
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B163CB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v22, v23);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v28, v29);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v30, v31);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__, v36, v37);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__, v38, v39);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass6_0_TypeInfo, v40, v41);
    byte_4B163CB = 1;
  }
  memset(&v97, 0, sizeof(v97));
  v42 = sub_1BCAA2C(
          EventTutorialMaster___c__DisplayClass6_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&openKind,
          callbackAfter);
  EventTutorialMaster___c__DisplayClass6_0___ctor((EventTutorialMaster___c__DisplayClass6_0_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_54;
  *(_QWORD *)(v42 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)this, v45, v46, v47, v48, v49, v50);
  *(_QWORD *)(v42 + 32) = callbackAfter;
  *(_DWORD *)(v42 + 24) = eventId;
  *(_DWORD *)(v42 + 28) = openKind;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)callbackAfter, v51, v52, v53, v54, v55, v56);
  *(_DWORD *)(v42 + 40) = qId;
  *(_DWORD *)(v42 + 44) = bPhase;
  *(_DWORD *)(v42 + 48) = bWave;
  *(_DWORD *)(v42 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_54;
  v59 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v59 < 1 )
  {
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v42 + 32), 0LL);
    return;
  }
  v60 = 0LL;
  while ( 1 )
  {
    if ( v60 >= (unsigned int)v59 )
      sub_1BCAA44(checkedEntityList, v44);
    v61 = sortedEntityArray->m_Items[v60];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v96,
        checkedEntityList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v97 = v96;
      while ( 1 )
      {
        v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v97,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v62 )
          break;
        if ( !v61 )
          sub_1BCAA3C(v62, v63);
        if ( !v97.fields._current )
          sub_1BCAA3C(v62, v63);
        if ( v61->fields.eventId == LODWORD(v97.fields._current[1].klass)
          && v61->fields.flagType == HIDWORD(v97.fields._current[1].klass)
          && v61->fields.num == LODWORD(v97.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v97,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v97,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v61 )
      goto LABEL_54;
    flag = v61->fields.flag;
    if ( v61->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v61, v44);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v42 + 40),
                                                                       v66);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v59) = sortedEntityArray->max_length;
    if ( (__int64)++v60 >= (int)v59 )
      goto LABEL_39;
  }
  v67 = v61->fields.eventId;
  if ( (v67 & 0x80000000) == 0 && v67 != *(_DWORD *)(v42 + 24)
    || v61->fields.openType != *(_DWORD *)(v42 + 28)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v61,
                                                                           *(_DWORD *)(v42 + 40),
                                                                           *(_DWORD *)(v42 + 44),
                                                                           *(_DWORD *)(v42 + 48),
                                                                           *(_DWORD *)(v42 + 52),
                                                                           v57),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
    if ( v61->fields.flag == 1 )
    {
      flagType = v61->fields.flagType;
      v74 = *(_DWORD *)(v42 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v44);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_38437060(flagType, v74, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_54;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v61->fields.flagType,
          *(_DWORD *)(v42 + 24),
          0LL);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v75 = *(System_Action_o **)(v42 + 64);
    if ( !v75 )
    {
      v75 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v68, v69);
      System_Action___ctor(
        v75,
        (Il2CppObject *)v42,
        Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v42 + 64) = v75;
      sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 64), (int64_t)v75, v76, v77, v78, v79, v80, v81);
    }
    EventTutorialEntity__OpenTutorial(v61, v75, v68);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v83 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_54:
    sub_1BCAA3C(checkedEntityList, v44);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v61,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v85[4] = (Il2CppClass *)v61;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v85 + 4),
      (int64_t)v61,
      (int64_t)v68,
      v69,
      v70,
      (BattleSetupInfo_o *)v57,
      v71,
      v72);
  }
  v89 = *(System_Action_o **)(v42 + 56);
  if ( !v89 )
  {
    v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
    System_Action___ctor(
      v89,
      (Il2CppObject *)v42,
      Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v42 + 56) = v89;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 56), (int64_t)v89, v90, v91, v92, v93, v94, v95);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v61, v89, v87);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__checkTutorial_40027116(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_int__o *checkEventIds,
        int32_t openKind,
        System_Action_o *callbackAfter,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        bool notSave,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  const MethodInfo *eventId; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o **v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  MethodInfo *v66; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v68; // x8
  unsigned __int64 v69; // x29
  EventTutorialEntity_o *v70; // x20
  _BOOL8 v71; // x0
  __int64 v72; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x2
  __int64 v77; // x3
  System_String_o *v78; // x4
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int32_t v81; // w23
  int32_t flagType; // w24
  System_Action_o *v83; // x22
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x8
  __int64 v94; // x1
  const MethodInfo *v95; // x2
  __int64 v96; // x3
  System_Action_o *v97; // x22
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B163CC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, checkEventIds, *(_QWORD *)&openKind);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v22, v23);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v32, v33);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__, v38, v39);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__, v40, v41);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass7_0_TypeInfo, v42, v43);
    byte_4B163CC = 1;
  }
  memset(&v105, 0, sizeof(v105));
  v44 = sub_1BCAA2C(
          EventTutorialMaster___c__DisplayClass7_0_TypeInfo,
          checkEventIds,
          *(_QWORD *)&openKind,
          callbackAfter);
  EventTutorialMaster___c__DisplayClass7_0___ctor((EventTutorialMaster___c__DisplayClass7_0_o *)v44, 0LL);
  if ( !v44 )
    goto LABEL_55;
  *(_QWORD *)(v44 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 16), (int64_t)this, v47, v48, v49, v50, v51, v52);
  *(_QWORD *)(v44 + 24) = checkEventIds;
  v53 = (System_Collections_Generic_List_object__o **)(v44 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 24), (int64_t)checkEventIds, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v44 + 40) = callbackAfter;
  *(_DWORD *)(v44 + 32) = openKind;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 40), (int64_t)callbackAfter, v60, v61, v62, v63, v64, v65);
  *(_DWORD *)(v44 + 48) = qId;
  *(_DWORD *)(v44 + 52) = bPhase;
  *(_DWORD *)(v44 + 56) = bWave;
  *(_DWORD *)(v44 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v68 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v68 < 1 )
  {
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v44 + 40), 0LL);
    return;
  }
  v69 = 0LL;
  while ( 1 )
  {
    if ( v69 >= (unsigned int)v68 )
      sub_1BCAA44(checkedEntityList, eventId);
    v70 = sortedEntityArray->m_Items[v69];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v104,
        checkedEntityList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v105 = v104;
      while ( 1 )
      {
        v71 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v105,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v71 )
          break;
        if ( !v70 )
          sub_1BCAA3C(v71, v72);
        if ( !v105.fields._current )
          sub_1BCAA3C(v71, v72);
        if ( v70->fields.eventId == LODWORD(v105.fields._current[1].klass)
          && v70->fields.flagType == HIDWORD(v105.fields._current[1].klass)
          && v70->fields.num == LODWORD(v105.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v105,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_36;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v105,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v70 )
      goto LABEL_55;
    flag = v70->fields.flag;
    if ( v70->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v70, eventId);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v44 + 48),
                                                                       v75);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_36:
    LODWORD(v68) = sortedEntityArray->max_length;
    if ( (__int64)++v69 >= (int)v68 )
      goto LABEL_40;
  }
  eventId = (const MethodInfo *)(unsigned int)v70->fields.eventId;
  if ( ((unsigned int)eventId & 0x80000000) == 0 )
  {
    checkedEntityList = *v53;
    if ( !*v53 )
      goto LABEL_55;
    checkedEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Contains(
                                                                       (System_Collections_Generic_List_int__o *)checkedEntityList,
                                                                       (int32_t)eventId,
                                                                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      goto LABEL_59;
  }
  if ( v70->fields.openType != *(_DWORD *)(v44 + 32)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v70,
                                                                           *(_DWORD *)(v44 + 48),
                                                                           *(_DWORD *)(v44 + 52),
                                                                           *(_DWORD *)(v44 + 56),
                                                                           *(_DWORD *)(v44 + 60),
                                                                           v66),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
LABEL_59:
    if ( v70->fields.flag == 1 )
    {
      v81 = v70->fields.eventId;
      flagType = v70->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, eventId);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_38437060(flagType, v81, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, eventId);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v70->fields.flagType,
          v70->fields.eventId,
          0LL);
      }
    }
    goto LABEL_36;
  }
  if ( flag != 2 && !notSave )
  {
    v83 = *(System_Action_o **)(v44 + 72);
    if ( !v83 )
    {
      v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, eventId, v76, v77);
      System_Action___ctor(
        v83,
        (Il2CppObject *)v44,
        Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v44 + 72) = v83;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 72), (int64_t)v83, v84, v85, v86, v87, v88, v89);
    }
    EventTutorialEntity__OpenTutorial(v70, v83, v76);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v91 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_55:
    sub_1BCAA3C(checkedEntityList, eventId);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v70,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v93[4] = (Il2CppClass *)v70;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v93 + 4),
      (int64_t)v70,
      (int64_t)v76,
      v77,
      v78,
      (BattleSetupInfo_o *)v66,
      v79,
      v80);
  }
  v97 = *(System_Action_o **)(v44 + 64);
  if ( !v97 )
  {
    v97 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v94, v95, v96);
    System_Action___ctor(
      v97,
      (Il2CppObject *)v44,
      Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v44 + 64) = v97;
    sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 64), (int64_t)v97, v98, v99, v100, v101, v102, v103);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v70, v97, v95);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__getAvailableEventTutorialEntitys(
        EventTutorialMaster_o *this,
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x10
  EventTutorialMaster_o *v24; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v26; // x8
  System_Collections_Generic_List_object__o *v27; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  int max_length; // w8
  unsigned int v30; // w19
  EventTutorialEntity_o *v31; // x27
  int32_t v32; // w8
  const MethodInfo *v33; // x5
  unsigned int v34; // w28
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v36; // x9

  if ( (byte_4B163E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId, openKinds);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v11, v12);
    sub_1BCA7E0(&int___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v17, v18);
    this = (EventTutorialMaster_o *)sub_1BCA7E0(
                                      &System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                      v19,
                                      v20);
    byte_4B163E3 = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1BCA888(int___TypeInfo, openKinds->max_length);
  v23 = *(_QWORD *)&openKinds->max_length;
  v24 = this;
  if ( (int)v23 >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v26 = 0LL;
      while ( v26 < MasterName_k__BackingField_low )
      {
        *((_DWORD *)&this->fields.list + v26++) = 0;
        if ( (__int64)v26 >= (int)v23 )
          goto LABEL_9;
      }
LABEL_27:
      sub_1BCAA44(this, *(_QWORD *)&eventId);
    }
LABEL_28:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        goto LABEL_27;
      v31 = sortedEntityArray->m_Items[v30];
      if ( !v31 )
        goto LABEL_28;
      v32 = v31->fields.eventId;
      if ( (v32 & 0x80000000) != 0 || v32 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v31->fields.openType,
                                          (const MethodInfo_300EA28 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v34 = (unsigned int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v31, qId, bPhase, bWave, bTurn, v33);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_28;
            if ( v34 >= LODWORD(v24->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v27 )
              goto LABEL_28;
            System_Collections_Generic_List_object___Insert(
              v27,
              *((_DWORD *)&v24->fields.list + v34),
              (Il2CppObject *)v31,
              (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v24->fields._MasterName_k__BackingField;
            if ( (int)v34 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v30 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v27;
    }
    v36 = v34;
    while ( (unsigned int)v36 < (unsigned int)MasterName_k__BackingField )
    {
      ++*((_DWORD *)&v24->fields.list + v36++);
      if ( v36 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v27;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__getEventTutorialEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
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
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x22
  struct System_Object_array *IsNullOrEmpty; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v34; // w27
  Il2CppObject *v35; // x23
  int64_t v36; // x24
  int v37; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x8
  __int64 v43; // x28
  unsigned __int64 v44; // x29
  __int64 v45; // x8
  _QWORD *v46; // x8

  if ( (byte_4B163E1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_16133/*"[]"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v18, v19);
    byte_4B163E1 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16191/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v35 = 0LL;
    if ( !v23 )
      goto LABEL_42;
  }
  else
  {
    v34 = 0;
    v35 = 0LL;
    do
    {
      if ( v34 >= (unsigned int)max_length )
LABEL_43:
        sub_1BCAA44(IsNullOrEmpty, v25);
      v36 = (int64_t)sortedEntityArray->m_Items[v34];
      if ( !v36 )
        goto LABEL_42;
      v37 = *(_DWORD *)(v36 + 16);
      if ( ((v37 & 0x80000000) != 0 || v37 == eventId) && *(_DWORD *)(v36 + 32) == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v23 )
            goto LABEL_42;
          items = v23->fields._items;
          v39 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)v36,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v36;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v36, v26, v27, v28, v29, v30, v31);
          }
        }
        else
        {
          v42 = *(_QWORD *)(v36 + 40);
          if ( !v42 )
            goto LABEL_42;
          v43 = *(_QWORD *)(v42 + 24);
          if ( !v35 )
          {
            if ( !(_DWORD)v43
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  *(System_String_o **)(v42 + 32),
                                                                  (System_String_o *)StringLiteral_16133/*"[]"*/,
                                                                  0LL),
                  v35 = 0LL,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v35 = (Il2CppObject *)v36;
            }
          }
          if ( (int)v43 >= 1 )
          {
            v44 = 0LL;
            while ( 1 )
            {
              v45 = *(_QWORD *)(v36 + 40);
              if ( !v45 )
                break;
              if ( v44 >= *(unsigned int *)(v45 + 24) )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                              *(System_String_o **)(v45 + 8 * v44 + 32),
                                                              targetIds,
                                                              0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v43 == ++v44 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1BCAA3C(IsNullOrEmpty, v25);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v34;
    }
    while ( v34 < max_length );
    if ( !v23 )
      goto LABEL_42;
  }
  if ( v35 && !v23->fields._size )
  {
    IsNullOrEmpty = v23->fields._items;
    v46 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v23->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( IsNullOrEmpty->max_length )
    {
      v23->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v35;
      sub_1BCA784((PartyOrganizationUtility_o *)IsNullOrEmpty->m_Items, (int64_t)v35, v26, v27, v28, v29, v30, v31);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        v35,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v23;
}


bool __fastcall EventTutorialMaster__isTargetIdExistFromArray(
        EventTutorialMaster_o *this,
        System_Int32_array_array *targets,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  char v5; // w9
  int v6; // w10
  System_Int32_array *v7; // x11
  __int64 v8; // x12

  if ( targets && (v4 = *(_QWORD *)&targets->max_length) != 0 && (int)v4 >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = targets->m_Items[v6];
      if ( !v7 )
        sub_1BCAA3C(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1BCAA44(this, targets);
        v5 |= v7->m_Items[1] == targetId;
      }
      ++v6;
    }
    while ( (_DWORD)v4 != v6 );
  }
  else
  {
    v5 = 0;
  }
  return v5 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__isTutorialAvailable(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w26
  int32_t v21; // w27
  bool v22; // w19
  Il2CppObject *Item; // x0
  const MethodInfo *v24; // x5
  __int64 methodPtr_low; // x10
  int klass; // w8

  if ( (byte_4B163CF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&openKind);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14, v15);
    sub_1BCA7E0(&EventTutorialEntity_TypeInfo, v16, v17);
    byte_4B163CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    v22 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v21,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(EventTutorialEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTutorialEntity_TypeInfo
        || (klass = (int)Item[1].klass, (klass & 0x80000000) == 0) && klass != eventId
        || LODWORD(Item[2].klass) != openKind
        || !EventTutorialEntity__isOpenCondition((EventTutorialEntity_o *)Item, qId, bPhase, bWave, bTurn, v24) )
      {
        v22 = ++v21 < v20;
        if ( v20 != v21 )
          continue;
      }
      return v22;
    }
LABEL_18:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__isTutorialDataExists(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        bool isChkEventId,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v23; // w27
  int32_t v24; // w28
  bool v25; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v27; // x5
  __int64 methodPtr_low; // x10
  int klass; // w8
  int32_t v31; // [xsp+8h] [xbp-68h]
  int32_t v32; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B163CE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&openKind);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v17, v18);
    sub_1BCA7E0(&EventTutorialEntity_TypeInfo, v19, v20);
    byte_4B163CE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = bWave;
    v32 = bTurn;
    v23 = Count;
    v24 = 0;
    v25 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v24,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(EventTutorialEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTutorialEntity_TypeInfo
        || (klass = (int)Item[1].klass, (klass & 0x80000000) != 0) && isChkEventId
        || (klass & 0x80000000) == 0 && klass != eventId
        || LODWORD(Item[2].klass) != openKind
        || !EventTutorialEntity__isEnableCondition((EventTutorialEntity_o *)Item, qId, bPhase, v31, v32, v27) )
      {
        v25 = ++v24 < v23;
        if ( v23 != v24 )
          continue;
      }
      return v25;
    }
LABEL_20:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventTutorialMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v31; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  EventTutorialMaster___c_c *v43; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v46; // x21
  struct EventTutorialMaster___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Object_array *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_List_object__o *v65; // x19
  struct EventTutorialMaster_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4B163CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v8, v9);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_EventTutorialEntity__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__preProcess_b__4_0__, v18, v19);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__preProcess_b__4_1__, v20, v21);
    sub_1BCA7E0(&EventTutorialMaster___c_TypeInfo, v22, v23);
    byte_4B163CA = 1;
  }
  v24 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v28 = EventTutorialMaster___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v25);
    v28 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v28->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v25);
      v28 = EventTutorialMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventTutorialEntity__int__TypeInfo, v25, v26, v27);
    System_Func_object__int____ctor(_9__4_0, v31, Method_EventTutorialMaster___c__preProcess_b__4_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__OrderBy_object__int_(
          v29,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v43 = EventTutorialMaster___c_TypeInfo;
  v44 = v39;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v40);
    v43 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v43->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v40);
      v43 = EventTutorialMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventTutorialEntity__int__TypeInfo, v40, v41, v42);
    System_Func_object__int____ctor(_9__4_1, v46, Method_EventTutorialMaster___c__preProcess_b__4_1__, 0LL);
    v47 = EventTutorialMaster___c_TypeInfo->static_fields;
    v47->__9__4_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->__9__4_1, (int64_t)_9__4_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v55 = System_Linq_Enumerable__ToArray_object_(
          v54,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v55;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventTutorialMaster_TypeInfo->static_fields,
    (int64_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v65 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v62,
                                                       v63,
                                                       v64);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v66 = EventTutorialMaster_TypeInfo->static_fields;
  v66->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v65;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->checkedEntityList, (int64_t)v65, v67, v68, v69, v70, v71, v72);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x23
  __int64 v16; // x0
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v26; // w25
  int v27; // w8
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B163D9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v13, v14);
    byte_4B163D9 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&openKind,
                                                       callback);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_18;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1BCAA44(v16, v17);
      v17 = (int64_t)sortedEntityArray->m_Items[v26];
      if ( !v17 )
        break;
      v27 = *(_DWORD *)(v17 + 16);
      if ( ((v27 & 0x80000000) != 0 || v27 == eventId) && *(_DWORD *)(v17 + 32) == openKind )
      {
        if ( !v15 )
          break;
        items = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v17,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v17;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v17, v18, v19, v20, v21, v22, v23);
        }
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_17;
    }
LABEL_18:
    sub_1BCAA3C(v16, v17);
  }
LABEL_17:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v15,
    0,
    callback,
    (const MethodInfo *)v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_40032884(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callbackAfter,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x19
  _BOOL8 isEnableCondition; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v41; // w23
  EventTutorialEntity_o *v42; // x21
  int32_t v43; // w8
  const MethodInfo *v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B163DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__, v19, v20);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass23_0_TypeInfo, v21, v22);
    byte_4B163DC = 1;
  }
  v23 = sub_1BCAA2C(
          EventTutorialMaster___c__DisplayClass23_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&openKind,
          callbackAfter);
  EventTutorialMaster___c__DisplayClass23_0___ctor((EventTutorialMaster___c__DisplayClass23_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_18;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 32) = callbackAfter;
  *(_DWORD *)(v23 + 24) = eventId;
  *(_DWORD *)(v23 + 28) = openKind;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)callbackAfter, v32, v33, v34, v35, v36, v37);
  *(_DWORD *)(v23 + 40) = qId;
  *(_DWORD *)(v23 + 44) = bPhase;
  *(_DWORD *)(v23 + 48) = bWave;
  *(_DWORD *)(v23 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1BCAA3C(isEnableCondition, v25);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v23 + 32), 0LL);
  }
  else
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= max_length )
        sub_1BCAA44(isEnableCondition, v25);
      v42 = sortedEntityArray->m_Items[v41];
      if ( !v42 )
        goto LABEL_18;
      v43 = v42->fields.eventId;
      if ( ((v43 & 0x80000000) != 0 || v43 == *(_DWORD *)(v23 + 24)) && v42->fields.openType == *(_DWORD *)(v23 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v42,
                              *(_DWORD *)(v23 + 40),
                              *(_DWORD *)(v23 + 44),
                              *(_DWORD *)(v23 + 48),
                              *(_DWORD *)(v23 + 52),
                              v38);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_14;
    }
    v46 = *(System_Action_o **)(v23 + 56);
    if ( !v46 )
    {
      v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v44, v45);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v23,
        Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v23 + 56) = v46;
      sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 56), (int64_t)v46, v47, v48, v49, v50, v51, v52);
    }
    EventTutorialEntity__OpenTutorial(v42, v46, v44);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__tutorialChainWithoutCheck(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t v38; // w1
  Il2CppObject *Item; // x19
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x20
  const MethodInfo *v44; // x2

  if ( (byte_4B163DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, tutoList, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__, v13, v14);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo, v15, v16);
    byte_4B163DE = 1;
  }
  v17 = sub_1BCAA2C(EventTutorialMaster___c__DisplayClass25_0_TypeInfo, tutoList, *(_QWORD *)&index, callback);
  EventTutorialMaster___c__DisplayClass25_0___ctor((EventTutorialMaster___c__DisplayClass25_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_9;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = tutoList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)tutoList, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 40) = callback;
  *(_DWORD *)(v17 + 32) = index;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)callback, v32, v33, v34, v35, v36, v37);
  v18 = *(System_Collections_Generic_List_object__o **)(v17 + 24);
  if ( !v18 )
    goto LABEL_9;
  v38 = *(_DWORD *)(v17 + 32);
  if ( v38 < v18->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v18,
             v38,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v17,
      Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v43, v44);
      return;
    }
LABEL_9:
    sub_1BCAA3C(v18, v19);
  }
  ActionExtensions__Call(*(System_Action_o **)(v17 + 40), 0LL);
}


void __fastcall EventTutorialMaster_EventTutorialArgs___ctor(
        EventTutorialMaster_EventTutorialArgs_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall EventTutorialMaster_EventTutorialArgs__get_EventIds(
        EventTutorialMaster_EventTutorialArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B163E7 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    byte_4B163E7 = 1;
  }
  eventIds = this->fields.eventIds;
  if ( !eventIds )
  {
    if ( this->fields.eventId < 1 )
    {
      OpenEventIds = EventTutorialMaster__GetOpenEventIds(0LL);
      if ( OpenEventIds )
      {
        eventIds = System_Collections_Generic_List_int___ToArray(
                     OpenEventIds,
                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.eventIds,
          (int64_t)eventIds,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (struct System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1BCAA44(OpenEventIds, v8);
        LODWORD(OpenEventIds->fields._syncRoot) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1BCAA3C(OpenEventIds, v8);
  }
  return eventIds;
}


void __fastcall EventTutorialMaster__CoCheckTutorialLocal_d__8___ctor(
        EventTutorialMaster__CoCheckTutorialLocal_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventTutorialMaster__CoCheckTutorialLocal_d__8__MoveNext(
        EventTutorialMaster__CoCheckTutorialLocal_d__8_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventTutorialMaster__CoCheckTutorialLocal_d__8_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t _1__state; // w8
  Il2CppObject *v32; // x21
  struct EventTutorialMaster___c__DisplayClass8_0_o **p__8__1; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t args; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  int64_t sortedEntityArray; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int v61; // w8
  int64_t v62; // x1
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialMaster___c__DisplayClass8_0_o *v64; // x8
  int64_t v65; // x2
  __int64 v66; // x3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct EventTutorialMaster___c__DisplayClass8_0_o *v78; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v79; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v80; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v81; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v82; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v83; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass8_1_o *_8__2; // x21
  EventTutorialEntity_o *v86; // x20
  System_Action_o *v87; // x22
  struct EventTutorialMaster___c__DisplayClass8_1_o *v88; // x20
  struct EventTutorialEntity_o *data_5__4; // x8
  struct EventTutorialEntity_o **v90; // x20
  int32_t eventId; // w21
  int32_t flagType; // w22
  __int64 v93; // x1
  struct EventTutorialEntity_array *_7__wrap1; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass8_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v97; // x8
  bool result; // w0
  System_Func_bool__o *v99; // x21
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  UnityEngine_WaitWhile_o *v103; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Func_bool__o *_9__0; // x21
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  UnityEngine_WaitWhile_o *v118; // x20
  PartyOrganizationUtility_o *v119; // x19
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7

  v8 = this;
  if ( (byte_4B163EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__, v19, v20);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass8_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__, v23, v24);
    sub_1BCA7E0(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__, v25, v26);
    sub_1BCA7E0(&EventTutorialMaster___c__DisplayClass8_1_TypeInfo, v27, v28);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v29, v30);
    byte_4B163EA = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_27;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v32 = (Il2CppObject *)sub_1BCAA2C(EventTutorialMaster___c__DisplayClass8_0_TypeInfo, method, v2, v3);
  System_Object___ctor(v32, 0LL);
  v8->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass8_0_o *)v32;
  p__8__1 = &v8->fields.__8__1;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v8->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  args = (int64_t)v8->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, args, v40, v41, v42, v43, v44, v45);
  if ( !*p__8__1 )
    goto LABEL_53;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = (int64_t)static_fields->sortedEntityArray;
  v8->fields.__7__wrap1 = static_fields->sortedEntityArray;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, sortedEntityArray, v47, v48, v49, v50, v51, v52);
  v61 = 0;
  for ( v8->fields.__7__wrap2 = 0; ; v8->fields.__7__wrap2 = v61 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)&v8->fields.__7__wrap1;
    _7__wrap1 = v8->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_53;
    max_length = _7__wrap1->max_length;
    if ( v61 >= max_length )
    {
      v8->fields.__7__wrap1 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v55, v56, v57, v58, v59, v60);
      _8__1 = v8->fields.__8__1;
      if ( _8__1 )
      {
        v97 = _8__1->fields.args;
        if ( v97 )
        {
          ActionExtensions__Call(v97->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_53:
      sub_1BCAA3C(this, method);
    }
    if ( v61 >= (unsigned int)max_length )
      sub_1BCAA44(this, method);
    v62 = (int64_t)_7__wrap1->m_Items[v61];
    v8->fields._data_5__4 = (struct EventTutorialEntity_o *)v62;
    p_data_5__4 = &v8->fields._data_5__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._data_5__4, v62, v55, v56, v57, v58, v59, v60);
    v64 = v8->fields.__8__1;
    if ( !v64 )
      goto LABEL_53;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialMaster__IsOpenCondition(
                                                                 *p_data_5__4,
                                                                 v64->fields.args,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v90 = &v8->fields._data_5__4;
    data_5__4 = v8->fields._data_5__4;
    if ( !data_5__4 )
      goto LABEL_53;
    if ( data_5__4->fields.flag == 1 )
    {
      eventId = data_5__4->fields.eventId;
      flagType = data_5__4->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      if ( !TutorialFlag__Get_38437060(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)NetworkManager__getRequest_object_(
                                                                     0LL,
                                                                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v90 || !this )
          goto LABEL_53;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*v90)->fields.flagType,
          (*v90)->fields.eventId,
          0LL);
      }
    }
    v8->fields._data_5__4 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._data_5__4, 0LL, v65, v66, v67, v68, v69, v70);
    v61 = v8->fields.__7__wrap2 + 1;
  }
  v71 = (Il2CppObject *)sub_1BCAA2C(EventTutorialMaster___c__DisplayClass8_1_TypeInfo, method, v65, v66);
  System_Object___ctor(v71, 0LL);
  v8->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass8_1_o *)v71;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v71, v72, v73, v74, v75, v76, v77);
  v78 = v8->fields.__8__1;
  if ( !v78 )
    goto LABEL_53;
  v79 = v78->fields.args;
  if ( !v79 )
    goto LABEL_53;
  if ( !v79->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasBeforeAction(
                                                               (EventTutorialEntity_o *)this,
                                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v80 = v8->fields.__8__1;
  if ( !v80 )
    goto LABEL_53;
  v81 = v80->fields.args;
  if ( !v81 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v81->fields.adapter;
  if ( !this )
    goto LABEL_53;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v8->fields._data_5__4, 0LL);
  v82 = v8->fields.__8__1;
  if ( !v82 )
    goto LABEL_53;
  v83 = v82->fields.args;
  if ( !v83 )
    goto LABEL_53;
  adapter = v83->fields.adapter;
  if ( !adapter )
    goto LABEL_53;
  if ( !adapter->fields._IsPerformanceBusy_k__BackingField )
  {
LABEL_27:
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_53;
    _8__2->fields.isBusy = 1;
    v86 = v8->fields._data_5__4;
    v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v87,
      (Il2CppObject *)_8__2,
      Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__,
      0LL);
    if ( !v86 )
      goto LABEL_53;
    EventTutorialEntity__OpenTutorial(v86, v87, 0LL);
    v88 = v8->fields.__8__2;
    if ( !v88 )
      goto LABEL_53;
    if ( v88->fields.isBusy )
    {
      v99 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
      System_Func_bool____ctor(
        v99,
        (Il2CppObject *)v88,
        Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__,
        0LL);
      v103 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v100, v101, v102);
      UnityEngine_WaitWhile___ctor(v103, v99, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v103;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v103, v105, v106, v107, v108, v109, v110);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return 1;
    }
LABEL_31:
    v8->fields.__8__2 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  _9__0 = v82->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v82,
      Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__,
      0LL);
    v82->fields.__9__0 = _9__0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v82->fields.__9__0, (int64_t)_9__0, v112, v113, v114, v115, v116, v117);
  }
  v118 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, method, v2, v3);
  UnityEngine_WaitWhile___ctor(v118, _9__0, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v118;
  v119 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v119, (int64_t)v118, v120, v121, v122, v123, v124, v125);
  result = 1;
  *(_DWORD *)&v119[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall EventTutorialMaster__CoCheckTutorialLocal_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventTutorialMaster__CoCheckTutorialLocal_d__8__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoCheckTutorialLocal_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__8_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventTutorialMaster__CoCheckTutorialLocal_d__8__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventTutorialMaster__CoCheckTutorialLocal_d__8__System_IDisposable_Dispose(
        EventTutorialMaster__CoCheckTutorialLocal_d__8_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__14___ctor(
        EventTutorialMaster__CoroutineCheckTutorial_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__14__MoveNext(
        EventTutorialMaster__CoroutineCheckTutorial_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int32_t v17; // w8

  if ( (byte_4B163EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTutorialMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B163EB = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v17 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1BCAA3C(0LL, v9);
    v10 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                            (EventTutorialMaster_o *)Master_object,
                            this->fields.args,
                            0LL);
    this->fields.__2__current = v10;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    v17 = 1;
    result = 1;
  }
  this->fields.__1__state = v17;
  return result;
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventTutorialMaster__CoroutineCheckTutorial_d__14__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoroutineCheckTutorial_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__14_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__14__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__14__System_IDisposable_Dispose(
        EventTutorialMaster__CoroutineCheckTutorial_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTutorialMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B163E8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialMaster___c_TypeInfo, v1, v2);
    byte_4B163E8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTutorialMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventTutorialMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__21_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B163E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B163E9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.eventId;
}


void __fastcall EventTutorialMaster___c__DisplayClass18_0___ctor(
        EventTutorialMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass18_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass18_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass23_0___ctor(
        EventTutorialMaster___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass23_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialMaster__checkTutorial(
    _4__this,
    this->fields.eventId,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    0,
    0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass25_0___ctor(
        EventTutorialMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass25_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass6_0___ctor(
        EventTutorialMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass6_0___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialMaster__checkTutorial(
    _4__this,
    this->fields.eventId,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    1,
    0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass6_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialMaster__checkTutorial(
    _4__this,
    this->fields.eventId,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    0,
    0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass7_0___ctor(
        EventTutorialMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass7_0___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialMaster__checkTutorial_40027116(
    _4__this,
    this->fields.checkEventIds,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    1,
    0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass7_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialMaster__checkTutorial_40027116(
    _4__this,
    this->fields.checkEventIds,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    0,
    0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass8_0___ctor(
        EventTutorialMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass8_0___CoCheckTutorialLocal_b__0(
        EventTutorialMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8

  args = this->fields.args;
  if ( !args || (adapter = args->fields.adapter) == 0LL )
    sub_1BCAA3C(this, method);
  return adapter->fields._IsPerformanceBusy_k__BackingField;
}


void __fastcall EventTutorialMaster___c__DisplayClass8_1___ctor(
        EventTutorialMaster___c__DisplayClass8_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass8_1___CoCheckTutorialLocal_b__1(
        EventTutorialMaster___c__DisplayClass8_1_o *this,
        const MethodInfo *method)
{
  this->fields.isBusy = 0;
}


bool __fastcall EventTutorialMaster___c__DisplayClass8_1___CoCheckTutorialLocal_b__2(
        EventTutorialMaster___c__DisplayClass8_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}